/*
uptimed - Copyright (c) 1998-2004 Rob Kaper <rob@unixcode.org>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 dated June, 1991.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program;  if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave., Cambridge, MA 02139, USA.
*/

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define	SYSMAX	24

char *time2uptime (time_t t);
void read_homedir(void);
void cat(char *);
