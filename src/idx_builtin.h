/*
 *  Hamlib Interface - setting2idx for builtin constants
 *  Copyright (c) 2002 by Stephane Fillod and Frank Singleton
 *
 *	$Id: idx_builtin.h,v 1.1 2002-11-04 22:23:09 fillods Exp $
 *
 *   This library is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Library General Public License as
 *   published by the Free Software Foundation; either version 2 of
 *   the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Library General Public License for more details.
 *
 *   You should have received a copy of the GNU Library General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef _IDX_BUILTIN_H
#define _IDX_BUILTIN_H 1

#include <hamlib/rig.h>

/*
 * only for Hamlib internal use (backend caps)
 * This is a rig_setting2idx version that works for builtin_constant,
 * hence allowing its use in array initializers. The compiler simplifies
 * everything at compile time.
 *
 * struct rig_caps foo = {
 * 	.level_gran =  { [LVL_PREAMP] = { .min = 0, .max = 20, .step = 10 } },
 * }
 *
 * Of course, it can't work with setting2idx_builtin(RIG_LEVEL_XX|RIG_LEVEL_YY)
 */

#define setting2idx_builtin(s)	((s)==(1<<0)?0:	\
				 (s)==(1<<1)?1:	\
				 (s)==(1<<2)?2:	\
				 (s)==(1<<3)?3:	\
				 (s)==(1<<4)?4:	\
				 (s)==(1<<5)?5:	\
				 (s)==(1<<6)?6:	\
				 (s)==(1<<7)?7:	\
				 (s)==(1<<8)?8:	\
				 (s)==(1<<9)?9:	\
				 (s)==(1<<10)?10:	\
				 (s)==(1<<11)?11:	\
				 (s)==(1<<12)?12:	\
				 (s)==(1<<13)?13:	\
				 (s)==(1<<14)?14:	\
				 (s)==(1<<15)?15:	\
				 (s)==(1<<16)?16:	\
				 (s)==(1<<17)?17:	\
				 (s)==(1<<18)?18:	\
				 (s)==(1<<19)?19:	\
				 (s)==(1<<20)?20:	\
				 (s)==(1<<21)?21:	\
				 (s)==(1<<22)?22:	\
				 (s)==(1<<23)?23:	\
				 (s)==(1<<24)?24:	\
				 (s)==(1<<25)?25:	\
				 (s)==(1<<26)?26:	\
				 (s)==(1<<27)?27:	\
				 (s)==(1<<28)?28:	\
				 (s)==(1<<29)?29:	\
				 (s)==(1<<30)?30:	\
				 (s)==(1<<31)?31:	\
				 (s)==(1<<32)?32:	\
				 (s)==(1<<33)?33:	\
				 (s)==(1<<34)?34:	\
				 (s)==(1<<35)?35:	\
				 (s)==(1<<36)?36:	\
				 (s)==(1<<37)?37:	\
				 (s)==(1<<38)?38:	\
				 (s)==(1<<39)?39:	\
				 (s)==(1<<40)?40:	\
				 (s)==(1<<41)?41:	\
				 (s)==(1<<42)?42:	\
				 (s)==(1<<43)?43:	\
				 (s)==(1<<44)?44:	\
				 (s)==(1<<45)?45:	\
				 (s)==(1<<46)?46:	\
				 (s)==(1<<47)?47:	\
				 (s)==(1<<48)?48:	\
				 (s)==(1<<49)?49:	\
				 (s)==(1<<50)?50:	\
				 (s)==(1<<51)?51:	\
				 (s)==(1<<52)?52:	\
				 (s)==(1<<53)?53:	\
				 (s)==(1<<54)?54:	\
				 (s)==(1<<55)?55:	\
				 (s)==(1<<56)?56:	\
				 (s)==(1<<57)?57:	\
				 (s)==(1<<58)?58:	\
				 (s)==(1<<59)?59:	\
				 (s)==(1<<60)?60:	\
				 (s)==(1<<61)?61:	\
				 (s)==(1<<62)?62:	\
				 (s)==(1<<63)?63:	\
				 0 \
				)

#define LVL_PREAMP	setting2idx_builtin(RIG_LEVEL_PREAMP)
#define LVL_ATT		setting2idx_builtin(RIG_LEVEL_ATT)
#define LVL_VOX		setting2idx_builtin(RIG_LEVEL_VOX)
#define LVL_AF		setting2idx_builtin(RIG_LEVEL_AF)
#define LVL_RF		setting2idx_builtin(RIG_LEVEL_RF)
#define LVL_SQL		setting2idx_builtin(RIG_LEVEL_SQL)
#define LVL_IF		setting2idx_builtin(RIG_LEVEL_IF)
#define LVL_APF		setting2idx_builtin(RIG_LEVEL_APF)
#define LVL_NR		setting2idx_builtin(RIG_LEVEL_NR)
#define LVL_PBT_IN	setting2idx_builtin(RIG_LEVEL_PBT_IN)
#define LVL_PBT_OUT	setting2idx_builtin(RIG_LEVEL_PBT_OUT)
#define LVL_CWPITCH	setting2idx_builtin(RIG_LEVEL_CWPITCH)
#define LVL_RFPOWER	setting2idx_builtin(RIG_LEVEL_RFPOWER)
#define LVL_MICGAIN	setting2idx_builtin(RIG_LEVEL_MICGAIN)
#define LVL_KEYSPD	setting2idx_builtin(RIG_LEVEL_KEYSPD)
#define LVL_NOTCHF	setting2idx_builtin(RIG_LEVEL_NOTCHF)
#define LVL_COMP	setting2idx_builtin(RIG_LEVEL_COMP)
#define LVL_AGC		setting2idx_builtin(RIG_LEVEL_AGC)
#define LVL_BKINDL	setting2idx_builtin(RIG_LEVEL_BKINDL)
#define LVL_BALANCE	setting2idx_builtin(RIG_LEVEL_BALANCE)
#define LVL_METER	setting2idx_builtin(RIG_LEVEL_METER)
#define LVL_VOXGAIN	setting2idx_builtin(RIG_LEVEL_VOXGAIN)
#define LVL_VOXDELAY	setting2idx_builtin(RIG_LEVEL_VOXDELAY)
#define LVL_ANTIVOX	setting2idx_builtin(RIG_LEVEL_ANTIVOX)

#define LVL_SQLSTAT	setting2idx_builtin(RIG_LEVEL_SQLSTAT)
#define LVL_SWR		setting2idx_builtin(RIG_LEVEL_SWR)
#define LVL_ALC		setting2idx_builtin(RIG_LEVEL_ALC)
#define LVL_STRENGTH	setting2idx_builtin(RIG_LEVEL_STRENGTH)

#define PARM_ANN	setting2idx_builtin(RIG_PARM_ANN)
#define PARM_APO	setting2idx_builtin(RIG_PARM_APO)
#define PARM_BACKLIGHT	setting2idx_builtin(RIG_PARM_BACKLIGHT)
#define PARM_BEEP	setting2idx_builtin(RIG_PARM_BEEP)
#define PARM_TIME	setting2idx_builtin(RIG_PARM_TIME)
#define PARM_BAT	setting2idx_builtin(RIG_PARM_BAT)
#define PARM_KEYLIGHT	setting2idx_builtin(RIG_PARM_KEYLIGHT)


#endif	/* _IDX_BUILTIN_H */
