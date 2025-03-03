/*
 * Copyright (c) 1994 Cygnus Support.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * and/or other materials related to such
 * distribution and use acknowledge that the software was developed
 * at Cygnus Support, Inc.  Cygnus Support, Inc. may not be used to
 * endorse or promote products derived from this software without
 * specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
#include "test.h"
 one_line_type atanh_vec[] = {
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff33333, 0x33333333},	/* -nan=f(-1.2)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff30a3d, 0x70a3d70a},	/* -nan=f(-1.19)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff2e147, 0xae147ae1},	/* -nan=f(-1.18)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff2b851, 0xeb851eb8},	/* -nan=f(-1.17)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff28f5c, 0x28f5c28f},	/* -nan=f(-1.16)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff26666, 0x66666666},	/* -nan=f(-1.15)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff23d70, 0xa3d70a3d},	/* -nan=f(-1.14)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff2147a, 0xe147ae14},	/* -nan=f(-1.13)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff1eb85, 0x1eb851eb},	/* -nan=f(-1.12)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff1c28f, 0x5c28f5c2},	/* -nan=f(-1.11)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff19999, 0x99999999},	/* -nan=f(-1.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff170a3, 0xd70a3d70},	/* -nan=f(-1.09)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff147ae, 0x147ae147},	/* -nan=f(-1.08)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff11eb8, 0x51eb851e},	/* -nan=f(-1.07)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff0f5c2, 0x8f5c28f5},	/* -nan=f(-1.06)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff0cccc, 0xcccccccc},	/* -nan=f(-1.05)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff0a3d7, 0x0a3d70a3},	/* -nan=f(-1.04)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff07ae1, 0x47ae147a},	/* -nan=f(-1.03)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff051eb, 0x851eb851},	/* -nan=f(-1.02)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff028f5, 0xc28f5c28},	/* -nan=f(-1.01)*/
{64, 0,123,__LINE__, 0xc0325e4f, 0x7b2737fa, 0xbfefffff, 0xfffffffe},	/* -18.3684=f(-1)*/
{64, 0,123,__LINE__, 0xc0052c58, 0x1997cd6c, 0xbfefae14, 0x7ae147ac},	/* -2.64665=f(-0.99)*/
{64, 0,123,__LINE__, 0xc0026167, 0x19161d1e, 0xbfef5c28, 0xf5c28f5a},	/* -2.29756=f(-0.98)*/
{64, 0,123,__LINE__, 0xc000bd05, 0x89d8e2f5, 0xbfef0a3d, 0x70a3d708},	/* -2.0923=f(-0.97)*/
{64, 0,123,__LINE__, 0xbfff2272, 0xae325a49, 0xbfeeb851, 0xeb851eb6},	/* -1.94591=f(-0.96)*/
{64, 0,123,__LINE__, 0xbffd4ef9, 0x68880dca, 0xbfee6666, 0x66666664},	/* -1.83178=f(-0.95)*/
{64, 0,123,__LINE__, 0xbffbcf0c, 0xd4741660, 0xbfee147a, 0xe147ae12},	/* -1.73805=f(-0.94)*/
{64, 0,123,__LINE__, 0xbffa88c3, 0xf9396f8f, 0xbfedc28f, 0x5c28f5c0},	/* -1.65839=f(-0.93)*/
{64, 0,123,__LINE__, 0xbff96ca7, 0x7c922cf0, 0xbfed70a3, 0xd70a3d6e},	/* -1.58903=f(-0.92)*/
{64, 0,123,__LINE__, 0xbff870bd, 0x73abde61, 0xbfed1eb8, 0x51eb851c},	/* -1.52752=f(-0.91)*/
{64, 0,123,__LINE__, 0xbff78e36, 0x0604b325, 0xbfeccccc, 0xccccccca},	/* -1.47222=f(-0.9)*/
{64, 0,123,__LINE__, 0xbff6c035, 0x579d7a69, 0xbfec7ae1, 0x47ae1478},	/* -1.42193=f(-0.89)*/
{63, 0,123,__LINE__, 0xbff60324, 0xf23a6f2a, 0xbfec28f5, 0xc28f5c26},	/* -1.37577=f(-0.88)*/
{64, 0,123,__LINE__, 0xbff5544b, 0x4e482a6e, 0xbfebd70a, 0x3d70a3d4},	/* -1.33308=f(-0.87)*/
{64, 0,123,__LINE__, 0xbff4b18a, 0x2ece7fae, 0xbfeb851e, 0xb851eb82},	/* -1.29334=f(-0.86)*/
{64, 0,123,__LINE__, 0xbff41933, 0xb0e44632, 0xbfeb3333, 0x33333330},	/* -1.25615=f(-0.85)*/
{64, 0,123,__LINE__, 0xbff389ed, 0x3e13256f, 0xbfeae147, 0xae147ade},	/* -1.22117=f(-0.84)*/
{64, 0,123,__LINE__, 0xbff3029b, 0x5180da20, 0xbfea8f5c, 0x28f5c28c},	/* -1.18814=f(-0.83)*/
{64, 0,123,__LINE__, 0xbff28253, 0x079db66d, 0xbfea3d70, 0xa3d70a3a},	/* -1.15682=f(-0.82)*/
{64, 0,123,__LINE__, 0xbff2084f, 0x96886b24, 0xbfe9eb85, 0x1eb851e8},	/* -1.12703=f(-0.81)*/
{64, 0,123,__LINE__, 0xbff193ea, 0x7aad0306, 0xbfe99999, 0x99999996},	/* -1.09861=f(-0.8)*/
{64, 0,123,__LINE__, 0xbff12495, 0x8caee1fa, 0xbfe947ae, 0x147ae144},	/* -1.07143=f(-0.79)*/
{64, 0,123,__LINE__, 0xbff0b9d6, 0x77ddde9c, 0xbfe8f5c2, 0x8f5c28f2},	/* -1.04537=f(-0.78)*/
{64, 0,123,__LINE__, 0xbff05343, 0x33132082, 0xbfe8a3d7, 0x0a3d70a0},	/* -1.02033=f(-0.77)*/
{64, 0,123,__LINE__, 0xbfefe0fe, 0x73ce887b, 0xbfe851eb, 0x851eb84e},	/* -0.996215=f(-0.76)*/
{64, 0,123,__LINE__, 0xbfef2272, 0xae325a4e, 0xbfe7ffff, 0xfffffffc},	/* -0.972955=f(-0.75)*/
{64, 0,123,__LINE__, 0xbfee6a53, 0xbbe5e69d, 0xbfe7ae14, 0x7ae147aa},	/* -0.950479=f(-0.74)*/
{64, 0,123,__LINE__, 0xbfedb822, 0x730ae0f2, 0xbfe75c28, 0xf5c28f58},	/* -0.928727=f(-0.73)*/
{64, 0,123,__LINE__, 0xbfed0b6d, 0x7df77dc2, 0xbfe70a3d, 0x70a3d706},	/* -0.907645=f(-0.72)*/
{64, 0,123,__LINE__, 0xbfec63cf, 0x69c77028, 0xbfe6b851, 0xeb851eb4},	/* -0.887184=f(-0.71)*/
{64, 0,123,__LINE__, 0xbfebc0ed, 0x0947fbe0, 0xbfe66666, 0x66666662},	/* -0.867301=f(-0.7)*/
{64, 0,123,__LINE__, 0xbfeb2274, 0x1ba3da88, 0xbfe6147a, 0xe147ae10},	/* -0.847956=f(-0.69)*/
{64, 0,123,__LINE__, 0xbfea881a, 0x29e5236a, 0xbfe5c28f, 0x5c28f5be},	/* -0.829114=f(-0.68)*/
{64, 0,123,__LINE__, 0xbfe9f19b, 0x912bebd0, 0xbfe570a3, 0xd70a3d6c},	/* -0.810743=f(-0.67)*/
{63, 0,123,__LINE__, 0xbfe95eba, 0xb196930a, 0xbfe51eb8, 0x51eb851a},	/* -0.792814=f(-0.66)*/
{64, 0,123,__LINE__, 0xbfe8cf3f, 0x3b791742, 0xbfe4cccc, 0xccccccc8},	/* -0.775299=f(-0.65)*/
{64, 0,123,__LINE__, 0xbfe842f5, 0x95c3527e, 0xbfe47ae1, 0x47ae1476},	/* -0.758174=f(-0.64)*/
{64, 0,123,__LINE__, 0xbfe7b9ae, 0x5971c669, 0xbfe428f5, 0xc28f5c24},	/* -0.741416=f(-0.63)*/
{64, 0,123,__LINE__, 0xbfe7333d, 0xdeaaa5c9, 0xbfe3d70a, 0x3d70a3d2},	/* -0.725005=f(-0.62)*/
{64, 0,123,__LINE__, 0xbfe6af7b, 0xd8c5a683, 0xbfe3851e, 0xb851eb80},	/* -0.708921=f(-0.61)*/
{64, 0,123,__LINE__, 0xbfe62e42, 0xfefa39e7, 0xbfe33333, 0x3333332e},	/* -0.693147=f(-0.6)*/
{64, 0,123,__LINE__, 0xbfe5af70, 0xbfd423bd, 0xbfe2e147, 0xae147adc},	/* -0.677666=f(-0.59)*/
{64, 0,123,__LINE__, 0xbfe532e4, 0xfddf6862, 0xbfe28f5c, 0x28f5c28a},	/* -0.662463=f(-0.58)*/
{63, 0,123,__LINE__, 0xbfe4b881, 0xd43e4947, 0xbfe23d70, 0xa3d70a38},	/* -0.647523=f(-0.57)*/
{64, 0,123,__LINE__, 0xbfe4402b, 0x6211ad0d, 0xbfe1eb85, 0x1eb851e6},	/* -0.632833=f(-0.56)*/
{64, 0,123,__LINE__, 0xbfe3c9c7, 0x9bc85097, 0xbfe19999, 0x99999994},	/* -0.618381=f(-0.55)*/
{64, 0,123,__LINE__, 0xbfe3553e, 0x218d6107, 0xbfe147ae, 0x147ae142},	/* -0.604156=f(-0.54)*/
{64, 0,123,__LINE__, 0xbfe2e278, 0x1a2d2394, 0xbfe0f5c2, 0x8f5c28f0},	/* -0.590145=f(-0.53)*/
{64, 0,123,__LINE__, 0xbfe27160, 0x11df464f, 0xbfe0a3d7, 0x0a3d709e},	/* -0.57634=f(-0.52)*/
{63, 0,123,__LINE__, 0xbfe201e1, 0xdc7b4c96, 0xbfe051eb, 0x851eb84c},	/* -0.56273=f(-0.51)*/
{63, 0,123,__LINE__, 0xbfe193ea, 0x7aad0303, 0xbfdfffff, 0xfffffff4},	/* -0.549306=f(-0.5)*/
{64, 0,123,__LINE__, 0xbfe12768, 0x01cd9aae, 0xbfdf5c28, 0xf5c28f50},	/* -0.53606=f(-0.49)*/
{64, 0,123,__LINE__, 0xbfe0bc49, 0x861276d0, 0xbfdeb851, 0xeb851eac},	/* -0.522984=f(-0.48)*/
{64, 0,123,__LINE__, 0xbfe0527f, 0x06cd3e5c, 0xbfde147a, 0xe147ae08},	/* -0.51007=f(-0.47)*/
{64, 0,123,__LINE__, 0xbfdfd3f2, 0xb9036ce2, 0xbfdd70a3, 0xd70a3d64},	/* -0.497311=f(-0.46)*/
{64, 0,123,__LINE__, 0xbfdf0554, 0x513b1b3c, 0xbfdccccc, 0xccccccc0},	/* -0.4847=f(-0.45)*/
{63, 0,123,__LINE__, 0xbfde3907, 0x8d49915b, 0xbfdc28f5, 0xc28f5c1c},	/* -0.472231=f(-0.44)*/
{64, 0,123,__LINE__, 0xbfdd6ef2, 0x7d563b9c, 0xbfdb851e, 0xb851eb78},	/* -0.459897=f(-0.43)*/
{63, 0,123,__LINE__, 0xbfdca6fc, 0x71eebdbd, 0xbfdae147, 0xae147ad4},	/* -0.447692=f(-0.42)*/
{63, 0,123,__LINE__, 0xbfdbe10d, 0xe5647d19, 0xbfda3d70, 0xa3d70a30},	/* -0.435611=f(-0.41)*/
{64, 0,123,__LINE__, 0xbfdb1d10, 0x670aae89, 0xbfd99999, 0x9999998c},	/* -0.423649=f(-0.4)*/
{64, 0,123,__LINE__, 0xbfda5aee, 0x8824f81b, 0xbfd8f5c2, 0x8f5c28e8},	/* -0.4118=f(-0.39)*/
{63, 0,123,__LINE__, 0xbfd99a93, 0xca5c285d, 0xbfd851eb, 0x851eb844},	/* -0.40006=f(-0.38)*/
{64, 0,123,__LINE__, 0xbfd8dbec, 0x8f9343fd, 0xbfd7ae14, 0x7ae147a0},	/* -0.388423=f(-0.37)*/
{63, 0,123,__LINE__, 0xbfd81ee6, 0x0afb5009, 0xbfd70a3d, 0x70a3d6fc},	/* -0.376886=f(-0.36)*/
{64, 0,123,__LINE__, 0xbfd7636e, 0x3347e0eb, 0xbfd66666, 0x66666658},	/* -0.365444=f(-0.35)*/
{63, 0,123,__LINE__, 0xbfd6a973, 0xb5e9a617, 0xbfd5c28f, 0x5c28f5b4},	/* -0.354093=f(-0.34)*/
{64, 0,123,__LINE__, 0xbfd5f0e5, 0xeb36f7e5, 0xbfd51eb8, 0x51eb8510},	/* -0.342828=f(-0.33)*/
{64, 0,123,__LINE__, 0xbfd539b4, 0xcb6ce54c, 0xbfd47ae1, 0x47ae146c},	/* -0.331647=f(-0.32)*/
{64, 0,123,__LINE__, 0xbfd483d0, 0xe4756d2d, 0xbfd3d70a, 0x3d70a3c8},	/* -0.320545=f(-0.31)*/
{63, 0,123,__LINE__, 0xbfd3cf2b, 0x50617c85, 0xbfd33333, 0x33333324},	/* -0.30952=f(-0.3)*/
{64, 0,123,__LINE__, 0xbfd31bb5, 0xac870001, 0xbfd28f5c, 0x28f5c280},	/* -0.298566=f(-0.29)*/
{64, 0,123,__LINE__, 0xbfd26962, 0x1134db82, 0xbfd1eb85, 0x1eb851dc},	/* -0.287682=f(-0.28)*/
{64, 0,123,__LINE__, 0xbfd1b823, 0x09eff2ce, 0xbfd147ae, 0x147ae138},	/* -0.276864=f(-0.27)*/
{64, 0,123,__LINE__, 0xbfd107eb, 0x8e2da1d3, 0xbfd0a3d7, 0x0a3d7094},	/* -0.266108=f(-0.26)*/
{64, 0,123,__LINE__, 0xbfd058ae, 0xfa811441, 0xbfcfffff, 0xffffffe0},	/* -0.255413=f(-0.25)*/
{63, 0,123,__LINE__, 0xbfcf54c2, 0x1463c14a, 0xbfceb851, 0xeb851e98},	/* -0.244774=f(-0.24)*/
{64, 0,123,__LINE__, 0xbfcdf9eb, 0xa2664aba, 0xbfcd70a3, 0xd70a3d50},	/* -0.234189=f(-0.23)*/
{64, 0,123,__LINE__, 0xbfcca0c3, 0x6ce651f9, 0xbfcc28f5, 0xc28f5c08},	/* -0.223656=f(-0.22)*/
{64, 0,123,__LINE__, 0xbfcb4932, 0xdcf85d69, 0xbfcae147, 0xae147ac0},	/* -0.213171=f(-0.21)*/
{64, 0,123,__LINE__, 0xbfc9f323, 0xecbf9829, 0xbfc99999, 0x99999978},	/* -0.202733=f(-0.2)*/
{64, 0,123,__LINE__, 0xbfc89e81, 0x1dcd345f, 0xbfc851eb, 0x851eb830},	/* -0.192337=f(-0.19)*/
{64, 0,123,__LINE__, 0xbfc74b35, 0x6ffd34fb, 0xbfc70a3d, 0x70a3d6e8},	/* -0.181983=f(-0.18)*/
{64, 0,123,__LINE__, 0xbfc5f92c, 0x58c6329f, 0xbfc5c28f, 0x5c28f5a0},	/* -0.171667=f(-0.17)*/
{64, 0,123,__LINE__, 0xbfc4a851, 0xbaf27b4a, 0xbfc47ae1, 0x47ae1458},	/* -0.161387=f(-0.16)*/
{64, 0,123,__LINE__, 0xbfc35891, 0xdeb9a38e, 0xbfc33333, 0x33333310},	/* -0.15114=f(-0.15)*/
{64, 0,123,__LINE__, 0xbfc209d9, 0x6a3244e1, 0xbfc1eb85, 0x1eb851c8},	/* -0.140926=f(-0.14)*/
{64, 0,123,__LINE__, 0xbfc0bc15, 0x5a143877, 0xbfc0a3d7, 0x0a3d7080},	/* -0.13074=f(-0.13)*/
{63, 0,123,__LINE__, 0xbfbede65, 0xf5884574, 0xbfbeb851, 0xeb851e71},	/* -0.120581=f(-0.12)*/
{64, 0,123,__LINE__, 0xbfbc463f, 0xc3433519, 0xbfbc28f5, 0xc28f5be2},	/* -0.110447=f(-0.11)*/
{63, 0,123,__LINE__, 0xbfb9af93, 0xcd2343cb, 0xbfb99999, 0x99999953},	/* -0.100335=f(-0.1)*/
{63, 0,123,__LINE__, 0xbfb71a3e, 0x3b7f08b8, 0xbfb70a3d, 0x70a3d6c4},	/* -0.0902442=f(-0.09)*/
{63, 0,123,__LINE__, 0xbfb4861b, 0xa31d09b7, 0xbfb47ae1, 0x47ae1435},	/* -0.0801713=f(-0.08)*/
{64, 0,123,__LINE__, 0xbfb1f308, 0xf96e1d35, 0xbfb1eb85, 0x1eb851a6},	/* -0.0701147=f(-0.07)*/
{64, 0,123,__LINE__, 0xbfaec1c7, 0x12297e00, 0xbfaeb851, 0xeb851e2d},	/* -0.0600722=f(-0.06)*/
{64, 0,123,__LINE__, 0xbfa99f11, 0xcd5f7005, 0xbfa99999, 0x9999990e},	/* -0.0500417=f(-0.05)*/
{64, 0,123,__LINE__, 0xbfa47dad, 0xcbbdb9f7, 0xbfa47ae1, 0x47ae13ef},	/* -0.0400214=f(-0.04)*/
{64, 0,123,__LINE__, 0xbf9ebaae, 0x39e3f8da, 0xbf9eb851, 0xeb851da0},	/* -0.030009=f(-0.03)*/
{64, 0,123,__LINE__, 0xbf947b94, 0x47a9a8d9, 0xbf947ae1, 0x47ae1362},	/* -0.0200027=f(-0.02)*/
{63, 0,123,__LINE__, 0xbf847b0e, 0x059d0365, 0xbf847ae1, 0x47ae1249},	/* -0.0100003=f(-0.01)*/
{64, 0,123,__LINE__, 0x3cd19000, 0x00000000, 0x3cd19000, 0x00000000},	/* 9.74915e-16=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0x3f847b0e, 0x059d07c9, 0x3f847ae1, 0x47ae16ad},	/* 0.0100003=f(0.01)*/
{64, 0,123,__LINE__, 0x3f947b94, 0x47a9ab0b, 0x3f947ae1, 0x47ae1594},	/* 0.0200027=f(0.02)*/
{64, 0,123,__LINE__, 0x3f9ebaae, 0x39e3fb0d, 0x3f9eb851, 0xeb851fd2},	/* 0.030009=f(0.03)*/
{64, 0,123,__LINE__, 0x3fa47dad, 0xcbbdbb10, 0x3fa47ae1, 0x47ae1508},	/* 0.0400214=f(0.04)*/
{64, 0,123,__LINE__, 0x3fa99f11, 0xcd5f711e, 0x3fa99999, 0x99999a27},	/* 0.0500417=f(0.05)*/
{63, 0,123,__LINE__, 0x3faec1c7, 0x12297f1a, 0x3faeb851, 0xeb851f46},	/* 0.0600722=f(0.06)*/
{64, 0,123,__LINE__, 0x3fb1f308, 0xf96e1dc1, 0x3fb1eb85, 0x1eb85232},	/* 0.0701147=f(0.07)*/
{64, 0,123,__LINE__, 0x3fb4861b, 0xa31d0a44, 0x3fb47ae1, 0x47ae14c1},	/* 0.0801713=f(0.08)*/
{64, 0,123,__LINE__, 0x3fb71a3e, 0x3b7f0945, 0x3fb70a3d, 0x70a3d750},	/* 0.0902442=f(0.09)*/
{64, 0,123,__LINE__, 0x3fb9af93, 0xcd234458, 0x3fb99999, 0x999999df},	/* 0.100335=f(0.1)*/
{63, 0,123,__LINE__, 0x3fbc463f, 0xc34335a7, 0x3fbc28f5, 0xc28f5c6e},	/* 0.110447=f(0.11)*/
{64, 0,123,__LINE__, 0x3fbede65, 0xf5884602, 0x3fbeb851, 0xeb851efd},	/* 0.120581=f(0.12)*/
{64, 0,123,__LINE__, 0x3fc0bc15, 0x5a1438be, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.13074=f(0.13)*/
{63, 0,123,__LINE__, 0x3fc209d9, 0x6a324528, 0x3fc1eb85, 0x1eb8520e},	/* 0.140926=f(0.14)*/
{63, 0,123,__LINE__, 0x3fc35891, 0xdeb9a3d5, 0x3fc33333, 0x33333356},	/* 0.15114=f(0.15)*/
{63, 0,123,__LINE__, 0x3fc4a851, 0xbaf27b92, 0x3fc47ae1, 0x47ae149e},	/* 0.161387=f(0.16)*/
{63, 0,123,__LINE__, 0x3fc5f92c, 0x58c632e7, 0x3fc5c28f, 0x5c28f5e6},	/* 0.171667=f(0.17)*/
{63, 0,123,__LINE__, 0x3fc74b35, 0x6ffd3543, 0x3fc70a3d, 0x70a3d72e},	/* 0.181983=f(0.18)*/
{64, 0,123,__LINE__, 0x3fc89e81, 0x1dcd34a8, 0x3fc851eb, 0x851eb876},	/* 0.192337=f(0.19)*/
{63, 0,123,__LINE__, 0x3fc9f323, 0xecbf9872, 0x3fc99999, 0x999999be},	/* 0.202733=f(0.2)*/
{64, 0,123,__LINE__, 0x3fcb4932, 0xdcf85db2, 0x3fcae147, 0xae147b06},	/* 0.213171=f(0.21)*/
{63, 0,123,__LINE__, 0x3fcca0c3, 0x6ce65243, 0x3fcc28f5, 0xc28f5c4e},	/* 0.223656=f(0.22)*/
{64, 0,123,__LINE__, 0x3fcdf9eb, 0xa2664b04, 0x3fcd70a3, 0xd70a3d96},	/* 0.234189=f(0.23)*/
{64, 0,123,__LINE__, 0x3fcf54c2, 0x1463c194, 0x3fceb851, 0xeb851ede},	/* 0.244774=f(0.24)*/
{64, 0,123,__LINE__, 0x3fd058ae, 0xfa811466, 0x3fd00000, 0x00000013},	/* 0.255413=f(0.25)*/
{64, 0,123,__LINE__, 0x3fd107eb, 0x8e2da1f9, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.266108=f(0.26)*/
{64, 0,123,__LINE__, 0x3fd1b823, 0x09eff2f4, 0x3fd147ae, 0x147ae15b},	/* 0.276864=f(0.27)*/
{64, 0,123,__LINE__, 0x3fd26962, 0x1134dba8, 0x3fd1eb85, 0x1eb851ff},	/* 0.287682=f(0.28)*/
{64, 0,123,__LINE__, 0x3fd31bb5, 0xac870027, 0x3fd28f5c, 0x28f5c2a3},	/* 0.298566=f(0.29)*/
{64, 0,123,__LINE__, 0x3fd3cf2b, 0x50617cab, 0x3fd33333, 0x33333347},	/* 0.30952=f(0.3)*/
{63, 0,123,__LINE__, 0x3fd483d0, 0xe4756d54, 0x3fd3d70a, 0x3d70a3eb},	/* 0.320545=f(0.31)*/
{64, 0,123,__LINE__, 0x3fd539b4, 0xcb6ce573, 0x3fd47ae1, 0x47ae148f},	/* 0.331647=f(0.32)*/
{64, 0,123,__LINE__, 0x3fd5f0e5, 0xeb36f80c, 0x3fd51eb8, 0x51eb8533},	/* 0.342828=f(0.33)*/
{64, 0,123,__LINE__, 0x3fd6a973, 0xb5e9a63e, 0x3fd5c28f, 0x5c28f5d7},	/* 0.354093=f(0.34)*/
{64, 0,123,__LINE__, 0x3fd7636e, 0x3347e113, 0x3fd66666, 0x6666667b},	/* 0.365444=f(0.35)*/
{63, 0,123,__LINE__, 0x3fd81ee6, 0x0afb5031, 0x3fd70a3d, 0x70a3d71f},	/* 0.376886=f(0.36)*/
{63, 0,123,__LINE__, 0x3fd8dbec, 0x8f934426, 0x3fd7ae14, 0x7ae147c3},	/* 0.388423=f(0.37)*/
{63, 0,123,__LINE__, 0x3fd99a93, 0xca5c2886, 0x3fd851eb, 0x851eb867},	/* 0.40006=f(0.38)*/
{63, 0,123,__LINE__, 0x3fda5aee, 0x8824f844, 0x3fd8f5c2, 0x8f5c290b},	/* 0.4118=f(0.39)*/
{63, 0,123,__LINE__, 0x3fdb1d10, 0x670aaeb3, 0x3fd99999, 0x999999af},	/* 0.423649=f(0.4)*/
{64, 0,123,__LINE__, 0x3fdbe10d, 0xe5647d43, 0x3fda3d70, 0xa3d70a53},	/* 0.435611=f(0.41)*/
{63, 0,123,__LINE__, 0x3fdca6fc, 0x71eebde7, 0x3fdae147, 0xae147af7},	/* 0.447692=f(0.42)*/
{64, 0,123,__LINE__, 0x3fdd6ef2, 0x7d563bc7, 0x3fdb851e, 0xb851eb9b},	/* 0.459897=f(0.43)*/
{63, 0,123,__LINE__, 0x3fde3907, 0x8d499186, 0x3fdc28f5, 0xc28f5c3f},	/* 0.472231=f(0.44)*/
{64, 0,123,__LINE__, 0x3fdf0554, 0x513b1b68, 0x3fdccccc, 0xcccccce3},	/* 0.4847=f(0.45)*/
{63, 0,123,__LINE__, 0x3fdfd3f2, 0xb9036d0e, 0x3fdd70a3, 0xd70a3d87},	/* 0.497311=f(0.46)*/
{63, 0,123,__LINE__, 0x3fe0527f, 0x06cd3e72, 0x3fde147a, 0xe147ae2b},	/* 0.51007=f(0.47)*/
{63, 0,123,__LINE__, 0x3fe0bc49, 0x861276e7, 0x3fdeb851, 0xeb851ecf},	/* 0.522984=f(0.48)*/
{64, 0,123,__LINE__, 0x3fe12768, 0x01cd9ac5, 0x3fdf5c28, 0xf5c28f73},	/* 0.53606=f(0.49)*/
{64, 0,123,__LINE__, 0x3fe193ea, 0x7aad0319, 0x3fe00000, 0x0000000b},	/* 0.549306=f(0.5)*/
{63, 0,123,__LINE__, 0x3fe201e1, 0xdc7b4cad, 0x3fe051eb, 0x851eb85d},	/* 0.56273=f(0.51)*/
{64, 0,123,__LINE__, 0x3fe27160, 0x11df4666, 0x3fe0a3d7, 0x0a3d70af},	/* 0.57634=f(0.52)*/
{64, 0,123,__LINE__, 0x3fe2e278, 0x1a2d23ac, 0x3fe0f5c2, 0x8f5c2901},	/* 0.590145=f(0.53)*/
{63, 0,123,__LINE__, 0x3fe3553e, 0x218d611f, 0x3fe147ae, 0x147ae153},	/* 0.604156=f(0.54)*/
{64, 0,123,__LINE__, 0x3fe3c9c7, 0x9bc850af, 0x3fe19999, 0x999999a5},	/* 0.618381=f(0.55)*/
{64, 0,123,__LINE__, 0x3fe4402b, 0x6211ad26, 0x3fe1eb85, 0x1eb851f7},	/* 0.632833=f(0.56)*/
{64, 0,123,__LINE__, 0x3fe4b881, 0xd43e4961, 0x3fe23d70, 0xa3d70a49},	/* 0.647523=f(0.57)*/
{64, 0,123,__LINE__, 0x3fe532e4, 0xfddf687c, 0x3fe28f5c, 0x28f5c29b},	/* 0.662463=f(0.58)*/
{64, 0,123,__LINE__, 0x3fe5af70, 0xbfd423d7, 0x3fe2e147, 0xae147aed},	/* 0.677666=f(0.59)*/
{64, 0,123,__LINE__, 0x3fe62e42, 0xfefa3a02, 0x3fe33333, 0x3333333f},	/* 0.693147=f(0.6)*/
{64, 0,123,__LINE__, 0x3fe6af7b, 0xd8c5a69e, 0x3fe3851e, 0xb851eb91},	/* 0.708921=f(0.61)*/
{64, 0,123,__LINE__, 0x3fe7333d, 0xdeaaa5e5, 0x3fe3d70a, 0x3d70a3e3},	/* 0.725005=f(0.62)*/
{63, 0,123,__LINE__, 0x3fe7b9ae, 0x5971c686, 0x3fe428f5, 0xc28f5c35},	/* 0.741416=f(0.63)*/
{64, 0,123,__LINE__, 0x3fe842f5, 0x95c3529b, 0x3fe47ae1, 0x47ae1487},	/* 0.758174=f(0.64)*/
{64, 0,123,__LINE__, 0x3fe8cf3f, 0x3b791760, 0x3fe4cccc, 0xccccccd9},	/* 0.775299=f(0.65)*/
{63, 0,123,__LINE__, 0x3fe95eba, 0xb1969329, 0x3fe51eb8, 0x51eb852b},	/* 0.792814=f(0.66)*/
{63, 0,123,__LINE__, 0x3fe9f19b, 0x912bebef, 0x3fe570a3, 0xd70a3d7d},	/* 0.810743=f(0.67)*/
{64, 0,123,__LINE__, 0x3fea881a, 0x29e5238a, 0x3fe5c28f, 0x5c28f5cf},	/* 0.829114=f(0.68)*/
{64, 0,123,__LINE__, 0x3feb2274, 0x1ba3daa8, 0x3fe6147a, 0xe147ae21},	/* 0.847956=f(0.69)*/
{64, 0,123,__LINE__, 0x3febc0ed, 0x0947fc02, 0x3fe66666, 0x66666673},	/* 0.867301=f(0.7)*/
{64, 0,123,__LINE__, 0x3fec63cf, 0x69c7704a, 0x3fe6b851, 0xeb851ec5},	/* 0.887184=f(0.71)*/
{64, 0,123,__LINE__, 0x3fed0b6d, 0x7df77de5, 0x3fe70a3d, 0x70a3d717},	/* 0.907645=f(0.72)*/
{64, 0,123,__LINE__, 0x3fedb822, 0x730ae116, 0x3fe75c28, 0xf5c28f69},	/* 0.928727=f(0.73)*/
{64, 0,123,__LINE__, 0x3fee6a53, 0xbbe5e6c3, 0x3fe7ae14, 0x7ae147bb},	/* 0.950479=f(0.74)*/
{64, 0,123,__LINE__, 0x3fef2272, 0xae325a75, 0x3fe80000, 0x0000000d},	/* 0.972955=f(0.75)*/
{64, 0,123,__LINE__, 0x3fefe0fe, 0x73ce88a3, 0x3fe851eb, 0x851eb85f},	/* 0.996215=f(0.76)*/
{64, 0,123,__LINE__, 0x3ff05343, 0x33132097, 0x3fe8a3d7, 0x0a3d70b1},	/* 1.02033=f(0.77)*/
{64, 0,123,__LINE__, 0x3ff0b9d6, 0x77dddeb2, 0x3fe8f5c2, 0x8f5c2903},	/* 1.04537=f(0.78)*/
{64, 0,123,__LINE__, 0x3ff12495, 0x8caee211, 0x3fe947ae, 0x147ae155},	/* 1.07143=f(0.79)*/
{64, 0,123,__LINE__, 0x3ff193ea, 0x7aad031d, 0x3fe99999, 0x999999a7},	/* 1.09861=f(0.8)*/
{64, 0,123,__LINE__, 0x3ff2084f, 0x96886b3c, 0x3fe9eb85, 0x1eb851f9},	/* 1.12703=f(0.81)*/
{64, 0,123,__LINE__, 0x3ff28253, 0x079db687, 0x3fea3d70, 0xa3d70a4b},	/* 1.15682=f(0.82)*/
{64, 0,123,__LINE__, 0x3ff3029b, 0x5180da3b, 0x3fea8f5c, 0x28f5c29d},	/* 1.18814=f(0.83)*/
{64, 0,123,__LINE__, 0x3ff389ed, 0x3e13258c, 0x3feae147, 0xae147aef},	/* 1.22117=f(0.84)*/
{64, 0,123,__LINE__, 0x3ff41933, 0xb0e44651, 0x3feb3333, 0x33333341},	/* 1.25615=f(0.85)*/
{64, 0,123,__LINE__, 0x3ff4b18a, 0x2ece7fce, 0x3feb851e, 0xb851eb93},	/* 1.29334=f(0.86)*/
{64, 0,123,__LINE__, 0x3ff5544b, 0x4e482a91, 0x3febd70a, 0x3d70a3e5},	/* 1.33308=f(0.87)*/
{64, 0,123,__LINE__, 0x3ff60324, 0xf23a6f50, 0x3fec28f5, 0xc28f5c37},	/* 1.37577=f(0.88)*/
{64, 0,123,__LINE__, 0x3ff6c035, 0x579d7a92, 0x3fec7ae1, 0x47ae1489},	/* 1.42193=f(0.89)*/
{64, 0,123,__LINE__, 0x3ff78e36, 0x0604b352, 0x3feccccc, 0xccccccdb},	/* 1.47222=f(0.9)*/
{64, 0,123,__LINE__, 0x3ff870bd, 0x73abde93, 0x3fed1eb8, 0x51eb852d},	/* 1.52752=f(0.91)*/
{64, 0,123,__LINE__, 0x3ff96ca7, 0x7c922d27, 0x3fed70a3, 0xd70a3d7f},	/* 1.58903=f(0.92)*/
{64, 0,123,__LINE__, 0x3ffa88c3, 0xf9396fce, 0x3fedc28f, 0x5c28f5d1},	/* 1.65839=f(0.93)*/
{64, 0,123,__LINE__, 0x3ffbcf0c, 0xd47416a9, 0x3fee147a, 0xe147ae23},	/* 1.73805=f(0.94)*/
{64, 0,123,__LINE__, 0x3ffd4ef9, 0x68880e21, 0x3fee6666, 0x66666675},	/* 1.83178=f(0.95)*/
{64, 0,123,__LINE__, 0x3fff2272, 0xae325ab5, 0x3feeb851, 0xeb851ec7},	/* 1.94591=f(0.96)*/
{64, 0,123,__LINE__, 0x4000bd05, 0x89d8e33d, 0x3fef0a3d, 0x70a3d719},	/* 2.0923=f(0.97)*/
{64, 0,123,__LINE__, 0x40026167, 0x19161d89, 0x3fef5c28, 0xf5c28f6b},	/* 2.29756=f(0.98)*/
{64, 0,123,__LINE__, 0x40052c58, 0x1997ce42, 0x3fefae14, 0x7ae147bd},	/* 2.64665=f(0.99)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff00000, 0x00000007},	/* -nan=f(1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff028f5, 0xc28f5c30},	/* -nan=f(1.01)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff051eb, 0x851eb859},	/* -nan=f(1.02)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff07ae1, 0x47ae1482},	/* -nan=f(1.03)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff0a3d7, 0x0a3d70ab},	/* -nan=f(1.04)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff0cccc, 0xccccccd4},	/* -nan=f(1.05)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff0f5c2, 0x8f5c28fd},	/* -nan=f(1.06)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff11eb8, 0x51eb8526},	/* -nan=f(1.07)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff147ae, 0x147ae14f},	/* -nan=f(1.08)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff170a3, 0xd70a3d78},	/* -nan=f(1.09)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff19999, 0x999999a1},	/* -nan=f(1.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff1c28f, 0x5c28f5ca},	/* -nan=f(1.11)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff1eb85, 0x1eb851f3},	/* -nan=f(1.12)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff2147a, 0xe147ae1c},	/* -nan=f(1.13)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff23d70, 0xa3d70a45},	/* -nan=f(1.14)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff26666, 0x6666666e},	/* -nan=f(1.15)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff28f5c, 0x28f5c297},	/* -nan=f(1.16)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff2b851, 0xeb851ec0},	/* -nan=f(1.17)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff2e147, 0xae147ae9},	/* -nan=f(1.18)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff30a3d, 0x70a3d712},	/* -nan=f(1.19)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc01921fb, 0x54442d18},	/* -nan=f(-6.28319)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc012d97c, 0x7f3321d2},	/* -nan=f(-4.71239)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc00921fb, 0x54442d18},	/* -nan=f(-3.14159)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff921fb, 0x54442d18},	/* -nan=f(-1.5708)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x3ff921fb, 0x54442d18},	/* -nan=f(1.5708)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x400921fb, 0x54442d18},	/* -nan=f(3.14159)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x4012d97c, 0x7f3321d2},	/* -nan=f(4.71239)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc03e0000, 0x00000000},	/* -nan=f(-30)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc03c4ccc, 0xcccccccd},	/* -nan=f(-28.3)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc03a9999, 0x9999999a},	/* -nan=f(-26.6)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc038e666, 0x66666667},	/* -nan=f(-24.9)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0373333, 0x33333334},	/* -nan=f(-23.2)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0358000, 0x00000001},	/* -nan=f(-21.5)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc033cccc, 0xccccccce},	/* -nan=f(-19.8)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0321999, 0x9999999b},	/* -nan=f(-18.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0306666, 0x66666668},	/* -nan=f(-16.4)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc02d6666, 0x6666666a},	/* -nan=f(-14.7)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc02a0000, 0x00000004},	/* -nan=f(-13)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0269999, 0x9999999e},	/* -nan=f(-11.3)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0233333, 0x33333338},	/* -nan=f(-9.6)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc01f9999, 0x999999a3},	/* -nan=f(-7.9)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc018cccc, 0xccccccd6},	/* -nan=f(-6.2)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0120000, 0x00000009},	/* -nan=f(-4.5)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc0066666, 0x66666678},	/* -nan=f(-2.8)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff19999, 0x999999bd},	/* -nan=f(-1.1)*/
{64, 0,123,__LINE__, 0x3fe62e42, 0xfefa3980, 0x3fe33333, 0x333332ec},	/* 0.693147=f(0.6)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x40026666, 0x66666654},	/* -nan=f(2.3)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x400fffff, 0xffffffee},	/* -nan=f(4)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x4016cccc, 0xccccccc4},	/* -nan=f(5.7)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x401d9999, 0x99999991},	/* -nan=f(7.4)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x40223333, 0x3333332f},	/* -nan=f(9.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x40259999, 0x99999995},	/* -nan=f(10.8)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x4028ffff, 0xfffffffb},	/* -nan=f(12.5)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x402c6666, 0x66666661},	/* -nan=f(14.2)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x402fcccc, 0xccccccc7},	/* -nan=f(15.9)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x40319999, 0x99999997},	/* -nan=f(17.6)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x40334ccc, 0xccccccca},	/* -nan=f(19.3)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x4034ffff, 0xfffffffd},	/* -nan=f(21)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x4036b333, 0x33333330},	/* -nan=f(22.7)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x40386666, 0x66666663},	/* -nan=f(24.4)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x403a1999, 0x99999996},	/* -nan=f(26.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x403bcccc, 0xccccccc9},	/* -nan=f(27.8)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0x403d7fff, 0xfffffffc},	/* -nan=f(29.5)*/
{0},
};
void test_atanh(m)   {run_vector_1(m,atanh_vec,(char *)(atanh),"atanh","dd");   }	
