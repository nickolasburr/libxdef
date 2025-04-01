/**
 * fs.c
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#include "fs.h"

DIR *FS_opendir(
	int *error,
	const char *path
) {
	DIR *dir = NULL;

	*error = 0;
	dir = opendir(path);

	if (dir == NULL) {
		*error = 1;
	}

	return dir;
}

FILE *FS_fopen(
	int *error,
	const char *name,
	const char *mode
) {
	FILE *file = NULL;

	*error = 0;
	file = fopen(name, mode);

	if (file == NULL) {
		*error = 1;
	}

	return file;
}
