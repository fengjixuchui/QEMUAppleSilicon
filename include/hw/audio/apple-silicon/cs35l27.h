/*
 * Apple CS35L27 Amp.
 *
 * Copyright (c) 2025 Visual Ehrmanntraut.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HW_MISC_APPLE_SILICON_CS35L27_H
#define HW_MISC_APPLE_SILICON_CS35L27_H

#include "qemu/osdep.h"
#include "qom/object.h"

#define TYPE_APPLE_CS35L27 "apple-cs35l27"
OBJECT_DECLARE_SIMPLE_TYPE(AppleCS35L27State, APPLE_CS35L27);

#endif /* HW_MISC_APPLE_SILICON_CS35L27_H */
