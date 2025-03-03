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
 one_line_type sqrt_vec[] = {
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
{64, 0,123,__LINE__, 0x3e60c357, 0x8c15393e, 0x3cd19000, 0x00000000},	/* 3.12236e-08=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0x3fb99999, 0x99999af9, 0x3f847ae1, 0x47ae16ad},	/* 0.1=f(0.01)*/
{64, 0,123,__LINE__, 0x3fc21a18, 0x51ff6386, 0x3f947ae1, 0x47ae1594},	/* 0.141421=f(0.02)*/
{64, 0,123,__LINE__, 0x3fc62b95, 0x86ad0a88, 0x3f9eb851, 0xeb851fd2},	/* 0.173205=f(0.03)*/
{64, 0,123,__LINE__, 0x3fc99999, 0x999999f2, 0x3fa47ae1, 0x47ae1508},	/* 0.2=f(0.04)*/
{64, 0,123,__LINE__, 0x3fcc9f25, 0xc5bfee28, 0x3fa99999, 0x99999a27},	/* 0.223607=f(0.05)*/
{63, 0,123,__LINE__, 0x3fcf5a7c, 0xecdb6893, 0x3faeb851, 0xeb851f46},	/* 0.244949=f(0.06)*/
{64, 0,123,__LINE__, 0x3fd0eecc, 0x87dbfa76, 0x3fb1eb85, 0x1eb85232},	/* 0.264575=f(0.07)*/
{64, 0,123,__LINE__, 0x3fd21a18, 0x51ff6329, 0x3fb47ae1, 0x47ae14c1},	/* 0.282843=f(0.08)*/
{64, 0,123,__LINE__, 0x3fd33333, 0x33333350, 0x3fb70a3d, 0x70a3d750},	/* 0.3=f(0.09)*/
{64, 0,123,__LINE__, 0x3fd43d13, 0x6248492a, 0x3fb99999, 0x999999df},	/* 0.316228=f(0.1)*/
{63, 0,123,__LINE__, 0x3fd539f5, 0x433125dd, 0x3fbc28f5, 0xc28f5c6e},	/* 0.331662=f(0.11)*/
{63, 0,123,__LINE__, 0x3fd62b95, 0x86ad0a3b, 0x3fbeb851, 0xeb851efd},	/* 0.34641=f(0.12)*/
{64, 0,123,__LINE__, 0x3fd71355, 0xd04de1a7, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.360555=f(0.13)*/
{64, 0,123,__LINE__, 0x3fd7f254, 0xdab9cc52, 0x3fc1eb85, 0x1eb8520e},	/* 0.374166=f(0.14)*/
{64, 0,123,__LINE__, 0x3fd8c97e, 0xf43f725e, 0x3fc33333, 0x33333356},	/* 0.387298=f(0.15)*/
{64, 0,123,__LINE__, 0x3fd99999, 0x999999b0, 0x3fc47ae1, 0x47ae149e},	/* 0.4=f(0.16)*/
{64, 0,123,__LINE__, 0x3fda634b, 0xd77fe1ba, 0x3fc5c28f, 0x5c28f5e6},	/* 0.412311=f(0.17)*/
{64, 0,123,__LINE__, 0x3fdb2724, 0x7aff14a4, 0x3fc70a3d, 0x70a3d72e},	/* 0.424264=f(0.18)*/
{64, 0,123,__LINE__, 0x3fdbe59e, 0xba3a166f, 0x3fc851eb, 0x851eb876},	/* 0.43589=f(0.19)*/
{64, 0,123,__LINE__, 0x3fdc9f25, 0xc5bfedee, 0x3fc99999, 0x999999be},	/* 0.447214=f(0.2)*/
{64, 0,123,__LINE__, 0x3fdd5417, 0x8e8830e9, 0x3fcae147, 0xae147b06},	/* 0.458258=f(0.21)*/
{63, 0,123,__LINE__, 0x3fde04c6, 0xf553bdeb, 0x3fcc28f5, 0xc28f5c4e},	/* 0.469042=f(0.22)*/
{64, 0,123,__LINE__, 0x3fdeb17d, 0x88be6d04, 0x3fcd70a3, 0xd70a3d96},	/* 0.479583=f(0.23)*/
{64, 0,123,__LINE__, 0x3fdf5a7c, 0xecdb685e, 0x3fceb851, 0xeb851ede},	/* 0.489898=f(0.24)*/
{63, 0,123,__LINE__, 0x3fe00000, 0x00000009, 0x3fd00000, 0x00000013},	/* 0.5=f(0.25)*/
{64, 0,123,__LINE__, 0x3fe0511d, 0xe5a82668, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.509902=f(0.26)*/
{64, 0,123,__LINE__, 0x3fe0a0b0, 0x2501c7a3, 0x3fd147ae, 0x147ae15b},	/* 0.519615=f(0.27)*/
{64, 0,123,__LINE__, 0x3fe0eecc, 0x87dbfa5e, 0x3fd1eb85, 0x1eb851ff},	/* 0.52915=f(0.28)*/
{63, 0,123,__LINE__, 0x3fe13b86, 0xea20ae65, 0x3fd28f5c, 0x28f5c2a3},	/* 0.538516=f(0.29)*/
{63, 0,123,__LINE__, 0x3fe186f1, 0x74f8847b, 0x3fd33333, 0x33333347},	/* 0.547723=f(0.3)*/
{64, 0,123,__LINE__, 0x3fe1d11c, 0xd1209b0c, 0x3fd3d70a, 0x3d70a3eb},	/* 0.556776=f(0.31)*/
{64, 0,123,__LINE__, 0x3fe21a18, 0x51ff6313, 0x3fd47ae1, 0x47ae148f},	/* 0.565685=f(0.32)*/
{64, 0,123,__LINE__, 0x3fe261f2, 0x1ab573fc, 0x3fd51eb8, 0x51eb8533},	/* 0.574456=f(0.33)*/
{63, 0,123,__LINE__, 0x3fe2a8b7, 0x3e294fbd, 0x3fd5c28f, 0x5c28f5d7},	/* 0.583095=f(0.34)*/
{64, 0,123,__LINE__, 0x3fe2ee73, 0xdadc9b60, 0x3fd66666, 0x6666667b},	/* 0.591608=f(0.35)*/
{64, 0,123,__LINE__, 0x3fe33333, 0x3333333c, 0x3fd70a3d, 0x70a3d71f},	/* 0.6=f(0.36)*/
{64, 0,123,__LINE__, 0x3fe376ff, 0xc2b649d0, 0x3fd7ae14, 0x7ae147c3},	/* 0.608276=f(0.37)*/
{63, 0,123,__LINE__, 0x3fe3b9e3, 0x50c59eb7, 0x3fd851eb, 0x851eb867},	/* 0.616441=f(0.38)*/
{64, 0,123,__LINE__, 0x3fe3fbe7, 0x01157610, 0x3fd8f5c2, 0x8f5c290b},	/* 0.6245=f(0.39)*/
{63, 0,123,__LINE__, 0x3fe43d13, 0x62484917, 0x3fd99999, 0x999999af},	/* 0.632456=f(0.4)*/
{64, 0,123,__LINE__, 0x3fe47d70, 0x7ae665a2, 0x3fda3d70, 0xa3d70a53},	/* 0.640312=f(0.41)*/
{64, 0,123,__LINE__, 0x3fe4bd05, 0xd4eb41f2, 0x3fdae147, 0xae147af7},	/* 0.648074=f(0.42)*/
{63, 0,123,__LINE__, 0x3fe4fbda, 0x8817b455, 0x3fdb851e, 0xb851eb9b},	/* 0.655744=f(0.43)*/
{64, 0,123,__LINE__, 0x3fe539f5, 0x433125cc, 0x3fdc28f5, 0xc28f5c3f},	/* 0.663325=f(0.44)*/
{64, 0,123,__LINE__, 0x3fe5775c, 0x544ff26b, 0x3fdccccc, 0xcccccce3},	/* 0.67082=f(0.45)*/
{64, 0,123,__LINE__, 0x3fe5b415, 0xb05a4024, 0x3fdd70a3, 0xd70a3d87},	/* 0.678233=f(0.46)*/
{64, 0,123,__LINE__, 0x3fe5f026, 0xf9c4765a, 0x3fde147a, 0xe147ae2b},	/* 0.685565=f(0.47)*/
{64, 0,123,__LINE__, 0x3fe62b95, 0x86ad0a2a, 0x3fdeb851, 0xeb851ecf},	/* 0.69282=f(0.48)*/
{63, 0,123,__LINE__, 0x3fe66666, 0x6666666f, 0x3fdf5c28, 0xf5c28f73},	/* 0.7=f(0.49)*/
{64, 0,123,__LINE__, 0x3fe6a09e, 0x667f3bd4, 0x3fe00000, 0x0000000b},	/* 0.707107=f(0.5)*/
{64, 0,123,__LINE__, 0x3fe6da42, 0x17576979, 0x3fe051eb, 0x851eb85d},	/* 0.714143=f(0.51)*/
{64, 0,123,__LINE__, 0x3fe71355, 0xd04de197, 0x3fe0a3d7, 0x0a3d70af},	/* 0.72111=f(0.52)*/
{63, 0,123,__LINE__, 0x3fe74bdd, 0xb3926329, 0x3fe0f5c2, 0x8f5c2901},	/* 0.728011=f(0.53)*/
{63, 0,123,__LINE__, 0x3fe783dd, 0xb1a48e3f, 0x3fe147ae, 0x147ae153},	/* 0.734847=f(0.54)*/
{64, 0,123,__LINE__, 0x3fe7bb59, 0x8c88b4b4, 0x3fe19999, 0x999999a5},	/* 0.74162=f(0.55)*/
{64, 0,123,__LINE__, 0x3fe7f254, 0xdab9cc42, 0x3fe1eb85, 0x1eb851f7},	/* 0.748331=f(0.56)*/
{64, 0,123,__LINE__, 0x3fe828d3, 0x09df0c51, 0x3fe23d70, 0xa3d70a49},	/* 0.754983=f(0.57)*/
{64, 0,123,__LINE__, 0x3fe85ed7, 0x614b0394, 0x3fe28f5c, 0x28f5c29b},	/* 0.761577=f(0.58)*/
{64, 0,123,__LINE__, 0x3fe89465, 0x04494bea, 0x3fe2e147, 0xae147aed},	/* 0.768115=f(0.59)*/
{63, 0,123,__LINE__, 0x3fe8c97e, 0xf43f724f, 0x3fe33333, 0x3333333f},	/* 0.774597=f(0.6)*/
{64, 0,123,__LINE__, 0x3fe8fe28, 0x12a529f5, 0x3fe3851e, 0xb851eb91},	/* 0.781025=f(0.61)*/
{64, 0,123,__LINE__, 0x3fe93263, 0x22d7727c, 0x3fe3d70a, 0x3d70a3e3},	/* 0.787401=f(0.62)*/
{64, 0,123,__LINE__, 0x3fe96632, 0xcbc9f786, 0x3fe428f5, 0xc28f5c35},	/* 0.793725=f(0.63)*/
{64, 0,123,__LINE__, 0x3fe99999, 0x999999a1, 0x3fe47ae1, 0x47ae1487},	/* 0.8=f(0.64)*/
{64, 0,123,__LINE__, 0x3fe9cc99, 0xff02c488, 0x3fe4cccc, 0xccccccd9},	/* 0.806226=f(0.65)*/
{64, 0,123,__LINE__, 0x3fe9ff36, 0x56bdf34e, 0x3fe51eb8, 0x51eb852b},	/* 0.812404=f(0.66)*/
{64, 0,123,__LINE__, 0x3fea3170, 0xe4c4874c, 0x3fe570a3, 0xd70a3d7d},	/* 0.818535=f(0.67)*/
{64, 0,123,__LINE__, 0x3fea634b, 0xd77fe1ac, 0x3fe5c28f, 0x5c28f5cf},	/* 0.824621=f(0.68)*/
{64, 0,123,__LINE__, 0x3fea94c9, 0x48e48016, 0x3fe6147a, 0xe147ae21},	/* 0.830662=f(0.69)*/
{63, 0,123,__LINE__, 0x3feac5eb, 0x3f7ab2ff, 0x3fe66666, 0x66666673},	/* 0.83666=f(0.7)*/
{64, 0,123,__LINE__, 0x3feaf6b3, 0xaf565e77, 0x3fe6b851, 0xeb851ec5},	/* 0.842615=f(0.71)*/
{63, 0,123,__LINE__, 0x3feb2724, 0x7aff1497, 0x3fe70a3d, 0x70a3d717},	/* 0.848528=f(0.72)*/
{63, 0,123,__LINE__, 0x3feb573f, 0x7449baa7, 0x3fe75c28, 0xf5c28f69},	/* 0.8544=f(0.73)*/
{64, 0,123,__LINE__, 0x3feb8706, 0x5d24ceeb, 0x3fe7ae14, 0x7ae147bb},	/* 0.860233=f(0.74)*/
{64, 0,123,__LINE__, 0x3febb67a, 0xe8584cb2, 0x3fe80000, 0x0000000d},	/* 0.866025=f(0.75)*/
{64, 0,123,__LINE__, 0x3febe59e, 0xba3a1662, 0x3fe851eb, 0x851eb85f},	/* 0.87178=f(0.76)*/
{64, 0,123,__LINE__, 0x3fec1473, 0x6957b972, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.877496=f(0.77)*/
{64, 0,123,__LINE__, 0x3fec42fa, 0x7f164e74, 0x3fe8f5c2, 0x8f5c2903},	/* 0.883176=f(0.78)*/
{64, 0,123,__LINE__, 0x3fec7135, 0x78492721, 0x3fe947ae, 0x147ae155},	/* 0.888819=f(0.79)*/
{63, 0,123,__LINE__, 0x3fec9f25, 0xc5bfede1, 0x3fe99999, 0x999999a7},	/* 0.894427=f(0.8)*/
{64, 0,123,__LINE__, 0x3feccccc, 0xccccccd4, 0x3fe9eb85, 0x1eb851f9},	/* 0.9=f(0.81)*/
{64, 0,123,__LINE__, 0x3fecfa2b, 0xe7c326a7, 0x3fea3d70, 0xa3d70a4b},	/* 0.905539=f(0.82)*/
{64, 0,123,__LINE__, 0x3fed2744, 0x666f6047, 0x3fea8f5c, 0x28f5c29d},	/* 0.911043=f(0.83)*/
{63, 0,123,__LINE__, 0x3fed5417, 0x8e8830dd, 0x3feae147, 0xae147aef},	/* 0.916515=f(0.84)*/
{63, 0,123,__LINE__, 0x3fed80a6, 0x9c19e431, 0x3feb3333, 0x33333341},	/* 0.921954=f(0.85)*/
{64, 0,123,__LINE__, 0x3fedacf2, 0xc1ebf38e, 0x3feb851e, 0xb851eb93},	/* 0.927362=f(0.86)*/
{64, 0,123,__LINE__, 0x3fedd8fd, 0x29e15177, 0x3febd70a, 0x3d70a3e5},	/* 0.932738=f(0.87)*/
{64, 0,123,__LINE__, 0x3fee04c6, 0xf553bddf, 0x3fec28f5, 0xc28f5c37},	/* 0.938083=f(0.88)*/
{64, 0,123,__LINE__, 0x3fee3051, 0x3d6a720a, 0x3fec7ae1, 0x47ae1489},	/* 0.943398=f(0.89)*/
{64, 0,123,__LINE__, 0x3fee5b9d, 0x136c6d9e, 0x3feccccc, 0xccccccdb},	/* 0.948683=f(0.9)*/
{63, 0,123,__LINE__, 0x3fee86ab, 0x810ea919, 0x3fed1eb8, 0x51eb852d},	/* 0.953939=f(0.91)*/
{64, 0,123,__LINE__, 0x3feeb17d, 0x88be6cf8, 0x3fed70a3, 0xd70a3d7f},	/* 0.959166=f(0.92)*/
{64, 0,123,__LINE__, 0x3feedc14, 0x25e8086e, 0x3fedc28f, 0x5c28f5d1},	/* 0.964365=f(0.93)*/
{64, 0,123,__LINE__, 0x3fef0670, 0x4d3a1e77, 0x3fee147a, 0xe147ae23},	/* 0.969536=f(0.94)*/
{64, 0,123,__LINE__, 0x3fef3092, 0xece5bc3d, 0x3fee6666, 0x66666675},	/* 0.974679=f(0.95)*/
{64, 0,123,__LINE__, 0x3fef5a7c, 0xecdb6852, 0x3feeb851, 0xeb851ec7},	/* 0.979796=f(0.96)*/
{63, 0,123,__LINE__, 0x3fef842f, 0x2f05570b, 0x3fef0a3d, 0x70a3d719},	/* 0.984886=f(0.97)*/
{64, 0,123,__LINE__, 0x3fefadaa, 0x8f7eed59, 0x3fef5c28, 0xf5c28f6b},	/* 0.989949=f(0.98)*/
{64, 0,123,__LINE__, 0x3fefd6ef, 0xe4c9b8ac, 0x3fefae14, 0x7ae147bd},	/* 0.994987=f(0.99)*/
{63, 0,123,__LINE__, 0x3ff00000, 0x00000003, 0x3ff00000, 0x00000007},	/* 1=f(1)*/
{64, 0,123,__LINE__, 0x3ff0146d, 0xd68287f7, 0x3ff028f5, 0xc28f5c30},	/* 1.00499=f(1.01)*/
{63, 0,123,__LINE__, 0x3ff028c1, 0xd959b065, 0x3ff051eb, 0x851eb859},	/* 1.00995=f(1.02)*/
{64, 0,123,__LINE__, 0x3ff03cfc, 0x69845aac, 0x3ff07ae1, 0x47ae1482},	/* 1.01489=f(1.03)*/
{64, 0,123,__LINE__, 0x3ff0511d, 0xe5a82662, 0x3ff0a3d7, 0x0a3d70ab},	/* 1.0198=f(1.04)*/
{64, 0,123,__LINE__, 0x3ff06526, 0xaa25a13e, 0x3ff0cccc, 0xccccccd4},	/* 1.0247=f(1.05)*/
{64, 0,123,__LINE__, 0x3ff07917, 0x112b9a0a, 0x3ff0f5c2, 0x8f5c28fd},	/* 1.02956=f(1.06)*/
{64, 0,123,__LINE__, 0x3ff08cef, 0x72c9a20a, 0x3ff11eb8, 0x51eb8526},	/* 1.03441=f(1.07)*/
{64, 0,123,__LINE__, 0x3ff0a0b0, 0x2501c79d, 0x3ff147ae, 0x147ae14f},	/* 1.03923=f(1.08)*/
{63, 0,123,__LINE__, 0x3ff0b459, 0x7bd9942f, 0x3ff170a3, 0xd70a3d78},	/* 1.04403=f(1.09)*/
{64, 0,123,__LINE__, 0x3ff0c7eb, 0xc96a56f9, 0x3ff19999, 0x999999a1},	/* 1.04881=f(1.1)*/
{64, 0,123,__LINE__, 0x3ff0db67, 0x5df0c584, 0x3ff1c28f, 0x5c28f5ca},	/* 1.05357=f(1.11)*/
{64, 0,123,__LINE__, 0x3ff0eecc, 0x87dbfa58, 0x3ff1eb85, 0x1eb851f3},	/* 1.0583=f(1.12)*/
{64, 0,123,__LINE__, 0x3ff1021b, 0x93dbd9c8, 0x3ff2147a, 0xe147ae1c},	/* 1.06301=f(1.13)*/
{64, 0,123,__LINE__, 0x3ff11554, 0xcceee44c, 0x3ff23d70, 0xa3d70a45},	/* 1.06771=f(1.14)*/
{63, 0,123,__LINE__, 0x3ff12878, 0x7c6f7d7d, 0x3ff26666, 0x6666666e},	/* 1.07238=f(1.15)*/
{64, 0,123,__LINE__, 0x3ff13b86, 0xea20ae60, 0x3ff28f5c, 0x28f5c297},	/* 1.07703=f(1.16)*/
{64, 0,123,__LINE__, 0x3ff14e80, 0x5c3a692f, 0x3ff2b851, 0xeb851ec0},	/* 1.08167=f(1.17)*/
{64, 0,123,__LINE__, 0x3ff16165, 0x177554b2, 0x3ff2e147, 0xae147ae9},	/* 1.08628=f(1.18)*/
{63, 0,123,__LINE__, 0x3ff17435, 0x5f1624a1, 0x3ff30a3d, 0x70a3d712},	/* 1.09087=f(1.19)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc01921fb, 0x54442d18},	/* -nan=f(-6.28319)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc012d97c, 0x7f3321d2},	/* -nan=f(-4.71239)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xc00921fb, 0x54442d18},	/* -nan=f(-3.14159)*/
{ 0, 0, 33,__LINE__, 0xfff80000, 0x00000000, 0xbff921fb, 0x54442d18},	/* -nan=f(-1.5708)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{63, 0,123,__LINE__, 0x3ff40d93, 0x1ff62705, 0x3ff921fb, 0x54442d18},	/* 1.25331=f(1.5708)*/
{64, 0,123,__LINE__, 0x3ffc5bf8, 0x91b4ef6a, 0x400921fb, 0x54442d18},	/* 1.77245=f(3.14159)*/
{64, 0,123,__LINE__, 0x40015dce, 0x5d1822cc, 0x4012d97c, 0x7f3321d2},	/* 2.1708=f(4.71239)*/
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
{64, 0,123,__LINE__, 0x3fe8c97e, 0xf43f721a, 0x3fe33333, 0x333332ec},	/* 0.774597=f(0.6)*/
{63, 0,123,__LINE__, 0x3ff843e4, 0x3d85e5a5, 0x40026666, 0x66666654},	/* 1.51658=f(2.3)*/
{64, 0,123,__LINE__, 0x3fffffff, 0xfffffff7, 0x400fffff, 0xffffffee},	/* 2=f(4)*/
{64, 0,123,__LINE__, 0x40031988, 0x71a0e80a, 0x4016cccc, 0xccccccc4},	/* 2.38747=f(5.7)*/
{64, 0,123,__LINE__, 0x4005c329, 0x8dd40b22, 0x401d9999, 0x99999991},	/* 2.72029=f(7.4)*/
{64, 0,123,__LINE__, 0x40082209, 0xfea1fd35, 0x40223333, 0x3333332f},	/* 3.01662=f(9.1)*/
{63, 0,123,__LINE__, 0x400a4a6a, 0x2f74c6a9, 0x40259999, 0x99999995},	/* 3.28634=f(10.8)*/
{64, 0,123,__LINE__, 0x400c48c6, 0x001f0abd, 0x4028ffff, 0xfffffffb},	/* 3.53553=f(12.5)*/
{64, 0,123,__LINE__, 0x400e2574, 0x90a1c701, 0x402c6666, 0x66666661},	/* 3.76829=f(14.2)*/
{64, 0,123,__LINE__, 0x400fe65c, 0x20bc6144, 0x402fcccc, 0xccccccc7},	/* 3.98748=f(15.9)*/
{64, 0,123,__LINE__, 0x4010c7eb, 0xc96a56f4, 0x40319999, 0x99999997},	/* 4.19524=f(17.6)*/
{64, 0,123,__LINE__, 0x4011929c, 0xde1931e4, 0x40334ccc, 0xccccccca},	/* 4.39318=f(19.3)*/
{64, 0,123,__LINE__, 0x4012548e, 0xb9151e84, 0x4034ffff, 0xfffffffd},	/* 4.58258=f(21)*/
{64, 0,123,__LINE__, 0x40130ecc, 0x6d288adc, 0x4036b333, 0x33333330},	/* 4.76445=f(22.7)*/
{64, 0,123,__LINE__, 0x4013c22f, 0xd6a2b7b0, 0x40386666, 0x66666663},	/* 4.93964=f(24.4)*/
{64, 0,123,__LINE__, 0x40146f6d, 0x70171f62, 0x403a1999, 0x99999996},	/* 5.10882=f(26.1)*/
{63, 0,123,__LINE__, 0x4015171c, 0xbaaadfe1, 0x403bcccc, 0xccccccc9},	/* 5.27257=f(27.8)*/
{63, 0,123,__LINE__, 0x4015b9be, 0x5d52a9d9, 0x403d7fff, 0xfffffffc},	/* 5.43139=f(29.5)*/
{0},};
void test_sqrt(m)   {run_vector_1(m,sqrt_vec,(char *)(sqrt),"sqrt","dd");   }	
