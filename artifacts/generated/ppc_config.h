#pragma once
#ifndef PPC_CONFIG_H_INCLUDED
#define PPC_CONFIG_H_INCLUDED


#define PPC_IMAGE_BASE 0x82000000ull
#define PPC_IMAGE_SIZE 0x530000ull
#define PPC_CODE_BASE 0x82080000ull
#define PPC_CODE_SIZE 0x39EC7Cull

#ifdef PPC_INCLUDE_DETAIL
#include "ppc_detail.h"
#endif

#endif
