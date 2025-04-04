/**
 * clock.h
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#ifndef XDEF_CLOCK_H
#define XDEF_CLOCK_H

#include <time.h>

double CLOCK_get_elapsed_ticks(clock_t);
const char *CLOCK_get_timestamp(void);

#endif /* XDEF_CLOCK_H */
