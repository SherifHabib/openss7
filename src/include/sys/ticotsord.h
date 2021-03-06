/*****************************************************************************

 @(#) src/include/sys/ticotsord.h

 -----------------------------------------------------------------------------

 Copyright (c) 2008-2015  Monavacon Limited <http://www.monavacon.com/>
 Copyright (c) 2001-2008  OpenSS7 Corporation <http://www.openss7.com/>
 Copyright (c) 1997-2001  Brian F. G. Bidulock <bidulock@openss7.org>

 All Rights Reserved.

 This program is free software; you can redistribute it and/or modify it under
 the terms of the GNU Affero General Public License as published by the Free
 Software Foundation; version 3 of the License.

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the GNU Affero General Public License for more
 details.

 You should have received a copy of the GNU Affero General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>, or
 write to the Free Software Foundation, Inc., 675 Mass Ave, Cambridge, MA
 02139, USA.

 -----------------------------------------------------------------------------

 U.S. GOVERNMENT RESTRICTED RIGHTS.  If you are licensing this Software on
 behalf of the U.S. Government ("Government"), the following provisions apply
 to you.  If the Software is supplied by the Department of Defense ("DoD"), it
 is classified as "Commercial Computer Software" under paragraph 252.227-7014
 of the DoD Supplement to the Federal Acquisition Regulations ("DFARS") (or any
 successor regulations) and the Government is acquiring only the license rights
 granted herein (the license rights customarily provided to non-Government
 users).  If the Software is supplied to any unit or agency of the Government
 other than DoD, it is classified as "Restricted Computer Software" and the
 Government's rights in the Software are defined in paragraph 52.227-19 of the
 Federal Acquisition Regulations ("FAR") (or any successor regulations) or, in
 the cases of NASA, in paragraph 18.52.227-86 of the NASA Supplement to the FAR
 (or any successor regulations).

 -----------------------------------------------------------------------------

 Commercial licensing and support of this software is available from OpenSS7
 Corporation at a fee.  See http://www.openss7.com/

 *****************************************************************************/

#ifndef _SYS_TICOTSORD_H
#define _SYS_TICOTSORD_H

/* This file can be processed with doxygen(1). */

/** @addtogroup loopback
  * @{ */

/** @file
  * TPI COTS w/ Orderly Release header file.  */

/*
 * TPI COTS w/ Orderly Release Header File.
 */

#if 0
#if !defined _TICOTSORD_H && !defined __KERNEL__
#error ****
#error **** DO NOT INCLUDE SYSTEM HEADER FILES DIRECTLY IN USER-SPACE
#error **** PROGRAMS.  LIKELY YOU SHOULD HAVE INCLUDED <ticotsord.h>
#error **** INSTEAD OF <sys/ticotsord.h>.
#error ****
#endif				/* !defined _TICOTSORD_H && !defined __KERNEL__ */
#endif

#if __SVID
#define TCOO_NOPEER		1	/* destiniation address is not listening */
#define TCOO_PEERNOROMMONQ	2	/* no room on connection indication queue */
#define TCOO_PEERBADSTATE	3	/* transport peer in incorrect state */
#define TCOO_PEERINITIATED	4	/* transport peer user-initiated disconnect */
#define TCOO_PROVIDERINITIATED	5	/* transport peer provider-initiated disconnect */
#define TCOO_DEFAULTADDRSZ	4
#else				/* __SVID */
#define TCOO_NOPEER		ECONNREFUSED	/* destiniation address is not listening */
#define TCOO_PEERNOROMMONQ	ECONNREFUSED	/* no room on connection indication queue */
#define TCOO_PEERBADSTATE	ECONNREFUSED	/* transport peer in incorrect state */
#define TCOO_PEERINITIATED	ECONNRESET	/* transport peer user-initiated disconnect */
#define TCOO_PROVIDERINITIATED	ECONNABORTED	/* transport peer provider-initiated disconnect */
#define TCOO_DEFAULTADDRSZ	4
#endif				/* __SVID */

#endif				/* _SYS_TICOTSORD_H */

/** @} */

// vim: com=srO\:/**,mb\:*,ex\:*/,srO\:/*,mb\:*,ex\:*/,b\:TRANS
