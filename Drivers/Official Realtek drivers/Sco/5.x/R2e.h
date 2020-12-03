/*
 *	@(#) e3B.h 5.1 94/06/10 SCOINC
 *
 *      Copyright (C) The Santa Cruz Operation, 1993-1994.
 *      This Module contains Proprietary Information of
 *      The Santa Cruz Operation and should be treated
 *      as Confidential.
 */

/*
 *      System V STREAMS TCP - Release 4.0
 *
 *      Copyright 1990 Interactive Systems Corporation,(ISC)
 *      All Rights Reserved.
 *
 *      Copyright 1987, 1988, 1989 Lachman Associates, Incorporated (LAI)
 *      All Rights Reserved.
 *
 *      System V STREAMS TCP was jointly developed by Lachman
 *      Associates and Convergent Technologies.
 */
/*      SCCS IDENTIFICATION        */
/* Header for Ethernet board */
#define	r2e_NMCADDR	16
#define	r2e_ADDR	6

#define	MCON		0	/* turn on multicast mode */
#define	MCOFF		1	/* turn off multicast mode */

/* LAN Controller, Control Register bits 3=0, 2=0 */

#define CR	(device->base)		/* Command register (r/w) */
#define		XSTP	0x01			/* Stop */
#define		STA	0x02			/* Start */
#define		TXP	0x04			/* Transmit packet */
#define		RD0	0x08			/* Remote DMA command */
#define		RD1	0x10
#define		RD2	0x20
#define		PS0	0x40			/* Page select */
#define		PS1	0x80
/* page 0 registers */
#define PSTART	(device->base+0x01)	/* Page start register (w) */
#define PSTOP	(device->base+0x02)	/* Page stop register (w) */
#define BNRY	(device->base+0x03)	/* Boundary pointer (r/w) */
#define TSR	(device->base+0x04)	/* Transmit status (r) */
#define		PTX	0x01			/* Packet transmitted */
#define		NDT	0x02			/* Non-deferred transmission */
#define		COL	0x04			/* Transmit collided */
#define		ABT	0x08			/* Transmit aborted */
#define		CRS	0x10			/* Carrier sense lost */
#define 	FU	0x20			/* FIFO underrun */
#define		CDH	0x40			/* Collision-detect heartbeat */
#define		OWC	0x80			/* Out-of-windown collision */
#define TPSR	(device->base+0x04)	/* Transmit page start (w) */
#define NCR	(device->base+0x05)	/* # collisions (r) */
#define TBCR0	(device->base+0x05)	/* Transmit byte count (w) */
#define TBCR1	(device->base+0x06)
#define ISR	(device->base+0x07)	/* Interrupt status (r/w) */
#define		IPRX	0x01		 	/* Packet received */
#define		IPTX	0x02			/* Packet transmitted */
#define		IRXE	0x04			/* Receive error */
#define		ITXE	0x08			/* Transmit error */
#define		IOVW	0x10			/* Overwrite warning */
#define		ICNT	0x20			/* Counter overflow */
#define		IRDC	0x40			/* Remote DMA complete */
#define		IRST	0x80			/* Reset status */
#define RSAR0	(device->base+0x08)	/* Remote start address (w) */
#define RSAR1	(device->base+0x09)
#define RBCR0	(device->base+0x0a)	/* Remote byte count (w) */
#define RBCR1	(device->base+0x0b)
#define RSR	(device->base+0x0c)	/* Receive status (r) */
#define		PRX	0x01			/* Pakcet received intact */
#define		CRCE	0x02			/* CRC error */
#define		FAE	0x04			/* Frame alignment error */
#define		FO	0x08			/* FIFO overrun */
#define		MPA	0x10			/* Missed packet */
#define		PHY	0x20			/* Physical/multicast address */
#define		DIS	0x40			/* Receiver disabled */
#define		DFR	0x80			/* Deferring */
#define RCR	(device->base+0x0c)	/* Receive configuration (w) */
#define		SEP	0x01			/* Save errored packets */
#define		AR	0x02			/* Accept runt packets */
#define		AB	0x04			/* Accept broadcast */
#define		AM	0x08			/* Accept multicast */
#define		PRO	0x10			/* Promiscuous physical */
#define		MON	0x20			/* Monitor mode */
#define CNTR0	(device->base+0x0d)	/* Frame alignment errors (r) */
#define TCR	(device->base+0x0d)	/* Transmit configuration (w) */
#define		CRC	0x01			/* Inhibit CRC */
#define		LB0	0x02			/* Encoded loopback control */
#define		LB1	0x04
#define		ATD	0x08			/* Auto-transmit disable */
#define		OFST	0x10			/* Collision offset enable */
#define CNTR1	(device->base+0x0e)	/* CRC errors (r) */
#define DCR	(device->base+0x0e)	/* Data configuration (w) */
#define		WTS	0x01			/* Word transfer select */
#define		BOS	0x02			/* Byte order select */
#define		LAS	0x04			/* Long address select */
#define		BMS	0x08			/* Burst mode select */
#define		ARM	0x10			/* Autoinitialize remote */
#define		FT0	0x20			/* FIFO threshold select */
#define		FT1	0x40
#define CNTR2	(device->base+0x0f)	/* Missed packet errors (r) */
#define IMR	(device->base+0x0f)	/* Interrupt mask (w) */
#define		PRXE	0x01			/* Packet received */
#define		PTXE	0x02			/* Packet transmitted */
#define		RXEE	0x04			/* Receive error */
#define		TXEE	0x08			/* Transmit error */
#define		OVWE	0x10			/* Overwrite warning */
#define		CNTE	0x20			/* Counter overflow */
#define		RDCE	0x40			/* DMA complete */
/* page 1 registers */
#define PAR0	(device->base+0x01)	/* Physical address (r/w) */
#define CURR	(device->base+0x07)	/* Current page (r/w) */
#define MAR0	(device->base+0x08)	/* Multicast address (r/w) */

