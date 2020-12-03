#include "sys/types.h"
#include "sys/stream.h"
#include "sys/socket.h"
#include "/etc/conf/cf.d/config.h"
/* #include "config.h" */


/* interrupt level per board  */

#if defined(R0E3_UNITS)
#define R0EUNIT 4
ushort r0eicintl[R0EUNIT] =
	{ R0E_0_VECT,R0E1_0_VECT,R0E2_0_VECT,R0E3_0_VECT };
ushort r0eicioaddr[R0EUNIT] =
	{ R0E_0_SIOA,R0E1_0_SIOA,R0E2_0_SIOA,R0E3_0_SIOA };

#elif defined(R0E2_UNITS)
#define R0EUNIT 3
ushort r0eicintl[R0EUNIT] =
	{ R0E_0_VECT,R0E1_0_VECT,R0E2_0_VECT };
ushort r0eicioaddr[R0EUNIT] =
	{ R0E_0_SIOA,R0E1_0_SIOA,R0E2_0_SIOA };


#elif defined(R0E1_UNITS)
#define R0EUNIT 2
ushort r0eicintl[R0EUNIT] = { R0E_0_VECT,R0E1_0_VECT };
ushort r0eicioaddr[R0EUNIT] = { R0E_0_SIOA,R0E1_0_SIOA };


#elif defined(R0E_UNITS)
#define R0EUNIT  1
ushort r0eicintl[R0EUNIT] = { R0E_0_VECT };
ushort r0eicioaddr[R0EUNIT] = { R0E_0_SIOA };
#endif

ushort r0e_BOARDS = R0EUNIT;

