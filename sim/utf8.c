// Extract some utf-8 functions from https://github.com/vigna/ne/blob/master/src/utf8.c

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

#include "utf8.h"


/* Returns the length of a bytes sequence encoding the given character. */
uint8_t utf8_charlen(utf8_t c) {
	if (c < 0x80) return 1;
	if (c < 0x800) return 2;
	if (c < 0x10000) return 3;
	if (c < 0x200000) return 4;
	if (c < 0x4000000) return 5;
	return 6;
}

/* Return the Unicode characters represented by the given string, or -1 if an error occurs. */

utf8_t utf8_getchar(const char * const ss) {
	const uint8_t * const s = (const uint8_t *)ss;
	if (s[0] < 0x80) return s[0];
	if (s[0] < 0xC0) return -1;
	if (s[0] < 0xE0) return (s[0] & 0x1F) << 6 | s[1] & 0x3F;
	if (s[0] < 0xF0) return (s[0] & 0xF) << 12 | (s[1] & 0x3F) << 6 | (s[2] & 0x3F);
	if (s[0] < 0xF8) return (s[0] & 0x7) << 18 | (s[1] & 0x3F) << 12 | (s[2] & 0x3F) << 6 | (s[3] & 0x3F);
	if (s[0] < 0xFC) return (s[0] & 0x3) << 24 | (s[1] & 0x3F) << 18 | (s[2] & 0x3F) << 12 | (s[3] & 0x3F) << 6 | (s[4] & 0x3F);
	return (s[0] & 0x1) << 30 | (s[1] & 0x3F) << 24 | (s[2] & 0x3F) << 18 | (s[3] & 0x3F) << 12 | (s[4] & 0x3F) << 6 | (s[5] & 0x3F);
}
