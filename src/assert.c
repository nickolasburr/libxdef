/**
 * assert.c
 *
 * Copyright (C) 2025 Nickolas Burr <nickolasburr@gmail.com>
 */

#include "assert.h"

const Except_T Assert_Failed = {
	"Assertion failed"
};

void (assert)(int e) {
	assert(e);
}
