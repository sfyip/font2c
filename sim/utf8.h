/* Extract some utf-8 functions from https://github.com/vigna/ne/blob/master/src/utf8.c */

/* UTF-8 support.
   Copyright (C) 1993-1998 Sebastiano Vigna 
   Copyright (C) 1999-2021 Todd M. Lewis and Sebastiano Vigna
   This file is part of ne, the nice editor.
   This library is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or (at your
   option) any later version.
   This library is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
   for more details.
   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.  */


#ifndef _UTF8_H_
#define _UTF8_H_

#include <stdint.h>

typedef uint32_t utf8_t;

uint8_t utf8_charlen(utf8_t c);
utf8_t utf8_getchar(const char * const ss);

#endif