/* Ethernet Address PROM, Control Register bits 3=0, 2=1 */

#define	EADDR	(device->base) 		/* Address (read & write)*/

/* Gate Array  */


#define	EDEVSIZ	(0x20 * sizeof(char))
/*
 * Total buffer size, is therefore 1566. We allow 2000.
 */

#define TX_BUFBASE	0x40
#define TX_BUFSIZE	0x06
#define RX_BUFBASE	0x4c
#define RX_BUFLIM	0x60
#define RX_BUFLIM16	0x80
#define NXT_RXBUF(p)	((p)==device->rx_buflim-1 ? RX_BUFBASE : (p)+1)
#define PRV_RXBUF(p)	((p)==RX_BUFBASE ? device->rx_buflim-1 : (p)-1)
#define CURRXBUF(t)	(outb(CR, PS0|RD2|STA), t=inb(CURR), outb(CR, RD2|STA), t)

#define r2e_MINPACK    60     /* minimum output packet length */
#define r2e_MAXPACK  1514	/* maximum output packet length */

/* transfer limits */

#define r2eETHERMIN		(r2e_MINPACK)
#define r2eETHERMTU		(r2e_MAXPACK)

struct r2edevice {
#ifdef DYNAMIC
#define RX_MBLKS	64
	mblk_t *mblk[RX_MBLKS];
#endif
	queue_t			*up_queue;
	unsigned int		base;
	int			open;		/* device open already? */
	unsigned char		type16;
	unsigned char		rx_buflim;
        unsigned char           next_pkt;
	unsigned int		flags;
	unsigned int		tid;		/* TX timeout */
	mac_stats_eth_t		macstats;	/* stats */

	unsigned char		eaddr[r2e_ADDR]; /* H/W address */
						/* Multicast table */
	unsigned char		mctbl[r2e_NMCADDR][r2e_ADDR];
	int			mccnt;
        unsigned int            vect;

	/* dual transmit buffer stuff */
	unsigned char		curtxbuf;
	unsigned char		txbufstate[2];
	unsigned char		txbufaddr[2];
	unsigned short		txbuflen[2];
};

/* device flags */
#define r2eBUSY	0x01
#define r2eWAITO	0x02

/* miscellany */
#define OK	1
#define NOT_OK	0

#define TX_TIMEOUT	(5*HZ)
#define WATCHDOG2	(5*HZ)

#if 1
#define r2eIMASK (PRXE|PTXE|RXEE|TXEE|OVWE|CNTE)
#else
#define r2eIMASK (PRXE|RXEE|OVWE|CNTE)
#endif

extern struct r2edevice r2edevice[];
extern unsigned int r2eiobase[];
extern unsigned int r2eintl[];
extern unsigned int r2e_nunit;  

#ifndef _INKERNEL
#define r2eUNIT	4	/* maximum number of boards possible */
#endif

#define	DIAGON		1
#define	DIAGINTR	2
#ifdef DEBUG
#define r2eDIAG(M,S)	if (r2ediag & (M)) S
#else
#define r2eDIAG(M,S)
#endif

#define r2e_INITED	(1)
#define r2e_ACTIVE	(2)
#define r2e_DOWN	(4)

#if !defined(ENETM_ID)
#define ENETM_ID	101
#endif

/* two transmit buffer state flags */
#define TX_FREE		0
#define TX_LOADED	1
#define TX_TXING	2
