/*
 * Copyright (c) 2018 Red Hat, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *   Martin Sehnoutka <msehnout@redhat.com>
 */

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int __attribute__((__format__(printf, 2, 3))) safe_asprintf(char **strp, const char *fmt, ...)
{
	int ret;
	va_list args;

	va_start(args, fmt);
	ret = vasprintf(&(*strp), fmt, args);
	va_end(args);
	if (ret < 0) {
		fprintf(stderr, "Memory allocation failure\n");
		exit(1);
	}
	return ret;
}
