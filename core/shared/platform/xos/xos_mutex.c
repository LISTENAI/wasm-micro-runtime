/*
 * Copyright (C) 2022 LISTENAI
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include "platform_api_vmcore.h"

int
os_mutex_init(korp_mutex *mutex)
{
    return xos_mutex_create(mutex, 0, 0);
}

int
os_mutex_destroy(korp_mutex *mutex)
{
    return xos_mutex_delete(mutex);
}

int
os_mutex_lock(korp_mutex *mutex)
{
    return xos_mutex_lock(mutex);
}

int
os_mutex_unlock(korp_mutex *mutex)
{
    return xos_mutex_unlock(mutex);
}
