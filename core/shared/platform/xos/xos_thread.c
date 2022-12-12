/*
 * Copyright (C) 2022 LISTENAI
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "platform_api_vmcore.h"

korp_tid
os_self_thread(void)
{
    return xos_thread_id();
}

uint8 *
os_thread_get_stack_boundary(void)
{
    return NULL;
}
