/**
 * mem.h
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#ifndef XDEF_MEM_H
#define XDEF_MEM_H

#include "except.h"

extern const Except_T Mem_Failed;

extern void *MEM_alloc(long, const char *, int);
extern void *MEM_calloc(long, long, const char *, int);
extern void MEM_free(void *, const char *, int);
extern void *MEM_resize(void *, long, const char *, int);

#define ALLOC(nbytes)         MEM_alloc((nbytes), __FILE__, __LINE__)
#define CALLOC(count, nbytes) MEM_calloc((count), (nbytes), __FILE__, __LINE__)
#define NEW(p)                ((p) = ALLOC((long) sizeof *(p)))
#define NEW0(p)               ((p) = CALLOC(1, (long) sizeof *(p)))
#define FREE(ptr)             ((void)(MEM_free((ptr), __FILE__, __LINE__), (ptr) = 0))
#define RESIZE(ptr, nbytes)   ((ptr) = MEM_resize((ptr), (nbytes), __FILE__, __LINE__))

#endif /* XDEF_MEM_H */
