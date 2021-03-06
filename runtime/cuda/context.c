/*
 *  Multi2Sim
 *  Copyright (C) 2012  Rafael Ubal (ubal@ece.neu.edu)
 *
 *  This module is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This module is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this module; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "../include/cuda.h"
#include "context.h"
#include "list.h"
#include "mhandle.h"


/* Create a context */
CUcontext cuda_context_create(CUdevice device)
{
	CUcontext context;

	/* Create context */
	context = xcalloc(1, sizeof(struct CUctx_st));

	/* Initialize */
	context->id = list_count(context_list);
	context->device = device;
	context->version = 5050;

	/* Add to context list */
	list_add(context_list, context);

	return context;
}

/* Free context */
void cuda_context_free(CUcontext context)
{
	list_remove(context_list, context);

	free(context);
}

