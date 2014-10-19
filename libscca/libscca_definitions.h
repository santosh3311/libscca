/*
 * The internal definitions
 *
 * Copyright (C) 2011-2014, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _LIBSCCA_INTERNAL_DEFINITIONS_H )
#define _LIBSCCA_INTERNAL_DEFINITIONS_H

#include <common.h>
#include <byte_stream.h>

#define LIBSCCA_ENDIAN_BIG				_BYTE_STREAM_ENDIAN_BIG
#define LIBSCCA_ENDIAN_LITTLE				_BYTE_STREAM_ENDIAN_LITTLE

/* Define HAVE_LOCAL_LIBSCCA for local use of libscca
 */
#if !defined( HAVE_LOCAL_LIBSCCA )
#include <libscca/definitions.h>

/* The definitions in <libscca/definitions.h> are copied here
 * for local use of libscca
 */
#else
#define LIBSCCA_VERSION					20141019

/* The version string
 */
#define LIBSCCA_VERSION_STRING				"20141019"

/* The access flags definitions
 * bit 1        set to 1 for read access
 * bit 2        set to 1 for write access
 * bit 3-8      not used
 */
enum LIBSCCA_ACCESS_FLAGS
{
	LIBSCCA_ACCESS_FLAG_READ			= 0x01,
/* Reserved: not supported yet */
	LIBSCCA_ACCESS_FLAG_WRITE			= 0x02
};

/* The file access macros
 */
#define LIBSCCA_OPEN_READ				( LIBSCCA_ACCESS_FLAG_READ )
/* Reserved: not supported yet */
#define LIBSCCA_OPEN_WRITE				( LIBSCCA_ACCESS_FLAG_WRITE )
/* Reserved: not supported yet */
#define LIBSCCA_OPEN_READ_WRITE				( LIBSCCA_ACCESS_FLAG_READ | LIBSCCA_ACCESS_FLAG_WRITE )

#endif

#endif
