/**
 * pipe.h
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#ifndef XDEF_SYS_PIPE_H
#define XDEF_SYS_PIPE_H

#include <dirent.h>
#include <stdio.h>

FILE *SYS_PIPE_open(int *, const char *, const char *);
int SYS_PIPE_close(FILE *);

#endif /* XDEF_SYS_PIPE_H */
