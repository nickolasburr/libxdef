/**
 * pipe.c
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#include "pipe.h"

FILE *SYS_PIPE_open(
	int *error,
	const char *cmd,
	const char *mode
) {
	FILE *pipe = NULL;

	*error = 0;
	pipe = popen(cmd, mode);

	if (pipe == NULL) {
		*error = 1;
	}

	return pipe;
}

int SYS_PIPE_close(FILE *pipe) {
	return pclose(pipe);
}
