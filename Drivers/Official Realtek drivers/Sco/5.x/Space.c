/*
 *	@(#) Space.c 7.1 94/11/27 SCOINC
 *
 *      Copyright (C) The Santa Cruz Operation, 1993-1994.
 *      This Module contains Proprietary Information of
 *      The Santa Cruz Operation and should be treated
 *      as Confidential.
 */

/*
 *	System V STREAMS TCP - Release 4.0
 *
 *	Copyright 1987, 1988 Lachman Associates, Incorporated (LAI)
 *
 *	All Rights Reserved.
 *
 *	The copyright above and this notice must be preserved in all
 *	copies of this source code.  The copyright above does not
 *	evidence any actual or intended publication of this source
 *	code.
 *
 *	This is unpublished proprietary trade secret source code of
 *	Lachman Associates.  This source code may not be copied,
 *	disclosed, distributed, demonstrated or licensed except as
 *	expressly authorized by Lachman Associates.
 *
 *	System V STREAMS TCP was jointly developed by Lachman
 *	Associates and Convergent Technologies.
 */
#include "sys/types.h"
#include "sys/stream.h"
#include "sys/mdi.h"
#include "config.h"
#include "space.h"
#include "r2e.h"

			/* IRQ LEVEL */
u_int r2eintl[R2E_CNTLS] = {
#ifdef R2E_0
	        R2E_0_IRQ,
#endif
#ifdef R2E_1
		R2E_1_IRQ,
#endif
#ifdef R2E_2
		R2E_2_IRQ,
#endif
#ifdef R2E_3
		R2E_3_IRQ,
#endif
};

			/* I/O BASE ADDRESS */
u_int r2eiobase[R2E_CNTLS] = {
#ifdef R2E_0
		R2E_0_BASE_IO,
#endif
#ifdef R2E_1
		R2E_1_BASE_IO,
#endif
#ifdef R2E_2
		R2E_2_BASE_IO,
#endif
#ifdef R2E_3
		R2E_3_BASE_IO,
#endif
};


u_int			r2e_nunit = R2E_CNTLS;
struct r2edevice	r2edevice[R2E_CNTLS];  

extern int r2eopen(), r2eclose(), r2euwput();
extern int nulldev();

struct module_info r2e_minfo = {
	0, "r2e", 1, r2eETHERMTU, 16*r2eETHERMTU, 12*r2eETHERMTU
};

struct qinit r2eurinit = {
	0,  0, r2eopen, r2eclose, nulldev, &r2e_minfo, 0
};

struct qinit r2euwinit = {
	r2euwput,0,r2eopen,r2eclose, nulldev, &r2e_minfo, 0
};

struct streamtab r2einfo = { &r2eurinit, &r2euwinit, 0, 0 };
