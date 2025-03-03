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
 one_line_type j1_vec[] = {
{64, 0,123,__LINE__, 0xbfdfe3f7, 0xc98d2cad, 0xbff33333, 0x33333333},	/* -0.498289=f(-1.2)*/
{64, 0,123,__LINE__, 0xbfdfb9be, 0x60162ce1, 0xbff30a3d, 0x70a3d70a},	/* -0.495712=f(-1.19)*/
{63, 0,123,__LINE__, 0xbfdf8eec, 0x64ca92ee, 0xbff2e147, 0xae147ae1},	/* -0.493098=f(-1.18)*/
{64, 0,123,__LINE__, 0xbfdf6382, 0x95db2d21, 0xbff2b851, 0xeb851eb8},	/* -0.490449=f(-1.17)*/
{64, 0,123,__LINE__, 0xbfdf3781, 0xb4ad13e2, 0xbff28f5c, 0x28f5c28f},	/* -0.487763=f(-1.16)*/
{63, 0,123,__LINE__, 0xbfdf0aea, 0x85d5bf15, 0xbff26666, 0x66666666},	/* -0.485041=f(-1.15)*/
{64, 0,123,__LINE__, 0xbfdeddbd, 0xd1170952, 0xbff23d70, 0xa3d70a3d},	/* -0.482284=f(-1.14)*/
{64, 0,123,__LINE__, 0xbfdeaffc, 0x615b2106, 0xbff2147a, 0xe147ae14},	/* -0.479491=f(-1.13)*/
{64, 0,123,__LINE__, 0xbfde81a7, 0x04b0679a, 0xbff1eb85, 0x1eb851eb},	/* -0.476663=f(-1.12)*/
{64, 0,123,__LINE__, 0xbfde52be, 0x8c453eac, 0xbff1c28f, 0x5c28f5c2},	/* -0.4738=f(-1.11)*/
{64, 0,123,__LINE__, 0xbfde2343, 0xcc63c37b, 0xbff19999, 0x99999999},	/* -0.470902=f(-1.1)*/
{64, 0,123,__LINE__, 0xbfddf337, 0x9c6d7898, 0xbff170a3, 0xd70a3d70},	/* -0.46797=f(-1.09)*/
{63, 0,123,__LINE__, 0xbfddc29a, 0xd6d6ddf7, 0xbff147ae, 0x147ae147},	/* -0.465003=f(-1.08)*/
{64, 0,123,__LINE__, 0xbfdd916e, 0x5922f77c, 0xbff11eb8, 0x51eb851e},	/* -0.462001=f(-1.07)*/
{63, 0,123,__LINE__, 0xbfdd5fb3, 0x03dec210, 0xbff0f5c2, 0x8f5c28f5},	/* -0.458966=f(-1.06)*/
{64, 0,123,__LINE__, 0xbfdd2d69, 0xba9c976a, 0xbff0cccc, 0xcccccccc},	/* -0.455897=f(-1.05)*/
{64, 0,123,__LINE__, 0xbfdcfa93, 0x63ef809a, 0xbff0a3d7, 0x0a3d70a3},	/* -0.452794=f(-1.04)*/
{64, 0,123,__LINE__, 0xbfdcc730, 0xe966776b, 0xbff07ae1, 0x47ae147a},	/* -0.449658=f(-1.03)*/
{64, 0,123,__LINE__, 0xbfdc9343, 0x378796ca, 0xbff051eb, 0x851eb851},	/* -0.446488=f(-1.02)*/
{63, 0,123,__LINE__, 0xbfdc5ecb, 0x3dcb3a37, 0xbff028f5, 0xc28f5c28},	/* -0.443286=f(-1.01)*/
{64, 0,123,__LINE__, 0xbfdc29c9, 0xee970c6b, 0xbfefffff, 0xfffffffe},	/* -0.440051=f(-1)*/
{64, 0,123,__LINE__, 0xbfdbf440, 0x3f39054b, 0xbfefae14, 0x7ae147ac},	/* -0.436783=f(-0.99)*/
{63, 0,123,__LINE__, 0xbfdbbe2f, 0x27e2573b, 0xbfef5c28, 0xf5c28f5a},	/* -0.433483=f(-0.98)*/
{64, 0,123,__LINE__, 0xbfdb8797, 0xa3a24bfc, 0xbfef0a3d, 0x70a3d708},	/* -0.430151=f(-0.97)*/
{64, 0,123,__LINE__, 0xbfdb507a, 0xb061112a, 0xbfeeb851, 0xeb851eb6},	/* -0.426787=f(-0.96)*/
{64, 0,123,__LINE__, 0xbfdb18d9, 0x4eda7472, 0xbfee6666, 0x66666664},	/* -0.423392=f(-0.95)*/
{64, 0,123,__LINE__, 0xbfdae0b4, 0x82988faf, 0xbfee147a, 0xe147ae12},	/* -0.419965=f(-0.94)*/
{63, 0,123,__LINE__, 0xbfdaa80d, 0x51ee64f5, 0xbfedc28f, 0x5c28f5c0},	/* -0.416507=f(-0.93)*/
{63, 0,123,__LINE__, 0xbfda6ee4, 0xc5f26abd, 0xbfed70a3, 0xd70a3d6e},	/* -0.413018=f(-0.92)*/
{64, 0,123,__LINE__, 0xbfda353b, 0xea790847, 0xbfed1eb8, 0x51eb851c},	/* -0.409499=f(-0.91)*/
{64, 0,123,__LINE__, 0xbfd9fb13, 0xce0f024b, 0xbfeccccc, 0xccccccca},	/* -0.40595=f(-0.9)*/
{63, 0,123,__LINE__, 0xbfd9c06d, 0x81f3d82a, 0xbfec7ae1, 0x47ae1478},	/* -0.40237=f(-0.89)*/
{64, 0,123,__LINE__, 0xbfd9854a, 0x1a1411af, 0xbfec28f5, 0xc28f5c26},	/* -0.39876=f(-0.88)*/
{63, 0,123,__LINE__, 0xbfd949aa, 0xad037d85, 0xbfebd70a, 0x3d70a3d4},	/* -0.395121=f(-0.87)*/
{63, 0,123,__LINE__, 0xbfd90d90, 0x53f76087, 0xbfeb851e, 0xb851eb82},	/* -0.391453=f(-0.86)*/
{63, 0,123,__LINE__, 0xbfd8d0fc, 0x2ac09605, 0xbfeb3333, 0x33333330},	/* -0.387755=f(-0.85)*/
{63, 0,123,__LINE__, 0xbfd893ef, 0x4fc5a122, 0xbfeae147, 0xae147ade},	/* -0.384029=f(-0.84)*/
{64, 0,123,__LINE__, 0xbfd8566a, 0xe3fcaf6b, 0xbfea8f5c, 0x28f5c28c},	/* -0.380275=f(-0.83)*/
{63, 0,123,__LINE__, 0xbfd81870, 0x0ae58ccf, 0xbfea3d70, 0xa3d70a3a},	/* -0.376492=f(-0.82)*/
{64, 0,123,__LINE__, 0xbfd7d9ff, 0xea83890c, 0xbfe9eb85, 0x1eb851e8},	/* -0.372681=f(-0.81)*/
{64, 0,123,__LINE__, 0xbfd79b1b, 0xab574eca, 0xbfe99999, 0x99999996},	/* -0.368842=f(-0.8)*/
{63, 0,123,__LINE__, 0xbfd75bc4, 0x7858ac6d, 0xbfe947ae, 0x147ae144},	/* -0.364976=f(-0.79)*/
{63, 0,123,__LINE__, 0xbfd71bfb, 0x7ef04ed5, 0xbfe8f5c2, 0x8f5c28f2},	/* -0.361083=f(-0.78)*/
{63, 0,123,__LINE__, 0xbfd6dbc1, 0xeef16e29, 0xbfe8a3d7, 0x0a3d70a0},	/* -0.357163=f(-0.77)*/
{64, 0,123,__LINE__, 0xbfd69b18, 0xfa936cd0, 0xbfe851eb, 0x851eb84e},	/* -0.353216=f(-0.76)*/
{64, 0,123,__LINE__, 0xbfd65a01, 0xd66b68b9, 0xbfe7ffff, 0xfffffffc},	/* -0.349244=f(-0.75)*/
{63, 0,123,__LINE__, 0xbfd6187d, 0xb965bf23, 0xbfe7ae14, 0x7ae147aa},	/* -0.345245=f(-0.74)*/
{64, 0,123,__LINE__, 0xbfd5d68d, 0xdcbf82f6, 0xbfe75c28, 0xf5c28f58},	/* -0.34122=f(-0.73)*/
{64, 0,123,__LINE__, 0xbfd59433, 0x7bffe5ea, 0xbfe70a3d, 0x70a3d706},	/* -0.33717=f(-0.72)*/
{64, 0,123,__LINE__, 0xbfd5516f, 0xd4f19487, 0xbfe6b851, 0xeb851eb4},	/* -0.333096=f(-0.71)*/
{63, 0,123,__LINE__, 0xbfd50e44, 0x279c0542, 0xbfe66666, 0x66666662},	/* -0.328996=f(-0.7)*/
{64, 0,123,__LINE__, 0xbfd4cab1, 0xb63cbabe, 0xbfe6147a, 0xe147ae10},	/* -0.324871=f(-0.69)*/
{64, 0,123,__LINE__, 0xbfd486b9, 0xc540796d, 0xbfe5c28f, 0x5c28f5be},	/* -0.320723=f(-0.68)*/
{64, 0,123,__LINE__, 0xbfd4425d, 0x9b3c70b3, 0xbfe570a3, 0xd70a3d6c},	/* -0.316551=f(-0.67)*/
{63, 0,123,__LINE__, 0xbfd3fd9e, 0x80e757aa, 0xbfe51eb8, 0x51eb851a},	/* -0.312355=f(-0.66)*/
{64, 0,123,__LINE__, 0xbfd3b87d, 0xc1127db7, 0xbfe4cccc, 0xccccccc8},	/* -0.308135=f(-0.65)*/
{64, 0,123,__LINE__, 0xbfd372fc, 0xa8a2cf16, 0xbfe47ae1, 0x47ae1476},	/* -0.303893=f(-0.64)*/
{64, 0,123,__LINE__, 0xbfd32d1c, 0x8689cd80, 0xbfe428f5, 0xc28f5c24},	/* -0.299628=f(-0.63)*/
{64, 0,123,__LINE__, 0xbfd2e6de, 0xabbe7d19, 0xbfe3d70a, 0x3d70a3d2},	/* -0.295341=f(-0.62)*/
{63, 0,123,__LINE__, 0xbfd2a044, 0x6b3645c8, 0xbfe3851e, 0xb851eb80},	/* -0.291032=f(-0.61)*/
{64, 0,123,__LINE__, 0xbfd2594f, 0x19ddc92b, 0xbfe33333, 0x3333332e},	/* -0.286701=f(-0.6)*/
{64, 0,123,__LINE__, 0xbfd21200, 0x0e91ad45, 0xbfe2e147, 0xae147adc},	/* -0.282349=f(-0.59)*/
{64, 0,123,__LINE__, 0xbfd1ca58, 0xa2175c15, 0xbfe28f5c, 0x28f5c28a},	/* -0.277975=f(-0.58)*/
{64, 0,123,__LINE__, 0xbfd1825a, 0x2f15b843, 0xbfe23d70, 0xa3d70a38},	/* -0.273581=f(-0.57)*/
{64, 0,123,__LINE__, 0xbfd13a06, 0x120dc6fe, 0xbfe1eb85, 0x1eb851e6},	/* -0.269166=f(-0.56)*/
{64, 0,123,__LINE__, 0xbfd0f15d, 0xa9534f4f, 0xbfe19999, 0x99999994},	/* -0.264732=f(-0.55)*/
{64, 0,123,__LINE__, 0xbfd0a862, 0x55056ee9, 0xbfe147ae, 0x147ae142},	/* -0.260277=f(-0.54)*/
{63, 0,123,__LINE__, 0xbfd05f15, 0x770724c2, 0xbfe0f5c2, 0x8f5c28f0},	/* -0.255803=f(-0.53)*/
{64, 0,123,__LINE__, 0xbfd01578, 0x72f7d185, 0xbfe0a3d7, 0x0a3d709e},	/* -0.25131=f(-0.52)*/
{64, 0,123,__LINE__, 0xbfcf9719, 0x5c575c35, 0xbfe051eb, 0x851eb84c},	/* -0.246799=f(-0.51)*/
{64, 0,123,__LINE__, 0xbfcf02a7, 0x1f4870cc, 0xbfdfffff, 0xfffffff4},	/* -0.242268=f(-0.5)*/
{64, 0,123,__LINE__, 0xbfce6d9d, 0x00112cd6, 0xbfdf5c28, 0xf5c28f50},	/* -0.23772=f(-0.49)*/
{63, 0,123,__LINE__, 0xbfcdd7fd, 0xd33be008, 0xbfdeb851, 0xeb851eac},	/* -0.233154=f(-0.48)*/
{64, 0,123,__LINE__, 0xbfcd41cc, 0x707f7ea2, 0xbfde147a, 0xe147ae08},	/* -0.228571=f(-0.47)*/
{64, 0,123,__LINE__, 0xbfccab0b, 0xb2b0302a, 0xbfdd70a3, 0xd70a3d64},	/* -0.22397=f(-0.46)*/
{64, 0,123,__LINE__, 0xbfcc13be, 0x77afcc47, 0xbfdccccc, 0xccccccc0},	/* -0.219353=f(-0.45)*/
{64, 0,123,__LINE__, 0xbfcb7be7, 0xa05e461e, 0xbfdc28f5, 0xc28f5c1c},	/* -0.214719=f(-0.44)*/
{64, 0,123,__LINE__, 0xbfcae38a, 0x108a068f, 0xbfdb851e, 0xb851eb78},	/* -0.210069=f(-0.43)*/
{64, 0,123,__LINE__, 0xbfca4aa8, 0xaee035a2, 0xbfdae147, 0xae147ad4},	/* -0.205403=f(-0.42)*/
{63, 0,123,__LINE__, 0xbfc9b146, 0x64dcf384, 0xbfda3d70, 0xa3d70a30},	/* -0.200723=f(-0.41)*/
{63, 0,123,__LINE__, 0xbfc91766, 0x1ebb816b, 0xbfd99999, 0x9999998c},	/* -0.196027=f(-0.4)*/
{63, 0,123,__LINE__, 0xbfc87d0a, 0xcb665abe, 0xbfd8f5c2, 0x8f5c28e8},	/* -0.191316=f(-0.39)*/
{64, 0,123,__LINE__, 0xbfc7e237, 0x5c673edc, 0xbfd851eb, 0x851eb844},	/* -0.186591=f(-0.38)*/
{64, 0,123,__LINE__, 0xbfc746ee, 0xc5d72bd8, 0xbfd7ae14, 0x7ae147a0},	/* -0.181852=f(-0.37)*/
{64, 0,123,__LINE__, 0xbfc6ab33, 0xfe4e4a90, 0xbfd70a3d, 0x70a3d6fc},	/* -0.1771=f(-0.36)*/
{63, 0,123,__LINE__, 0xbfc60f09, 0xfed3cc73, 0xbfd66666, 0x66666658},	/* -0.172334=f(-0.35)*/
{64, 0,123,__LINE__, 0xbfc57273, 0xc2cdbb4f, 0xbfd5c28f, 0x5c28f5b4},	/* -0.167555=f(-0.34)*/
{64, 0,123,__LINE__, 0xbfc4d574, 0x47f0bb91, 0xbfd51eb8, 0x51eb8510},	/* -0.162764=f(-0.33)*/
{63, 0,123,__LINE__, 0xbfc4380e, 0x8e2fc14a, 0xbfd47ae1, 0x47ae146c},	/* -0.157961=f(-0.32)*/
{64, 0,123,__LINE__, 0xbfc39a45, 0x97abb851, 0xbfd3d70a, 0x3d70a3c8},	/* -0.153146=f(-0.31)*/
{63, 0,123,__LINE__, 0xbfc2fc1c, 0x68a31ff3, 0xbfd33333, 0x33333324},	/* -0.148319=f(-0.3)*/
{64, 0,123,__LINE__, 0xbfc25d96, 0x07619a7a, 0xbfd28f5c, 0x28f5c280},	/* -0.143481=f(-0.29)*/
{64, 0,123,__LINE__, 0xbfc1beb5, 0x7c2f70f1, 0xbfd1eb85, 0x1eb851dc},	/* -0.138632=f(-0.28)*/
{64, 0,123,__LINE__, 0xbfc11f7d, 0xd1410b8e, 0xbfd147ae, 0x147ae138},	/* -0.133774=f(-0.27)*/
{64, 0,123,__LINE__, 0xbfc07ff2, 0x12a65f0c, 0xbfd0a3d7, 0x0a3d7094},	/* -0.128905=f(-0.26)*/
{64, 0,123,__LINE__, 0xbfbfc02a, 0x9c749eca, 0xbfcfffff, 0xffffffe0},	/* -0.124026=f(-0.25)*/
{64, 0,123,__LINE__, 0xbfbe7fd5, 0x27241087, 0xbfceb851, 0xeb851e98},	/* -0.119138=f(-0.24)*/
{64, 0,123,__LINE__, 0xbfbd3ee9, 0xe7d8971c, 0xbfcd70a3, 0xd70a3d50},	/* -0.114241=f(-0.23)*/
{64, 0,123,__LINE__, 0xbfbbfd6f, 0x04416cce, 0xbfcc28f5, 0xc28f5c08},	/* -0.109336=f(-0.22)*/
{63, 0,123,__LINE__, 0xbfbabb6a, 0xa51dfa13, 0xbfcae147, 0xae147ac0},	/* -0.104422=f(-0.21)*/
{64, 0,123,__LINE__, 0xbfb978e2, 0xf61c3bb4, 0xbfc99999, 0x99999978},	/* -0.0995008=f(-0.2)*/
{64, 0,123,__LINE__, 0xbfb835de, 0x25b71825, 0xbfc851eb, 0x851eb830},	/* -0.094572=f(-0.19)*/
{64, 0,123,__LINE__, 0xbfb6f262, 0x6514a4ce, 0xbfc70a3d, 0x70a3d6e8},	/* -0.089636=f(-0.18)*/
{64, 0,123,__LINE__, 0xbfb5ae75, 0xe7e45bff, 0xbfc5c28f, 0x5c28f5a0},	/* -0.0846933=f(-0.17)*/
{63, 0,123,__LINE__, 0xbfb46a1e, 0xe43d4468, 0xbfc47ae1, 0x47ae1458},	/* -0.0797443=f(-0.16)*/
{64, 0,123,__LINE__, 0xbfb32563, 0x927c0aba, 0xbfc33333, 0x33333310},	/* -0.0747893=f(-0.15)*/
{64, 0,123,__LINE__, 0xbfb1e04a, 0x2d210e45, 0xbfc1eb85, 0x1eb851c8},	/* -0.0698286=f(-0.14)*/
{64, 0,123,__LINE__, 0xbfb09ad8, 0xf0ae6157, 0xbfc0a3d7, 0x0a3d7080},	/* -0.0648628=f(-0.13)*/
{63, 0,123,__LINE__, 0xbfaeaa2c, 0x370b7c25, 0xbfbeb851, 0xeb851e71},	/* -0.0598921=f(-0.12)*/
{63, 0,123,__LINE__, 0xbfac1e0f, 0xdb8ce111, 0xbfbc28f5, 0xc28f5be2},	/* -0.0549169=f(-0.11)*/
{63, 0,123,__LINE__, 0xbfa99169, 0x52566db7, 0xbfb99999, 0x99999953},	/* -0.0499375=f(-0.1)*/
{64, 0,123,__LINE__, 0xbfa70445, 0x21d0304a, 0xbfb70a3d, 0x70a3d6c4},	/* -0.0449545=f(-0.09)*/
{64, 0,123,__LINE__, 0xbfa476af, 0xd31065de, 0xbfb47ae1, 0x47ae1435},	/* -0.039968=f(-0.08)*/
{64, 0,123,__LINE__, 0xbfa1e8b5, 0xf19707ed, 0xbfb1eb85, 0x1eb851a6},	/* -0.0349786=f(-0.07)*/
{64, 0,123,__LINE__, 0xbf9eb4c8, 0x16129820, 0xbfaeb851, 0xeb851e2d},	/* -0.0299865=f(-0.06)*/
{64, 0,123,__LINE__, 0xbf99978d, 0x5dda2ed1, 0xbfa99999, 0x9999990e},	/* -0.0249922=f(-0.05)*/
{64, 0,123,__LINE__, 0xbf9479d4, 0xdcc8ce88, 0xbfa47ae1, 0x47ae13ef},	/* -0.019996=f(-0.04)*/
{64, 0,123,__LINE__, 0xbf8eb76f, 0x6fa2c211, 0xbf9eb851, 0xeb851da0},	/* -0.0149983=f(-0.03)*/
{63, 0,123,__LINE__, 0xbf847a9e, 0x2c18dd62, 0xbf947ae1, 0x47ae1362},	/* -0.0099995=f(-0.02)*/
{64, 0,123,__LINE__, 0xbf747ad0, 0x80bb0662, 0xbf847ae1, 0x47ae1249},	/* -0.00499994=f(-0.01)*/
{64, 0,123,__LINE__, 0x3cc19000, 0x00000000, 0x3cd19000, 0x00000000},	/* 4.87457e-16=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0x3f747ad0, 0x80bb0ac6, 0x3f847ae1, 0x47ae16ad},	/* 0.00499994=f(0.01)*/
{64, 0,123,__LINE__, 0x3f847a9e, 0x2c18df94, 0x3f947ae1, 0x47ae1594},	/* 0.0099995=f(0.02)*/
{64, 0,123,__LINE__, 0x3f8eb76f, 0x6fa2c443, 0x3f9eb851, 0xeb851fd2},	/* 0.0149983=f(0.03)*/
{63, 0,123,__LINE__, 0x3f9479d4, 0xdcc8cfa1, 0x3fa47ae1, 0x47ae1508},	/* 0.019996=f(0.04)*/
{63, 0,123,__LINE__, 0x3f99978d, 0x5dda2fea, 0x3fa99999, 0x99999a27},	/* 0.0249922=f(0.05)*/
{63, 0,123,__LINE__, 0x3f9eb4c8, 0x16129938, 0x3faeb851, 0xeb851f46},	/* 0.0299865=f(0.06)*/
{64, 0,123,__LINE__, 0x3fa1e8b5, 0xf1970879, 0x3fb1eb85, 0x1eb85232},	/* 0.0349786=f(0.07)*/
{64, 0,123,__LINE__, 0x3fa476af, 0xd310666a, 0x3fb47ae1, 0x47ae14c1},	/* 0.039968=f(0.08)*/
{64, 0,123,__LINE__, 0x3fa70445, 0x21d030d6, 0x3fb70a3d, 0x70a3d750},	/* 0.0449545=f(0.09)*/
{64, 0,123,__LINE__, 0x3fa99169, 0x52566e42, 0x3fb99999, 0x999999df},	/* 0.0499375=f(0.1)*/
{63, 0,123,__LINE__, 0x3fac1e0f, 0xdb8ce19d, 0x3fbc28f5, 0xc28f5c6e},	/* 0.0549169=f(0.11)*/
{63, 0,123,__LINE__, 0x3faeaa2c, 0x370b7cb0, 0x3fbeb851, 0xeb851efd},	/* 0.0598921=f(0.12)*/
{64, 0,123,__LINE__, 0x3fb09ad8, 0xf0ae619d, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.0648628=f(0.13)*/
{64, 0,123,__LINE__, 0x3fb1e04a, 0x2d210e8b, 0x3fc1eb85, 0x1eb8520e},	/* 0.0698286=f(0.14)*/
{63, 0,123,__LINE__, 0x3fb32563, 0x927c0aff, 0x3fc33333, 0x33333356},	/* 0.0747893=f(0.15)*/
{64, 0,123,__LINE__, 0x3fb46a1e, 0xe43d44ae, 0x3fc47ae1, 0x47ae149e},	/* 0.0797443=f(0.16)*/
{64, 0,123,__LINE__, 0x3fb5ae75, 0xe7e45c44, 0x3fc5c28f, 0x5c28f5e6},	/* 0.0846933=f(0.17)*/
{64, 0,123,__LINE__, 0x3fb6f262, 0x6514a513, 0x3fc70a3d, 0x70a3d72e},	/* 0.089636=f(0.18)*/
{63, 0,123,__LINE__, 0x3fb835de, 0x25b7186b, 0x3fc851eb, 0x851eb876},	/* 0.094572=f(0.19)*/
{64, 0,123,__LINE__, 0x3fb978e2, 0xf61c3bf9, 0x3fc99999, 0x999999be},	/* 0.0995008=f(0.2)*/
{63, 0,123,__LINE__, 0x3fbabb6a, 0xa51dfa58, 0x3fcae147, 0xae147b06},	/* 0.104422=f(0.21)*/
{64, 0,123,__LINE__, 0x3fbbfd6f, 0x04416d13, 0x3fcc28f5, 0xc28f5c4e},	/* 0.109336=f(0.22)*/
{64, 0,123,__LINE__, 0x3fbd3ee9, 0xe7d89761, 0x3fcd70a3, 0xd70a3d96},	/* 0.114241=f(0.23)*/
{64, 0,123,__LINE__, 0x3fbe7fd5, 0x272410cc, 0x3fceb851, 0xeb851ede},	/* 0.119138=f(0.24)*/
{64, 0,123,__LINE__, 0x3fbfc02a, 0x9c749f0e, 0x3fd00000, 0x00000013},	/* 0.124026=f(0.25)*/
{64, 0,123,__LINE__, 0x3fc07ff2, 0x12a65f2e, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.128905=f(0.26)*/
{64, 0,123,__LINE__, 0x3fc11f7d, 0xd1410bb0, 0x3fd147ae, 0x147ae15b},	/* 0.133774=f(0.27)*/
{64, 0,123,__LINE__, 0x3fc1beb5, 0x7c2f7113, 0x3fd1eb85, 0x1eb851ff},	/* 0.138632=f(0.28)*/
{64, 0,123,__LINE__, 0x3fc25d96, 0x07619a9c, 0x3fd28f5c, 0x28f5c2a3},	/* 0.143481=f(0.29)*/
{64, 0,123,__LINE__, 0x3fc2fc1c, 0x68a32015, 0x3fd33333, 0x33333347},	/* 0.148319=f(0.3)*/
{64, 0,123,__LINE__, 0x3fc39a45, 0x97abb873, 0x3fd3d70a, 0x3d70a3eb},	/* 0.153146=f(0.31)*/
{63, 0,123,__LINE__, 0x3fc4380e, 0x8e2fc16b, 0x3fd47ae1, 0x47ae148f},	/* 0.157961=f(0.32)*/
{63, 0,123,__LINE__, 0x3fc4d574, 0x47f0bbb3, 0x3fd51eb8, 0x51eb8533},	/* 0.162764=f(0.33)*/
{64, 0,123,__LINE__, 0x3fc57273, 0xc2cdbb70, 0x3fd5c28f, 0x5c28f5d7},	/* 0.167555=f(0.34)*/
{63, 0,123,__LINE__, 0x3fc60f09, 0xfed3cc94, 0x3fd66666, 0x6666667b},	/* 0.172334=f(0.35)*/
{64, 0,123,__LINE__, 0x3fc6ab33, 0xfe4e4ab2, 0x3fd70a3d, 0x70a3d71f},	/* 0.1771=f(0.36)*/
{64, 0,123,__LINE__, 0x3fc746ee, 0xc5d72bf9, 0x3fd7ae14, 0x7ae147c3},	/* 0.181852=f(0.37)*/
{63, 0,123,__LINE__, 0x3fc7e237, 0x5c673efd, 0x3fd851eb, 0x851eb867},	/* 0.186591=f(0.38)*/
{63, 0,123,__LINE__, 0x3fc87d0a, 0xcb665adf, 0x3fd8f5c2, 0x8f5c290b},	/* 0.191316=f(0.39)*/
{64, 0,123,__LINE__, 0x3fc91766, 0x1ebb818c, 0x3fd99999, 0x999999af},	/* 0.196027=f(0.4)*/
{64, 0,123,__LINE__, 0x3fc9b146, 0x64dcf3a5, 0x3fda3d70, 0xa3d70a53},	/* 0.200723=f(0.41)*/
{64, 0,123,__LINE__, 0x3fca4aa8, 0xaee035c2, 0x3fdae147, 0xae147af7},	/* 0.205403=f(0.42)*/
{64, 0,123,__LINE__, 0x3fcae38a, 0x108a06af, 0x3fdb851e, 0xb851eb9b},	/* 0.210069=f(0.43)*/
{64, 0,123,__LINE__, 0x3fcb7be7, 0xa05e463e, 0x3fdc28f5, 0xc28f5c3f},	/* 0.214719=f(0.44)*/
{63, 0,123,__LINE__, 0x3fcc13be, 0x77afcc67, 0x3fdccccc, 0xcccccce3},	/* 0.219353=f(0.45)*/
{63, 0,123,__LINE__, 0x3fccab0b, 0xb2b0304b, 0x3fdd70a3, 0xd70a3d87},	/* 0.22397=f(0.46)*/
{64, 0,123,__LINE__, 0x3fcd41cc, 0x707f7ec2, 0x3fde147a, 0xe147ae2b},	/* 0.228571=f(0.47)*/
{63, 0,123,__LINE__, 0x3fcdd7fd, 0xd33be028, 0x3fdeb851, 0xeb851ecf},	/* 0.233154=f(0.48)*/
{64, 0,123,__LINE__, 0x3fce6d9d, 0x00112cf6, 0x3fdf5c28, 0xf5c28f73},	/* 0.23772=f(0.49)*/
{63, 0,123,__LINE__, 0x3fcf02a7, 0x1f4870eb, 0x3fe00000, 0x0000000b},	/* 0.242268=f(0.5)*/
{64, 0,123,__LINE__, 0x3fcf9719, 0x5c575c53, 0x3fe051eb, 0x851eb85d},	/* 0.246799=f(0.51)*/
{64, 0,123,__LINE__, 0x3fd01578, 0x72f7d194, 0x3fe0a3d7, 0x0a3d70af},	/* 0.25131=f(0.52)*/
{64, 0,123,__LINE__, 0x3fd05f15, 0x770724d1, 0x3fe0f5c2, 0x8f5c2901},	/* 0.255803=f(0.53)*/
{64, 0,123,__LINE__, 0x3fd0a862, 0x55056ef8, 0x3fe147ae, 0x147ae153},	/* 0.260277=f(0.54)*/
{64, 0,123,__LINE__, 0x3fd0f15d, 0xa9534f5e, 0x3fe19999, 0x999999a5},	/* 0.264732=f(0.55)*/
{64, 0,123,__LINE__, 0x3fd13a06, 0x120dc70d, 0x3fe1eb85, 0x1eb851f7},	/* 0.269166=f(0.56)*/
{64, 0,123,__LINE__, 0x3fd1825a, 0x2f15b852, 0x3fe23d70, 0xa3d70a49},	/* 0.273581=f(0.57)*/
{64, 0,123,__LINE__, 0x3fd1ca58, 0xa2175c24, 0x3fe28f5c, 0x28f5c29b},	/* 0.277975=f(0.58)*/
{64, 0,123,__LINE__, 0x3fd21200, 0x0e91ad54, 0x3fe2e147, 0xae147aed},	/* 0.282349=f(0.59)*/
{64, 0,123,__LINE__, 0x3fd2594f, 0x19ddc93a, 0x3fe33333, 0x3333333f},	/* 0.286701=f(0.6)*/
{63, 0,123,__LINE__, 0x3fd2a044, 0x6b3645d7, 0x3fe3851e, 0xb851eb91},	/* 0.291032=f(0.61)*/
{64, 0,123,__LINE__, 0x3fd2e6de, 0xabbe7d27, 0x3fe3d70a, 0x3d70a3e3},	/* 0.295341=f(0.62)*/
{63, 0,123,__LINE__, 0x3fd32d1c, 0x8689cd8f, 0x3fe428f5, 0xc28f5c35},	/* 0.299628=f(0.63)*/
{64, 0,123,__LINE__, 0x3fd372fc, 0xa8a2cf24, 0x3fe47ae1, 0x47ae1487},	/* 0.303893=f(0.64)*/
{63, 0,123,__LINE__, 0x3fd3b87d, 0xc1127dc5, 0x3fe4cccc, 0xccccccd9},	/* 0.308135=f(0.65)*/
{64, 0,123,__LINE__, 0x3fd3fd9e, 0x80e757b8, 0x3fe51eb8, 0x51eb852b},	/* 0.312355=f(0.66)*/
{64, 0,123,__LINE__, 0x3fd4425d, 0x9b3c70c1, 0x3fe570a3, 0xd70a3d7d},	/* 0.316551=f(0.67)*/
{64, 0,123,__LINE__, 0x3fd486b9, 0xc540797b, 0x3fe5c28f, 0x5c28f5cf},	/* 0.320723=f(0.68)*/
{64, 0,123,__LINE__, 0x3fd4cab1, 0xb63cbacc, 0x3fe6147a, 0xe147ae21},	/* 0.324871=f(0.69)*/
{63, 0,123,__LINE__, 0x3fd50e44, 0x279c0550, 0x3fe66666, 0x66666673},	/* 0.328996=f(0.7)*/
{64, 0,123,__LINE__, 0x3fd5516f, 0xd4f19495, 0x3fe6b851, 0xeb851ec5},	/* 0.333096=f(0.71)*/
{63, 0,123,__LINE__, 0x3fd59433, 0x7bffe5f7, 0x3fe70a3d, 0x70a3d717},	/* 0.33717=f(0.72)*/
{64, 0,123,__LINE__, 0x3fd5d68d, 0xdcbf8304, 0x3fe75c28, 0xf5c28f69},	/* 0.34122=f(0.73)*/
{64, 0,123,__LINE__, 0x3fd6187d, 0xb965bf31, 0x3fe7ae14, 0x7ae147bb},	/* 0.345245=f(0.74)*/
{64, 0,123,__LINE__, 0x3fd65a01, 0xd66b68c7, 0x3fe80000, 0x0000000d},	/* 0.349244=f(0.75)*/
{64, 0,123,__LINE__, 0x3fd69b18, 0xfa936cdd, 0x3fe851eb, 0x851eb85f},	/* 0.353216=f(0.76)*/
{63, 0,123,__LINE__, 0x3fd6dbc1, 0xeef16e36, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.357163=f(0.77)*/
{63, 0,123,__LINE__, 0x3fd71bfb, 0x7ef04ee2, 0x3fe8f5c2, 0x8f5c2903},	/* 0.361083=f(0.78)*/
{63, 0,123,__LINE__, 0x3fd75bc4, 0x7858ac7a, 0x3fe947ae, 0x147ae155},	/* 0.364976=f(0.79)*/
{63, 0,123,__LINE__, 0x3fd79b1b, 0xab574ed8, 0x3fe99999, 0x999999a7},	/* 0.368842=f(0.8)*/
{64, 0,123,__LINE__, 0x3fd7d9ff, 0xea838919, 0x3fe9eb85, 0x1eb851f9},	/* 0.372681=f(0.81)*/
{64, 0,123,__LINE__, 0x3fd81870, 0x0ae58cdb, 0x3fea3d70, 0xa3d70a4b},	/* 0.376492=f(0.82)*/
{64, 0,123,__LINE__, 0x3fd8566a, 0xe3fcaf78, 0x3fea8f5c, 0x28f5c29d},	/* 0.380275=f(0.83)*/
{64, 0,123,__LINE__, 0x3fd893ef, 0x4fc5a12f, 0x3feae147, 0xae147aef},	/* 0.384029=f(0.84)*/
{64, 0,123,__LINE__, 0x3fd8d0fc, 0x2ac09612, 0x3feb3333, 0x33333341},	/* 0.387755=f(0.85)*/
{64, 0,123,__LINE__, 0x3fd90d90, 0x53f76094, 0x3feb851e, 0xb851eb93},	/* 0.391453=f(0.86)*/
{63, 0,123,__LINE__, 0x3fd949aa, 0xad037d92, 0x3febd70a, 0x3d70a3e5},	/* 0.395121=f(0.87)*/
{64, 0,123,__LINE__, 0x3fd9854a, 0x1a1411bb, 0x3fec28f5, 0xc28f5c37},	/* 0.39876=f(0.88)*/
{63, 0,123,__LINE__, 0x3fd9c06d, 0x81f3d836, 0x3fec7ae1, 0x47ae1489},	/* 0.40237=f(0.89)*/
{64, 0,123,__LINE__, 0x3fd9fb13, 0xce0f0257, 0x3feccccc, 0xccccccdb},	/* 0.40595=f(0.9)*/
{64, 0,123,__LINE__, 0x3fda353b, 0xea790853, 0x3fed1eb8, 0x51eb852d},	/* 0.409499=f(0.91)*/
{64, 0,123,__LINE__, 0x3fda6ee4, 0xc5f26ac9, 0x3fed70a3, 0xd70a3d7f},	/* 0.413018=f(0.92)*/
{63, 0,123,__LINE__, 0x3fdaa80d, 0x51ee6501, 0x3fedc28f, 0x5c28f5d1},	/* 0.416507=f(0.93)*/
{64, 0,123,__LINE__, 0x3fdae0b4, 0x82988fbb, 0x3fee147a, 0xe147ae23},	/* 0.419965=f(0.94)*/
{64, 0,123,__LINE__, 0x3fdb18d9, 0x4eda747e, 0x3fee6666, 0x66666675},	/* 0.423392=f(0.95)*/
{63, 0,123,__LINE__, 0x3fdb507a, 0xb0611135, 0x3feeb851, 0xeb851ec7},	/* 0.426787=f(0.96)*/
{64, 0,123,__LINE__, 0x3fdb8797, 0xa3a24c08, 0x3fef0a3d, 0x70a3d719},	/* 0.430151=f(0.97)*/
{64, 0,123,__LINE__, 0x3fdbbe2f, 0x27e25746, 0x3fef5c28, 0xf5c28f6b},	/* 0.433483=f(0.98)*/
{63, 0,123,__LINE__, 0x3fdbf440, 0x3f390556, 0x3fefae14, 0x7ae147bd},	/* 0.436783=f(0.99)*/
{64, 0,123,__LINE__, 0x3fdc29c9, 0xee970c75, 0x3ff00000, 0x00000007},	/* 0.440051=f(1)*/
{63, 0,123,__LINE__, 0x3fdc5ecb, 0x3dcb3a41, 0x3ff028f5, 0xc28f5c30},	/* 0.443286=f(1.01)*/
{63, 0,123,__LINE__, 0x3fdc9343, 0x378796d4, 0x3ff051eb, 0x851eb859},	/* 0.446488=f(1.02)*/
{64, 0,123,__LINE__, 0x3fdcc730, 0xe9667776, 0x3ff07ae1, 0x47ae1482},	/* 0.449658=f(1.03)*/
{64, 0,123,__LINE__, 0x3fdcfa93, 0x63ef80a4, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.452794=f(1.04)*/
{63, 0,123,__LINE__, 0x3fdd2d69, 0xba9c9774, 0x3ff0cccc, 0xccccccd4},	/* 0.455897=f(1.05)*/
{63, 0,123,__LINE__, 0x3fdd5fb3, 0x03dec219, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.458966=f(1.06)*/
{64, 0,123,__LINE__, 0x3fdd916e, 0x5922f785, 0x3ff11eb8, 0x51eb8526},	/* 0.462001=f(1.07)*/
{64, 0,123,__LINE__, 0x3fddc29a, 0xd6d6de01, 0x3ff147ae, 0x147ae14f},	/* 0.465003=f(1.08)*/
{63, 0,123,__LINE__, 0x3fddf337, 0x9c6d78a2, 0x3ff170a3, 0xd70a3d78},	/* 0.46797=f(1.09)*/
{64, 0,123,__LINE__, 0x3fde2343, 0xcc63c385, 0x3ff19999, 0x999999a1},	/* 0.470902=f(1.1)*/
{63, 0,123,__LINE__, 0x3fde52be, 0x8c453eb6, 0x3ff1c28f, 0x5c28f5ca},	/* 0.4738=f(1.11)*/
{63, 0,123,__LINE__, 0x3fde81a7, 0x04b067a3, 0x3ff1eb85, 0x1eb851f3},	/* 0.476663=f(1.12)*/
{63, 0,123,__LINE__, 0x3fdeaffc, 0x615b210f, 0x3ff2147a, 0xe147ae1c},	/* 0.479491=f(1.13)*/
{64, 0,123,__LINE__, 0x3fdeddbd, 0xd117095b, 0x3ff23d70, 0xa3d70a45},	/* 0.482284=f(1.14)*/
{64, 0,123,__LINE__, 0x3fdf0aea, 0x85d5bf1e, 0x3ff26666, 0x6666666e},	/* 0.485041=f(1.15)*/
{63, 0,123,__LINE__, 0x3fdf3781, 0xb4ad13eb, 0x3ff28f5c, 0x28f5c297},	/* 0.487763=f(1.16)*/
{63, 0,123,__LINE__, 0x3fdf6382, 0x95db2d29, 0x3ff2b851, 0xeb851ec0},	/* 0.490449=f(1.17)*/
{64, 0,123,__LINE__, 0x3fdf8eec, 0x64ca92f6, 0x3ff2e147, 0xae147ae9},	/* 0.493098=f(1.18)*/
{62, 0,123,__LINE__, 0x3fdfb9be, 0x60162ce9, 0x3ff30a3d, 0x70a3d712},	/* 0.495712=f(1.19)*/
{64, 0,123,__LINE__, 0xbfd23723, 0x45b96613, 0xc00921fb, 0x54442d18},	/* -0.284615=f(-3.14159)*/
{63, 0,123,__LINE__, 0xbfe2236c, 0x458df175, 0xbff921fb, 0x54442d18},	/* -0.566824=f(-1.5708)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{63, 0,123,__LINE__, 0x3fe2236c, 0x458df175, 0x3ff921fb, 0x54442d18},	/* 0.566824=f(1.5708)*/
{64, 0,123,__LINE__, 0x3fd23723, 0x45b96613, 0x400921fb, 0x54442d18},	/* 0.284615=f(3.14159)*/
{61, 0,123,__LINE__, 0xbfd206ae, 0xe4af9124, 0x4012d97c, 0x7f3321d2},	/* -0.281658=f(4.71239)*/
{59, 0,123,__LINE__, 0x3fbe6678, 0x3a4dbb98, 0xc03e0000, 0x00000000},	/* 0.118751=f(-30)*/
{62, 0,123,__LINE__, 0xbfba145c, 0x2bf5d6aa, 0xc03c4ccc, 0xcccccccd},	/* -0.101873=f(-28.3)*/
{58, 0,123,__LINE__, 0xbfb965bd, 0xda59f808, 0xc03a9999, 0x9999999a},	/* -0.0992087=f(-26.6)*/
{63, 0,123,__LINE__, 0x3fc142f3, 0x99955339, 0xc038e666, 0x66666667},	/* 0.134856=f(-24.9)*/
{58, 0,123,__LINE__, 0x3fb20dc7, 0xda3ce576, 0xc0373333, 0x33333334},	/* 0.0705228=f(-23.2)*/
{63, 0,123,__LINE__, 0xbfc4f91a, 0xe3f53777, 0xc0358000, 0x00000001},	/* -0.163852=f(-21.5)*/
{57, 0,123,__LINE__, 0xbfa0cd5b, 0xcd3ea82a, 0xc033cccc, 0xccccccce},	/* -0.0328168=f(-19.8)*/
{63, 0,123,__LINE__, 0x3fc7fb17, 0x3dcfcf2d, 0xc0321999, 0x9999999b},	/* 0.18735=f(-18.1)*/
{56, 0,123,__LINE__, 0xbf8c74d0, 0x79162dee, 0xc0306666, 0x66666668},	/* -0.0138947=f(-16.4)*/
{62, 0,123,__LINE__, 0xbfca24e7, 0xd2d25d12, 0xc02d6666, 0x6666666a},	/* -0.204251=f(-14.7)*/
{59, 0,123,__LINE__, 0x3fb2005d, 0x262e73d6, 0xc02a0000, 0x00000004},	/* 0.0703181=f(-13)*/
{61, 0,123,__LINE__, 0x3fcb6cb5, 0x6d484cf0, 0xc0269999, 0x9999999e},	/* 0.214255=f(-11.3)*/
{61, 0,123,__LINE__, 0xbfc1dbf2, 0xf3b411cd, 0xc0233333, 0x33333338},	/* -0.139525=f(-9.6)*/
{58, 0,123,__LINE__, 0x3fcdd035, 0xc723565f, 0xc018cccc, 0xccccccd6},	/* 0.232917=f(-6.2)*/
{61, 0,123,__LINE__, 0x3fcd9363, 0x634158bc, 0xc0120000, 0x00000009},	/* 0.23106=f(-4.5)*/
{62, 0,123,__LINE__, 0xbfda38ad, 0x22065be9, 0xc0066666, 0x66666678},	/* -0.409709=f(-2.8)*/
{64, 0,123,__LINE__, 0xbfde2343, 0xcc63c3a5, 0xbff19999, 0x999999bd},	/* -0.470902=f(-1.1)*/
{64, 0,123,__LINE__, 0x3fd2594f, 0x19ddc8f2, 0x3fe33333, 0x333332ec},	/* 0.286701=f(0.6)*/
{62, 0,123,__LINE__, 0x3fe146a2, 0xc2f16a50, 0x40026666, 0x66666654},	/* 0.539873=f(2.3)*/
{62, 0,123,__LINE__, 0xbfb0e837, 0x2dfae9da, 0x400fffff, 0xffffffee},	/* -0.0660433=f(4)*/
{60, 0,123,__LINE__, 0xbfd4bed5, 0xe9686978, 0x4016cccc, 0xccccccc4},	/* -0.324148=f(5.7)*/
{59, 0,123,__LINE__, 0x3fbc1063, 0xe53801f9, 0x401d9999, 0x99999991},	/* 0.109625=f(7.4)*/
{61, 0,123,__LINE__, 0x3fcdc04a, 0x68314a14, 0x40223333, 0x3333332f},	/* 0.232431=f(9.1)*/
{61, 0,123,__LINE__, 0xbfc23283, 0x9cb6bbfe, 0x40259999, 0x99999995},	/* -0.142167=f(10.8)*/
{63, 0,123,__LINE__, 0xbfc52e92, 0xc46b4552, 0x4028ffff, 0xfffffffb},	/* -0.165484=f(12.5)*/
{62, 0,123,__LINE__, 0x3fc4d06d, 0xb4af245f, 0x402c6666, 0x66666661},	/* 0.162611=f(14.2)*/
{62, 0,123,__LINE__, 0x3fbba7b7, 0x3ee0730d, 0x402fcccc, 0xccccccc7},	/* 0.108028=f(15.9)*/
{62, 0,123,__LINE__, 0xbfc60238, 0x43170353, 0x40319999, 0x99999997},	/* -0.171943=f(17.6)*/
{57, 0,123,__LINE__, 0xbfacdf50, 0xf9377a02, 0x40334ccc, 0xccccccca},	/* -0.0563913=f(19.3)*/
{62, 0,123,__LINE__, 0x3fc5e744, 0xe39a0de6, 0x4034ffff, 0xfffffffd},	/* 0.17112=f(21)*/
{63, 0,123,__LINE__, 0xbfc4a256, 0xe7770b61, 0x40386666, 0x66666663},	/* -0.161204=f(24.4)*/
{56, 0,123,__LINE__, 0x3f9f302d, 0x6b54eaf2, 0x403a1999, 0x99999996},	/* 0.0304572=f(26.1)*/
{64, 0,123,__LINE__, 0x3fc25cf8, 0x6ae10498, 0x403bcccc, 0xccccccc9},	/* 0.143462=f(27.8)*/
{58, 0,123,__LINE__, 0xbfb07640, 0x70ecf6df, 0x403d7fff, 0xfffffffc},	/* -0.0643044=f(29.5)*/
{0},};
void test_j1(m)   {run_vector_1(m,j1_vec,(char *)(j1),"j1","dd");   }	
