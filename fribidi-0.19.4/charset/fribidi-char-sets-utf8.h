/* FriBidi
 * fribidi-char-sets-utf8.h - UTF-8 character set conversion routines
 *
 * $Id: fribidi-char-sets-utf8.h,v 1.2 2004-06-09 14:59:21 behdad Exp $
 * $Author: behdad $
 * $Date: 2004-06-09 14:59:21 $
 * $Revision: 1.2 $
 * $Source: /home/behdad/src/fdo/fribidi/togit/git/../fribidi/fribidi2/charset/fribidi-char-sets-utf8.h,v $
 *
 * Authors:
 *   Behdad Esfahbod, 2001, 2002, 2004
 *   Dov Grobgeld, 1999, 2000
 *
 * Copyright (C) 2004 Sharif FarsiWeb, Inc
 * Copyright (C) 2001,2002 Behdad Esfahbod
 * Copyright (C) 1999,2000 Dov Grobgeld
 * 
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library, in a file named COPYING; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307, USA
 * 
 * For licensing issues, contact <license@farsiweb.info>.
 */

#ifndef _FRIBIDI_CHAR_SETS_UTF8_H
#define _FRIBIDI_CHAR_SETS_UTF8_H

#include "fribidi-common.h"

#include "fribidi-types.h"

#include "fribidi-begindecls.h"

#define fribidi_char_set_name_utf8 "UTF-8"
#define fribidi_char_set_title_utf8 "UTF-8 (Unicode)"
#define fribidi_char_set_desc_utf8 NULL

#define fribidi_utf8_to_unicode FRIBIDI_NAMESPACE(utf8_to_unicode)
FriBidiStrIndex fribidi_utf8_to_unicode (
  const char *s,
  FriBidiStrIndex length,
  FriBidiChar *us
);

#define fribidi_unicode_to_utf8 FRIBIDI_NAMESPACE(unicode_to_utf8)
FriBidiStrIndex fribidi_unicode_to_utf8 (
  const FriBidiChar *us,
  FriBidiStrIndex length,
  char *s
);

#include "fribidi-enddecls.h"

#endif /* !_FRIBIDI_CHAR_SETS_UTF8_H */
/* Editor directions:
 * vim:textwidth=78:tabstop=8:shiftwidth=2:autoindent:cindent
 */
