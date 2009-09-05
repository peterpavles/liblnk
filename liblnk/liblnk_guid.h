/*
 * GUID functions
 *
 * Copyright (c) 2008-2009, Joachim Metz <forensics@hoffmannbv.nl>,
 * Hoffmann Investigations. All rights reserved.
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBLNK_GUID_H )
#define _LIBLNK_GUID_H

#include <common.h>
#include <types.h>

#include <liberror.h>

#if defined( __cplusplus )
extern "C" {
#endif

#define LIBLNK_GUID_STRING_SIZE	37

typedef uint8_t liblnk_guid_t;

int liblnk_guid_to_string(
     liblnk_guid_t *guid,
     uint8_t byte_order,
     uint8_t *string,
     size_t string_size,
     liberror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

