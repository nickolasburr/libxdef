/**
 * path.c
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#include "sys/path.h"

/**
 * GNU-style basename
 */
const char *SYS_PATH_basename(const char *path) {
	const char *base = strrchr(path, '/');
	return base ? (base + 1) : path;
}

/**
 * GNU-style dirname
 */
const char *SYS_PATH_dirname(const char *path) {
	char *pslash = NULL;

	/**
	 * Get trailing slash.
	 */
	pslash = path != NULL
	       ? strrchr(path, '/') : NULL;

	if (pslash == path) {
		pslash++;
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
