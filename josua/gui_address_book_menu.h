/*
 * josua - Jack's open sip User Agent
 *
 * Copyright (C) 2002,2003   Aymeric Moizard <jack@atosc.org>
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2,
 * or (at your option) any later version.
 *
 * This is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with dpkg; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __GUI_ADDRESS_BOOK_MENU_H__
#define __GUI_ADDRESS_BOOK_MENU_H__

#include "gui.h"
#include "gui_menu.h"

int window_address_book_menu_print();
int window_address_book_menu_run_command(int c);
void window_address_book_menu_draw_commands();

extern gui_t gui_window_address_book_menu;

void __show_newentry_abook();
void __show_browse_abook();
void __show_main_menu();

#endif