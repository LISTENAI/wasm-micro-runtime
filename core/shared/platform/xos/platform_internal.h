/*
 * Copyright (C) 2022 LISTENAI
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#ifndef _PLATFORM_INTERNAL_H
#define _PLATFORM_INTERNAL_H

#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#include "xos.h"
#include "xos_common.h"
#include "xos_thread.h"
#include "xos_mutex.h"
#include "xos_cond.h"
#include "xos_semaphore.h"
#include "xos_timer.h"

#ifndef BH_PLATFORM_XOS
#define BH_PLATFORM_XOS
#endif

typedef XosThread korp_thread;
typedef korp_thread *korp_tid;
typedef XosMutex korp_mutex;
typedef XosCond korp_cond;
typedef XosSem korp_sem;

void
abort(void);

typedef void (*dcache_flush_func_t)(void);

void
set_dcache_flush_func(dcache_flush_func_t func);

#endif
