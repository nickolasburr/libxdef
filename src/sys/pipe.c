/**
 * pipe.c
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#include "sys/pipe.h"

FILE *PIPE_popen(
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

int PIPE_pclose(
	int *error,
	FILE *pipe
) {
	int result;

	*error = 0;
	result = pclose(pipe);

	if (result == -1) {
		*error = 1;
	}

	return result;
}
