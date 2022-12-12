/*
 * Copyright (C) 2022 LISTENAI
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "platform_api_vmcore.h"

uint64
os_time_get_boot_microsecond(void)
{
    return xos_cycles_to_usecs(xos_get_system_cycles());
}
