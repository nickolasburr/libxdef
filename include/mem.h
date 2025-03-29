/**
 * mem.h
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#ifndef XDEF_MEM_H
#define XDEF_MEM_H

#include "except.h"

extern const Except_T Mem_Failed;

extern void *Mem_alloc(long, const char *, int);
extern void *Mem_calloc(long, long, const char *, int);
extern void Mem_free(void *, const char *, int);
extern void *Mem_resize(void *, long, const char *, int);

#define ALLOC(nbytes)         Mem_alloc((nbytes), __FILE__, __LINE__)
#define CALLOC(count, nbytes) Mem_calloc((count), (nbytes), __FILE__, __LINE__)
#define NEW(p)                ((p) = ALLOC((long) sizeof *(p)))
#define NEW0(p)               ((p) = CALLOC(1, (long) sizeof *(p)))
#define FREE(ptr)             ((void)(Mem_free((ptr), __FILE__, __LINE__), (ptr) = 0))
#define RESIZE(ptr, nbytes)   ((ptr) = Mem_resize((ptr), (nbytes), __FILE__, __LINE__))

#endif /* XDEF_MEM_H */
