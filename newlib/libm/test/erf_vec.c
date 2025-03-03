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
 one_line_type erf_vec[] = {
{63, 0,123,__LINE__, 0xbfed214a, 0xc7b2d067, 0xbff33333, 0x33333333},	/* -0.910314=f(-1.2)*/
{64, 0,123,__LINE__, 0xbfed0b20, 0x883a76ce, 0xbff30a3d, 0x70a3d70a},	/* -0.907608=f(-1.19)*/
{64, 0,123,__LINE__, 0xbfecf46d, 0x9e998652, 0xbff2e147, 0xae147ae1},	/* -0.904837=f(-1.18)*/
{63, 0,123,__LINE__, 0xbfecdd2f, 0xf0d13465, 0xbff2b851, 0xeb851eb8},	/* -0.902=f(-1.17)*/
{64, 0,123,__LINE__, 0xbfecc565, 0x666a6fc6, 0xbff28f5c, 0x28f5c28f},	/* -0.899096=f(-1.16)*/
{64, 0,123,__LINE__, 0xbfecad0b, 0xe8d28e76, 0xbff26666, 0x66666666},	/* -0.896124=f(-1.15)*/
{64, 0,123,__LINE__, 0xbfec9421, 0x63b9c90c, 0xbff23d70, 0xa3d70a3d},	/* -0.893082=f(-1.14)*/
{64, 0,123,__LINE__, 0xbfec7aa3, 0xc57375b7, 0xbff2147a, 0xe147ae14},	/* -0.889971=f(-1.13)*/
{64, 0,123,__LINE__, 0xbfec6090, 0xff57f49a, 0xbff1eb85, 0x1eb851eb},	/* -0.886788=f(-1.12)*/
{64, 0,123,__LINE__, 0xbfec45e7, 0x06283e10, 0xbff1c28f, 0x5c28f5c2},	/* -0.883533=f(-1.11)*/
{64, 0,123,__LINE__, 0xbfec2aa3, 0xd27302bf, 0xbff19999, 0x99999999},	/* -0.880205=f(-1.1)*/
{64, 0,123,__LINE__, 0xbfec0ec5, 0x60fb4c70, 0xbff170a3, 0xd70a3d70},	/* -0.876803=f(-1.09)*/
{64, 0,123,__LINE__, 0xbfebf249, 0xb3208dbc, 0xbff147ae, 0x147ae147},	/* -0.873326=f(-1.08)*/
{63, 0,123,__LINE__, 0xbfebd52e, 0xcf480de1, 0xbff11eb8, 0x51eb851e},	/* -0.869773=f(-1.07)*/
{63, 0,123,__LINE__, 0xbfebb772, 0xc1479d23, 0xbff0f5c2, 0x8f5c28f5},	/* -0.866144=f(-1.06)*/
{63, 0,123,__LINE__, 0xbfeb9913, 0x9ad17d59, 0xbff0cccc, 0xcccccccc},	/* -0.862436=f(-1.05)*/
{64, 0,123,__LINE__, 0xbfeb7a0f, 0x73e16967, 0xbff0a3d7, 0x0a3d70a3},	/* -0.85865=f(-1.04)*/
{64, 0,123,__LINE__, 0xbfeb5a64, 0x6b2aa59b, 0xbff07ae1, 0x47ae147a},	/* -0.854784=f(-1.03)*/
{63, 0,123,__LINE__, 0xbfeb3a10, 0xa687022b, 0xbff051eb, 0x851eb851},	/* -0.850838=f(-1.02)*/
{64, 0,123,__LINE__, 0xbfeb1912, 0x5366b827, 0xbff028f5, 0xc28f5c28},	/* -0.84681=f(-1.01)*/
{63, 0,123,__LINE__, 0xbfeaf767, 0xa741088a, 0xbfefffff, 0xfffffffe},	/* -0.842701=f(-1)*/
{63, 0,123,__LINE__, 0xbfead50e, 0xe005845a, 0xbfefae14, 0x7ae147ac},	/* -0.838508=f(-0.99)*/
{64, 0,123,__LINE__, 0xbfeab206, 0x448de3f0, 0xbfef5c28, 0xf5c28f5a},	/* -0.834232=f(-0.98)*/
{63, 0,123,__LINE__, 0xbfea8e4c, 0x251052f4, 0xbfef0a3d, 0x70a3d708},	/* -0.82987=f(-0.97)*/
{63, 0,123,__LINE__, 0xbfea69de, 0xdb9215cd, 0xbfeeb851, 0xeb851eb6},	/* -0.825424=f(-0.96)*/
{64, 0,123,__LINE__, 0xbfea44bc, 0xcc5a6caf, 0xbfee6666, 0x66666664},	/* -0.820891=f(-0.95)*/
{63, 0,123,__LINE__, 0xbfea1ee4, 0x666597d3, 0xbfee147a, 0xe147ae12},	/* -0.816271=f(-0.94)*/
{64, 0,123,__LINE__, 0xbfe9f854, 0x23d7dfaf, 0xbfedc28f, 0x5c28f5c0},	/* -0.811564=f(-0.93)*/
{64, 0,123,__LINE__, 0xbfe9d10a, 0x8a7083a6, 0xbfed70a3, 0xd70a3d6e},	/* -0.806768=f(-0.92)*/
{64, 0,123,__LINE__, 0xbfe9a906, 0x2bfc70e9, 0xbfed1eb8, 0x51eb851c},	/* -0.801883=f(-0.91)*/
{64, 0,123,__LINE__, 0xbfe98045, 0xa6c8a2e4, 0xbfeccccc, 0xccccccca},	/* -0.796908=f(-0.9)*/
{64, 0,123,__LINE__, 0xbfe956c7, 0xa6140e08, 0xbfec7ae1, 0x47ae1478},	/* -0.791843=f(-0.89)*/
{63, 0,123,__LINE__, 0xbfe92c8a, 0xe280f561, 0xbfec28f5, 0xc28f5c26},	/* -0.786687=f(-0.88)*/
{64, 0,123,__LINE__, 0xbfe9018e, 0x22858aeb, 0xbfebd70a, 0x3d70a3d4},	/* -0.78144=f(-0.87)*/
{64, 0,123,__LINE__, 0xbfe8d5d0, 0x3adbba5e, 0xbfeb851e, 0xb851eb82},	/* -0.7761=f(-0.86)*/
{63, 0,123,__LINE__, 0xbfe8a950, 0x0eeffdaf, 0xbfeb3333, 0x33333330},	/* -0.770668=f(-0.85)*/
{64, 0,123,__LINE__, 0xbfe87c0c, 0x914f1a57, 0xbfeae147, 0xae147ade},	/* -0.765143=f(-0.84)*/
{63, 0,123,__LINE__, 0xbfe84e04, 0xc412a631, 0xbfea8f5c, 0x28f5c28c},	/* -0.759524=f(-0.83)*/
{64, 0,123,__LINE__, 0xbfe81f37, 0xb94c3284, 0xbfea3d70, 0xa3d70a3a},	/* -0.753811=f(-0.82)*/
{63, 0,123,__LINE__, 0xbfe7efa4, 0x936efba1, 0xbfe9eb85, 0x1eb851e8},	/* -0.748003=f(-0.81)*/
{64, 0,123,__LINE__, 0xbfe7bf4a, 0x85b7fb81, 0xbfe99999, 0x99999996},	/* -0.742101=f(-0.8)*/
{64, 0,123,__LINE__, 0xbfe78e28, 0xd4943d8d, 0xbfe947ae, 0x147ae144},	/* -0.736103=f(-0.79)*/
{63, 0,123,__LINE__, 0xbfe75c3e, 0xd60551eb, 0xbfe8f5c2, 0x8f5c28f2},	/* -0.73001=f(-0.78)*/
{64, 0,123,__LINE__, 0xbfe7298b, 0xf203be84, 0xbfe8a3d7, 0x0a3d70a0},	/* -0.723822=f(-0.77)*/
{63, 0,123,__LINE__, 0xbfe6f60f, 0xa2df4c2b, 0xbfe851eb, 0x851eb84e},	/* -0.717537=f(-0.76)*/
{64, 0,123,__LINE__, 0xbfe6c1c9, 0x759d0e5d, 0xbfe7ffff, 0xfffffffc},	/* -0.711156=f(-0.75)*/
{64, 0,123,__LINE__, 0xbfe68cb9, 0x0a53044a, 0xbfe7ae14, 0x7ae147aa},	/* -0.704678=f(-0.74)*/
{64, 0,123,__LINE__, 0xbfe656de, 0x14813204, 0xbfe75c28, 0xf5c28f58},	/* -0.698104=f(-0.73)*/
{63, 0,123,__LINE__, 0xbfe62038, 0x5b681101, 0xbfe70a3d, 0x70a3d706},	/* -0.691433=f(-0.72)*/
{64, 0,123,__LINE__, 0xbfe5e8c7, 0xba5c3770, 0xbfe6b851, 0xeb851eb4},	/* -0.684666=f(-0.71)*/
{63, 0,123,__LINE__, 0xbfe5b08c, 0x21171643, 0xbfe66666, 0x66666662},	/* -0.677801=f(-0.7)*/
{64, 0,123,__LINE__, 0xbfe57785, 0x9404ae2e, 0xbfe6147a, 0xe147ae10},	/* -0.67084=f(-0.69)*/
{64, 0,123,__LINE__, 0xbfe53db4, 0x2c8e1c72, 0xbfe5c28f, 0x5c28f5be},	/* -0.663782=f(-0.68)*/
{64, 0,123,__LINE__, 0xbfe50318, 0x1960e0ba, 0xbfe570a3, 0xd70a3d6c},	/* -0.656628=f(-0.67)*/
{64, 0,123,__LINE__, 0xbfe4c7b1, 0x9eb2bdec, 0xbfe51eb8, 0x51eb851a},	/* -0.649377=f(-0.66)*/
{64, 0,123,__LINE__, 0xbfe48b81, 0x16821878, 0xbfe4cccc, 0xccccccc8},	/* -0.642029=f(-0.65)*/
{64, 0,123,__LINE__, 0xbfe44e86, 0xf0d2b55e, 0xbfe47ae1, 0x47ae1476},	/* -0.634586=f(-0.64)*/
{64, 0,123,__LINE__, 0xbfe410c3, 0xb3e6bdc6, 0xbfe428f5, 0xc28f5c24},	/* -0.627046=f(-0.63)*/
{63, 0,123,__LINE__, 0xbfe3d237, 0xfc73ebfb, 0xbfe3d70a, 0x3d70a3d2},	/* -0.619411=f(-0.62)*/
{63, 0,123,__LINE__, 0xbfe392e4, 0x7dd4c73f, 0xbfe3851e, 0xb851eb80},	/* -0.611681=f(-0.61)*/
{63, 0,123,__LINE__, 0xbfe352ca, 0x0235d4f3, 0xbfe33333, 0x3333332e},	/* -0.603856=f(-0.6)*/
{64, 0,123,__LINE__, 0xbfe311e9, 0x6abea663, 0xbfe2e147, 0xae147adc},	/* -0.595936=f(-0.59)*/
{64, 0,123,__LINE__, 0xbfe2d043, 0xafb6ab88, 0xbfe28f5c, 0x28f5c28a},	/* -0.587923=f(-0.58)*/
{62, 0,123,__LINE__, 0xbfe28dd9, 0xe0a5b41c, 0xbfe23d70, 0xa3d70a38},	/* -0.579816=f(-0.57)*/
{63, 0,123,__LINE__, 0xbfe24aad, 0x2470095d, 0xbfe1eb85, 0x1eb851e6},	/* -0.571616=f(-0.56)*/
{62, 0,123,__LINE__, 0xbfe206be, 0xb96e0c08, 0xbfe19999, 0x99999994},	/* -0.563323=f(-0.55)*/
{64, 0,123,__LINE__, 0xbfe1c20f, 0xf57f4326, 0xbfe147ae, 0x147ae142},	/* -0.554939=f(-0.54)*/
{64, 0,123,__LINE__, 0xbfe17ca2, 0x4618c990, 0xbfe0f5c2, 0x8f5c28f0},	/* -0.546464=f(-0.53)*/
{64, 0,123,__LINE__, 0xbfe13677, 0x304f0925, 0xbfe0a3d7, 0x0a3d709e},	/* -0.537899=f(-0.52)*/
{64, 0,123,__LINE__, 0xbfe0ef90, 0x50dab412, 0xbfe051eb, 0x851eb84c},	/* -0.529244=f(-0.51)*/
{63, 0,123,__LINE__, 0xbfe0a7ef, 0x5c18edcd, 0xbfdfffff, 0xfffffff4},	/* -0.5205=f(-0.5)*/
{63, 0,123,__LINE__, 0xbfe05f96, 0x1e0696a7, 0xbfdf5c28, 0xf5c28f50},	/* -0.511668=f(-0.49)*/
{63, 0,123,__LINE__, 0xbfe01686, 0x7a36ae58, 0xbfdeb851, 0xeb851eac},	/* -0.50275=f(-0.48)*/
{62, 0,123,__LINE__, 0xbfdf9984, 0xd787865d, 0xbfde147a, 0xe147ae08},	/* -0.493745=f(-0.47)*/
{63, 0,123,__LINE__, 0xbfdf0498, 0x0a78ca20, 0xbfdd70a3, 0xd70a3d64},	/* -0.484655=f(-0.46)*/
{64, 0,123,__LINE__, 0xbfde6e4a, 0xe11529b4, 0xbfdccccc, 0xccccccc0},	/* -0.475482=f(-0.45)*/
{64, 0,123,__LINE__, 0xbfddd6a1, 0xddac5474, 0xbfdc28f5, 0xc28f5c1c},	/* -0.466225=f(-0.44)*/
{64, 0,123,__LINE__, 0xbfdd3da1, 0xb0c45711, 0xbfdb851e, 0xb851eb78},	/* -0.456887=f(-0.43)*/
{64, 0,123,__LINE__, 0xbfdca34f, 0x38ca297f, 0xbfdae147, 0xae147ad4},	/* -0.447468=f(-0.42)*/
{63, 0,123,__LINE__, 0xbfdc07af, 0x81b81856, 0xbfda3d70, 0xa3d70a30},	/* -0.437969=f(-0.41)*/
{63, 0,123,__LINE__, 0xbfdb6ac7, 0xc4b209f8, 0xbfd99999, 0x9999998c},	/* -0.428392=f(-0.4)*/
{63, 0,123,__LINE__, 0xbfdacc9d, 0x6797a301, 0xbfd8f5c2, 0x8f5c28e8},	/* -0.418739=f(-0.39)*/
{63, 0,123,__LINE__, 0xbfda2d35, 0xfc8c5094, 0xbfd851eb, 0x851eb844},	/* -0.409009=f(-0.38)*/
{64, 0,123,__LINE__, 0xbfd98c97, 0x41754260, 0xbfd7ae14, 0x7ae147a0},	/* -0.399206=f(-0.37)*/
{63, 0,123,__LINE__, 0xbfd8eac7, 0x1f6d614d, 0xbfd70a3d, 0x70a3d6fc},	/* -0.38933=f(-0.36)*/
{64, 0,123,__LINE__, 0xbfd847cb, 0xaa2f52fb, 0xbfd66666, 0x66666658},	/* -0.379382=f(-0.35)*/
{63, 0,123,__LINE__, 0xbfd7a3ab, 0x1f759d7e, 0xbfd5c28f, 0x5c28f5b4},	/* -0.369365=f(-0.34)*/
{64, 0,123,__LINE__, 0xbfd6fe6b, 0xe65101d1, 0xbfd51eb8, 0x51eb8510},	/* -0.359279=f(-0.33)*/
{63, 0,123,__LINE__, 0xbfd65814, 0x8e7526c2, 0xbfd47ae1, 0x47ae146c},	/* -0.349126=f(-0.32)*/
{63, 0,123,__LINE__, 0xbfd5b0ab, 0xcf7bb13d, 0xbfd3d70a, 0x3d70a3c8},	/* -0.338908=f(-0.31)*/
{64, 0,123,__LINE__, 0xbfd50838, 0x881dea00, 0xbfd33333, 0x33333324},	/* -0.328627=f(-0.3)*/
{63, 0,123,__LINE__, 0xbfd45ec1, 0xbd6513de, 0xbfd28f5c, 0x28f5c280},	/* -0.318283=f(-0.29)*/
{63, 0,123,__LINE__, 0xbfd3b44e, 0x99d198d2, 0xbfd1eb85, 0x1eb851dc},	/* -0.30788=f(-0.28)*/
{64, 0,123,__LINE__, 0xbfd308e6, 0x6c79373d, 0xbfd147ae, 0x147ae138},	/* -0.297418=f(-0.27)*/
{63, 0,123,__LINE__, 0xbfd25c90, 0xa81c5b99, 0xbfd0a3d7, 0x0a3d7094},	/* -0.2869=f(-0.26)*/
{63, 0,123,__LINE__, 0xbfd1af54, 0xe232d5f8, 0xbfcfffff, 0xffffffe0},	/* -0.276326=f(-0.25)*/
{64, 0,123,__LINE__, 0xbfd1013a, 0xd1f01d91, 0xbfceb851, 0xeb851e98},	/* -0.2657=f(-0.24)*/
{64, 0,123,__LINE__, 0xbfd0524a, 0x4f3f5771, 0xbfcd70a3, 0xd70a3d50},	/* -0.255023=f(-0.23)*/
{62, 0,123,__LINE__, 0xbfcf4516, 0xa36eb079, 0xbfcc28f5, 0xc28f5c08},	/* -0.244296=f(-0.22)*/
{63, 0,123,__LINE__, 0xbfcde40b, 0xdf0db777, 0xbfcae147, 0xae147ac0},	/* -0.233522=f(-0.21)*/
{63, 0,123,__LINE__, 0xbfcc8184, 0xb8b25ef7, 0xbfc99999, 0x99999978},	/* -0.222703=f(-0.2)*/
{63, 0,123,__LINE__, 0xbfcb1d91, 0xd0672119, 0xbfc851eb, 0x851eb830},	/* -0.21184=f(-0.19)*/
{63, 0,123,__LINE__, 0xbfc9b843, 0xfc96fd9d, 0xbfc70a3d, 0x70a3d6e8},	/* -0.200936=f(-0.18)*/
{64, 0,123,__LINE__, 0xbfc851ac, 0x47ac9586, 0xbfc5c28f, 0x5c28f5a0},	/* -0.189992=f(-0.17)*/
{64, 0,123,__LINE__, 0xbfc6e9db, 0xeda44a66, 0xbfc47ae1, 0x47ae1458},	/* -0.179012=f(-0.16)*/
{63, 0,123,__LINE__, 0xbfc580e4, 0x5991f46f, 0xbfc33333, 0x33333310},	/* -0.167996=f(-0.15)*/
{63, 0,123,__LINE__, 0xbfc416d7, 0x231ac6cb, 0xbfc1eb85, 0x1eb851c8},	/* -0.156947=f(-0.14)*/
{63, 0,123,__LINE__, 0xbfc2abc6, 0x0be3fdde, 0xbfc0a3d7, 0x0a3d7080},	/* -0.145867=f(-0.13)*/
{63, 0,123,__LINE__, 0xbfc13fc2, 0xfcf6f70a, 0xbfbeb851, 0xeb851e71},	/* -0.134758=f(-0.12)*/
{64, 0,123,__LINE__, 0xbfbfa5c0, 0x0836aa91, 0xbfbc28f5, 0xc28f5be2},	/* -0.123623=f(-0.11)*/
{62, 0,123,__LINE__, 0xbfbcca5e, 0xa24fb2e5, 0xbfb99999, 0x99999953},	/* -0.112463=f(-0.1)*/
{62, 0,123,__LINE__, 0xbfb9ed86, 0x669530b4, 0xbfb70a3d, 0x70a3d6c4},	/* -0.101281=f(-0.09)*/
{63, 0,123,__LINE__, 0xbfb70f5c, 0x2c9277d2, 0xbfb47ae1, 0x47ae1435},	/* -0.0900781=f(-0.08)*/
{64, 0,123,__LINE__, 0xbfb43004, 0xff73fe9b, 0xbfb1eb85, 0x1eb851a6},	/* -0.0788577=f(-0.07)*/
{64, 0,123,__LINE__, 0xbfb14fa6, 0x186c319d, 0xbfaeb851, 0xeb851e2d},	/* -0.0676216=f(-0.06)*/
{63, 0,123,__LINE__, 0xbfacdcc9, 0xb2191921, 0xbfa99999, 0x9999990e},	/* -0.056372=f(-0.05)*/
{63, 0,123,__LINE__, 0xbfa718cd, 0x8b28cd3a, 0xbfa47ae1, 0x47ae13ef},	/* -0.0451111=f(-0.04)*/
{63, 0,123,__LINE__, 0xbfa153a2, 0xfe6dc79c, 0xbf9eb851, 0xeb851da0},	/* -0.0338412=f(-0.03)*/
{64, 0,123,__LINE__, 0xbf971b2a, 0xf966026a, 0xbf947ae1, 0x47ae1362},	/* -0.0225646=f(-0.02)*/
{63, 0,123,__LINE__, 0xbf871bc2, 0x666578eb, 0xbf847ae1, 0x47ae1249},	/* -0.0112834=f(-0.01)*/
{63, 0,123,__LINE__, 0x3cd3d131, 0x57191c9b, 0x3cd19000, 0x00000000},	/* 1.10007e-15=f(9.74915e-16)*/
{63, 0,123,__LINE__, 0x3f871bc2, 0x66657de0, 0x3f847ae1, 0x47ae16ad},	/* 0.0112834=f(0.01)*/
{64, 0,123,__LINE__, 0x3f971b2a, 0xf96604e4, 0x3f947ae1, 0x47ae1594},	/* 0.0225646=f(0.02)*/
{64, 0,123,__LINE__, 0x3fa153a2, 0xfe6dc8d8, 0x3f9eb851, 0xeb851fd2},	/* 0.0338412=f(0.03)*/
{63, 0,123,__LINE__, 0x3fa718cd, 0x8b28ce76, 0x3fa47ae1, 0x47ae1508},	/* 0.0451111=f(0.04)*/
{64, 0,123,__LINE__, 0x3facdcc9, 0xb2191a5d, 0x3fa99999, 0x99999a27},	/* 0.056372=f(0.05)*/
{63, 0,123,__LINE__, 0x3fb14fa6, 0x186c323b, 0x3faeb851, 0xeb851f46},	/* 0.0676216=f(0.06)*/
{63, 0,123,__LINE__, 0x3fb43004, 0xff73ff38, 0x3fb1eb85, 0x1eb85232},	/* 0.0788577=f(0.07)*/
{64, 0,123,__LINE__, 0x3fb70f5c, 0x2c92786f, 0x3fb47ae1, 0x47ae14c1},	/* 0.0900781=f(0.08)*/
{64, 0,123,__LINE__, 0x3fb9ed86, 0x66953151, 0x3fb70a3d, 0x70a3d750},	/* 0.101281=f(0.09)*/
{63, 0,123,__LINE__, 0x3fbcca5e, 0xa24fb381, 0x3fb99999, 0x999999df},	/* 0.112463=f(0.1)*/
{63, 0,123,__LINE__, 0x3fbfa5c0, 0x0836ab2d, 0x3fbc28f5, 0xc28f5c6e},	/* 0.123623=f(0.11)*/
{64, 0,123,__LINE__, 0x3fc13fc2, 0xfcf6f758, 0x3fbeb851, 0xeb851efd},	/* 0.134758=f(0.12)*/
{63, 0,123,__LINE__, 0x3fc2abc6, 0x0be3fe2c, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.145867=f(0.13)*/
{63, 0,123,__LINE__, 0x3fc416d7, 0x231ac719, 0x3fc1eb85, 0x1eb8520e},	/* 0.156947=f(0.14)*/
{63, 0,123,__LINE__, 0x3fc580e4, 0x5991f4bc, 0x3fc33333, 0x33333356},	/* 0.167996=f(0.15)*/
{63, 0,123,__LINE__, 0x3fc6e9db, 0xeda44ab3, 0x3fc47ae1, 0x47ae149e},	/* 0.179012=f(0.16)*/
{63, 0,123,__LINE__, 0x3fc851ac, 0x47ac95d3, 0x3fc5c28f, 0x5c28f5e6},	/* 0.189992=f(0.17)*/
{63, 0,123,__LINE__, 0x3fc9b843, 0xfc96fdea, 0x3fc70a3d, 0x70a3d72e},	/* 0.200936=f(0.18)*/
{63, 0,123,__LINE__, 0x3fcb1d91, 0xd0672166, 0x3fc851eb, 0x851eb876},	/* 0.21184=f(0.19)*/
{63, 0,123,__LINE__, 0x3fcc8184, 0xb8b25f43, 0x3fc99999, 0x999999be},	/* 0.222703=f(0.2)*/
{63, 0,123,__LINE__, 0x3fcde40b, 0xdf0db7c2, 0x3fcae147, 0xae147b06},	/* 0.233522=f(0.21)*/
{62, 0,123,__LINE__, 0x3fcf4516, 0xa36eb0c4, 0x3fcc28f5, 0xc28f5c4e},	/* 0.244296=f(0.22)*/
{63, 0,123,__LINE__, 0x3fd0524a, 0x4f3f5796, 0x3fcd70a3, 0xd70a3d96},	/* 0.255023=f(0.23)*/
{64, 0,123,__LINE__, 0x3fd1013a, 0xd1f01db6, 0x3fceb851, 0xeb851ede},	/* 0.2657=f(0.24)*/
{63, 0,123,__LINE__, 0x3fd1af54, 0xe232d61d, 0x3fd00000, 0x00000013},	/* 0.276326=f(0.25)*/
{63, 0,123,__LINE__, 0x3fd25c90, 0xa81c5bbd, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.2869=f(0.26)*/
{63, 0,123,__LINE__, 0x3fd308e6, 0x6c793762, 0x3fd147ae, 0x147ae15b},	/* 0.297418=f(0.27)*/
{64, 0,123,__LINE__, 0x3fd3b44e, 0x99d198f6, 0x3fd1eb85, 0x1eb851ff},	/* 0.30788=f(0.28)*/
{63, 0,123,__LINE__, 0x3fd45ec1, 0xbd651402, 0x3fd28f5c, 0x28f5c2a3},	/* 0.318283=f(0.29)*/
{63, 0,123,__LINE__, 0x3fd50838, 0x881dea24, 0x3fd33333, 0x33333347},	/* 0.328627=f(0.3)*/
{64, 0,123,__LINE__, 0x3fd5b0ab, 0xcf7bb160, 0x3fd3d70a, 0x3d70a3eb},	/* 0.338908=f(0.31)*/
{64, 0,123,__LINE__, 0x3fd65814, 0x8e7526e5, 0x3fd47ae1, 0x47ae148f},	/* 0.349126=f(0.32)*/
{64, 0,123,__LINE__, 0x3fd6fe6b, 0xe65101f5, 0x3fd51eb8, 0x51eb8533},	/* 0.359279=f(0.33)*/
{63, 0,123,__LINE__, 0x3fd7a3ab, 0x1f759da2, 0x3fd5c28f, 0x5c28f5d7},	/* 0.369365=f(0.34)*/
{63, 0,123,__LINE__, 0x3fd847cb, 0xaa2f531e, 0x3fd66666, 0x6666667b},	/* 0.379382=f(0.35)*/
{63, 0,123,__LINE__, 0x3fd8eac7, 0x1f6d616f, 0x3fd70a3d, 0x70a3d71f},	/* 0.38933=f(0.36)*/
{63, 0,123,__LINE__, 0x3fd98c97, 0x41754283, 0x3fd7ae14, 0x7ae147c3},	/* 0.399206=f(0.37)*/
{62, 0,123,__LINE__, 0x3fda2d35, 0xfc8c50b6, 0x3fd851eb, 0x851eb867},	/* 0.409009=f(0.38)*/
{64, 0,123,__LINE__, 0x3fdacc9d, 0x6797a323, 0x3fd8f5c2, 0x8f5c290b},	/* 0.418739=f(0.39)*/
{63, 0,123,__LINE__, 0x3fdb6ac7, 0xc4b20a1a, 0x3fd99999, 0x999999af},	/* 0.428392=f(0.4)*/
{63, 0,123,__LINE__, 0x3fdc07af, 0x81b81877, 0x3fda3d70, 0xa3d70a53},	/* 0.437969=f(0.41)*/
{64, 0,123,__LINE__, 0x3fdca34f, 0x38ca29a0, 0x3fdae147, 0xae147af7},	/* 0.447468=f(0.42)*/
{63, 0,123,__LINE__, 0x3fdd3da1, 0xb0c45732, 0x3fdb851e, 0xb851eb9b},	/* 0.456887=f(0.43)*/
{63, 0,123,__LINE__, 0x3fddd6a1, 0xddac5495, 0x3fdc28f5, 0xc28f5c3f},	/* 0.466225=f(0.44)*/
{62, 0,123,__LINE__, 0x3fde6e4a, 0xe11529d5, 0x3fdccccc, 0xcccccce3},	/* 0.475482=f(0.45)*/
{62, 0,123,__LINE__, 0x3fdf0498, 0x0a78ca40, 0x3fdd70a3, 0xd70a3d87},	/* 0.484655=f(0.46)*/
{63, 0,123,__LINE__, 0x3fdf9984, 0xd787867d, 0x3fde147a, 0xe147ae2b},	/* 0.493745=f(0.47)*/
{63, 0,123,__LINE__, 0x3fe01686, 0x7a36ae68, 0x3fdeb851, 0xeb851ecf},	/* 0.50275=f(0.48)*/
{63, 0,123,__LINE__, 0x3fe05f96, 0x1e0696b7, 0x3fdf5c28, 0xf5c28f73},	/* 0.511668=f(0.49)*/
{64, 0,123,__LINE__, 0x3fe0a7ef, 0x5c18eddc, 0x3fe00000, 0x0000000b},	/* 0.5205=f(0.5)*/
{64, 0,123,__LINE__, 0x3fe0ef90, 0x50dab421, 0x3fe051eb, 0x851eb85d},	/* 0.529244=f(0.51)*/
{64, 0,123,__LINE__, 0x3fe13677, 0x304f0933, 0x3fe0a3d7, 0x0a3d70af},	/* 0.537899=f(0.52)*/
{63, 0,123,__LINE__, 0x3fe17ca2, 0x4618c99f, 0x3fe0f5c2, 0x8f5c2901},	/* 0.546464=f(0.53)*/
{64, 0,123,__LINE__, 0x3fe1c20f, 0xf57f4335, 0x3fe147ae, 0x147ae153},	/* 0.554939=f(0.54)*/
{63, 0,123,__LINE__, 0x3fe206be, 0xb96e0c16, 0x3fe19999, 0x999999a5},	/* 0.563323=f(0.55)*/
{63, 0,123,__LINE__, 0x3fe24aad, 0x2470096b, 0x3fe1eb85, 0x1eb851f7},	/* 0.571616=f(0.56)*/
{64, 0,123,__LINE__, 0x3fe28dd9, 0xe0a5b42a, 0x3fe23d70, 0xa3d70a49},	/* 0.579816=f(0.57)*/
{64, 0,123,__LINE__, 0x3fe2d043, 0xafb6ab96, 0x3fe28f5c, 0x28f5c29b},	/* 0.587923=f(0.58)*/
{63, 0,123,__LINE__, 0x3fe311e9, 0x6abea671, 0x3fe2e147, 0xae147aed},	/* 0.595936=f(0.59)*/
{63, 0,123,__LINE__, 0x3fe352ca, 0x0235d500, 0x3fe33333, 0x3333333f},	/* 0.603856=f(0.6)*/
{62, 0,123,__LINE__, 0x3fe392e4, 0x7dd4c74c, 0x3fe3851e, 0xb851eb91},	/* 0.611681=f(0.61)*/
{62, 0,123,__LINE__, 0x3fe3d237, 0xfc73ec08, 0x3fe3d70a, 0x3d70a3e3},	/* 0.619411=f(0.62)*/
{64, 0,123,__LINE__, 0x3fe410c3, 0xb3e6bdd3, 0x3fe428f5, 0xc28f5c35},	/* 0.627046=f(0.63)*/
{64, 0,123,__LINE__, 0x3fe44e86, 0xf0d2b56b, 0x3fe47ae1, 0x47ae1487},	/* 0.634586=f(0.64)*/
{64, 0,123,__LINE__, 0x3fe48b81, 0x16821885, 0x3fe4cccc, 0xccccccd9},	/* 0.642029=f(0.65)*/
{64, 0,123,__LINE__, 0x3fe4c7b1, 0x9eb2bdf8, 0x3fe51eb8, 0x51eb852b},	/* 0.649377=f(0.66)*/
{64, 0,123,__LINE__, 0x3fe50318, 0x1960e0c6, 0x3fe570a3, 0xd70a3d7d},	/* 0.656628=f(0.67)*/
{63, 0,123,__LINE__, 0x3fe53db4, 0x2c8e1c7f, 0x3fe5c28f, 0x5c28f5cf},	/* 0.663782=f(0.68)*/
{64, 0,123,__LINE__, 0x3fe57785, 0x9404ae3a, 0x3fe6147a, 0xe147ae21},	/* 0.67084=f(0.69)*/
{63, 0,123,__LINE__, 0x3fe5b08c, 0x2117164f, 0x3fe66666, 0x66666673},	/* 0.677801=f(0.7)*/
{63, 0,123,__LINE__, 0x3fe5e8c7, 0xba5c377c, 0x3fe6b851, 0xeb851ec5},	/* 0.684666=f(0.71)*/
{64, 0,123,__LINE__, 0x3fe62038, 0x5b68110c, 0x3fe70a3d, 0x70a3d717},	/* 0.691433=f(0.72)*/
{64, 0,123,__LINE__, 0x3fe656de, 0x14813210, 0x3fe75c28, 0xf5c28f69},	/* 0.698104=f(0.73)*/
{63, 0,123,__LINE__, 0x3fe68cb9, 0x0a530455, 0x3fe7ae14, 0x7ae147bb},	/* 0.704678=f(0.74)*/
{63, 0,123,__LINE__, 0x3fe6c1c9, 0x759d0e68, 0x3fe80000, 0x0000000d},	/* 0.711156=f(0.75)*/
{64, 0,123,__LINE__, 0x3fe6f60f, 0xa2df4c36, 0x3fe851eb, 0x851eb85f},	/* 0.717537=f(0.76)*/
{63, 0,123,__LINE__, 0x3fe7298b, 0xf203be8f, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.723822=f(0.77)*/
{64, 0,123,__LINE__, 0x3fe75c3e, 0xd60551f6, 0x3fe8f5c2, 0x8f5c2903},	/* 0.73001=f(0.78)*/
{64, 0,123,__LINE__, 0x3fe78e28, 0xd4943d97, 0x3fe947ae, 0x147ae155},	/* 0.736103=f(0.79)*/
{64, 0,123,__LINE__, 0x3fe7bf4a, 0x85b7fb8b, 0x3fe99999, 0x999999a7},	/* 0.742101=f(0.8)*/
{63, 0,123,__LINE__, 0x3fe7efa4, 0x936efbab, 0x3fe9eb85, 0x1eb851f9},	/* 0.748003=f(0.81)*/
{64, 0,123,__LINE__, 0x3fe81f37, 0xb94c328e, 0x3fea3d70, 0xa3d70a4b},	/* 0.753811=f(0.82)*/
{64, 0,123,__LINE__, 0x3fe84e04, 0xc412a63b, 0x3fea8f5c, 0x28f5c29d},	/* 0.759524=f(0.83)*/
{63, 0,123,__LINE__, 0x3fe87c0c, 0x914f1a60, 0x3feae147, 0xae147aef},	/* 0.765143=f(0.84)*/
{63, 0,123,__LINE__, 0x3fe8a950, 0x0eeffdb8, 0x3feb3333, 0x33333341},	/* 0.770668=f(0.85)*/
{64, 0,123,__LINE__, 0x3fe8d5d0, 0x3adbba67, 0x3feb851e, 0xb851eb93},	/* 0.7761=f(0.86)*/
{64, 0,123,__LINE__, 0x3fe9018e, 0x22858af4, 0x3febd70a, 0x3d70a3e5},	/* 0.78144=f(0.87)*/
{63, 0,123,__LINE__, 0x3fe92c8a, 0xe280f569, 0x3fec28f5, 0xc28f5c37},	/* 0.786687=f(0.88)*/
{63, 0,123,__LINE__, 0x3fe956c7, 0xa6140e11, 0x3fec7ae1, 0x47ae1489},	/* 0.791843=f(0.89)*/
{64, 0,123,__LINE__, 0x3fe98045, 0xa6c8a2ed, 0x3feccccc, 0xccccccdb},	/* 0.796908=f(0.9)*/
{64, 0,123,__LINE__, 0x3fe9a906, 0x2bfc70f2, 0x3fed1eb8, 0x51eb852d},	/* 0.801883=f(0.91)*/
{64, 0,123,__LINE__, 0x3fe9d10a, 0x8a7083ae, 0x3fed70a3, 0xd70a3d7f},	/* 0.806768=f(0.92)*/
{64, 0,123,__LINE__, 0x3fe9f854, 0x23d7dfb7, 0x3fedc28f, 0x5c28f5d1},	/* 0.811564=f(0.93)*/
{63, 0,123,__LINE__, 0x3fea1ee4, 0x666597db, 0x3fee147a, 0xe147ae23},	/* 0.816271=f(0.94)*/
{63, 0,123,__LINE__, 0x3fea44bc, 0xcc5a6cb7, 0x3fee6666, 0x66666675},	/* 0.820891=f(0.95)*/
{64, 0,123,__LINE__, 0x3fea69de, 0xdb9215d4, 0x3feeb851, 0xeb851ec7},	/* 0.825424=f(0.96)*/
{62, 0,123,__LINE__, 0x3fea8e4c, 0x251052fc, 0x3fef0a3d, 0x70a3d719},	/* 0.82987=f(0.97)*/
{64, 0,123,__LINE__, 0x3feab206, 0x448de3f7, 0x3fef5c28, 0xf5c28f6b},	/* 0.834232=f(0.98)*/
{63, 0,123,__LINE__, 0x3fead50e, 0xe0058461, 0x3fefae14, 0x7ae147bd},	/* 0.838508=f(0.99)*/
{63, 0,123,__LINE__, 0x3feaf767, 0xa7410891, 0x3ff00000, 0x00000007},	/* 0.842701=f(1)*/
{64, 0,123,__LINE__, 0x3feb1912, 0x5366b82d, 0x3ff028f5, 0xc28f5c30},	/* 0.84681=f(1.01)*/
{64, 0,123,__LINE__, 0x3feb3a10, 0xa6870232, 0x3ff051eb, 0x851eb859},	/* 0.850838=f(1.02)*/
{63, 0,123,__LINE__, 0x3feb5a64, 0x6b2aa5a1, 0x3ff07ae1, 0x47ae1482},	/* 0.854784=f(1.03)*/
{64, 0,123,__LINE__, 0x3feb7a0f, 0x73e1696d, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.85865=f(1.04)*/
{63, 0,123,__LINE__, 0x3feb9913, 0x9ad17d5f, 0x3ff0cccc, 0xccccccd4},	/* 0.862436=f(1.05)*/
{64, 0,123,__LINE__, 0x3febb772, 0xc1479d29, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.866144=f(1.06)*/
{64, 0,123,__LINE__, 0x3febd52e, 0xcf480de6, 0x3ff11eb8, 0x51eb8526},	/* 0.869773=f(1.07)*/
{64, 0,123,__LINE__, 0x3febf249, 0xb3208dc2, 0x3ff147ae, 0x147ae14f},	/* 0.873326=f(1.08)*/
{64, 0,123,__LINE__, 0x3fec0ec5, 0x60fb4c76, 0x3ff170a3, 0xd70a3d78},	/* 0.876803=f(1.09)*/
{63, 0,123,__LINE__, 0x3fec2aa3, 0xd27302c5, 0x3ff19999, 0x999999a1},	/* 0.880205=f(1.1)*/
{64, 0,123,__LINE__, 0x3fec45e7, 0x06283e15, 0x3ff1c28f, 0x5c28f5ca},	/* 0.883533=f(1.11)*/
{63, 0,123,__LINE__, 0x3fec6090, 0xff57f49f, 0x3ff1eb85, 0x1eb851f3},	/* 0.886788=f(1.12)*/
{64, 0,123,__LINE__, 0x3fec7aa3, 0xc57375bc, 0x3ff2147a, 0xe147ae1c},	/* 0.889971=f(1.13)*/
{64, 0,123,__LINE__, 0x3fec9421, 0x63b9c910, 0x3ff23d70, 0xa3d70a45},	/* 0.893082=f(1.14)*/
{64, 0,123,__LINE__, 0x3fecad0b, 0xe8d28e7b, 0x3ff26666, 0x6666666e},	/* 0.896124=f(1.15)*/
{64, 0,123,__LINE__, 0x3fecc565, 0x666a6fca, 0x3ff28f5c, 0x28f5c297},	/* 0.899096=f(1.16)*/
{63, 0,123,__LINE__, 0x3fecdd2f, 0xf0d13469, 0x3ff2b851, 0xeb851ec0},	/* 0.902=f(1.17)*/
{64, 0,123,__LINE__, 0x3fecf46d, 0x9e998656, 0x3ff2e147, 0xae147ae9},	/* 0.904837=f(1.18)*/
{64, 0,123,__LINE__, 0x3fed0b20, 0x883a76d3, 0x3ff30a3d, 0x70a3d712},	/* 0.907608=f(1.19)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc01921fb, 0x54442d18},	/* -1=f(-6.28319)*/
{45, 0,123,__LINE__, 0xbfefffff, 0xfffc5880, 0xc012d97c, 0x7f3321d2},	/* -1=f(-4.71239)*/
{64, 0,123,__LINE__, 0xbfefffed, 0x62a7bb7c, 0xc00921fb, 0x54442d18},	/* -0.999991=f(-3.14159)*/
{63, 0,123,__LINE__, 0xbfef2860, 0xb4807f6d, 0xbff921fb, 0x54442d18},	/* -0.973679=f(-1.5708)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{63, 0,123,__LINE__, 0x3fef2860, 0xb4807f6d, 0x3ff921fb, 0x54442d18},	/* 0.973679=f(1.5708)*/
{64, 0,123,__LINE__, 0x3fefffed, 0x62a7bb7c, 0x400921fb, 0x54442d18},	/* 0.999991=f(3.14159)*/
{45, 0,123,__LINE__, 0x3fefffff, 0xfffc5880, 0x4012d97c, 0x7f3321d2},	/* 1=f(4.71239)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc03e0000, 0x00000000},	/* -1=f(-30)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc03c4ccc, 0xcccccccd},	/* -1=f(-28.3)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc03a9999, 0x9999999a},	/* -1=f(-26.6)*/
{ 0, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc038e666, 0x66666667},	/* -1=f(-24.9)*/
{ 1, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc0373333, 0x33333334},	/* -1=f(-23.2)*/
{ 1, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc0358000, 0x00000001},	/* -1=f(-21.5)*/
{10, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc033cccc, 0xccccccce},	/* -1=f(-19.8)*/
{ 0, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc0321999, 0x9999999b},	/* -1=f(-18.1)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc0306666, 0x66666668},	/* -1=f(-16.4)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc02d6666, 0x6666666a},	/* -1=f(-14.7)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc02a0000, 0x00000004},	/* -1=f(-13)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc0269999, 0x9999999e},	/* -1=f(-11.3)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc0233333, 0x33333338},	/* -1=f(-9.6)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc01f9999, 0x999999a3},	/* -1=f(-7.9)*/
{64, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc018cccc, 0xccccccd6},	/* -1=f(-6.2)*/
{42, 0,123,__LINE__, 0xbfefffff, 0xffe4fa30, 0xc0120000, 0x00000009},	/* -1=f(-4.5)*/
{64, 0,123,__LINE__, 0xbfefff62, 0xaf990752, 0xc0066666, 0x66666678},	/* -0.999925=f(-2.8)*/
{63, 0,123,__LINE__, 0xbfec2aa3, 0xd27302d8, 0xbff19999, 0x999999bd},	/* -0.880205=f(-1.1)*/
{63, 0,123,__LINE__, 0x3fe352ca, 0x0235d4bf, 0x3fe33333, 0x333332ec},	/* 0.603856=f(0.6)*/
{63, 0,123,__LINE__, 0x3feff6a2, 0x95bcd35b, 0x40026666, 0x66666654},	/* 0.998857=f(2.3)*/
{64, 0,123,__LINE__, 0x3fefffff, 0xf7b91176, 0x400fffff, 0xffffffee},	/* 1=f(4)*/
{60, 0,123,__LINE__, 0x3fefffff, 0xfffffff9, 0x4016cccc, 0xccccccc4},	/* 1=f(5.7)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x401d9999, 0x99999991},	/* 1=f(7.4)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x40223333, 0x3333332f},	/* 1=f(9.1)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x40259999, 0x99999995},	/* 1=f(10.8)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x4028ffff, 0xfffffffb},	/* 1=f(12.5)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x402c6666, 0x66666661},	/* 1=f(14.2)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x402fcccc, 0xccccccc7},	/* 1=f(15.9)*/
{ 1, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x40319999, 0x99999997},	/* 1=f(17.6)*/
{10, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x40334ccc, 0xccccccca},	/* 1=f(19.3)*/
{12, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x4034ffff, 0xfffffffd},	/* 1=f(21)*/
{ 0, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x4036b333, 0x33333330},	/* 1=f(22.7)*/
{ 1, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x40386666, 0x66666663},	/* 1=f(24.4)*/
{11, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x403a1999, 0x99999996},	/* 1=f(26.1)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x403bcccc, 0xccccccc9},	/* 1=f(27.8)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x403d7fff, 0xfffffffc},	/* 1=f(29.5)*/
{0}
};
void test_erf(m)   {run_vector_1(m,erf_vec,(char *)(erf),"erf","dd");   }	
