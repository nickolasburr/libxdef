/**
 * fs.h
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#ifndef XDEF_FS_H
#define XDEF_FS_H

#include <dirent.h>
#include <stdio.h>

#define DEV_NULL "/dev/null"

char *base_name(char *);
char *dir_name(char *);

DIR *get_dir(int *, const char *);
FILE *get_file(int *, const char *, const char *);

FILE *open_pipe(int *, const char *, const char *);
int close_pipe(FILE *);

int is_dir(const char *);
int is_file(const char *);
int is_link(const char *);
int is_sock(const char *);
int is_fifo(const char *);
int is_block(const char *);
int is_char(const char *);
int is_writable(const char *);

#endif /* XDEF_FS_H */
