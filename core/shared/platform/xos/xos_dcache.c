/*
 * Copyright (C) 2022 LISTENAI
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "platform_api_vmcore.h"

static dcache_flush_func_t dcache_flush_func = NULL;

void
os_dcache_flush(void)
{
    if (dcache_flush_func) {
        dcache_flush_func();
    }
}

void
set_dcache_flush_func(dcache_flush_func_t func)
{
    dcache_flush_func = func;
}
