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
#include <stdio.h>
#include <ctype.h>

#include <FreeRTOS.h>
#include <task.h>
// #include "lisa_timer.h"

#ifndef BH_PLATFORM_FREERTOS
#define BH_PLATFORM_FREERTOS
#endif

typedef TaskHandle_t korp_thread;
typedef korp_thread korp_tid;
typedef struct {
    bool is_recursive;
    SemaphoreHandle_t sem;
} korp_mutex;
typedef struct korp_cond {
    SemaphoreHandle_t wait_list_lock;
    os_thread_wait_list thread_wait_list;
} korp_cond;
typedef unsigned int korp_sem;

#endif
