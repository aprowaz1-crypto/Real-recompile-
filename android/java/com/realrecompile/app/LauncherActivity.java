package com.realrecompile.app;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.os.Environment;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.TextView;
import android.widget.Toast;

import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;

public class LauncherActivity extends Activity {

    private static final int PICK_XEX = 1001;
    private static final int PICK_DLC = 1002;

    private TextView tvXexStatus;
    private TextView tvDlcStatus;
    private TextView btnPlay;
    private TextView btnAddXex;
    private TextView btnAddDlc;

    private File gameDir;
    private boolean xexReady = false;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        // Fullscreen immersive
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(
            WindowManager.LayoutParams.FLAG_FULLSCREEN |
            WindowManager.LayoutParams.FLAG_LAYOUT_NO_LIMITS,
            WindowManager.LayoutParams.FLAG_FULLSCREEN |
            WindowManager.LayoutParams.FLAG_LAYOUT_NO_LIMITS);

        setContentView(R.layout.activity_launcher);

        // Game data directory
        gameDir = new File(getFilesDir(), "game");
        if (!gameDir.exists()) gameDir.mkdirs();

        // Find views
        tvXexStatus = findViewById(R.id.tv_xex_status);
        tvDlcStatus = findViewById(R.id.tv_dlc_status);
        btnPlay = findViewById(R.id.btn_play);
        btnAddXex = findViewById(R.id.btn_add_xex);
        btnAddDlc = findViewById(R.id.btn_add_dlc);

        // Check if XEX already exists (from previous session)
        checkFiles();

        // SELECT DEFAULT.XEX button
        btnAddXex.setOnClickListener(v -> {
            Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
            intent.setType("*/*");
            intent.addCategory(Intent.CATEGORY_OPENABLE);
            intent.putExtra(Intent.EXTRA_TITLE, "Select default.xex");
            startActivityForResult(intent, PICK_XEX);
        });

        // ADD DLC button
        btnAddDlc.setOnClickListener(v -> {
            Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
            intent.setType("*/*");
            intent.addCategory(Intent.CATEGORY_OPENABLE);
            intent.putExtra(Intent.EXTRA_ALLOW_MULTIPLE, true);
            intent.putExtra(Intent.EXTRA_TITLE, "Select DLC files");
            startActivityForResult(intent, PICK_DLC);
        });

        // FIGHT button
        btnPlay.setOnClickListener(v -> {
            if (!xexReady) {
                Toast.makeText(this, "Add default.xex first!", Toast.LENGTH_SHORT).show();
                return;
            }
            launchGame();
        });

        // Apply immersive mode
        applyImmersive();
    }

    private void checkFiles() {
        File xex = new File(gameDir, "default.xex");
        File dlcDir = new File(gameDir, "dlc");

        if (xex.exists() && xex.length() > 0) {
            xexReady = true;
            tvXexStatus.setText("✓ default.xex loaded (" + formatSize(xex.length()) + ")");
            tvXexStatus.setTextColor(0xFF44BB66);
            btnAddXex.setText("REPLACE DEFAULT.XEX");
            enablePlay(true);
        } else {
            xexReady = false;
            tvXexStatus.setText("⚠ Game file required to play");
            tvXexStatus.setTextColor(0xFFFF8844);
            enablePlay(false);
        }

        // Check DLC
        if (dlcDir.exists()) {
            File[] dlcFiles = dlcDir.listFiles();
            if (dlcFiles != null && dlcFiles.length > 0) {
                tvDlcStatus.setVisibility(View.VISIBLE);
                tvDlcStatus.setText("✓ " + dlcFiles.length + " DLC file(s) loaded");
            }
        }
    }

    private void enablePlay(boolean enabled) {
        btnPlay.setEnabled(enabled);
        if (enabled) {
            btnPlay.setBackgroundResource(R.drawable.btn_play);
            btnPlay.setAlpha(1.0f);
        } else {
            btnPlay.setBackgroundResource(R.drawable.btn_play_disabled);
            btnPlay.setAlpha(0.5f);
        }
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (resultCode != RESULT_OK || data == null) return;

        if (requestCode == PICK_XEX) {
            Uri uri = data.getData();
            if (uri != null) {
                copyFile(uri, new File(gameDir, "default.xex"), "default.xex");
            }
        } else if (requestCode == PICK_DLC) {
            File dlcDir = new File(gameDir, "dlc");
            if (!dlcDir.exists()) dlcDir.mkdirs();

            // Handle multiple files
            if (data.getClipData() != null) {
                for (int i = 0; i < data.getClipData().getItemCount(); i++) {
                    Uri uri = data.getClipData().getItemAt(i).getUri();
                    String name = getFileName(uri);
                    copyFile(uri, new File(dlcDir, name), name);
                }
            } else if (data.getData() != null) {
                Uri uri = data.getData();
                String name = getFileName(uri);
                copyFile(uri, new File(dlcDir, name), name);
            }
        }

        checkFiles();
    }

    private void copyFile(Uri src, File dest, String displayName) {
        try {
            InputStream is = getContentResolver().openInputStream(src);
            if (is == null) return;

            OutputStream os = new FileOutputStream(dest);
            byte[] buf = new byte[8192];
            int len;
            while ((len = is.read(buf)) > 0) {
                os.write(buf, 0, len);
            }
            os.close();
            is.close();

            Toast.makeText(this, displayName + " added!", Toast.LENGTH_SHORT).show();
        } catch (Exception e) {
            Toast.makeText(this, "Error: " + e.getMessage(), Toast.LENGTH_LONG).show();
        }
    }

    private String getFileName(Uri uri) {
        String path = uri.getLastPathSegment();
        if (path != null && path.contains("/")) {
            path = path.substring(path.lastIndexOf("/") + 1);
        }
        return path != null ? path : "unknown_file";
    }

    private String formatSize(long bytes) {
        if (bytes < 1024) return bytes + " B";
        if (bytes < 1024 * 1024) return (bytes / 1024) + " KB";
        return String.format("%.1f MB", bytes / (1024.0 * 1024.0));
    }

    private void launchGame() {
        // Pass game directory to native activity
        Intent intent = new Intent(this, android.app.NativeActivity.class);
        intent.putExtra("game_dir", gameDir.getAbsolutePath());
        startActivity(intent);
    }

    private void applyImmersive() {
        getWindow().getDecorView().setSystemUiVisibility(
            View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY |
            View.SYSTEM_UI_FLAG_FULLSCREEN |
            View.SYSTEM_UI_FLAG_HIDE_NAVIGATION |
            View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN |
            View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION |
            View.SYSTEM_UI_FLAG_LAYOUT_STABLE);
    }

    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) applyImmersive();
    }
}
