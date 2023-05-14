/*
 * Copyright (C) 2022 LISTENAI
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "platform_api_vmcore.h"

#include "venus_ap.h"

int
os_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);
    vprintf(format, ap);
    va_end(ap);
    return 0;
}

int
os_vprintf(const char *format, va_list ap)
{
    vprintf(format, ap);
    return 0;
}
