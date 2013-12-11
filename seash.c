/*
 * Sea Shell
 * The coolest GNU/Linux shell ever.
 *
 * Copyright (C) 2013 Almir Dzinovic <almir@dzinovic.net>
 *
 * This program is free software; you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation; either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
   printf ("\x1b[36mWelcome to \x1b[31mSea Shell\x1b[36m, the coolest shell in the world.\x1b[0m\n");
   printf("\x1b[33mEverytime I get sad, I stop beeing sad and be awesome instead. True story!\x1b[0m\n");
   system ("bash");
   return 0;
}
