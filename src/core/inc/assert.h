/*
 *	This file is a part of the tcp-striper project.
 *	Copyright (c) 2004-2011 Alex Pankratov.
 *
 *	http://github.com/apankrat/tcp-striper
 */

/*
 *	The program is distributed under terms of BSD license.
 *	You can obtain the copy of the license by visiting:
 *
 *	http://www.opensource.org/licenses/bsd-license.php
 */

#ifndef _ASSERT_H_tcpstriper_
#define _ASSERT_H_tcpstriper_

#define assert(exp)  if (! (exp)) on_assert( #exp, __FILE__, __LINE__ )

extern void (*on_assert)(const char * exp, const char * file, int line);

#endif