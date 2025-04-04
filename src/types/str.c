/**
 * str.c
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#include "mem.h"
#include "types/str.h"

char *STR_concat(
	const char *a,
	const char *b
) {
	char *buf = ALLOC(
		sizeof(char) * (strlen(a) + NUL_BYTE)
	);
	return strcat(
		strcat(buf, a),
		b
	);
}

char *STR_copy(const char *str) {
	char *buf = ALLOC(
		sizeof(char) * (strlen(str) + NUL_BYTE)
	);
	return strcpy(buf, str);
}
