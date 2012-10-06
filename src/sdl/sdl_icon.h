/*
 * Wolfenstein: Enemy Territory GPL Source Code
 * Copyright (C) 1999-2010 id Software LLC, a ZeniMax Media company.
 *
 * ET: Legacy
 * Copyright (C) 2012 Jan Simek <mail@etlegacy.com>
 *
 * This file is part of ET: Legacy - http://www.etlegacy.com
 *
 * ET: Legacy is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ET: Legacy is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ET: Legacy. If not, see <http://www.gnu.org/licenses/>.
 *
 * In addition, Wolfenstein: Enemy Territory GPL Source Code is also
 * subject to certain additional terms. You should have received a copy
 * of these additional terms immediately following the terms and conditions
 * of the GNU General Public License which accompanied the source code.
 * If not, please request a copy in writing from id Software at the address below.
 *
 * id Software LLC, c/o ZeniMax Media Inc., Suite 120, Rockville, Maryland 20850 USA.
 *
 * @file sdl_icon.h
 * @brief GIMP RGBA C-Source image dump (sdl_icon.h)
 */

static const struct
{
	unsigned int width;
	unsigned int height;
	unsigned int bytes_per_pixel;     /* 3:RGB, 4:RGBA */
	unsigned char pixel_data[32 * 32 * 4 + 1];
} CLIENT_WINDOW_ICON =
{
	32,                                             32, 4,
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377"
	"\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0"
	"\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0"
	"\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0"
	"\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300"
	"\300\377\300\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\0\0\0\377\300\300\300\377\300\300\300\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300"
	"\300\377\300\300\300\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\0\0"
	"\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0"
	"\377\0\0\0\377\0\0\0\377\377\377\377\377\377\0\0\377\377\0\0\377\377\0\0"
	"\377\377\0\0\377\377\0\0\377\377\0\0\377\377\377\377\377\0\0\0\377\0\0\0"
	"\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377"
	"\0\0\0\377\0\0\0\377\0\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377"
	"\377\377\0\0\377\377\0\0\377\377\377\377\377\377\377\377\377\377\0\0\377"
	"\377\0\0\377\377\377\377\377\0\0\0\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377"
	"\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0"
	"\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\377\377\377\377"
	"\377\377\377\377\0\0\377\377\0\0\377\377\377\377\377\377\377\377\377\377"
	"\0\0\377\377\0\0\377\377\377\377\377\377\377\377\377\377\0\0\377\377\0\0"
	"\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0"
	"\377\377\0\0\377\377\0\0\377\377\377\377\377\0\0\0\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\0\0\377\377\0\0\377\377\0\0\377"
	"\377\0\0\377\377\0\0\377\377\0\0\377\377\377\377\377\377\377\377\377\377"
	"\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\0\0\0\0\0"
	"\0\0\377\377\377\377\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377"
	"\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377"
	"\377\0\0\377\377\377\377\377\0\0\0\377\0\0\0\377\377\377\377\377\377\0\0"
	"\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0"
	"\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\377\377\377\0\0"
	"\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\0\0\0\377\377\377\377\377\377\377\377\377\0\0\0\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\377"
	"\377\377\377\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0"
	"\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\377\377\377\377"
	"\0\0\377\377\0\0\377\377\377\377\377\377\0\0\377\377\0\0\377\377\0\0\377"
	"\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377"
	"\377\377\377\377\0\0\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\377\300\300\300\377\0\0\0\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\0\0\377\377\0\0\377\377\377\377\377\377\0\0\377\377\0\0\377\377\377"
	"\377\377\377\0\0\377\377\0\0\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\0\0\0\377\200\200\200\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\377\300\300\300\377\300\300\300\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0"
	"\0\377\0\0\0\377\0\0\0\377\377\377\377\377\377\0\0\377\377\0\0\377\377\377"
	"\377\377\377\0\0\377\377\0\0\377\377\377\377\377\377\0\0\377\377\0\0\377"
	"\377\377\377\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0"
	"\377\200\200\200\377\300\300\300\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\377\300\300\300\377\300\300\300\377\200\200\200\377\200\200"
	"\200\377\200\200\200\377\200\200\200\377\200\200\200\377\0\0\0\377\377\377"
	"\377\377\377\0\0\377\377\0\0\377\377\377\377\377\377\0\0\377\377\0\0\377"
	"\377\377\377\377\377\0\0\377\377\0\0\377\377\377\377\377\0\0\0\377\200\200"
	"\200\377\200\200\200\377\200\200\200\377\200\200\200\377\200\200\200\377"
	"\300\300\300\377\300\300\300\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300"
	"\377\300\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377\377\377\377"
	"\377\377\0\0\377\377\0\0\377\377\377\377\377\377\0\0\377\377\0\0\377\377"
	"\377\377\377\377\0\0\377\377\0\0\377\377\377\377\377\0\0\0\377\200\200\200"
	"\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300"
	"\300\300\377\300\300\300\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377\377\377\377\377"
	"\377\0\0\377\377\0\0\377\377\377\377\377\377\0\0\377\377\0\0\377\377\377"
	"\377\377\377\0\0\377\377\0\0\377\377\377\377\377\0\0\0\377\200\200\200\377"
	"\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300"
	"\300\377\300\300\300\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300"
	"\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377\377\377\377\377\377"
	"\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377"
	"\0\0\377\377\0\0\377\377\377\377\377\0\0\0\377\200\200\200\377\300\300\300"
	"\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300"
	"\300\300\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\300\300"
	"\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\0\0\0\377\377\377\377\377\377\0\0\377\377"
	"\0\0\377\377\0\0\377\377\0\0\377\377\0\0\377\377\377\377\377\377\0\0\377"
	"\377\0\0\377\377\377\377\377\0\0\0\377\200\200\200\377\300\300\300\377\300"
	"\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300"
	"\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377\0\0\0\377\0\0"
	"\0\377\0\0\0\377\377\377\377\377\377\0\0\377\377\0\0\377\377\377\377\377"
	"\377\0\0\377\377\0\0\377\377\377\377\377\377\0\0\377\377\377\377\377\0\0"
	"\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\300\300\300\377\300\300\300"
	"\377\300\300\300\377\300\300\300\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300"
	"\300\377\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\300\300\300"
	"\377\300\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\300\300\300\377\300\300\300\377\300\300"
	"\300\377\300\300\300\377\0\0\0\377\377\377\377\377\0\0\0\377\0\0\0\377\0"
	"\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0"
	"\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\377\377\377\377\0\0\0\377"
	"\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\300\300\300\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\0\0\0\377\377\377\377\377\0\0\0\377\0\0"
	"\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0"
	"\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\377\377\377\377\0\0\0\377\200"
	"\200\200\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300"
	"\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377\377\377\377\377"
	"\0\0\0\377\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\0"
	"\0\0\377\377\377\377\377\377\377\377\377\0\0\0\377\200\200\200\377\300\300"
	"\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377"
	"\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\300\300\300\377\300"
	"\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377\377\377\377\377\0"
	"\0\0\377\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0"
	"\377\0\0\0\377\0\0\0\377\377\377\377\377\0\0\0\377\0\0\0\377\377\377\377"
	"\377\0\0\0\377\200\200\200\377\300\300\300\377\300\300\300\377\300\300\300"
	"\377\300\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\300\300\300\377\300\300\300\377\300\300"
	"\300\377\300\300\300\377\0\0\0\377\377\377\377\377\0\0\0\377\0\0\0\377\0"
	"\0\0\377\0\0\0\377\377\377\377\377\0\0\0\377\300\300\300\377\0\0\0\377\377"
	"\377\377\377\0\0\0\377\0\0\0\377\377\377\377\377\0\0\0\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300"
	"\300\377\300\300\300\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\0\0"
	"\0\377\377\377\377\377\0\0\0\377\0\0\0\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\0\0\0\377\300\300\300\377\0\0\0\377\377\377\377\377\0\0"
	"\0\377\0\0\0\377\377\377\377\377\0\0\0\377\300\300\300\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300"
	"\300\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\300\300\300"
	"\377\300\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377\377\377\377"
	"\377\0\0\0\377\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\0\0\0\377\0\0\0\377\377\377\377\377\0\0\0\377\0\0\0\377"
	"\377\377\377\377\0\0\0\377\300\300\300\377\300\300\300\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\0\0\0\377"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\300\300\300\377\300\300\300\377"
	"\300\300\300\377\300\300\300\377\0\0\0\377\377\377\377\377\0\0\0\377\0\0"
	"\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\377\377\377\377\0\0\0\377"
	"\377\377\377\377\0\0\0\377\0\0\0\377\377\377\377\377\0\0\0\377\300\300\300"
	"\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300"
	"\300\300\377\300\300\300\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377"
	"\0\0\0\377\377\377\377\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0"
	"\377\377\377\377\377\0\0\0\377\0\0\0\377\377\377\377\377\0\0\0\377\377\377"
	"\377\377\0\0\0\377\200\200\200\377\300\300\300\377\300\300\300\377\300\300"
	"\300\377\300\300\300\377\300\300\300\377\300\300\300\377\300\300\300\377"
	"\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\377\0\0\0\377"
	"\0\0\0\377\0\0\0\377\0\0\0\377\377\377\377\377\377\377\377\377\377\377\377"
	"\377\377\377\377\377\377\377\377\377\377\377\377\377\0\0\0\377\0\0\0\377"
	"\0\0\0\377\0\0\0\377\377\377\377\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0"
	"\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0\0\0\377\0"
	"\0\0\377\0\0\0\0\0\0\0\0\0\0\0\377\0\0\0\377\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
	"\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0",
};
