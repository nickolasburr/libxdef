/**
 * pipe.h
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#ifndef XDEF_SYS_PIPE_H
#define XDEF_SYS_PIPE_H

#include <dirent.h>
#include <stdio.h>

FILE *PIPE_popen(int *, const char *, const char *);
int PIPE_pclose(int *, FILE *);

#endif /* XDEF_SYS_PIPE_H */
