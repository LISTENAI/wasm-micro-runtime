/*
 * Copyright (C) 2022 LISTENAI
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "platform_api_vmcore.h"

#include "tinyprintf.h"

int
os_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    tfp_vprintf(format, ap);
    va_end(ap);
    return 0;
}

int
os_vprintf(const char *format, va_list ap)
{
    tfp_vprintf(format, ap);
    return 0;
}
