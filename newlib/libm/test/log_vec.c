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
 one_line_type log_vec[] = {
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
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfefffff, 0xfffffffe},	/* -nan=f(-1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfefae14, 0x7ae147ac},	/* -nan=f(-0.99)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfef5c28, 0xf5c28f5a},	/* -nan=f(-0.98)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfef0a3d, 0x70a3d708},	/* -nan=f(-0.97)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfeeb851, 0xeb851eb6},	/* -nan=f(-0.96)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfee6666, 0x66666664},	/* -nan=f(-0.95)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfee147a, 0xe147ae12},	/* -nan=f(-0.94)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfedc28f, 0x5c28f5c0},	/* -nan=f(-0.93)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfed70a3, 0xd70a3d6e},	/* -nan=f(-0.92)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfed1eb8, 0x51eb851c},	/* -nan=f(-0.91)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfeccccc, 0xccccccca},	/* -nan=f(-0.9)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfec7ae1, 0x47ae1478},	/* -nan=f(-0.89)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfec28f5, 0xc28f5c26},	/* -nan=f(-0.88)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfebd70a, 0x3d70a3d4},	/* -nan=f(-0.87)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfeb851e, 0xb851eb82},	/* -nan=f(-0.86)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfeb3333, 0x33333330},	/* -nan=f(-0.85)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfeae147, 0xae147ade},	/* -nan=f(-0.84)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfea8f5c, 0x28f5c28c},	/* -nan=f(-0.83)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfea3d70, 0xa3d70a3a},	/* -nan=f(-0.82)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe9eb85, 0x1eb851e8},	/* -nan=f(-0.81)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe99999, 0x99999996},	/* -nan=f(-0.8)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe947ae, 0x147ae144},	/* -nan=f(-0.79)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe8f5c2, 0x8f5c28f2},	/* -nan=f(-0.78)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe8a3d7, 0x0a3d70a0},	/* -nan=f(-0.77)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe851eb, 0x851eb84e},	/* -nan=f(-0.76)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe7ffff, 0xfffffffc},	/* -nan=f(-0.75)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe7ae14, 0x7ae147aa},	/* -nan=f(-0.74)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe75c28, 0xf5c28f58},	/* -nan=f(-0.73)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe70a3d, 0x70a3d706},	/* -nan=f(-0.72)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe6b851, 0xeb851eb4},	/* -nan=f(-0.71)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe66666, 0x66666662},	/* -nan=f(-0.7)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe6147a, 0xe147ae10},	/* -nan=f(-0.69)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe5c28f, 0x5c28f5be},	/* -nan=f(-0.68)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe570a3, 0xd70a3d6c},	/* -nan=f(-0.67)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe51eb8, 0x51eb851a},	/* -nan=f(-0.66)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe4cccc, 0xccccccc8},	/* -nan=f(-0.65)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe47ae1, 0x47ae1476},	/* -nan=f(-0.64)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe428f5, 0xc28f5c24},	/* -nan=f(-0.63)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe3d70a, 0x3d70a3d2},	/* -nan=f(-0.62)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe3851e, 0xb851eb80},	/* -nan=f(-0.61)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe33333, 0x3333332e},	/* -nan=f(-0.6)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe2e147, 0xae147adc},	/* -nan=f(-0.59)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe28f5c, 0x28f5c28a},	/* -nan=f(-0.58)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe23d70, 0xa3d70a38},	/* -nan=f(-0.57)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe1eb85, 0x1eb851e6},	/* -nan=f(-0.56)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe19999, 0x99999994},	/* -nan=f(-0.55)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe147ae, 0x147ae142},	/* -nan=f(-0.54)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe0f5c2, 0x8f5c28f0},	/* -nan=f(-0.53)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe0a3d7, 0x0a3d709e},	/* -nan=f(-0.52)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfe051eb, 0x851eb84c},	/* -nan=f(-0.51)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdfffff, 0xfffffff4},	/* -nan=f(-0.5)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdf5c28, 0xf5c28f50},	/* -nan=f(-0.49)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdeb851, 0xeb851eac},	/* -nan=f(-0.48)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfde147a, 0xe147ae08},	/* -nan=f(-0.47)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdd70a3, 0xd70a3d64},	/* -nan=f(-0.46)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdccccc, 0xccccccc0},	/* -nan=f(-0.45)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdc28f5, 0xc28f5c1c},	/* -nan=f(-0.44)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdb851e, 0xb851eb78},	/* -nan=f(-0.43)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfdae147, 0xae147ad4},	/* -nan=f(-0.42)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfda3d70, 0xa3d70a30},	/* -nan=f(-0.41)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd99999, 0x9999998c},	/* -nan=f(-0.4)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd8f5c2, 0x8f5c28e8},	/* -nan=f(-0.39)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd851eb, 0x851eb844},	/* -nan=f(-0.38)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd7ae14, 0x7ae147a0},	/* -nan=f(-0.37)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd70a3d, 0x70a3d6fc},	/* -nan=f(-0.36)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd66666, 0x66666658},	/* -nan=f(-0.35)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd5c28f, 0x5c28f5b4},	/* -nan=f(-0.34)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd51eb8, 0x51eb8510},	/* -nan=f(-0.33)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd47ae1, 0x47ae146c},	/* -nan=f(-0.32)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd3d70a, 0x3d70a3c8},	/* -nan=f(-0.31)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd33333, 0x33333324},	/* -nan=f(-0.3)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd28f5c, 0x28f5c280},	/* -nan=f(-0.29)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd1eb85, 0x1eb851dc},	/* -nan=f(-0.28)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd147ae, 0x147ae138},	/* -nan=f(-0.27)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfd0a3d7, 0x0a3d7094},	/* -nan=f(-0.26)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfcfffff, 0xffffffe0},	/* -nan=f(-0.25)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfceb851, 0xeb851e98},	/* -nan=f(-0.24)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfcd70a3, 0xd70a3d50},	/* -nan=f(-0.23)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfcc28f5, 0xc28f5c08},	/* -nan=f(-0.22)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfcae147, 0xae147ac0},	/* -nan=f(-0.21)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc99999, 0x99999978},	/* -nan=f(-0.2)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc851eb, 0x851eb830},	/* -nan=f(-0.19)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc70a3d, 0x70a3d6e8},	/* -nan=f(-0.18)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc5c28f, 0x5c28f5a0},	/* -nan=f(-0.17)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc47ae1, 0x47ae1458},	/* -nan=f(-0.16)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc33333, 0x33333310},	/* -nan=f(-0.15)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc1eb85, 0x1eb851c8},	/* -nan=f(-0.14)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfc0a3d7, 0x0a3d7080},	/* -nan=f(-0.13)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfbeb851, 0xeb851e71},	/* -nan=f(-0.12)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfbc28f5, 0xc28f5be2},	/* -nan=f(-0.11)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfb99999, 0x99999953},	/* -nan=f(-0.1)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfb70a3d, 0x70a3d6c4},	/* -nan=f(-0.09)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfb47ae1, 0x47ae1435},	/* -nan=f(-0.08)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfb1eb85, 0x1eb851a6},	/* -nan=f(-0.07)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfaeb851, 0xeb851e2d},	/* -nan=f(-0.06)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfa99999, 0x9999990e},	/* -nan=f(-0.05)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbfa47ae1, 0x47ae13ef},	/* -nan=f(-0.04)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbf9eb851, 0xeb851da0},	/* -nan=f(-0.03)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbf947ae1, 0x47ae1362},	/* -nan=f(-0.02)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbf847ae1, 0x47ae1249},	/* -nan=f(-0.01)*/
{64, 0,123,__LINE__, 0xc0414837, 0x1bfcbfb9, 0x3cd19000, 0x00000000},	/* -34.5642=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0xc0126bb1, 0xbbb554a8, 0x3f847ae1, 0x47ae16ad},	/* -4.60517=f(0.01)*/
{64, 0,123,__LINE__, 0xc00f4bd2, 0xb7ac1b41, 0x3f947ae1, 0x47ae1594},	/* -3.91202=f(0.02)*/
{64, 0,123,__LINE__, 0xc00c0d6e, 0x3a14285c, 0x3f9eb851, 0xeb851fd2},	/* -3.50656=f(0.03)*/
{64, 0,123,__LINE__, 0xc009c041, 0xf7ed8cfc, 0x3fa47ae1, 0x47ae1508},	/* -3.21888=f(0.04)*/
{64, 0,123,__LINE__, 0xc007f742, 0x7b73e365, 0x3fa99999, 0x99999a27},	/* -2.99573=f(0.05)*/
{64, 0,123,__LINE__, 0xc00681dd, 0x7a559a05, 0x3faeb851, 0xeb851f46},	/* -2.81341=f(0.06)*/
{64, 0,123,__LINE__, 0xc005462a, 0x20517ce0, 0x3fb1eb85, 0x1eb85232},	/* -2.65926=f(0.07)*/
{64, 0,123,__LINE__, 0xc00434b1, 0x382efe9c, 0x3fb47ae1, 0x47ae14c1},	/* -2.52573=f(0.08)*/
{64, 0,123,__LINE__, 0xc0034378, 0xfcbda708, 0x3fb70a3d, 0x70a3d750},	/* -2.40795=f(0.09)*/
{64, 0,123,__LINE__, 0xc0026bb1, 0xbbb55500, 0x3fb99999, 0x999999df},	/* -2.30259=f(0.1)*/
{64, 0,123,__LINE__, 0xc001a87f, 0xbfeb72cc, 0x3fbc28f5, 0xc28f5c6e},	/* -2.20727=f(0.11)*/
{64, 0,123,__LINE__, 0xc000f64c, 0xba970b9c, 0x3fbeb851, 0xeb851efd},	/* -2.12026=f(0.12)*/
{64, 0,123,__LINE__, 0xc000525f, 0x4c391dca, 0x3fc0a3d7, 0x0a3d70c6},	/* -2.04022=f(0.13)*/
{64, 0,123,__LINE__, 0xbfff7532, 0xc125dce8, 0x3fc1eb85, 0x1eb8520e},	/* -1.96611=f(0.14)*/
{64, 0,123,__LINE__, 0xbffe5a9a, 0x7c3ac3fb, 0x3fc33333, 0x33333356},	/* -1.89712=f(0.15)*/
{64, 0,123,__LINE__, 0xbffd5240, 0xf0e0e05c, 0x3fc47ae1, 0x47ae149e},	/* -1.83258=f(0.16)*/
{64, 0,123,__LINE__, 0xbffc59ef, 0x6ae05548, 0x3fc5c28f, 0x5c28f5e6},	/* -1.77196=f(0.17)*/
{64, 0,123,__LINE__, 0xbffb6fd0, 0x79fe3130, 0x3fc70a3d, 0x70a3d72e},	/* -1.7148=f(0.18)*/
{63, 0,123,__LINE__, 0xbffa925a, 0xe2cbede5, 0x3fc851eb, 0x851eb876},	/* -1.66073=f(0.19)*/
{64, 0,123,__LINE__, 0xbff9c041, 0xf7ed8d1d, 0x3fc99999, 0x999999be},	/* -1.60944=f(0.2)*/
{64, 0,123,__LINE__, 0xbff8f869, 0xc5f5f6de, 0x3fcae147, 0xae147b06},	/* -1.56065=f(0.21)*/
{64, 0,123,__LINE__, 0xbff839de, 0x0059c8b2, 0x3fcc28f5, 0xc28f5c4e},	/* -1.51413=f(0.22)*/
{64, 0,123,__LINE__, 0xbff783ca, 0xf331ec62, 0x3fcd70a3, 0xd70a3d96},	/* -1.46968=f(0.23)*/
{64, 0,123,__LINE__, 0xbff6d577, 0xf5b0fa51, 0x3fceb851, 0xeb851ede},	/* -1.42712=f(0.24)*/
{64, 0,123,__LINE__, 0xbff62e42, 0xfefa39dc, 0x3fd00000, 0x00000013},	/* -1.38629=f(0.25)*/
{64, 0,123,__LINE__, 0xbff58d9d, 0x18f51eaa, 0x3fd0a3d7, 0x0a3d70b7},	/* -1.34707=f(0.26)*/
{64, 0,123,__LINE__, 0xbff4f307, 0x7ece4b24, 0x3fd147ae, 0x147ae15b},	/* -1.30933=f(0.27)*/
{64, 0,123,__LINE__, 0xbff45e11, 0x41a8bffe, 0x3fd1eb85, 0x1eb851ff},	/* -1.27297=f(0.28)*/
{64, 0,123,__LINE__, 0xbff3ce55, 0x57395808, 0x3fd28f5c, 0x28f5c2a3},	/* -1.23787=f(0.29)*/
{64, 0,123,__LINE__, 0xbff34378, 0xfcbda710, 0x3fd33333, 0x33333347},	/* -1.20397=f(0.3)*/
{64, 0,123,__LINE__, 0xbff2bd2a, 0x5db2fd92, 0x3fd3d70a, 0x3d70a3eb},	/* -1.17118=f(0.31)*/
{64, 0,123,__LINE__, 0xbff23b1f, 0x7163c370, 0x3fd47ae1, 0x47ae148f},	/* -1.13943=f(0.32)*/
{64, 0,123,__LINE__, 0xbff1bd15, 0x0529e2a5, 0x3fd51eb8, 0x51eb8533},	/* -1.10866=f(0.33)*/
{64, 0,123,__LINE__, 0xbff142cd, 0xeb63385c, 0x3fd5c28f, 0x5c28f5d7},	/* -1.07881=f(0.34)*/
{64, 0,123,__LINE__, 0xbff0cc12, 0x48b56cbd, 0x3fd66666, 0x6666667b},	/* -1.04982=f(0.35)*/
{64, 0,123,__LINE__, 0xbff058ae, 0xfa811443, 0x3fd70a3d, 0x70a3d71f},	/* -1.02165=f(0.36)*/
{63, 0,123,__LINE__, 0xbfefd0ea, 0x24bf899b, 0x3fd7ae14, 0x7ae147c3},	/* -0.994252=f(0.37)*/
{64, 0,123,__LINE__, 0xbfeef672, 0xc69da1ef, 0x3fd851eb, 0x851eb867},	/* -0.967584=f(0.38)*/
{64, 0,123,__LINE__, 0xbfee21a8, 0x3b8a7138, 0x3fd8f5c2, 0x8f5c290b},	/* -0.941609=f(0.39)*/
{64, 0,123,__LINE__, 0xbfed5240, 0xf0e0e05d, 0x3fd99999, 0x999999af},	/* -0.916291=f(0.4)*/
{64, 0,123,__LINE__, 0xbfec87f8, 0xc76ff75b, 0x3fda3d70, 0xa3d70a53},	/* -0.891598=f(0.41)*/
{64, 0,123,__LINE__, 0xbfebc290, 0x8cf1b3df, 0x3fdae147, 0xae147af7},	/* -0.867501=f(0.42)*/
{64, 0,123,__LINE__, 0xbfeb01cd, 0x8556f84e, 0x3fdb851e, 0xb851eb9b},	/* -0.84397=f(0.43)*/
{64, 0,123,__LINE__, 0xbfea4579, 0x01b95786, 0x3fdc28f5, 0xc28f5c3f},	/* -0.820981=f(0.44)*/
{64, 0,123,__LINE__, 0xbfe98d60, 0x031b8202, 0x3fdccccc, 0xcccccce3},	/* -0.798508=f(0.45)*/
{64, 0,123,__LINE__, 0xbfe8d952, 0xe7699ee4, 0x3fdd70a3, 0xd70a3d87},	/* -0.776529=f(0.46)*/
{64, 0,123,__LINE__, 0xbfe82925, 0x1f66e5bb, 0x3fde147a, 0xe147ae2b},	/* -0.755023=f(0.47)*/
{64, 0,123,__LINE__, 0xbfe77cac, 0xec67bac2, 0x3fdeb851, 0xeb851ecf},	/* -0.733969=f(0.48)*/
{64, 0,123,__LINE__, 0xbfe6d3c3, 0x24e13f37, 0x3fdf5c28, 0xf5c28f73},	/* -0.71335=f(0.49)*/
{64, 0,123,__LINE__, 0xbfe62e42, 0xfefa39d9, 0x3fe00000, 0x0000000b},	/* -0.693147=f(0.5)*/
{64, 0,123,__LINE__, 0xbfe58c09, 0xe066a49a, 0x3fe051eb, 0x851eb85d},	/* -0.673345=f(0.51)*/
{64, 0,123,__LINE__, 0xbfe4ecf7, 0x32f00374, 0x3fe0a3d7, 0x0a3d70af},	/* -0.653926=f(0.52)*/
{64, 0,123,__LINE__, 0xbfe450ec, 0x3d21b5ec, 0x3fe0f5c2, 0x8f5c2901},	/* -0.634878=f(0.53)*/
{64, 0,123,__LINE__, 0xbfe3b7cb, 0xfea25c68, 0x3fe147ae, 0x147ae153},	/* -0.616186=f(0.54)*/
{64, 0,123,__LINE__, 0xbfe3217b, 0x0fd2b102, 0x3fe19999, 0x999999a5},	/* -0.597837=f(0.55)*/
{63, 0,123,__LINE__, 0xbfe28ddf, 0x8457461b, 0x3fe1eb85, 0x1eb851f7},	/* -0.579818=f(0.56)*/
{64, 0,123,__LINE__, 0xbfe1fce0, 0xd03dd5d1, 0x3fe23d70, 0xa3d70a49},	/* -0.562119=f(0.57)*/
{64, 0,123,__LINE__, 0xbfe16e67, 0xaf78762e, 0x3fe28f5c, 0x28f5c29b},	/* -0.544727=f(0.58)*/
{63, 0,123,__LINE__, 0xbfe0e25e, 0x0f715cd3, 0x3fe2e147, 0xae147aed},	/* -0.527633=f(0.59)*/
{64, 0,123,__LINE__, 0xbfe058ae, 0xfa81143e, 0x3fe33333, 0x3333333f},	/* -0.510826=f(0.6)*/
{63, 0,123,__LINE__, 0xbfdfa28d, 0x0a2e9063, 0x3fe3851e, 0xb851eb91},	/* -0.494296=f(0.61)*/
{64, 0,123,__LINE__, 0xbfde9823, 0x78d78284, 0x3fe3d70a, 0x3d70a3e3},	/* -0.478036=f(0.62)*/
{64, 0,123,__LINE__, 0xbfdd91fd, 0x2d23cf80, 0x3fe428f5, 0xc28f5c35},	/* -0.462035=f(0.63)*/
{64, 0,123,__LINE__, 0xbfdc8ff7, 0xc79a99fc, 0x3fe47ae1, 0x47ae1487},	/* -0.446287=f(0.64)*/
{64, 0,123,__LINE__, 0xbfdb91f2, 0x8212b9dd, 0x3fe4cccc, 0xccccccd9},	/* -0.430783=f(0.65)*/
{63, 0,123,__LINE__, 0xbfda97ce, 0x16b316cc, 0x3fe51eb8, 0x51eb852b},	/* -0.415515=f(0.66)*/
{64, 0,123,__LINE__, 0xbfd9a16c, 0xa8d43e5d, 0x3fe570a3, 0xd70a3d7d},	/* -0.400478=f(0.67)*/
{64, 0,123,__LINE__, 0xbfd8aeb1, 0xaf986da8, 0x3fe5c28f, 0x5c28f5cf},	/* -0.385662=f(0.68)*/
{64, 0,123,__LINE__, 0xbfd7bf81, 0xe213a589, 0x3fe6147a, 0xe147ae21},	/* -0.371064=f(0.69)*/
{64, 0,123,__LINE__, 0xbfd6d3c3, 0x24e13f2b, 0x3fe66666, 0x66666673},	/* -0.356675=f(0.7)*/
{64, 0,123,__LINE__, 0xbfd5eb5c, 0x7907e4a5, 0x3fe6b851, 0xeb851ec5},	/* -0.34249=f(0.71)*/
{64, 0,123,__LINE__, 0xbfd50635, 0xec0fdd45, 0x3fe70a3d, 0x70a3d717},	/* -0.328504=f(0.72)*/
{64, 0,123,__LINE__, 0xbfd42438, 0x893252d2, 0x3fe75c28, 0xf5c28f69},	/* -0.314711=f(0.73)*/
{64, 0,123,__LINE__, 0xbfd3454e, 0x4b8a9f6d, 0x3fe7ae14, 0x7ae147bb},	/* -0.301105=f(0.74)*/
{64, 0,123,__LINE__, 0xbfd26962, 0x1134db70, 0x3fe80000, 0x0000000d},	/* -0.287682=f(0.75)*/
{64, 0,123,__LINE__, 0xbfd1905f, 0x8f46d015, 0x3fe851eb, 0x851eb85f},	/* -0.274437=f(0.76)*/
{64, 0,123,__LINE__, 0xbfd0ba33, 0x46922d7b, 0x3fe8a3d7, 0x0a3d70b1},	/* -0.261365=f(0.77)*/
{64, 0,123,__LINE__, 0xbfcfcd94, 0xf240dd4b, 0x3fe8f5c2, 0x8f5c2903},	/* -0.248461=f(0.78)*/
{63, 0,123,__LINE__, 0xbfce2c26, 0x40b4740d, 0x3fe947ae, 0x147ae155},	/* -0.235722=f(0.79)*/
{63, 0,123,__LINE__, 0xbfcc8ff7, 0xc79a99df, 0x3fe99999, 0x999999a7},	/* -0.223144=f(0.8)*/
{64, 0,123,__LINE__, 0xbfcaf8e8, 0x210a411b, 0x3fe9eb85, 0x1eb851f9},	/* -0.210721=f(0.81)*/
{63, 0,123,__LINE__, 0xbfc966d7, 0x21d6f5d7, 0x3fea3d70, 0xa3d70a4b},	/* -0.198451=f(0.82)*/
{64, 0,123,__LINE__, 0xbfc7d9a5, 0xca4e123b, 0x3fea8f5c, 0x28f5c29d},	/* -0.18633=f(0.83)*/
{64, 0,123,__LINE__, 0xbfc65136, 0x37dde7e6, 0x3feae147, 0xae147aef},	/* -0.174353=f(0.84)*/
{63, 0,123,__LINE__, 0xbfc4cd6b, 0x97964137, 0x3feb3333, 0x33333341},	/* -0.162519=f(0.85)*/
{63, 0,123,__LINE__, 0xbfc34e2a, 0x1972f9a2, 0x3feb851e, 0xb851eb93},	/* -0.150823=f(0.86)*/
{63, 0,123,__LINE__, 0xbfc1d356, 0xe462a830, 0x3febd70a, 0x3d70a3e5},	/* -0.139262=f(0.87)*/
{64, 0,123,__LINE__, 0xbfc05cd8, 0x0afc767f, 0x3fec28f5, 0xc28f5c37},	/* -0.127833=f(0.88)*/
{64, 0,123,__LINE__, 0xbfbdd529, 0x01b28754, 0x3fec7ae1, 0x47ae1489},	/* -0.116534=f(0.89)*/
{64, 0,123,__LINE__, 0xbfbaf8e8, 0x210a40df, 0x3feccccc, 0xccccccdb},	/* -0.105361=f(0.9)*/
{63, 0,123,__LINE__, 0xbfb824be, 0xa3fe154e, 0x3fed1eb8, 0x51eb852d},	/* -0.0943107=f(0.91)*/
{64, 0,123,__LINE__, 0xbfb5587f, 0x437b27ef, 0x3fed70a3, 0xd70a3d7f},	/* -0.0833816=f(0.92)*/
{63, 0,123,__LINE__, 0xbfb293fe, 0x305fa8fd, 0x3fedc28f, 0x5c28f5d1},	/* -0.0725707=f(0.93)*/
{63, 0,123,__LINE__, 0xbfafae22, 0x06cabd41, 0x3fee147a, 0xe147ae23},	/* -0.0618754=f(0.94)*/
{64, 0,123,__LINE__, 0xbfaa431d, 0x5bcc1842, 0x3fee6666, 0x66666675},	/* -0.0512933=f(0.95)*/
{64, 0,123,__LINE__, 0xbfa4e69e, 0xd6d80db9, 0x3feeb851, 0xeb851ec7},	/* -0.040822=f(0.96)*/
{64, 0,123,__LINE__, 0xbf9f30b2, 0xd0091b9b, 0x3fef0a3d, 0x70a3d719},	/* -0.0304592=f(0.97)*/
{64, 0,123,__LINE__, 0xbf94b004, 0xbce0aa0d, 0x3fef5c28, 0xf5c28f6b},	/* -0.0202027=f(0.98)*/
{63, 0,123,__LINE__, 0xbf849545, 0x3e6fd0f2, 0x3fefae14, 0x7ae147bd},	/* -0.0100503=f(0.99)*/
{63, 0,123,__LINE__, 0x3cdbffff, 0xfffffffa, 0x3ff00000, 0x00000007},	/* 1.55431e-15=f(1)*/
{64, 0,123,__LINE__, 0x3f8460d6, 0xccca39f3, 0x3ff028f5, 0xc28f5c30},	/* 0.00995033=f(1.01)*/
{63, 0,123,__LINE__, 0x3f944723, 0xd272a9ad, 0x3ff051eb, 0x851eb859},	/* 0.0198026=f(1.02)*/
{64, 0,123,__LINE__, 0x3f9e44a9, 0xa3bed81e, 0x3ff07ae1, 0x47ae1482},	/* 0.0295588=f(1.03)*/
{63, 0,123,__LINE__, 0x3fa414bc, 0xc0a36735, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.0392207=f(1.04)*/
{64, 0,123,__LINE__, 0x3fa8fb06, 0x3ef2c8c5, 0x3ff0cccc, 0xccccccd4},	/* 0.0487902=f(1.05)*/
{64, 0,123,__LINE__, 0x3fadd56c, 0x1d883fba, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.0582689=f(1.06)*/
{64, 0,123,__LINE__, 0x3fb15213, 0xc27c91e9, 0x3ff11eb8, 0x51eb8526},	/* 0.0676586=f(1.07)*/
{63, 0,123,__LINE__, 0x3fb3b3b8, 0x02beebfb, 0x3ff147ae, 0x147ae14f},	/* 0.076961=f(1.08)*/
{64, 0,123,__LINE__, 0x3fb60fbd, 0xd2fffc9d, 0x3ff170a3, 0xd70a3d78},	/* 0.0861777=f(1.09)*/
{64, 0,123,__LINE__, 0x3fb8663f, 0x793c4732, 0x3ff19999, 0x999999a1},	/* 0.0953102=f(1.1)*/
{64, 0,123,__LINE__, 0x3fbab756, 0x84d3e35b, 0x3ff1c28f, 0x5c28f5ca},	/* 0.10436=f(1.11)*/
{63, 0,123,__LINE__, 0x3fbd031b, 0xd5179e66, 0x3ff1eb85, 0x1eb851f3},	/* 0.113329=f(1.12)*/
{64, 0,123,__LINE__, 0x3fbf49a7, 0x9f8b91f8, 0x3ff2147a, 0xe147ae1c},	/* 0.122218=f(1.13)*/
{63, 0,123,__LINE__, 0x3fc0c588, 0xbaf1905d, 0x3ff23d70, 0xa3d70a45},	/* 0.131028=f(1.14)*/
{63, 0,123,__LINE__, 0x3fc1e3b8, 0x25dd0620, 0x3ff26666, 0x6666666e},	/* 0.139762=f(1.15)*/
{63, 0,123,__LINE__, 0x3fc2ff6d, 0x3e070eea, 0x3ff28f5c, 0x28f5c297},	/* 0.14842=f(1.16)*/
{64, 0,123,__LINE__, 0x3fc418b2, 0xe73e533e, 0x3ff2b851, 0xeb851ec0},	/* 0.157004=f(1.17)*/
{64, 0,123,__LINE__, 0x3fc52f93, 0xbe237458, 0x3ff2e147, 0xae147ae9},	/* 0.165514=f(1.18)*/
{64, 0,123,__LINE__, 0x3fc6441a, 0x1a9027db, 0x3ff30a3d, 0x70a3d712},	/* 0.173953=f(1.19)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc01921fb, 0x54442d18},	/* -nan=f(-6.28319)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc012d97c, 0x7f3321d2},	/* -nan=f(-4.71239)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc00921fb, 0x54442d18},	/* -nan=f(-3.14159)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff921fb, 0x54442d18},	/* -nan=f(-1.5708)*/
{ 0, 0, 34,__LINE__, 0xfff00000, 0x00000000, 0x00000000, 0x00000000},	/* -inf=f(0)*/
{63, 0,123,__LINE__, 0x3fdce6bb, 0x25aa1315, 0x3ff921fb, 0x54442d18},	/* 0.451583=f(1.5708)*/
{64, 0,123,__LINE__, 0x3ff250d0, 0x48e7a1bd, 0x400921fb, 0x54442d18},	/* 1.14473=f(3.14159)*/
{64, 0,123,__LINE__, 0x3ff8cd99, 0x441787d0, 0x4012d97c, 0x7f3321d2},	/* 1.55019=f(4.71239)*/
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
{64, 0,123,__LINE__, 0xbfe058ae, 0xfa8114c8, 0x3fe33333, 0x333332ec},	/* -0.510826=f(0.6)*/
{64, 0,123,__LINE__, 0x3feaa731, 0x08717b4a, 0x40026666, 0x66666654},	/* 0.832909=f(2.3)*/
{64, 0,123,__LINE__, 0x3ff62e42, 0xfefa39e6, 0x400fffff, 0xffffffee},	/* 1.38629=f(4)*/
{64, 0,123,__LINE__, 0x3ffbd8f3, 0x0f4bbf32, 0x4016cccc, 0xccccccc4},	/* 1.74047=f(5.7)*/
{64, 0,123,__LINE__, 0x40000307, 0xf2440121, 0x401d9999, 0x99999991},	/* 2.00148=f(7.4)*/
{64, 0,123,__LINE__, 0x4001aa8b, 0xc6956465, 0x40223333, 0x3333332f},	/* 2.20827=f(9.1)*/
{64, 0,123,__LINE__, 0x4003094f, 0x7bcb4c70, 0x40259999, 0x99999995},	/* 2.37955=f(10.8)*/
{64, 0,123,__LINE__, 0x400434b1, 0x382efeb6, 0x4028ffff, 0xfffffffb},	/* 2.52573=f(12.5)*/
{64, 0,123,__LINE__, 0x400539d6, 0xec52e6f7, 0x402c6666, 0x66666661},	/* 2.65324=f(14.2)*/
{64, 0,123,__LINE__, 0x4006216b, 0xe9c36919, 0x402fcccc, 0xccccccc7},	/* 2.76632=f(15.9)*/
{64, 0,123,__LINE__, 0x4006f174, 0xfac41c24, 0x40319999, 0x99999997},	/* 2.8679=f(17.6)*/
{64, 0,123,__LINE__, 0x4007ae4b, 0x949d47ad, 0x40334ccc, 0xccccccca},	/* 2.96011=f(19.3)*/
{64, 0,123,__LINE__, 0x40085b2e, 0x946faeb0, 0x4034ffff, 0xfffffffd},	/* 3.04452=f(21)*/
{64, 0,123,__LINE__, 0x4008fa9a, 0x7626ce3f, 0x4036b333, 0x33333330},	/* 3.12236=f(22.7)*/
{64, 0,123,__LINE__, 0x40098e81, 0x99ec9ffb, 0x40386666, 0x66666663},	/* 3.19458=f(24.4)*/
{64, 0,123,__LINE__, 0x400a1871, 0x8ac5ac13, 0x403a1999, 0x99999996},	/* 3.26194=f(26.1)*/
{64, 0,123,__LINE__, 0x400a99ac, 0x7c374f8a, 0x403bcccc, 0xccccccc9},	/* 3.32504=f(27.8)*/
{64, 0,123,__LINE__, 0x400b133b, 0x33cfc475, 0x403d7fff, 0xfffffffc},	/* 3.38439=f(29.5)*/
{0},};
void test_log(m)   {run_vector_1(m,log_vec,(char *)(log),"log","dd");   }	
