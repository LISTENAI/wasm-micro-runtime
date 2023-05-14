/*
 * Copyright (C) 2022 LISTENAI
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "platform_api_vmcore.h"

int
bh_platform_init()
{
    return 0;
}

void
bh_platform_destroy()
{
}

void
abort(void)
{
    os_printf("aborted.\n");
    while (1)
        ;
}
