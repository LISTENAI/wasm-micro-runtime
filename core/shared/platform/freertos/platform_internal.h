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

#include <stdarg.h>
#include <errno.h>

// #include <math.h>
// #include <unistd.h>
// #include <pthread.h>
// #include <arpa/inet.h>
// #include <sys/socket.h>
// #include <sys/uio.h>
// #include <dirent.h>



#include <FreeRTOS.h>
#include <task.h>
#include <semphr.h>
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
struct os_thread_wait_node;
typedef struct os_thread_wait_node *os_thread_wait_list;
typedef struct korp_cond {
    SemaphoreHandle_t wait_list_lock;
    os_thread_wait_list thread_wait_list;
} korp_cond;
typedef unsigned int korp_sem;

/* Default thread priority */
#define BH_THREAD_DEFAULT_PRIORITY 5


/* math functions which are not provided by os */
// double atan(double x);
// double atan2(double y, double x);
// double sqrt(double x);
double floor(double x);
double ceil(double x);
double fmin(double x, double y);
double fmax(double x, double y);
double rint(double x);
// double fabs(double x);
double trunc(double x);
// float sqrtf(float x);
float floorf(float x);
float ceilf(float x);
float fminf(float x, float y);
float fmaxf(float x, float y);
float rintf(float x);
// float fabsf(float x);
float truncf(float x);
// int signbit(double x);
// int isnan(double x);
// double pow(double x, double y);
// double scalbn(double x, int n);


void
abort(void);

typedef void (*dcache_flush_func_t)(void);

void
set_dcache_flush_func(dcache_flush_func_t func);

#endif
