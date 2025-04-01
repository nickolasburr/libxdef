/**
 * fs.h
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#include <string.h>
#include "fs.h"
#include "types/str.h"

/**
 * GNU-style basename
 */
char *base_name(char *path) {
	char *base = strrchr(path, '/');
	return base ? (base + 1) : path;
}

/**
 * GNU-style dirname
 */
char *dir_name(char *path) {
	char *pslash = NULL;

	/**
	 * Get trailing slash.
	 */
	pslash = path != NULL
	       ? strrchr(path, '/') : NULL;

	if (pslash == path) {
		++pslash;
	} else if (pslash != NULL && pslash[1] == '\0') {
		pslash = memchr(
			path,
			pslash - path,
			'/'
		);
	}

	if (pslash != NULL) {
		pslash[0] = '\0';
	} else {
		path = ".";
	}

	return path;
}
