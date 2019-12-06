#ifndef __COMMON_H__
#define __COMMON_H__

/* Uncomment these macros to enable corresponding functionality. */
#define HAS_CTE
//#define HAS_VME

#include <am.h>
#include <klib.h>
#include "debug.h"
size_t ramdisk_read(void *buf, size_t offset, size_t len);
typedef char bool;
#define true 1
#define false 0

#endif
