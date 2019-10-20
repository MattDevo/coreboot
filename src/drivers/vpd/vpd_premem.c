/*
 * This file is part of the coreboot project.
 *
 * Copyright (c) 2019 Facebook, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <string.h>

#include "vpd.h"

void vpd_get_buffers(struct vpd_blob *blob)
{
	const struct vpd_blob *b;

	b = vpd_load_blob();
	memcpy(blob, b, sizeof(*b));
}
