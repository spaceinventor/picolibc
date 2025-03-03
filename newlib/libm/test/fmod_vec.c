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
 one_line_type fmod_vec[] = {
{64, 0,123,__LINE__, 0xbff33333, 0x33333333, 0xbff33333, 0x33333333, 0x40066666, 0x66666666},	/* -1.2=f(-1.2, 2.8)*/
{64, 0,123,__LINE__, 0xbff30a3d, 0x70a3d70a, 0xbff30a3d, 0x70a3d70a, 0x40067ae1, 0x47ae147b},	/* -1.19=f(-1.19, 2.81)*/
{64, 0,123,__LINE__, 0xbff2e147, 0xae147ae1, 0xbff2e147, 0xae147ae1, 0x40068f5c, 0x28f5c290},	/* -1.18=f(-1.18, 2.82)*/
{64, 0,123,__LINE__, 0xbff2b851, 0xeb851eb8, 0xbff2b851, 0xeb851eb8, 0x4006a3d7, 0x0a3d70a4},	/* -1.17=f(-1.17, 2.83)*/
{64, 0,123,__LINE__, 0xbff28f5c, 0x28f5c28f, 0xbff28f5c, 0x28f5c28f, 0x4006b851, 0xeb851eb8},	/* -1.16=f(-1.16, 2.84)*/
{64, 0,123,__LINE__, 0xbff26666, 0x66666666, 0xbff26666, 0x66666666, 0x4006cccc, 0xcccccccd},	/* -1.15=f(-1.15, 2.85)*/
{64, 0,123,__LINE__, 0xbff23d70, 0xa3d70a3d, 0xbff23d70, 0xa3d70a3d, 0x4006e147, 0xae147ae2},	/* -1.14=f(-1.14, 2.86)*/
{64, 0,123,__LINE__, 0xbff2147a, 0xe147ae14, 0xbff2147a, 0xe147ae14, 0x4006f5c2, 0x8f5c28f6},	/* -1.13=f(-1.13, 2.87)*/
{64, 0,123,__LINE__, 0xbff1eb85, 0x1eb851eb, 0xbff1eb85, 0x1eb851eb, 0x40070a3d, 0x70a3d70a},	/* -1.12=f(-1.12, 2.88)*/
{64, 0,123,__LINE__, 0xbff1c28f, 0x5c28f5c2, 0xbff1c28f, 0x5c28f5c2, 0x40071eb8, 0x51eb851f},	/* -1.11=f(-1.11, 2.89)*/
{64, 0,123,__LINE__, 0xbff19999, 0x99999999, 0xbff19999, 0x99999999, 0x40073333, 0x33333334},	/* -1.1=f(-1.1, 2.9)*/
{64, 0,123,__LINE__, 0xbff170a3, 0xd70a3d70, 0xbff170a3, 0xd70a3d70, 0x400747ae, 0x147ae148},	/* -1.09=f(-1.09, 2.91)*/
{64, 0,123,__LINE__, 0xbff147ae, 0x147ae147, 0xbff147ae, 0x147ae147, 0x40075c28, 0xf5c28f5c},	/* -1.08=f(-1.08, 2.92)*/
{64, 0,123,__LINE__, 0xbff11eb8, 0x51eb851e, 0xbff11eb8, 0x51eb851e, 0x400770a3, 0xd70a3d71},	/* -1.07=f(-1.07, 2.93)*/
{64, 0,123,__LINE__, 0xbff0f5c2, 0x8f5c28f5, 0xbff0f5c2, 0x8f5c28f5, 0x4007851e, 0xb851eb86},	/* -1.06=f(-1.06, 2.94)*/
{64, 0,123,__LINE__, 0xbff0cccc, 0xcccccccc, 0xbff0cccc, 0xcccccccc, 0x40079999, 0x9999999a},	/* -1.05=f(-1.05, 2.95)*/
{64, 0,123,__LINE__, 0xbff0a3d7, 0x0a3d70a3, 0xbff0a3d7, 0x0a3d70a3, 0x4007ae14, 0x7ae147ae},	/* -1.04=f(-1.04, 2.96)*/
{64, 0,123,__LINE__, 0xbff07ae1, 0x47ae147a, 0xbff07ae1, 0x47ae147a, 0x4007c28f, 0x5c28f5c3},	/* -1.03=f(-1.03, 2.97)*/
{64, 0,123,__LINE__, 0xbff051eb, 0x851eb851, 0xbff051eb, 0x851eb851, 0x4007d70a, 0x3d70a3d8},	/* -1.02=f(-1.02, 2.98)*/
{64, 0,123,__LINE__, 0xbff028f5, 0xc28f5c28, 0xbff028f5, 0xc28f5c28, 0x4007eb85, 0x1eb851ec},	/* -1.01=f(-1.01, 2.99)*/
{64, 0,123,__LINE__, 0xbfefffff, 0xfffffffe, 0xbfefffff, 0xfffffffe, 0x40080000, 0x00000000},	/* -1=f(-1, 3)*/
{64, 0,123,__LINE__, 0xbfefae14, 0x7ae147ac, 0xbfefae14, 0x7ae147ac, 0x4008147a, 0xe147ae15},	/* -0.99=f(-0.99, 3.01)*/
{64, 0,123,__LINE__, 0xbfef5c28, 0xf5c28f5a, 0xbfef5c28, 0xf5c28f5a, 0x400828f5, 0xc28f5c2a},	/* -0.98=f(-0.98, 3.02)*/
{64, 0,123,__LINE__, 0xbfef0a3d, 0x70a3d708, 0xbfef0a3d, 0x70a3d708, 0x40083d70, 0xa3d70a3e},	/* -0.97=f(-0.97, 3.03)*/
{64, 0,123,__LINE__, 0xbfeeb851, 0xeb851eb6, 0xbfeeb851, 0xeb851eb6, 0x400851eb, 0x851eb852},	/* -0.96=f(-0.96, 3.04)*/
{64, 0,123,__LINE__, 0xbfee6666, 0x66666664, 0xbfee6666, 0x66666664, 0x40086666, 0x66666667},	/* -0.95=f(-0.95, 3.05)*/
{64, 0,123,__LINE__, 0xbfee147a, 0xe147ae12, 0xbfee147a, 0xe147ae12, 0x40087ae1, 0x47ae147c},	/* -0.94=f(-0.94, 3.06)*/
{64, 0,123,__LINE__, 0xbfedc28f, 0x5c28f5c0, 0xbfedc28f, 0x5c28f5c0, 0x40088f5c, 0x28f5c290},	/* -0.93=f(-0.93, 3.07)*/
{64, 0,123,__LINE__, 0xbfed70a3, 0xd70a3d6e, 0xbfed70a3, 0xd70a3d6e, 0x4008a3d7, 0x0a3d70a4},	/* -0.92=f(-0.92, 3.08)*/
{64, 0,123,__LINE__, 0xbfed1eb8, 0x51eb851c, 0xbfed1eb8, 0x51eb851c, 0x4008b851, 0xeb851eb9},	/* -0.91=f(-0.91, 3.09)*/
{64, 0,123,__LINE__, 0xbfeccccc, 0xccccccca, 0xbfeccccc, 0xccccccca, 0x4008cccc, 0xccccccce},	/* -0.9=f(-0.9, 3.1)*/
{64, 0,123,__LINE__, 0xbfec7ae1, 0x47ae1478, 0xbfec7ae1, 0x47ae1478, 0x4008e147, 0xae147ae2},	/* -0.89=f(-0.89, 3.11)*/
{64, 0,123,__LINE__, 0xbfec28f5, 0xc28f5c26, 0xbfec28f5, 0xc28f5c26, 0x4008f5c2, 0x8f5c28f6},	/* -0.88=f(-0.88, 3.12)*/
{64, 0,123,__LINE__, 0xbfebd70a, 0x3d70a3d4, 0xbfebd70a, 0x3d70a3d4, 0x40090a3d, 0x70a3d70b},	/* -0.87=f(-0.87, 3.13)*/
{64, 0,123,__LINE__, 0xbfeb851e, 0xb851eb82, 0xbfeb851e, 0xb851eb82, 0x40091eb8, 0x51eb8520},	/* -0.86=f(-0.86, 3.14)*/
{64, 0,123,__LINE__, 0xbfeb3333, 0x33333330, 0xbfeb3333, 0x33333330, 0x40093333, 0x33333334},	/* -0.85=f(-0.85, 3.15)*/
{64, 0,123,__LINE__, 0xbfeae147, 0xae147ade, 0xbfeae147, 0xae147ade, 0x400947ae, 0x147ae148},	/* -0.84=f(-0.84, 3.16)*/
{64, 0,123,__LINE__, 0xbfea8f5c, 0x28f5c28c, 0xbfea8f5c, 0x28f5c28c, 0x40095c28, 0xf5c28f5d},	/* -0.83=f(-0.83, 3.17)*/
{64, 0,123,__LINE__, 0xbfea3d70, 0xa3d70a3a, 0xbfea3d70, 0xa3d70a3a, 0x400970a3, 0xd70a3d72},	/* -0.82=f(-0.82, 3.18)*/
{64, 0,123,__LINE__, 0xbfe9eb85, 0x1eb851e8, 0xbfe9eb85, 0x1eb851e8, 0x4009851e, 0xb851eb86},	/* -0.81=f(-0.81, 3.19)*/
{64, 0,123,__LINE__, 0xbfe99999, 0x99999996, 0xbfe99999, 0x99999996, 0x40099999, 0x9999999a},	/* -0.8=f(-0.8, 3.2)*/
{64, 0,123,__LINE__, 0xbfe947ae, 0x147ae144, 0xbfe947ae, 0x147ae144, 0x4009ae14, 0x7ae147af},	/* -0.79=f(-0.79, 3.21)*/
{64, 0,123,__LINE__, 0xbfe8f5c2, 0x8f5c28f2, 0xbfe8f5c2, 0x8f5c28f2, 0x4009c28f, 0x5c28f5c4},	/* -0.78=f(-0.78, 3.22)*/
{64, 0,123,__LINE__, 0xbfe8a3d7, 0x0a3d70a0, 0xbfe8a3d7, 0x0a3d70a0, 0x4009d70a, 0x3d70a3d8},	/* -0.77=f(-0.77, 3.23)*/
{64, 0,123,__LINE__, 0xbfe851eb, 0x851eb84e, 0xbfe851eb, 0x851eb84e, 0x4009eb85, 0x1eb851ec},	/* -0.76=f(-0.76, 3.24)*/
{64, 0,123,__LINE__, 0xbfe7ffff, 0xfffffffc, 0xbfe7ffff, 0xfffffffc, 0x400a0000, 0x00000001},	/* -0.75=f(-0.75, 3.25)*/
{64, 0,123,__LINE__, 0xbfe7ae14, 0x7ae147aa, 0xbfe7ae14, 0x7ae147aa, 0x400a147a, 0xe147ae16},	/* -0.74=f(-0.74, 3.26)*/
{64, 0,123,__LINE__, 0xbfe75c28, 0xf5c28f58, 0xbfe75c28, 0xf5c28f58, 0x400a28f5, 0xc28f5c2a},	/* -0.73=f(-0.73, 3.27)*/
{64, 0,123,__LINE__, 0xbfe70a3d, 0x70a3d706, 0xbfe70a3d, 0x70a3d706, 0x400a3d70, 0xa3d70a3e},	/* -0.72=f(-0.72, 3.28)*/
{64, 0,123,__LINE__, 0xbfe6b851, 0xeb851eb4, 0xbfe6b851, 0xeb851eb4, 0x400a51eb, 0x851eb853},	/* -0.71=f(-0.71, 3.29)*/
{64, 0,123,__LINE__, 0xbfe66666, 0x66666662, 0xbfe66666, 0x66666662, 0x400a6666, 0x66666668},	/* -0.7=f(-0.7, 3.3)*/
{64, 0,123,__LINE__, 0xbfe6147a, 0xe147ae10, 0xbfe6147a, 0xe147ae10, 0x400a7ae1, 0x47ae147c},	/* -0.69=f(-0.69, 3.31)*/
{64, 0,123,__LINE__, 0xbfe5c28f, 0x5c28f5be, 0xbfe5c28f, 0x5c28f5be, 0x400a8f5c, 0x28f5c290},	/* -0.68=f(-0.68, 3.32)*/
{64, 0,123,__LINE__, 0xbfe570a3, 0xd70a3d6c, 0xbfe570a3, 0xd70a3d6c, 0x400aa3d7, 0x0a3d70a5},	/* -0.67=f(-0.67, 3.33)*/
{64, 0,123,__LINE__, 0xbfe51eb8, 0x51eb851a, 0xbfe51eb8, 0x51eb851a, 0x400ab851, 0xeb851eba},	/* -0.66=f(-0.66, 3.34)*/
{64, 0,123,__LINE__, 0xbfe4cccc, 0xccccccc8, 0xbfe4cccc, 0xccccccc8, 0x400acccc, 0xccccccce},	/* -0.65=f(-0.65, 3.35)*/
{64, 0,123,__LINE__, 0xbfe47ae1, 0x47ae1476, 0xbfe47ae1, 0x47ae1476, 0x400ae147, 0xae147ae2},	/* -0.64=f(-0.64, 3.36)*/
{64, 0,123,__LINE__, 0xbfe428f5, 0xc28f5c24, 0xbfe428f5, 0xc28f5c24, 0x400af5c2, 0x8f5c28f7},	/* -0.63=f(-0.63, 3.37)*/
{64, 0,123,__LINE__, 0xbfe3d70a, 0x3d70a3d2, 0xbfe3d70a, 0x3d70a3d2, 0x400b0a3d, 0x70a3d70c},	/* -0.62=f(-0.62, 3.38)*/
{64, 0,123,__LINE__, 0xbfe3851e, 0xb851eb80, 0xbfe3851e, 0xb851eb80, 0x400b1eb8, 0x51eb8520},	/* -0.61=f(-0.61, 3.39)*/
{64, 0,123,__LINE__, 0xbfe33333, 0x3333332e, 0xbfe33333, 0x3333332e, 0x400b3333, 0x33333334},	/* -0.6=f(-0.6, 3.4)*/
{64, 0,123,__LINE__, 0xbfe2e147, 0xae147adc, 0xbfe2e147, 0xae147adc, 0x400b47ae, 0x147ae149},	/* -0.59=f(-0.59, 3.41)*/
{64, 0,123,__LINE__, 0xbfe28f5c, 0x28f5c28a, 0xbfe28f5c, 0x28f5c28a, 0x400b5c28, 0xf5c28f5e},	/* -0.58=f(-0.58, 3.42)*/
{64, 0,123,__LINE__, 0xbfe23d70, 0xa3d70a38, 0xbfe23d70, 0xa3d70a38, 0x400b70a3, 0xd70a3d72},	/* -0.57=f(-0.57, 3.43)*/
{64, 0,123,__LINE__, 0xbfe1eb85, 0x1eb851e6, 0xbfe1eb85, 0x1eb851e6, 0x400b851e, 0xb851eb86},	/* -0.56=f(-0.56, 3.44)*/
{64, 0,123,__LINE__, 0xbfe19999, 0x99999994, 0xbfe19999, 0x99999994, 0x400b9999, 0x9999999b},	/* -0.55=f(-0.55, 3.45)*/
{64, 0,123,__LINE__, 0xbfe147ae, 0x147ae142, 0xbfe147ae, 0x147ae142, 0x400bae14, 0x7ae147b0},	/* -0.54=f(-0.54, 3.46)*/
{64, 0,123,__LINE__, 0xbfe0f5c2, 0x8f5c28f0, 0xbfe0f5c2, 0x8f5c28f0, 0x400bc28f, 0x5c28f5c4},	/* -0.53=f(-0.53, 3.47)*/
{64, 0,123,__LINE__, 0xbfe0a3d7, 0x0a3d709e, 0xbfe0a3d7, 0x0a3d709e, 0x400bd70a, 0x3d70a3d8},	/* -0.52=f(-0.52, 3.48)*/
{64, 0,123,__LINE__, 0xbfe051eb, 0x851eb84c, 0xbfe051eb, 0x851eb84c, 0x400beb85, 0x1eb851ed},	/* -0.51=f(-0.51, 3.49)*/
{64, 0,123,__LINE__, 0xbfdfffff, 0xfffffff4, 0xbfdfffff, 0xfffffff4, 0x400c0000, 0x00000002},	/* -0.5=f(-0.5, 3.5)*/
{64, 0,123,__LINE__, 0xbfdf5c28, 0xf5c28f50, 0xbfdf5c28, 0xf5c28f50, 0x400c147a, 0xe147ae16},	/* -0.49=f(-0.49, 3.51)*/
{64, 0,123,__LINE__, 0xbfdeb851, 0xeb851eac, 0xbfdeb851, 0xeb851eac, 0x400c28f5, 0xc28f5c2a},	/* -0.48=f(-0.48, 3.52)*/
{64, 0,123,__LINE__, 0xbfde147a, 0xe147ae08, 0xbfde147a, 0xe147ae08, 0x400c3d70, 0xa3d70a3f},	/* -0.47=f(-0.47, 3.53)*/
{64, 0,123,__LINE__, 0xbfdd70a3, 0xd70a3d64, 0xbfdd70a3, 0xd70a3d64, 0x400c51eb, 0x851eb854},	/* -0.46=f(-0.46, 3.54)*/
{64, 0,123,__LINE__, 0xbfdccccc, 0xccccccc0, 0xbfdccccc, 0xccccccc0, 0x400c6666, 0x66666668},	/* -0.45=f(-0.45, 3.55)*/
{64, 0,123,__LINE__, 0xbfdc28f5, 0xc28f5c1c, 0xbfdc28f5, 0xc28f5c1c, 0x400c7ae1, 0x47ae147c},	/* -0.44=f(-0.44, 3.56)*/
{64, 0,123,__LINE__, 0xbfdb851e, 0xb851eb78, 0xbfdb851e, 0xb851eb78, 0x400c8f5c, 0x28f5c291},	/* -0.43=f(-0.43, 3.57)*/
{64, 0,123,__LINE__, 0xbfdae147, 0xae147ad4, 0xbfdae147, 0xae147ad4, 0x400ca3d7, 0x0a3d70a6},	/* -0.42=f(-0.42, 3.58)*/
{64, 0,123,__LINE__, 0xbfda3d70, 0xa3d70a30, 0xbfda3d70, 0xa3d70a30, 0x400cb851, 0xeb851eba},	/* -0.41=f(-0.41, 3.59)*/
{64, 0,123,__LINE__, 0xbfd99999, 0x9999998c, 0xbfd99999, 0x9999998c, 0x400ccccc, 0xccccccce},	/* -0.4=f(-0.4, 3.6)*/
{64, 0,123,__LINE__, 0xbfd8f5c2, 0x8f5c28e8, 0xbfd8f5c2, 0x8f5c28e8, 0x400ce147, 0xae147ae3},	/* -0.39=f(-0.39, 3.61)*/
{64, 0,123,__LINE__, 0xbfd851eb, 0x851eb844, 0xbfd851eb, 0x851eb844, 0x400cf5c2, 0x8f5c28f8},	/* -0.38=f(-0.38, 3.62)*/
{64, 0,123,__LINE__, 0xbfd7ae14, 0x7ae147a0, 0xbfd7ae14, 0x7ae147a0, 0x400d0a3d, 0x70a3d70c},	/* -0.37=f(-0.37, 3.63)*/
{64, 0,123,__LINE__, 0xbfd70a3d, 0x70a3d6fc, 0xbfd70a3d, 0x70a3d6fc, 0x400d1eb8, 0x51eb8520},	/* -0.36=f(-0.36, 3.64)*/
{64, 0,123,__LINE__, 0xbfd66666, 0x66666658, 0xbfd66666, 0x66666658, 0x400d3333, 0x33333335},	/* -0.35=f(-0.35, 3.65)*/
{64, 0,123,__LINE__, 0xbfd5c28f, 0x5c28f5b4, 0xbfd5c28f, 0x5c28f5b4, 0x400d47ae, 0x147ae14a},	/* -0.34=f(-0.34, 3.66)*/
{64, 0,123,__LINE__, 0xbfd51eb8, 0x51eb8510, 0xbfd51eb8, 0x51eb8510, 0x400d5c28, 0xf5c28f5e},	/* -0.33=f(-0.33, 3.67)*/
{64, 0,123,__LINE__, 0xbfd47ae1, 0x47ae146c, 0xbfd47ae1, 0x47ae146c, 0x400d70a3, 0xd70a3d72},	/* -0.32=f(-0.32, 3.68)*/
{64, 0,123,__LINE__, 0xbfd3d70a, 0x3d70a3c8, 0xbfd3d70a, 0x3d70a3c8, 0x400d851e, 0xb851eb87},	/* -0.31=f(-0.31, 3.69)*/
{64, 0,123,__LINE__, 0xbfd33333, 0x33333324, 0xbfd33333, 0x33333324, 0x400d9999, 0x9999999c},	/* -0.3=f(-0.3, 3.7)*/
{64, 0,123,__LINE__, 0xbfd28f5c, 0x28f5c280, 0xbfd28f5c, 0x28f5c280, 0x400dae14, 0x7ae147b0},	/* -0.29=f(-0.29, 3.71)*/
{64, 0,123,__LINE__, 0xbfd1eb85, 0x1eb851dc, 0xbfd1eb85, 0x1eb851dc, 0x400dc28f, 0x5c28f5c4},	/* -0.28=f(-0.28, 3.72)*/
{64, 0,123,__LINE__, 0xbfd147ae, 0x147ae138, 0xbfd147ae, 0x147ae138, 0x400dd70a, 0x3d70a3d9},	/* -0.27=f(-0.27, 3.73)*/
{64, 0,123,__LINE__, 0xbfd0a3d7, 0x0a3d7094, 0xbfd0a3d7, 0x0a3d7094, 0x400deb85, 0x1eb851ee},	/* -0.26=f(-0.26, 3.74)*/
{64, 0,123,__LINE__, 0xbfcfffff, 0xffffffe0, 0xbfcfffff, 0xffffffe0, 0x400e0000, 0x00000002},	/* -0.25=f(-0.25, 3.75)*/
{64, 0,123,__LINE__, 0xbfceb851, 0xeb851e98, 0xbfceb851, 0xeb851e98, 0x400e147a, 0xe147ae16},	/* -0.24=f(-0.24, 3.76)*/
{64, 0,123,__LINE__, 0xbfcd70a3, 0xd70a3d50, 0xbfcd70a3, 0xd70a3d50, 0x400e28f5, 0xc28f5c2b},	/* -0.23=f(-0.23, 3.77)*/
{64, 0,123,__LINE__, 0xbfcc28f5, 0xc28f5c08, 0xbfcc28f5, 0xc28f5c08, 0x400e3d70, 0xa3d70a40},	/* -0.22=f(-0.22, 3.78)*/
{64, 0,123,__LINE__, 0xbfcae147, 0xae147ac0, 0xbfcae147, 0xae147ac0, 0x400e51eb, 0x851eb854},	/* -0.21=f(-0.21, 3.79)*/
{64, 0,123,__LINE__, 0xbfc99999, 0x99999978, 0xbfc99999, 0x99999978, 0x400e6666, 0x66666668},	/* -0.2=f(-0.2, 3.8)*/
{64, 0,123,__LINE__, 0xbfc851eb, 0x851eb830, 0xbfc851eb, 0x851eb830, 0x400e7ae1, 0x47ae147d},	/* -0.19=f(-0.19, 3.81)*/
{64, 0,123,__LINE__, 0xbfc70a3d, 0x70a3d6e8, 0xbfc70a3d, 0x70a3d6e8, 0x400e8f5c, 0x28f5c292},	/* -0.18=f(-0.18, 3.82)*/
{64, 0,123,__LINE__, 0xbfc5c28f, 0x5c28f5a0, 0xbfc5c28f, 0x5c28f5a0, 0x400ea3d7, 0x0a3d70a6},	/* -0.17=f(-0.17, 3.83)*/
{64, 0,123,__LINE__, 0xbfc47ae1, 0x47ae1458, 0xbfc47ae1, 0x47ae1458, 0x400eb851, 0xeb851eba},	/* -0.16=f(-0.16, 3.84)*/
{64, 0,123,__LINE__, 0xbfc33333, 0x33333310, 0xbfc33333, 0x33333310, 0x400ecccc, 0xcccccccf},	/* -0.15=f(-0.15, 3.85)*/
{64, 0,123,__LINE__, 0xbfc1eb85, 0x1eb851c8, 0xbfc1eb85, 0x1eb851c8, 0x400ee147, 0xae147ae4},	/* -0.14=f(-0.14, 3.86)*/
{64, 0,123,__LINE__, 0xbfc0a3d7, 0x0a3d7080, 0xbfc0a3d7, 0x0a3d7080, 0x400ef5c2, 0x8f5c28f8},	/* -0.13=f(-0.13, 3.87)*/
{64, 0,123,__LINE__, 0xbfbeb851, 0xeb851e71, 0xbfbeb851, 0xeb851e71, 0x400f0a3d, 0x70a3d70c},	/* -0.12=f(-0.12, 3.88)*/
{64, 0,123,__LINE__, 0xbfbc28f5, 0xc28f5be2, 0xbfbc28f5, 0xc28f5be2, 0x400f1eb8, 0x51eb8521},	/* -0.11=f(-0.11, 3.89)*/
{64, 0,123,__LINE__, 0xbfb99999, 0x99999953, 0xbfb99999, 0x99999953, 0x400f3333, 0x33333335},	/* -0.1=f(-0.1, 3.9)*/
{64, 0,123,__LINE__, 0xbfb70a3d, 0x70a3d6c4, 0xbfb70a3d, 0x70a3d6c4, 0x400f47ae, 0x147ae14a},	/* -0.09=f(-0.09, 3.91)*/
{64, 0,123,__LINE__, 0xbfb47ae1, 0x47ae1435, 0xbfb47ae1, 0x47ae1435, 0x400f5c28, 0xf5c28f5e},	/* -0.08=f(-0.08, 3.92)*/
{64, 0,123,__LINE__, 0xbfb1eb85, 0x1eb851a6, 0xbfb1eb85, 0x1eb851a6, 0x400f70a3, 0xd70a3d73},	/* -0.07=f(-0.07, 3.93)*/
{64, 0,123,__LINE__, 0xbfaeb851, 0xeb851e2d, 0xbfaeb851, 0xeb851e2d, 0x400f851e, 0xb851eb87},	/* -0.06=f(-0.06, 3.94)*/
{64, 0,123,__LINE__, 0xbfa99999, 0x9999990e, 0xbfa99999, 0x9999990e, 0x400f9999, 0x9999999c},	/* -0.05=f(-0.05, 3.95)*/
{64, 0,123,__LINE__, 0xbfa47ae1, 0x47ae13ef, 0xbfa47ae1, 0x47ae13ef, 0x400fae14, 0x7ae147b0},	/* -0.04=f(-0.04, 3.96)*/
{64, 0,123,__LINE__, 0xbf9eb851, 0xeb851da0, 0xbf9eb851, 0xeb851da0, 0x400fc28f, 0x5c28f5c5},	/* -0.03=f(-0.03, 3.97)*/
{64, 0,123,__LINE__, 0xbf947ae1, 0x47ae1362, 0xbf947ae1, 0x47ae1362, 0x400fd70a, 0x3d70a3d9},	/* -0.02=f(-0.02, 3.98)*/
{64, 0,123,__LINE__, 0xbf847ae1, 0x47ae1249, 0xbf847ae1, 0x47ae1249, 0x400feb85, 0x1eb851ee},	/* -0.01=f(-0.01, 3.99)*/
{64, 0,123,__LINE__, 0x3cd19000, 0x00000000, 0x3cd19000, 0x00000000, 0x40100000, 0x00000001},	/* 9.74915e-16=f(9.74915e-16, 4)*/
{64, 0,123,__LINE__, 0x3f847ae1, 0x47ae16ad, 0x3f847ae1, 0x47ae16ad, 0x40100a3d, 0x70a3d70b},	/* 0.01=f(0.01, 4.01)*/
{64, 0,123,__LINE__, 0x3f947ae1, 0x47ae1594, 0x3f947ae1, 0x47ae1594, 0x4010147a, 0xe147ae16},	/* 0.02=f(0.02, 4.02)*/
{64, 0,123,__LINE__, 0x3f9eb851, 0xeb851fd2, 0x3f9eb851, 0xeb851fd2, 0x40101eb8, 0x51eb8520},	/* 0.03=f(0.03, 4.03)*/
{64, 0,123,__LINE__, 0x3fa47ae1, 0x47ae1508, 0x3fa47ae1, 0x47ae1508, 0x401028f5, 0xc28f5c2a},	/* 0.04=f(0.04, 4.04)*/
{64, 0,123,__LINE__, 0x3fa99999, 0x99999a27, 0x3fa99999, 0x99999a27, 0x40103333, 0x33333334},	/* 0.05=f(0.05, 4.05)*/
{64, 0,123,__LINE__, 0x3faeb851, 0xeb851f46, 0x3faeb851, 0xeb851f46, 0x40103d70, 0xa3d70a3f},	/* 0.06=f(0.06, 4.06)*/
{64, 0,123,__LINE__, 0x3fb1eb85, 0x1eb85232, 0x3fb1eb85, 0x1eb85232, 0x401047ae, 0x147ae149},	/* 0.07=f(0.07, 4.07)*/
{64, 0,123,__LINE__, 0x3fb47ae1, 0x47ae14c1, 0x3fb47ae1, 0x47ae14c1, 0x401051eb, 0x851eb853},	/* 0.08=f(0.08, 4.08)*/
{64, 0,123,__LINE__, 0x3fb70a3d, 0x70a3d750, 0x3fb70a3d, 0x70a3d750, 0x40105c28, 0xf5c28f5d},	/* 0.09=f(0.09, 4.09)*/
{64, 0,123,__LINE__, 0x3fb99999, 0x999999df, 0x3fb99999, 0x999999df, 0x40106666, 0x66666667},	/* 0.1=f(0.1, 4.1)*/
{64, 0,123,__LINE__, 0x3fbc28f5, 0xc28f5c6e, 0x3fbc28f5, 0xc28f5c6e, 0x401070a3, 0xd70a3d72},	/* 0.11=f(0.11, 4.11)*/
{64, 0,123,__LINE__, 0x3fbeb851, 0xeb851efd, 0x3fbeb851, 0xeb851efd, 0x40107ae1, 0x47ae147c},	/* 0.12=f(0.12, 4.12)*/
{64, 0,123,__LINE__, 0x3fc0a3d7, 0x0a3d70c6, 0x3fc0a3d7, 0x0a3d70c6, 0x4010851e, 0xb851eb86},	/* 0.13=f(0.13, 4.13)*/
{64, 0,123,__LINE__, 0x3fc1eb85, 0x1eb8520e, 0x3fc1eb85, 0x1eb8520e, 0x40108f5c, 0x28f5c290},	/* 0.14=f(0.14, 4.14)*/
{64, 0,123,__LINE__, 0x3fc33333, 0x33333356, 0x3fc33333, 0x33333356, 0x40109999, 0x9999999b},	/* 0.15=f(0.15, 4.15)*/
{64, 0,123,__LINE__, 0x3fc47ae1, 0x47ae149e, 0x3fc47ae1, 0x47ae149e, 0x4010a3d7, 0x0a3d70a5},	/* 0.16=f(0.16, 4.16)*/
{64, 0,123,__LINE__, 0x3fc5c28f, 0x5c28f5e6, 0x3fc5c28f, 0x5c28f5e6, 0x4010ae14, 0x7ae147af},	/* 0.17=f(0.17, 4.17)*/
{64, 0,123,__LINE__, 0x3fc70a3d, 0x70a3d72e, 0x3fc70a3d, 0x70a3d72e, 0x4010b851, 0xeb851eb9},	/* 0.18=f(0.18, 4.18)*/
{64, 0,123,__LINE__, 0x3fc851eb, 0x851eb876, 0x3fc851eb, 0x851eb876, 0x4010c28f, 0x5c28f5c4},	/* 0.19=f(0.19, 4.19)*/
{64, 0,123,__LINE__, 0x3fc99999, 0x999999be, 0x3fc99999, 0x999999be, 0x4010cccc, 0xccccccce},	/* 0.2=f(0.2, 4.2)*/
{64, 0,123,__LINE__, 0x3fcae147, 0xae147b06, 0x3fcae147, 0xae147b06, 0x4010d70a, 0x3d70a3d8},	/* 0.21=f(0.21, 4.21)*/
{64, 0,123,__LINE__, 0x3fcc28f5, 0xc28f5c4e, 0x3fcc28f5, 0xc28f5c4e, 0x4010e147, 0xae147ae2},	/* 0.22=f(0.22, 4.22)*/
{64, 0,123,__LINE__, 0x3fcd70a3, 0xd70a3d96, 0x3fcd70a3, 0xd70a3d96, 0x4010eb85, 0x1eb851ed},	/* 0.23=f(0.23, 4.23)*/
{64, 0,123,__LINE__, 0x3fceb851, 0xeb851ede, 0x3fceb851, 0xeb851ede, 0x4010f5c2, 0x8f5c28f7},	/* 0.24=f(0.24, 4.24)*/
{64, 0,123,__LINE__, 0x3fd00000, 0x00000013, 0x3fd00000, 0x00000013, 0x40110000, 0x00000001},	/* 0.25=f(0.25, 4.25)*/
{64, 0,123,__LINE__, 0x3fd0a3d7, 0x0a3d70b7, 0x3fd0a3d7, 0x0a3d70b7, 0x40110a3d, 0x70a3d70b},	/* 0.26=f(0.26, 4.26)*/
{64, 0,123,__LINE__, 0x3fd147ae, 0x147ae15b, 0x3fd147ae, 0x147ae15b, 0x4011147a, 0xe147ae16},	/* 0.27=f(0.27, 4.27)*/
{64, 0,123,__LINE__, 0x3fd1eb85, 0x1eb851ff, 0x3fd1eb85, 0x1eb851ff, 0x40111eb8, 0x51eb8520},	/* 0.28=f(0.28, 4.28)*/
{64, 0,123,__LINE__, 0x3fd28f5c, 0x28f5c2a3, 0x3fd28f5c, 0x28f5c2a3, 0x401128f5, 0xc28f5c2a},	/* 0.29=f(0.29, 4.29)*/
{64, 0,123,__LINE__, 0x3fd33333, 0x33333347, 0x3fd33333, 0x33333347, 0x40113333, 0x33333334},	/* 0.3=f(0.3, 4.3)*/
{64, 0,123,__LINE__, 0x3fd3d70a, 0x3d70a3eb, 0x3fd3d70a, 0x3d70a3eb, 0x40113d70, 0xa3d70a3f},	/* 0.31=f(0.31, 4.31)*/
{64, 0,123,__LINE__, 0x3fd47ae1, 0x47ae148f, 0x3fd47ae1, 0x47ae148f, 0x401147ae, 0x147ae149},	/* 0.32=f(0.32, 4.32)*/
{64, 0,123,__LINE__, 0x3fd51eb8, 0x51eb8533, 0x3fd51eb8, 0x51eb8533, 0x401151eb, 0x851eb853},	/* 0.33=f(0.33, 4.33)*/
{64, 0,123,__LINE__, 0x3fd5c28f, 0x5c28f5d7, 0x3fd5c28f, 0x5c28f5d7, 0x40115c28, 0xf5c28f5d},	/* 0.34=f(0.34, 4.34)*/
{64, 0,123,__LINE__, 0x3fd66666, 0x6666667b, 0x3fd66666, 0x6666667b, 0x40116666, 0x66666668},	/* 0.35=f(0.35, 4.35)*/
{64, 0,123,__LINE__, 0x3fd70a3d, 0x70a3d71f, 0x3fd70a3d, 0x70a3d71f, 0x401170a3, 0xd70a3d72},	/* 0.36=f(0.36, 4.36)*/
{64, 0,123,__LINE__, 0x3fd7ae14, 0x7ae147c3, 0x3fd7ae14, 0x7ae147c3, 0x40117ae1, 0x47ae147c},	/* 0.37=f(0.37, 4.37)*/
{64, 0,123,__LINE__, 0x3fd851eb, 0x851eb867, 0x3fd851eb, 0x851eb867, 0x4011851e, 0xb851eb86},	/* 0.38=f(0.38, 4.38)*/
{64, 0,123,__LINE__, 0x3fd8f5c2, 0x8f5c290b, 0x3fd8f5c2, 0x8f5c290b, 0x40118f5c, 0x28f5c291},	/* 0.39=f(0.39, 4.39)*/
{64, 0,123,__LINE__, 0x3fd99999, 0x999999af, 0x3fd99999, 0x999999af, 0x40119999, 0x9999999b},	/* 0.4=f(0.4, 4.4)*/
{64, 0,123,__LINE__, 0x3fda3d70, 0xa3d70a53, 0x3fda3d70, 0xa3d70a53, 0x4011a3d7, 0x0a3d70a5},	/* 0.41=f(0.41, 4.41)*/
{64, 0,123,__LINE__, 0x3fdae147, 0xae147af7, 0x3fdae147, 0xae147af7, 0x4011ae14, 0x7ae147af},	/* 0.42=f(0.42, 4.42)*/
{64, 0,123,__LINE__, 0x3fdb851e, 0xb851eb9b, 0x3fdb851e, 0xb851eb9b, 0x4011b851, 0xeb851eba},	/* 0.43=f(0.43, 4.43)*/
{64, 0,123,__LINE__, 0x3fdc28f5, 0xc28f5c3f, 0x3fdc28f5, 0xc28f5c3f, 0x4011c28f, 0x5c28f5c4},	/* 0.44=f(0.44, 4.44)*/
{64, 0,123,__LINE__, 0x3fdccccc, 0xcccccce3, 0x3fdccccc, 0xcccccce3, 0x4011cccc, 0xccccccce},	/* 0.45=f(0.45, 4.45)*/
{64, 0,123,__LINE__, 0x3fdd70a3, 0xd70a3d87, 0x3fdd70a3, 0xd70a3d87, 0x4011d70a, 0x3d70a3d8},	/* 0.46=f(0.46, 4.46)*/
{64, 0,123,__LINE__, 0x3fde147a, 0xe147ae2b, 0x3fde147a, 0xe147ae2b, 0x4011e147, 0xae147ae3},	/* 0.47=f(0.47, 4.47)*/
{64, 0,123,__LINE__, 0x3fdeb851, 0xeb851ecf, 0x3fdeb851, 0xeb851ecf, 0x4011eb85, 0x1eb851ed},	/* 0.48=f(0.48, 4.48)*/
{64, 0,123,__LINE__, 0x3fdf5c28, 0xf5c28f73, 0x3fdf5c28, 0xf5c28f73, 0x4011f5c2, 0x8f5c28f7},	/* 0.49=f(0.49, 4.49)*/
{64, 0,123,__LINE__, 0x3fe00000, 0x0000000b, 0x3fe00000, 0x0000000b, 0x40120000, 0x00000001},	/* 0.5=f(0.5, 4.5)*/
{64, 0,123,__LINE__, 0x3fe051eb, 0x851eb85d, 0x3fe051eb, 0x851eb85d, 0x40120a3d, 0x70a3d70c},	/* 0.51=f(0.51, 4.51)*/
{64, 0,123,__LINE__, 0x3fe0a3d7, 0x0a3d70af, 0x3fe0a3d7, 0x0a3d70af, 0x4012147a, 0xe147ae16},	/* 0.52=f(0.52, 4.52)*/
{64, 0,123,__LINE__, 0x3fe0f5c2, 0x8f5c2901, 0x3fe0f5c2, 0x8f5c2901, 0x40121eb8, 0x51eb8520},	/* 0.53=f(0.53, 4.53)*/
{64, 0,123,__LINE__, 0x3fe147ae, 0x147ae153, 0x3fe147ae, 0x147ae153, 0x401228f5, 0xc28f5c2a},	/* 0.54=f(0.54, 4.54)*/
{64, 0,123,__LINE__, 0x3fe19999, 0x999999a5, 0x3fe19999, 0x999999a5, 0x40123333, 0x33333335},	/* 0.55=f(0.55, 4.55)*/
{64, 0,123,__LINE__, 0x3fe1eb85, 0x1eb851f7, 0x3fe1eb85, 0x1eb851f7, 0x40123d70, 0xa3d70a3f},	/* 0.56=f(0.56, 4.56)*/
{64, 0,123,__LINE__, 0x3fe23d70, 0xa3d70a49, 0x3fe23d70, 0xa3d70a49, 0x401247ae, 0x147ae149},	/* 0.57=f(0.57, 4.57)*/
{64, 0,123,__LINE__, 0x3fe28f5c, 0x28f5c29b, 0x3fe28f5c, 0x28f5c29b, 0x401251eb, 0x851eb853},	/* 0.58=f(0.58, 4.58)*/
{64, 0,123,__LINE__, 0x3fe2e147, 0xae147aed, 0x3fe2e147, 0xae147aed, 0x40125c28, 0xf5c28f5e},	/* 0.59=f(0.59, 4.59)*/
{64, 0,123,__LINE__, 0x3fe33333, 0x3333333f, 0x3fe33333, 0x3333333f, 0x40126666, 0x66666668},	/* 0.6=f(0.6, 4.6)*/
{64, 0,123,__LINE__, 0x3fe3851e, 0xb851eb91, 0x3fe3851e, 0xb851eb91, 0x401270a3, 0xd70a3d72},	/* 0.61=f(0.61, 4.61)*/
{64, 0,123,__LINE__, 0x3fe3d70a, 0x3d70a3e3, 0x3fe3d70a, 0x3d70a3e3, 0x40127ae1, 0x47ae147c},	/* 0.62=f(0.62, 4.62)*/
{64, 0,123,__LINE__, 0x3fe428f5, 0xc28f5c35, 0x3fe428f5, 0xc28f5c35, 0x4012851e, 0xb851eb87},	/* 0.63=f(0.63, 4.63)*/
{64, 0,123,__LINE__, 0x3fe47ae1, 0x47ae1487, 0x3fe47ae1, 0x47ae1487, 0x40128f5c, 0x28f5c291},	/* 0.64=f(0.64, 4.64)*/
{64, 0,123,__LINE__, 0x3fe4cccc, 0xccccccd9, 0x3fe4cccc, 0xccccccd9, 0x40129999, 0x9999999b},	/* 0.65=f(0.65, 4.65)*/
{64, 0,123,__LINE__, 0x3fe51eb8, 0x51eb852b, 0x3fe51eb8, 0x51eb852b, 0x4012a3d7, 0x0a3d70a5},	/* 0.66=f(0.66, 4.66)*/
{64, 0,123,__LINE__, 0x3fe570a3, 0xd70a3d7d, 0x3fe570a3, 0xd70a3d7d, 0x4012ae14, 0x7ae147b0},	/* 0.67=f(0.67, 4.67)*/
{64, 0,123,__LINE__, 0x3fe5c28f, 0x5c28f5cf, 0x3fe5c28f, 0x5c28f5cf, 0x4012b851, 0xeb851eba},	/* 0.68=f(0.68, 4.68)*/
{64, 0,123,__LINE__, 0x3fe6147a, 0xe147ae21, 0x3fe6147a, 0xe147ae21, 0x4012c28f, 0x5c28f5c4},	/* 0.69=f(0.69, 4.69)*/
{64, 0,123,__LINE__, 0x3fe66666, 0x66666673, 0x3fe66666, 0x66666673, 0x4012cccc, 0xccccccce},	/* 0.7=f(0.7, 4.7)*/
{64, 0,123,__LINE__, 0x3fe6b851, 0xeb851ec5, 0x3fe6b851, 0xeb851ec5, 0x4012d70a, 0x3d70a3d9},	/* 0.71=f(0.71, 4.71)*/
{64, 0,123,__LINE__, 0x3fe70a3d, 0x70a3d717, 0x3fe70a3d, 0x70a3d717, 0x4012e147, 0xae147ae3},	/* 0.72=f(0.72, 4.72)*/
{64, 0,123,__LINE__, 0x3fe75c28, 0xf5c28f69, 0x3fe75c28, 0xf5c28f69, 0x4012eb85, 0x1eb851ed},	/* 0.73=f(0.73, 4.73)*/
{64, 0,123,__LINE__, 0x3fe7ae14, 0x7ae147bb, 0x3fe7ae14, 0x7ae147bb, 0x4012f5c2, 0x8f5c28f7},	/* 0.74=f(0.74, 4.74)*/
{64, 0,123,__LINE__, 0x3fe80000, 0x0000000d, 0x3fe80000, 0x0000000d, 0x40130000, 0x00000002},	/* 0.75=f(0.75, 4.75)*/
{64, 0,123,__LINE__, 0x3fe851eb, 0x851eb85f, 0x3fe851eb, 0x851eb85f, 0x40130a3d, 0x70a3d70c},	/* 0.76=f(0.76, 4.76)*/
{64, 0,123,__LINE__, 0x3fe8a3d7, 0x0a3d70b1, 0x3fe8a3d7, 0x0a3d70b1, 0x4013147a, 0xe147ae16},	/* 0.77=f(0.77, 4.77)*/
{64, 0,123,__LINE__, 0x3fe8f5c2, 0x8f5c2903, 0x3fe8f5c2, 0x8f5c2903, 0x40131eb8, 0x51eb8520},	/* 0.78=f(0.78, 4.78)*/
{64, 0,123,__LINE__, 0x3fe947ae, 0x147ae155, 0x3fe947ae, 0x147ae155, 0x401328f5, 0xc28f5c2b},	/* 0.79=f(0.79, 4.79)*/
{64, 0,123,__LINE__, 0x3fe99999, 0x999999a7, 0x3fe99999, 0x999999a7, 0x40133333, 0x33333335},	/* 0.8=f(0.8, 4.8)*/
{64, 0,123,__LINE__, 0x3fe9eb85, 0x1eb851f9, 0x3fe9eb85, 0x1eb851f9, 0x40133d70, 0xa3d70a3f},	/* 0.81=f(0.81, 4.81)*/
{64, 0,123,__LINE__, 0x3fea3d70, 0xa3d70a4b, 0x3fea3d70, 0xa3d70a4b, 0x401347ae, 0x147ae149},	/* 0.82=f(0.82, 4.82)*/
{64, 0,123,__LINE__, 0x3fea8f5c, 0x28f5c29d, 0x3fea8f5c, 0x28f5c29d, 0x401351eb, 0x851eb854},	/* 0.83=f(0.83, 4.83)*/
{64, 0,123,__LINE__, 0x3feae147, 0xae147aef, 0x3feae147, 0xae147aef, 0x40135c28, 0xf5c28f5e},	/* 0.84=f(0.84, 4.84)*/
{64, 0,123,__LINE__, 0x3feb3333, 0x33333341, 0x3feb3333, 0x33333341, 0x40136666, 0x66666668},	/* 0.85=f(0.85, 4.85)*/
{64, 0,123,__LINE__, 0x3feb851e, 0xb851eb93, 0x3feb851e, 0xb851eb93, 0x401370a3, 0xd70a3d72},	/* 0.86=f(0.86, 4.86)*/
{64, 0,123,__LINE__, 0x3febd70a, 0x3d70a3e5, 0x3febd70a, 0x3d70a3e5, 0x40137ae1, 0x47ae147d},	/* 0.87=f(0.87, 4.87)*/
{64, 0,123,__LINE__, 0x3fec28f5, 0xc28f5c37, 0x3fec28f5, 0xc28f5c37, 0x4013851e, 0xb851eb87},	/* 0.88=f(0.88, 4.88)*/
{64, 0,123,__LINE__, 0x3fec7ae1, 0x47ae1489, 0x3fec7ae1, 0x47ae1489, 0x40138f5c, 0x28f5c291},	/* 0.89=f(0.89, 4.89)*/
{64, 0,123,__LINE__, 0x3feccccc, 0xccccccdb, 0x3feccccc, 0xccccccdb, 0x40139999, 0x9999999b},	/* 0.9=f(0.9, 4.9)*/
{64, 0,123,__LINE__, 0x3fed1eb8, 0x51eb852d, 0x3fed1eb8, 0x51eb852d, 0x4013a3d7, 0x0a3d70a6},	/* 0.91=f(0.91, 4.91)*/
{64, 0,123,__LINE__, 0x3fed70a3, 0xd70a3d7f, 0x3fed70a3, 0xd70a3d7f, 0x4013ae14, 0x7ae147b0},	/* 0.92=f(0.92, 4.92)*/
{64, 0,123,__LINE__, 0x3fedc28f, 0x5c28f5d1, 0x3fedc28f, 0x5c28f5d1, 0x4013b851, 0xeb851eba},	/* 0.93=f(0.93, 4.93)*/
{64, 0,123,__LINE__, 0x3fee147a, 0xe147ae23, 0x3fee147a, 0xe147ae23, 0x4013c28f, 0x5c28f5c4},	/* 0.94=f(0.94, 4.94)*/
{64, 0,123,__LINE__, 0x3fee6666, 0x66666675, 0x3fee6666, 0x66666675, 0x4013cccc, 0xcccccccf},	/* 0.95=f(0.95, 4.95)*/
{64, 0,123,__LINE__, 0x3feeb851, 0xeb851ec7, 0x3feeb851, 0xeb851ec7, 0x4013d70a, 0x3d70a3d9},	/* 0.96=f(0.96, 4.96)*/
{64, 0,123,__LINE__, 0x3fef0a3d, 0x70a3d719, 0x3fef0a3d, 0x70a3d719, 0x4013e147, 0xae147ae3},	/* 0.97=f(0.97, 4.97)*/
{64, 0,123,__LINE__, 0x3fef5c28, 0xf5c28f6b, 0x3fef5c28, 0xf5c28f6b, 0x4013eb85, 0x1eb851ed},	/* 0.98=f(0.98, 4.98)*/
{64, 0,123,__LINE__, 0x3fefae14, 0x7ae147bd, 0x3fefae14, 0x7ae147bd, 0x4013f5c2, 0x8f5c28f8},	/* 0.99=f(0.99, 4.99)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000007, 0x3ff00000, 0x00000007, 0x40140000, 0x00000002},	/* 1=f(1, 5)*/
{64, 0,123,__LINE__, 0x3ff028f5, 0xc28f5c30, 0x3ff028f5, 0xc28f5c30, 0x40140a3d, 0x70a3d70c},	/* 1.01=f(1.01, 5.01)*/
{64, 0,123,__LINE__, 0x3ff051eb, 0x851eb859, 0x3ff051eb, 0x851eb859, 0x4014147a, 0xe147ae16},	/* 1.02=f(1.02, 5.02)*/
{64, 0,123,__LINE__, 0x3ff07ae1, 0x47ae1482, 0x3ff07ae1, 0x47ae1482, 0x40141eb8, 0x51eb8520},	/* 1.03=f(1.03, 5.03)*/
{64, 0,123,__LINE__, 0x3ff0a3d7, 0x0a3d70ab, 0x3ff0a3d7, 0x0a3d70ab, 0x401428f5, 0xc28f5c2b},	/* 1.04=f(1.04, 5.04)*/
{64, 0,123,__LINE__, 0x3ff0cccc, 0xccccccd4, 0x3ff0cccc, 0xccccccd4, 0x40143333, 0x33333335},	/* 1.05=f(1.05, 5.05)*/
{64, 0,123,__LINE__, 0x3ff0f5c2, 0x8f5c28fd, 0x3ff0f5c2, 0x8f5c28fd, 0x40143d70, 0xa3d70a3f},	/* 1.06=f(1.06, 5.06)*/
{64, 0,123,__LINE__, 0x3ff11eb8, 0x51eb8526, 0x3ff11eb8, 0x51eb8526, 0x401447ae, 0x147ae14a},	/* 1.07=f(1.07, 5.07)*/
{64, 0,123,__LINE__, 0x3ff147ae, 0x147ae14f, 0x3ff147ae, 0x147ae14f, 0x401451eb, 0x851eb854},	/* 1.08=f(1.08, 5.08)*/
{64, 0,123,__LINE__, 0x3ff170a3, 0xd70a3d78, 0x3ff170a3, 0xd70a3d78, 0x40145c28, 0xf5c28f5e},	/* 1.09=f(1.09, 5.09)*/
{64, 0,123,__LINE__, 0x3ff19999, 0x999999a1, 0x3ff19999, 0x999999a1, 0x40146666, 0x66666668},	/* 1.1=f(1.1, 5.1)*/
{64, 0,123,__LINE__, 0x3ff1c28f, 0x5c28f5ca, 0x3ff1c28f, 0x5c28f5ca, 0x401470a3, 0xd70a3d72},	/* 1.11=f(1.11, 5.11)*/
{64, 0,123,__LINE__, 0x3ff1eb85, 0x1eb851f3, 0x3ff1eb85, 0x1eb851f3, 0x40147ae1, 0x47ae147d},	/* 1.12=f(1.12, 5.12)*/
{64, 0,123,__LINE__, 0x3ff2147a, 0xe147ae1c, 0x3ff2147a, 0xe147ae1c, 0x4014851e, 0xb851eb87},	/* 1.13=f(1.13, 5.13)*/
{64, 0,123,__LINE__, 0x3ff23d70, 0xa3d70a45, 0x3ff23d70, 0xa3d70a45, 0x40148f5c, 0x28f5c291},	/* 1.14=f(1.14, 5.14)*/
{64, 0,123,__LINE__, 0x3ff26666, 0x6666666e, 0x3ff26666, 0x6666666e, 0x40149999, 0x9999999c},	/* 1.15=f(1.15, 5.15)*/
{64, 0,123,__LINE__, 0x3ff28f5c, 0x28f5c297, 0x3ff28f5c, 0x28f5c297, 0x4014a3d7, 0x0a3d70a6},	/* 1.16=f(1.16, 5.16)*/
{64, 0,123,__LINE__, 0x3ff2b851, 0xeb851ec0, 0x3ff2b851, 0xeb851ec0, 0x4014ae14, 0x7ae147b0},	/* 1.17=f(1.17, 5.17)*/
{64, 0,123,__LINE__, 0x3ff2e147, 0xae147ae9, 0x3ff2e147, 0xae147ae9, 0x4014b851, 0xeb851eba},	/* 1.18=f(1.18, 5.18)*/
{64, 0,123,__LINE__, 0x3ff30a3d, 0x70a3d712, 0x3ff30a3d, 0x70a3d712, 0x4014c28f, 0x5c28f5c4},	/* 1.19=f(1.19, 5.19)*/
{64, 0,123,__LINE__, 0xbffb7812, 0xaeef4ba0, 0xc01921fb, 0x54442d18, 0xc00243f6, 0xa8885a30},	/* -1.71681=f(-6.28319, -2.28319)*/
{64, 0,123,__LINE__, 0xbfdc0918, 0x40056e60, 0xc012d97c, 0x7f3321d2, 0xbfe6cbe3, 0xf9990e90},	/* -0.438055=f(-4.71239, -0.712389)*/
{64, 0,123,__LINE__, 0xbfe21fb5, 0x4442d180, 0xc00921fb, 0x54442d18, 0x3feb7812, 0xaeef4ba0},	/* -0.566371=f(-3.14159, 0.858407)*/
{64, 0,123,__LINE__, 0xbff921fb, 0x54442d18, 0xbff921fb, 0x54442d18, 0x40036f02, 0x55dde974},	/* -1.5708=f(-1.5708, 2.4292)*/
{ 0, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x40100000, 0x00000000},	/* 0=f(0, 4)*/
{64, 0,123,__LINE__, 0x3ff921fb, 0x54442d18, 0x3ff921fb, 0x54442d18, 0x4016487e, 0xd5110b46},	/* 1.5708=f(1.5708, 5.5708)*/
{64, 0,123,__LINE__, 0x400921fb, 0x54442d18, 0x400921fb, 0x54442d18, 0x401c90fd, 0xaa22168c},	/* 3.14159=f(3.14159, 7.14159)*/
{64, 0,123,__LINE__, 0x4012d97c, 0x7f3321d2, 0x4012d97c, 0x7f3321d2, 0x40216cbe, 0x3f9990e9},	/* 4.71239=f(4.71239, 8.71239)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc03e0000, 0x00000000, 0xc03a0000, 0x00000000},	/* -4=f(-30, -26)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc03c4ccc, 0xcccccccd, 0xc0384ccc, 0xcccccccd},	/* -4=f(-28.3, -24.3)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc03a9999, 0x9999999a, 0xc0369999, 0x9999999a},	/* -4=f(-26.6, -22.6)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc038e666, 0x66666667, 0xc034e666, 0x66666667},	/* -4=f(-24.9, -20.9)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc0373333, 0x33333334, 0xc0333333, 0x33333334},	/* -4=f(-23.2, -19.2)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc0358000, 0x00000001, 0xc0318000, 0x00000001},	/* -4=f(-21.5, -17.5)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc033cccc, 0xccccccce, 0xc02f9999, 0x9999999c},	/* -4=f(-19.8, -15.8)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc0321999, 0x9999999b, 0xc02c3333, 0x33333336},	/* -4=f(-18.1, -14.1)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc0306666, 0x66666668, 0xc028cccc, 0xccccccd0},	/* -4=f(-16.4, -12.4)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc02d6666, 0x6666666a, 0xc0256666, 0x6666666a},	/* -4=f(-14.7, -10.7)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc02a0000, 0x00000004, 0xc0220000, 0x00000004},	/* -4=f(-13, -9)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc0269999, 0x9999999e, 0xc01d3333, 0x3333333c},	/* -4=f(-11.3, -7.3)*/
{64, 0,123,__LINE__, 0xc0100000, 0x00000000, 0xc0233333, 0x33333338, 0xc0166666, 0x66666670},	/* -4=f(-9.6, -5.6)*/
{64, 0,123,__LINE__, 0xbfb99999, 0x99999740, 0xc01f9999, 0x999999a3, 0xc00f3333, 0x33333346},	/* -0.1=f(-7.9, -3.9)*/
{64, 0,123,__LINE__, 0xbffccccc, 0xcccccca8, 0xc018cccc, 0xccccccd6, 0xc0019999, 0x999999ac},	/* -1.8=f(-6.2, -2.2)*/
{64, 0,123,__LINE__, 0xbfdfffff, 0xfffffc10, 0xc0120000, 0x00000009, 0xbfe00000, 0x00000048},	/* -0.5=f(-4.5, -0.5)*/
{64, 0,123,__LINE__, 0xbfd99999, 0x99999b40, 0xc0066666, 0x66666678, 0x3ff33333, 0x33333310},	/* -0.4=f(-2.8, 1.2)*/
{64, 0,123,__LINE__, 0xbff19999, 0x999999bd, 0xbff19999, 0x999999bd, 0x40073333, 0x33333322},	/* -1.1=f(-1.1, 2.9)*/
{64, 0,123,__LINE__, 0x3fe33333, 0x333332ec, 0x3fe33333, 0x333332ec, 0x40126666, 0x6666665e},	/* 0.6=f(0.6, 4.6)*/
{64, 0,123,__LINE__, 0x40026666, 0x66666654, 0x40026666, 0x66666654, 0x40193333, 0x3333332a},	/* 2.3=f(2.3, 6.3)*/
{64, 0,123,__LINE__, 0x400fffff, 0xffffffee, 0x400fffff, 0xffffffee, 0x401fffff, 0xfffffff7},	/* 4=f(4, 8)*/
{64, 0,123,__LINE__, 0x4016cccc, 0xccccccc4, 0x4016cccc, 0xccccccc4, 0x40236666, 0x66666662},	/* 5.7=f(5.7, 9.7)*/
{64, 0,123,__LINE__, 0x401d9999, 0x99999991, 0x401d9999, 0x99999991, 0x4026cccc, 0xccccccc8},	/* 7.4=f(7.4, 11.4)*/
{64, 0,123,__LINE__, 0x40223333, 0x3333332f, 0x40223333, 0x3333332f, 0x402a3333, 0x3333332f},	/* 9.1=f(9.1, 13.1)*/
{64, 0,123,__LINE__, 0x40259999, 0x99999995, 0x40259999, 0x99999995, 0x402d9999, 0x99999995},	/* 10.8=f(10.8, 14.8)*/
{64, 0,123,__LINE__, 0x4028ffff, 0xfffffffb, 0x4028ffff, 0xfffffffb, 0x40307fff, 0xfffffffe},	/* 12.5=f(12.5, 16.5)*/
{64, 0,123,__LINE__, 0x402c6666, 0x66666661, 0x402c6666, 0x66666661, 0x40323333, 0x33333330},	/* 14.2=f(14.2, 18.2)*/
{64, 0,123,__LINE__, 0x402fcccc, 0xccccccc7, 0x402fcccc, 0xccccccc7, 0x4033e666, 0x66666664},	/* 15.9=f(15.9, 19.9)*/
{64, 0,123,__LINE__, 0x40319999, 0x99999997, 0x40319999, 0x99999997, 0x40359999, 0x99999997},	/* 17.6=f(17.6, 21.6)*/
{64, 0,123,__LINE__, 0x40334ccc, 0xccccccca, 0x40334ccc, 0xccccccca, 0x40374ccc, 0xccccccca},	/* 19.3=f(19.3, 23.3)*/
{64, 0,123,__LINE__, 0x4034ffff, 0xfffffffd, 0x4034ffff, 0xfffffffd, 0x4038ffff, 0xfffffffd},	/* 21=f(21, 25)*/
{64, 0,123,__LINE__, 0x4036b333, 0x33333330, 0x4036b333, 0x33333330, 0x403ab333, 0x33333330},	/* 22.7=f(22.7, 26.7)*/
{64, 0,123,__LINE__, 0x40386666, 0x66666663, 0x40386666, 0x66666663, 0x403c6666, 0x66666663},	/* 24.4=f(24.4, 28.4)*/
{64, 0,123,__LINE__, 0x403a1999, 0x99999996, 0x403a1999, 0x99999996, 0x403e1999, 0x99999996},	/* 26.1=f(26.1, 30.1)*/
{64, 0,123,__LINE__, 0x403bcccc, 0xccccccc9, 0x403bcccc, 0xccccccc9, 0x403fcccc, 0xccccccc9},	/* 27.8=f(27.8, 31.8)*/
{64, 0,123,__LINE__, 0x403d7fff, 0xfffffffc, 0x403d7fff, 0xfffffffc, 0x4040bfff, 0xfffffffe},	/* 29.5=f(29.5, 33.5)*/
{0}
};
void test_fmod(m)   {run_vector_1(m,fmod_vec,(char *)(fmod),"fmod","ddd");   }	
