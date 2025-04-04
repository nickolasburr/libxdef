/**
 * mem.c
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#include "assert.h"
#include "mem.h"

const Except_T Mem_Failed = {
	"Allocation Failed"
};

void *MEM_alloc(
	long nbytes,
	const char *file,
	int line
) {
	void *ptr = NULL;

	assert(nbytes > 0);
	ptr = malloc(nbytes);

	if (ptr != NULL) {
		return ptr;
	}

	if (file != NULL) {
		Except_raise(
			&Mem_Failed,
			file,
			line
		);
	} else {
		RAISE(Mem_Failed);
	}
}

void *MEM_calloc(
	long count,
	long nbytes,
	const char *file,
	int line
) {
	void *ptr = NULL;

	assert(count > 0);
	assert(nbytes > 0);
	ptr = calloc(count, nbytes);

	if (ptr != NULL) {
		return ptr;
	}

	if (file != NULL) {
		Except_raise(
			&Mem_Failed,
			file,
			line
		);
	} else {
		RAISE(Mem_Failed);
	}
}

void MEM_free(
	void *ptr,
	const char *file,
	int line
) {
	if (ptr) {
		free(ptr);
	}
}

void *MEM_resize(
	void *ptr,
	long nbytes,
	const char *file,
	int line
) {
	assert(ptr);
	assert(nbytes > 0);
	ptr = realloc(ptr, nbytes);

	if (ptr != NULL) {
		return ptr;
	}

	if (file != NULL) {
		Except_raise(
			&Mem_Failed,
			file,
			line
		);
	} else {
		RAISE(Mem_Failed);
	}
}
