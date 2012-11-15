/*
 *  Multi2Sim
 *  Copyright (C) 2012  Rafael Ubal (ubal@ece.neu.edu)
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef ARCH_COMMON_ARCH_LIST_H
#define ARCH_COMMON_ARCH_LIST_H

#include <stdio.h>


void arch_list_init(void);
void arch_list_done(void);
void arch_list_dump(FILE *f);

void arch_list_register(char *arch_name);

enum arch_sim_kind_t;
void arch_list_set_sim_kind(char *arch_name, enum arch_sim_kind_t *sim_kind_ptr);


#endif

