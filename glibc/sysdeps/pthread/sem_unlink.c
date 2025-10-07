/* Copyright (C) 2002-2025 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

#include <errno.h>
#include <semaphore.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "semaphoreP.h"
#include <shm-directory.h>
#include <shlib-compat.h>

int
__sem_unlink (const char *name)
{
  struct shmdir_name dirname;
  if (__shm_get_name (&dirname, name, true) != 0)
    {
      __set_errno (ENOENT);
      return -1;
    }

  /* Now try removing it.  */
  int ret = __unlink (dirname.name);
  if (ret < 0 && errno == EPERM)
    __set_errno (EACCES);
  return ret;
}
#ifndef __PTHREAD_HTL
versioned_symbol (libc, __sem_unlink, sem_unlink, GLIBC_2_34);
# if OTHER_SHLIB_COMPAT (libpthread, GLIBC_2_1_1, GLIBC_2_34)
compat_symbol (libpthread, __sem_unlink, sem_unlink, GLIBC_2_1_1);
# endif
#else /* __PTHREAD_HTL */
versioned_symbol (libc, __sem_unlink, sem_unlink, GLIBC_2_43);
# if OTHER_SHLIB_COMPAT (libpthread, GLIBC_2_12, GLIBC_2_43)
compat_symbol (libpthread, __sem_unlink, sem_unlink, GLIBC_2_12);
#endif
#endif
