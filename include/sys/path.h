/**
 * path.h
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#ifndef XDEF_SYS_PATH_H
#define XDEF_SYS_PATH_H

const char *SYS_PATH_basename(const char *);
const char *SYS_PATH_dirname(const char *);

#undef basename
#undef dirname

#define basename(p) SYS_PATH_basename(p)
#define dirname(p)  SYS_PATH_dirname(p)

#endif /* XDEF_SYS_PATH_H */
