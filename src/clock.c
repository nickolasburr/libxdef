/**
 * clock.c
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#include <string.h>
#include "clock.h"
#include "mem.h"
#include "types/str.h"

double get_elapsed_ticks(clock_t start) {
	double diff;

	diff = (double)(clock() - start);
	return (diff / CLOCKS_PER_SEC);
}

char *get_timestamp(void) {
	time_t lt = time(NULL);
	struct tm tm = *localtime(&lt);
	static const char *format = "%d:%.2d:%.2d on %.2d-%.2d-%d";
	char *timebuf = NULL;

	timebuf = ALLOC(
		sizeof(char) * (strlen(format) + NUL_BYTE)
	);
	sprintf(
		timebuf,
		tm_format,
		tm.tm_hour,
		tm.tm_min,
		tm.tm_sec,
		(tm.tm_mon + 1),
		tm.tm_mday,
		(tm.tm_year + 1900)
	);
	return timebuf;
}
