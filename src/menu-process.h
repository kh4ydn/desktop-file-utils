/* Tree of desktop entries */

/*
 * Copyright (C) 2002 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef MENU_PROCESS_H
#define MENU_PROCESS_H

#include "menu-layout.h"
#include "menu-entries.h"

typedef struct _DesktopEntryTree DesktopEntryTree;

DesktopEntryTree* desktop_entry_tree_load (const char *filename);

void desktop_entry_tree_list_subdirs (DesktopEntryTree *tree,
                                      const char       *parent_dir,
                                      char           ***subdirs,
                                      int              *n_subdirs);
void desktop_entry_tree_list_entries (DesktopEntryTree *tree,
                                      const char       *parent_dir,
                                      char           ***entries,
                                      int              *n_entries);

/* returns a copy of .directory file absolute path */
char* desktop_entry_tree_get_directory (DesktopEntryTree *tree,
                                        const char       *dirname);

#endif /* MENU_PROCESS_H */
