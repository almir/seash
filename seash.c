/*
 * Sea Shell
 * The most awesome GNU/Linux shell ever.
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
#include <string.h>

int main (void) {
   // Print welcome message and Barney's quote
   printf ("\x1b[36mWelcome to \x1b[31mSea Shell\x1b[36m! The most awesome shell on Earth.\x1b[0m\n");
   printf ("\x1b[33m\"Everytime I get sad, I stop beeing sad and be awesome instead. True story.\" \x1b[31m(\x1b[32mBarney Stinson\x1b[31m)\x1b[0m\n");
   
   // Get user's login shell
   char *shell = getenv ("SHELL");
   
   // Check value of the user's login shell and in case it hasn't been set,
   // or if it's value is /usr/bin/seash, set shell variable to /bin/bash if
   // it exists, otherwise just set it to /bin/sh
   if (shell == NULL || strcmp (shell, "/usr/bin/seash") == 0) {
      if (access ("/bin/bash", 0) != -1) {
         strcpy(shell, "/bin/bash");
      } else {
         strcpy(shell, "/bin/sh");
      }
   }
   
   // Open shell
   system (shell);
   
   return 0;
}
