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
 one_line_type cos_vec[] = {
{63, 0,123,__LINE__, 0x3fd730de, 0x943b79d4, 0xbff33333, 0x33333333},	/* 0.362358=f(-1.2)*/
{63, 0,123,__LINE__, 0x3fd7c946, 0x7d260cba, 0xbff30a3d, 0x70a3d70a},	/* 0.37166=f(-1.19)*/
{63, 0,123,__LINE__, 0x3fd86112, 0x83b8fab3, 0xbff2e147, 0xae147ae1},	/* 0.380925=f(-1.18)*/
{63, 0,123,__LINE__, 0x3fd8f83e, 0xc5255295, 0xbff2b851, 0xeb851eb8},	/* 0.390152=f(-1.17)*/
{63, 0,123,__LINE__, 0x3fd98ec7, 0x62b332c5, 0xbff28f5c, 0x28f5c28f},	/* 0.39934=f(-1.16)*/
{63, 0,123,__LINE__, 0x3fda24a8, 0x81db25eb, 0xbff26666, 0x66666666},	/* 0.408487=f(-1.15)*/
{63, 0,123,__LINE__, 0x3fdab9de, 0x4c5f6434, 0xbff23d70, 0xa3d70a3d},	/* 0.417595=f(-1.14)*/
{63, 0,123,__LINE__, 0x3fdb4e64, 0xf064f881, 0xbff2147a, 0xe147ae14},	/* 0.42666=f(-1.13)*/
{63, 0,123,__LINE__, 0x3fdbe238, 0xa08cc8ce, 0xbff1eb85, 0x1eb851eb},	/* 0.435682=f(-1.12)*/
{63, 0,123,__LINE__, 0x3fdc7555, 0x940c813c, 0xbff1c28f, 0x5c28f5c2},	/* 0.444662=f(-1.11)*/
{63, 0,123,__LINE__, 0x3fdd07b8, 0x06c76114, 0xbff19999, 0x99999999},	/* 0.453596=f(-1.1)*/
{63, 0,123,__LINE__, 0x3fdd995c, 0x3966e923, 0xbff170a3, 0xd70a3d70},	/* 0.462485=f(-1.09)*/
{64, 0,123,__LINE__, 0x3fde2a3e, 0x71736ac6, 0xbff147ae, 0x147ae147},	/* 0.471328=f(-1.08)*/
{63, 0,123,__LINE__, 0x3fdeba5a, 0xf96c7716, 0xbff11eb8, 0x51eb851e},	/* 0.480124=f(-1.07)*/
{63, 0,123,__LINE__, 0x3fdf49ae, 0x20e12d7d, 0xbff0f5c2, 0x8f5c28f5},	/* 0.488872=f(-1.06)*/
{63, 0,123,__LINE__, 0x3fdfd834, 0x3c886926, 0xbff0cccc, 0xcccccccc},	/* 0.497571=f(-1.05)*/
{64, 0,123,__LINE__, 0x3fe032f4, 0xd32c6654, 0xbff0a3d7, 0x0a3d70a3},	/* 0.50622=f(-1.04)*/
{63, 0,123,__LINE__, 0x3fe07965, 0x5ed055a2, 0xbff07ae1, 0x47ae147a},	/* 0.514819=f(-1.03)*/
{63, 0,123,__LINE__, 0x3fe0bf69, 0xf38ee78e, 0xbff051eb, 0x851eb851},	/* 0.523366=f(-1.02)*/
{63, 0,123,__LINE__, 0x3fe10500, 0xc68a8def, 0xbff028f5, 0xc28f5c28},	/* 0.531861=f(-1.01)*/
{64, 0,123,__LINE__, 0x3fe14a28, 0x0fb5068d, 0xbfefffff, 0xfffffffe},	/* 0.540302=f(-1)*/
{64, 0,123,__LINE__, 0x3fe18ede, 0x09db07f0, 0xbfefae14, 0x7ae147ac},	/* 0.54869=f(-0.99)*/
{63, 0,123,__LINE__, 0x3fe1d320, 0xf2afdb6c, 0xbfef5c28, 0xf5c28f5a},	/* 0.557023=f(-0.98)*/
{64, 0,123,__LINE__, 0x3fe216ef, 0x0ad8e431, 0xbfef0a3d, 0x70a3d708},	/* 0.5653=f(-0.97)*/
{63, 0,123,__LINE__, 0x3fe25a46, 0x95f91312, 0xbfeeb851, 0xeb851eb6},	/* 0.57352=f(-0.96)*/
{64, 0,123,__LINE__, 0x3fe29d25, 0xdabc46a3, 0xbfee6666, 0x66666664},	/* 0.581683=f(-0.95)*/
{63, 0,123,__LINE__, 0x3fe2df8b, 0x22e29788, 0xbfee147a, 0xe147ae12},	/* 0.589788=f(-0.94)*/
{64, 0,123,__LINE__, 0x3fe32174, 0xbb4b9082, 0xbfedc28f, 0x5c28f5c0},	/* 0.597834=f(-0.93)*/
{63, 0,123,__LINE__, 0x3fe362e0, 0xf4015218, 0xbfed70a3, 0xd70a3d6e},	/* 0.60582=f(-0.92)*/
{64, 0,123,__LINE__, 0x3fe3a3ce, 0x2043a16d, 0xbfed1eb8, 0x51eb851c},	/* 0.613746=f(-0.91)*/
{63, 0,123,__LINE__, 0x3fe3e43a, 0x9692e21f, 0xbfeccccc, 0xccccccca},	/* 0.62161=f(-0.9)*/
{64, 0,123,__LINE__, 0x3fe42424, 0xb0bafac6, 0xbfec7ae1, 0x47ae1478},	/* 0.629412=f(-0.89)*/
{64, 0,123,__LINE__, 0x3fe4638a, 0xcbde23e8, 0xbfec28f5, 0xc28f5c26},	/* 0.637151=f(-0.88)*/
{64, 0,123,__LINE__, 0x3fe4a26b, 0x487fa104, 0xbfebd70a, 0x3d70a3d4},	/* 0.644827=f(-0.87)*/
{63, 0,123,__LINE__, 0x3fe4e0c4, 0x8a8e637e, 0xbfeb851e, 0xb851eb82},	/* 0.652437=f(-0.86)*/
{64, 0,123,__LINE__, 0x3fe51e94, 0xf96f971d, 0xbfeb3333, 0x33333330},	/* 0.659983=f(-0.85)*/
{64, 0,123,__LINE__, 0x3fe55bdb, 0x000917dd, 0xbfeae147, 0xae147ade},	/* 0.667463=f(-0.84)*/
{64, 0,123,__LINE__, 0x3fe59895, 0x0ccbd0c8, 0xbfea8f5c, 0x28f5c28c},	/* 0.674876=f(-0.83)*/
{64, 0,123,__LINE__, 0x3fe5d4c1, 0x91be0397, 0xbfea3d70, 0xa3d70a3a},	/* 0.682221=f(-0.82)*/
{64, 0,123,__LINE__, 0x3fe6105f, 0x048578dc, 0xbfe9eb85, 0x1eb851e8},	/* 0.689498=f(-0.81)*/
{63, 0,123,__LINE__, 0x3fe64b6b, 0xde719868, 0xbfe99999, 0x99999996},	/* 0.696707=f(-0.8)*/
{64, 0,123,__LINE__, 0x3fe685e6, 0x9c8569b2, 0xbfe947ae, 0x147ae144},	/* 0.703845=f(-0.79)*/
{64, 0,123,__LINE__, 0x3fe6bfcd, 0xbf817bfd, 0xbfe8f5c2, 0x8f5c28f2},	/* 0.710914=f(-0.78)*/
{64, 0,123,__LINE__, 0x3fe6f91f, 0xcbedb5fa, 0xbfe8a3d7, 0x0a3d70a0},	/* 0.717911=f(-0.77)*/
{64, 0,123,__LINE__, 0x3fe731db, 0x4a230ca5, 0xbfe851eb, 0x851eb84e},	/* 0.724836=f(-0.76)*/
{63, 0,123,__LINE__, 0x3fe769fe, 0xc6552122, 0xbfe7ffff, 0xfffffffc},	/* 0.731689=f(-0.75)*/
{64, 0,123,__LINE__, 0x3fe7a188, 0xd09bc551, 0xbfe7ae14, 0x7ae147aa},	/* 0.738469=f(-0.74)*/
{64, 0,123,__LINE__, 0x3fe7d877, 0xfcfc66ef, 0xbfe75c28, 0xf5c28f58},	/* 0.745174=f(-0.73)*/
{64, 0,123,__LINE__, 0x3fe80eca, 0xe37360e8, 0xbfe70a3d, 0x70a3d706},	/* 0.751806=f(-0.72)*/
{63, 0,123,__LINE__, 0x3fe84480, 0x1ffd32b9, 0xbfe6b851, 0xeb851eb4},	/* 0.758362=f(-0.71)*/
{64, 0,123,__LINE__, 0x3fe87996, 0x529f9d95, 0xbfe66666, 0x66666662},	/* 0.764842=f(-0.7)*/
{64, 0,123,__LINE__, 0x3fe8ae0c, 0x1f72a71d, 0xbfe6147a, 0xe147ae10},	/* 0.771246=f(-0.69)*/
{64, 0,123,__LINE__, 0x3fe8e1e0, 0x2ea98160, 0xbfe5c28f, 0x5c28f5be},	/* 0.777573=f(-0.68)*/
{64, 0,123,__LINE__, 0x3fe91511, 0x2c9b57f7, 0xbfe570a3, 0xd70a3d6c},	/* 0.783822=f(-0.67)*/
{64, 0,123,__LINE__, 0x3fe9479d, 0xc9cc0203, 0xbfe51eb8, 0x51eb851a},	/* 0.789992=f(-0.66)*/
{63, 0,123,__LINE__, 0x3fe97984, 0xbaf498c5, 0xbfe4cccc, 0xccccccc8},	/* 0.796084=f(-0.65)*/
{63, 0,123,__LINE__, 0x3fe9aac4, 0xb90bf2ab, 0xbfe47ae1, 0x47ae1476},	/* 0.802096=f(-0.64)*/
{64, 0,123,__LINE__, 0x3fe9db5c, 0x814f028e, 0xbfe428f5, 0xc28f5c24},	/* 0.808028=f(-0.63)*/
{64, 0,123,__LINE__, 0x3fea0b4a, 0xd5491aef, 0xbfe3d70a, 0x3d70a3d2},	/* 0.813878=f(-0.62)*/
{64, 0,123,__LINE__, 0x3fea3a8e, 0x7adc14f9, 0xbfe3851e, 0xb851eb80},	/* 0.819648=f(-0.61)*/
{63, 0,123,__LINE__, 0x3fea6926, 0x3c485b18, 0xbfe33333, 0x3333332e},	/* 0.825336=f(-0.6)*/
{64, 0,123,__LINE__, 0x3fea9710, 0xe834d6e9, 0xbfe2e147, 0xae147adc},	/* 0.830941=f(-0.59)*/
{64, 0,123,__LINE__, 0x3feac44d, 0x51b6c25e, 0xbfe28f5c, 0x28f5c28a},	/* 0.836463=f(-0.58)*/
{64, 0,123,__LINE__, 0x3feaf0da, 0x50595bc8, 0xbfe23d70, 0xa3d70a38},	/* 0.841901=f(-0.57)*/
{64, 0,123,__LINE__, 0x3feb1cb6, 0xc0257cb5, 0xbfe1eb85, 0x1eb851e6},	/* 0.847255=f(-0.56)*/
{64, 0,123,__LINE__, 0x3feb47e1, 0x81a91353, 0xbfe19999, 0x99999994},	/* 0.852525=f(-0.55)*/
{63, 0,123,__LINE__, 0x3feb7259, 0x79fe7e3f, 0xbfe147ae, 0x147ae142},	/* 0.857709=f(-0.54)*/
{63, 0,123,__LINE__, 0x3feb9c1d, 0x92d3ca79, 0xbfe0f5c2, 0x8f5c28f0},	/* 0.862807=f(-0.53)*/
{64, 0,123,__LINE__, 0x3febc52c, 0xba71d366, 0xbfe0a3d7, 0x0a3d709e},	/* 0.867819=f(-0.52)*/
{64, 0,123,__LINE__, 0x3febed85, 0xe3c3449c, 0xbfe051eb, 0x851eb84c},	/* 0.872745=f(-0.51)*/
{64, 0,123,__LINE__, 0x3fec1528, 0x065b7d52, 0xbfdfffff, 0xfffffff4},	/* 0.877583=f(-0.5)*/
{64, 0,123,__LINE__, 0x3fec3c12, 0x1e7d5552, 0xbfdf5c28, 0xf5c28f50},	/* 0.882333=f(-0.49)*/
{64, 0,123,__LINE__, 0x3fec6243, 0x2d21c327, 0xbfdeb851, 0xeb851eac},	/* 0.886995=f(-0.48)*/
{63, 0,123,__LINE__, 0x3fec87ba, 0x37fe6378, 0xbfde147a, 0xe147ae08},	/* 0.891568=f(-0.47)*/
{64, 0,123,__LINE__, 0x3fecac76, 0x498be14e, 0xbfdd70a3, 0xd70a3d64},	/* 0.896052=f(-0.46)*/
{64, 0,123,__LINE__, 0x3fecd076, 0x710c3f30, 0xbfdccccc, 0xccccccc0},	/* 0.900447=f(-0.45)*/
{64, 0,123,__LINE__, 0x3fecf3b9, 0xc29100d2, 0xbfdc28f5, 0xc28f5c1c},	/* 0.904752=f(-0.44)*/
{64, 0,123,__LINE__, 0x3fed163f, 0x5701354b, 0xbfdb851e, 0xb851eb78},	/* 0.908966=f(-0.43)*/
{64, 0,123,__LINE__, 0x3fed3806, 0x4c1f6194, 0xbfdae147, 0xae147ad4},	/* 0.913089=f(-0.42)*/
{63, 0,123,__LINE__, 0x3fed590d, 0xc48f4b36, 0xbfda3d70, 0xa3d70a30},	/* 0.917121=f(-0.41)*/
{64, 0,123,__LINE__, 0x3fed7954, 0xe7dba2fa, 0xbfd99999, 0x9999998c},	/* 0.921061=f(-0.4)*/
{64, 0,123,__LINE__, 0x3fed98da, 0xe27b8f80, 0xbfd8f5c2, 0x8f5c28e8},	/* 0.924909=f(-0.39)*/
{63, 0,123,__LINE__, 0x3fedb79e, 0xe5d81785, 0xbfd851eb, 0x851eb844},	/* 0.928665=f(-0.38)*/
{63, 0,123,__LINE__, 0x3fedd5a0, 0x28516bcb, 0xbfd7ae14, 0x7ae147a0},	/* 0.932327=f(-0.37)*/
{63, 0,123,__LINE__, 0x3fedf2dd, 0xe5441077, 0xbfd70a3d, 0x70a3d6fc},	/* 0.935897=f(-0.36)*/
{64, 0,123,__LINE__, 0x3fee0f57, 0x5d0de5ba, 0xbfd66666, 0x66666658},	/* 0.939373=f(-0.35)*/
{64, 0,123,__LINE__, 0x3fee2b0b, 0xd5130fb4, 0xbfd5c28f, 0x5c28f5b4},	/* 0.942755=f(-0.34)*/
{63, 0,123,__LINE__, 0x3fee45fa, 0x97c2bd67, 0xbfd51eb8, 0x51eb8510},	/* 0.946042=f(-0.33)*/
{64, 0,123,__LINE__, 0x3fee6022, 0xf49bce9e, 0xbfd47ae1, 0x47ae146c},	/* 0.949235=f(-0.32)*/
{64, 0,123,__LINE__, 0x3fee7984, 0x403158a4, 0xbfd3d70a, 0x3d70a3c8},	/* 0.952334=f(-0.31)*/
{63, 0,123,__LINE__, 0x3fee921d, 0xd42f09bd, 0xbfd33333, 0x33333324},	/* 0.955336=f(-0.3)*/
{64, 0,123,__LINE__, 0x3feea9ef, 0x0f5d6b28, 0xbfd28f5c, 0x28f5c280},	/* 0.958244=f(-0.29)*/
{64, 0,123,__LINE__, 0x3feec0f7, 0x55a601b4, 0xbfd1eb85, 0x1eb851dc},	/* 0.961055=f(-0.28)*/
{63, 0,123,__LINE__, 0x3feed736, 0x10174ca5, 0xbfd147ae, 0x147ae138},	/* 0.963771=f(-0.27)*/
{63, 0,123,__LINE__, 0x3feeecaa, 0xace8a2f1, 0xbfd0a3d7, 0x0a3d7094},	/* 0.96639=f(-0.26)*/
{64, 0,123,__LINE__, 0x3fef0154, 0x9f7deea3, 0xbfcfffff, 0xffffffe0},	/* 0.968912=f(-0.25)*/
{64, 0,123,__LINE__, 0x3fef1533, 0x606b465b, 0xbfceb851, 0xeb851e98},	/* 0.971338=f(-0.24)*/
{64, 0,123,__LINE__, 0x3fef2846, 0x6d7864ca, 0xbfcd70a3, 0xd70a3d50},	/* 0.973666=f(-0.23)*/
{63, 0,123,__LINE__, 0x3fef3a8d, 0x49a3fe1b, 0xbfcc28f5, 0xc28f5c08},	/* 0.975897=f(-0.22)*/
{63, 0,123,__LINE__, 0x3fef4c07, 0x7d26f329, 0xbfcae147, 0xae147ac0},	/* 0.978031=f(-0.21)*/
{64, 0,123,__LINE__, 0x3fef5cb4, 0x9577627c, 0xbfc99999, 0x99999978},	/* 0.980067=f(-0.2)*/
{63, 0,123,__LINE__, 0x3fef6c94, 0x254b96e9, 0xbfc851eb, 0x851eb830},	/* 0.982004=f(-0.19)*/
{64, 0,123,__LINE__, 0x3fef7ba5, 0xc49cd3ca, 0xbfc70a3d, 0x70a3d6e8},	/* 0.983844=f(-0.18)*/
{63, 0,123,__LINE__, 0x3fef89e9, 0x10a9febf, 0xbfc5c28f, 0x5c28f5a0},	/* 0.985585=f(-0.17)*/
{63, 0,123,__LINE__, 0x3fef975d, 0xabfa26db, 0xbfc47ae1, 0x47ae1458},	/* 0.987227=f(-0.16)*/
{63, 0,123,__LINE__, 0x3fefa403, 0x3e5ee939, 0xbfc33333, 0x33333310},	/* 0.988771=f(-0.15)*/
{63, 0,123,__LINE__, 0x3fefafd9, 0x74f6b2e4, 0xbfc1eb85, 0x1eb851c8},	/* 0.990216=f(-0.14)*/
{63, 0,123,__LINE__, 0x3fefbae0, 0x022edfff, 0xbfc0a3d7, 0x0a3d7080},	/* 0.991562=f(-0.13)*/
{64, 0,123,__LINE__, 0x3fefc516, 0x9dc5b826, 0xbfbeb851, 0xeb851e71},	/* 0.992809=f(-0.12)*/
{64, 0,123,__LINE__, 0x3fefce7d, 0x04cc47f9, 0xbfbc28f5, 0xc28f5be2},	/* 0.993956=f(-0.11)*/
{63, 0,123,__LINE__, 0x3fefd712, 0xf9a817c1, 0xbfb99999, 0x99999953},	/* 0.995004=f(-0.1)*/
{64, 0,123,__LINE__, 0x3fefded8, 0x4414bf2a, 0xbfb70a3d, 0x70a3d6c4},	/* 0.995953=f(-0.09)*/
{63, 0,123,__LINE__, 0x3fefe5cc, 0xb12555ff, 0xbfb47ae1, 0x47ae1435},	/* 0.996802=f(-0.08)*/
{63, 0,123,__LINE__, 0x3fefebf0, 0x1345c1f0, 0xbfb1eb85, 0x1eb851a6},	/* 0.997551=f(-0.07)*/
{63, 0,123,__LINE__, 0x3feff142, 0x423be13b, 0xbfaeb851, 0xeb851e2d},	/* 0.998201=f(-0.06)*/
{64, 0,123,__LINE__, 0x3feff5c3, 0x1b289258, 0xbfa99999, 0x9999990e},	/* 0.99875=f(-0.05)*/
{63, 0,123,__LINE__, 0x3feff972, 0x80889879, 0xbfa47ae1, 0x47ae13ef},	/* 0.9992=f(-0.04)*/
{63, 0,123,__LINE__, 0x3feffc50, 0x5a355cf6, 0xbf9eb851, 0xeb851da0},	/* 0.99955=f(-0.03)*/
{64, 0,123,__LINE__, 0x3feffe5c, 0x95658d96, 0xbf947ae1, 0x47ae1362},	/* 0.9998=f(-0.02)*/
{64, 0,123,__LINE__, 0x3fefff97, 0x24ad97aa, 0xbf847ae1, 0x47ae1249},	/* 0.99995=f(-0.01)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3cd19000, 0x00000000},	/* 1=f(9.74915e-16)*/
{64, 0,123,__LINE__, 0x3fefff97, 0x24ad97aa, 0x3f847ae1, 0x47ae16ad},	/* 0.99995=f(0.01)*/
{63, 0,123,__LINE__, 0x3feffe5c, 0x95658d96, 0x3f947ae1, 0x47ae1594},	/* 0.9998=f(0.02)*/
{63, 0,123,__LINE__, 0x3feffc50, 0x5a355cf5, 0x3f9eb851, 0xeb851fd2},	/* 0.99955=f(0.03)*/
{64, 0,123,__LINE__, 0x3feff972, 0x80889878, 0x3fa47ae1, 0x47ae1508},	/* 0.9992=f(0.04)*/
{64, 0,123,__LINE__, 0x3feff5c3, 0x1b289257, 0x3fa99999, 0x99999a27},	/* 0.99875=f(0.05)*/
{64, 0,123,__LINE__, 0x3feff142, 0x423be13a, 0x3faeb851, 0xeb851f46},	/* 0.998201=f(0.06)*/
{63, 0,123,__LINE__, 0x3fefebf0, 0x1345c1ee, 0x3fb1eb85, 0x1eb85232},	/* 0.997551=f(0.07)*/
{64, 0,123,__LINE__, 0x3fefe5cc, 0xb12555fe, 0x3fb47ae1, 0x47ae14c1},	/* 0.996802=f(0.08)*/
{64, 0,123,__LINE__, 0x3fefded8, 0x4414bf28, 0x3fb70a3d, 0x70a3d750},	/* 0.995953=f(0.09)*/
{63, 0,123,__LINE__, 0x3fefd712, 0xf9a817c0, 0x3fb99999, 0x999999df},	/* 0.995004=f(0.1)*/
{63, 0,123,__LINE__, 0x3fefce7d, 0x04cc47f7, 0x3fbc28f5, 0xc28f5c6e},	/* 0.993956=f(0.11)*/
{64, 0,123,__LINE__, 0x3fefc516, 0x9dc5b824, 0x3fbeb851, 0xeb851efd},	/* 0.992809=f(0.12)*/
{64, 0,123,__LINE__, 0x3fefbae0, 0x022edffc, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.991562=f(0.13)*/
{63, 0,123,__LINE__, 0x3fefafd9, 0x74f6b2e1, 0x3fc1eb85, 0x1eb8520e},	/* 0.990216=f(0.14)*/
{64, 0,123,__LINE__, 0x3fefa403, 0x3e5ee936, 0x3fc33333, 0x33333356},	/* 0.988771=f(0.15)*/
{63, 0,123,__LINE__, 0x3fef975d, 0xabfa26d8, 0x3fc47ae1, 0x47ae149e},	/* 0.987227=f(0.16)*/
{64, 0,123,__LINE__, 0x3fef89e9, 0x10a9febc, 0x3fc5c28f, 0x5c28f5e6},	/* 0.985585=f(0.17)*/
{64, 0,123,__LINE__, 0x3fef7ba5, 0xc49cd3c7, 0x3fc70a3d, 0x70a3d72e},	/* 0.983844=f(0.18)*/
{64, 0,123,__LINE__, 0x3fef6c94, 0x254b96e5, 0x3fc851eb, 0x851eb876},	/* 0.982004=f(0.19)*/
{64, 0,123,__LINE__, 0x3fef5cb4, 0x95776278, 0x3fc99999, 0x999999be},	/* 0.980067=f(0.2)*/
{63, 0,123,__LINE__, 0x3fef4c07, 0x7d26f325, 0x3fcae147, 0xae147b06},	/* 0.978031=f(0.21)*/
{63, 0,123,__LINE__, 0x3fef3a8d, 0x49a3fe17, 0x3fcc28f5, 0xc28f5c4e},	/* 0.975897=f(0.22)*/
{64, 0,123,__LINE__, 0x3fef2846, 0x6d7864c6, 0x3fcd70a3, 0xd70a3d96},	/* 0.973666=f(0.23)*/
{63, 0,123,__LINE__, 0x3fef1533, 0x606b4657, 0x3fceb851, 0xeb851ede},	/* 0.971338=f(0.24)*/
{63, 0,123,__LINE__, 0x3fef0154, 0x9f7dee9f, 0x3fd00000, 0x00000013},	/* 0.968912=f(0.25)*/
{63, 0,123,__LINE__, 0x3feeecaa, 0xace8a2ed, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.96639=f(0.26)*/
{64, 0,123,__LINE__, 0x3feed736, 0x10174ca0, 0x3fd147ae, 0x147ae15b},	/* 0.963771=f(0.27)*/
{63, 0,123,__LINE__, 0x3feec0f7, 0x55a601af, 0x3fd1eb85, 0x1eb851ff},	/* 0.961055=f(0.28)*/
{63, 0,123,__LINE__, 0x3feea9ef, 0x0f5d6b23, 0x3fd28f5c, 0x28f5c2a3},	/* 0.958244=f(0.29)*/
{64, 0,123,__LINE__, 0x3fee921d, 0xd42f09b7, 0x3fd33333, 0x33333347},	/* 0.955336=f(0.3)*/
{63, 0,123,__LINE__, 0x3fee7984, 0x4031589f, 0x3fd3d70a, 0x3d70a3eb},	/* 0.952334=f(0.31)*/
{64, 0,123,__LINE__, 0x3fee6022, 0xf49bce98, 0x3fd47ae1, 0x47ae148f},	/* 0.949235=f(0.32)*/
{64, 0,123,__LINE__, 0x3fee45fa, 0x97c2bd61, 0x3fd51eb8, 0x51eb8533},	/* 0.946042=f(0.33)*/
{64, 0,123,__LINE__, 0x3fee2b0b, 0xd5130fae, 0x3fd5c28f, 0x5c28f5d7},	/* 0.942755=f(0.34)*/
{64, 0,123,__LINE__, 0x3fee0f57, 0x5d0de5b4, 0x3fd66666, 0x6666667b},	/* 0.939373=f(0.35)*/
{63, 0,123,__LINE__, 0x3fedf2dd, 0xe5441071, 0x3fd70a3d, 0x70a3d71f},	/* 0.935897=f(0.36)*/
{63, 0,123,__LINE__, 0x3fedd5a0, 0x28516bc5, 0x3fd7ae14, 0x7ae147c3},	/* 0.932327=f(0.37)*/
{64, 0,123,__LINE__, 0x3fedb79e, 0xe5d8177e, 0x3fd851eb, 0x851eb867},	/* 0.928665=f(0.38)*/
{63, 0,123,__LINE__, 0x3fed98da, 0xe27b8f7a, 0x3fd8f5c2, 0x8f5c290b},	/* 0.924909=f(0.39)*/
{63, 0,123,__LINE__, 0x3fed7954, 0xe7dba2f4, 0x3fd99999, 0x999999af},	/* 0.921061=f(0.4)*/
{63, 0,123,__LINE__, 0x3fed590d, 0xc48f4b2f, 0x3fda3d70, 0xa3d70a53},	/* 0.917121=f(0.41)*/
{63, 0,123,__LINE__, 0x3fed3806, 0x4c1f618d, 0x3fdae147, 0xae147af7},	/* 0.913089=f(0.42)*/
{64, 0,123,__LINE__, 0x3fed163f, 0x57013544, 0x3fdb851e, 0xb851eb9b},	/* 0.908966=f(0.43)*/
{63, 0,123,__LINE__, 0x3fecf3b9, 0xc29100cb, 0x3fdc28f5, 0xc28f5c3f},	/* 0.904752=f(0.44)*/
{64, 0,123,__LINE__, 0x3fecd076, 0x710c3f28, 0x3fdccccc, 0xcccccce3},	/* 0.900447=f(0.45)*/
{63, 0,123,__LINE__, 0x3fecac76, 0x498be147, 0x3fdd70a3, 0xd70a3d87},	/* 0.896052=f(0.46)*/
{64, 0,123,__LINE__, 0x3fec87ba, 0x37fe6370, 0x3fde147a, 0xe147ae2b},	/* 0.891568=f(0.47)*/
{63, 0,123,__LINE__, 0x3fec6243, 0x2d21c31f, 0x3fdeb851, 0xeb851ecf},	/* 0.886995=f(0.48)*/
{64, 0,123,__LINE__, 0x3fec3c12, 0x1e7d554a, 0x3fdf5c28, 0xf5c28f73},	/* 0.882333=f(0.49)*/
{64, 0,123,__LINE__, 0x3fec1528, 0x065b7d4a, 0x3fe00000, 0x0000000b},	/* 0.877583=f(0.5)*/
{63, 0,123,__LINE__, 0x3febed85, 0xe3c34493, 0x3fe051eb, 0x851eb85d},	/* 0.872745=f(0.51)*/
{62, 0,123,__LINE__, 0x3febc52c, 0xba71d35e, 0x3fe0a3d7, 0x0a3d70af},	/* 0.867819=f(0.52)*/
{64, 0,123,__LINE__, 0x3feb9c1d, 0x92d3ca70, 0x3fe0f5c2, 0x8f5c2901},	/* 0.862807=f(0.53)*/
{63, 0,123,__LINE__, 0x3feb7259, 0x79fe7e36, 0x3fe147ae, 0x147ae153},	/* 0.857709=f(0.54)*/
{64, 0,123,__LINE__, 0x3feb47e1, 0x81a9134b, 0x3fe19999, 0x999999a5},	/* 0.852525=f(0.55)*/
{63, 0,123,__LINE__, 0x3feb1cb6, 0xc0257cac, 0x3fe1eb85, 0x1eb851f7},	/* 0.847255=f(0.56)*/
{63, 0,123,__LINE__, 0x3feaf0da, 0x50595bbf, 0x3fe23d70, 0xa3d70a49},	/* 0.841901=f(0.57)*/
{63, 0,123,__LINE__, 0x3feac44d, 0x51b6c255, 0x3fe28f5c, 0x28f5c29b},	/* 0.836463=f(0.58)*/
{64, 0,123,__LINE__, 0x3fea9710, 0xe834d6e0, 0x3fe2e147, 0xae147aed},	/* 0.830941=f(0.59)*/
{63, 0,123,__LINE__, 0x3fea6926, 0x3c485b0e, 0x3fe33333, 0x3333333f},	/* 0.825336=f(0.6)*/
{64, 0,123,__LINE__, 0x3fea3a8e, 0x7adc14f0, 0x3fe3851e, 0xb851eb91},	/* 0.819648=f(0.61)*/
{63, 0,123,__LINE__, 0x3fea0b4a, 0xd5491ae5, 0x3fe3d70a, 0x3d70a3e3},	/* 0.813878=f(0.62)*/
{64, 0,123,__LINE__, 0x3fe9db5c, 0x814f0284, 0x3fe428f5, 0xc28f5c35},	/* 0.808028=f(0.63)*/
{64, 0,123,__LINE__, 0x3fe9aac4, 0xb90bf2a0, 0x3fe47ae1, 0x47ae1487},	/* 0.802096=f(0.64)*/
{64, 0,123,__LINE__, 0x3fe97984, 0xbaf498ba, 0x3fe4cccc, 0xccccccd9},	/* 0.796084=f(0.65)*/
{63, 0,123,__LINE__, 0x3fe9479d, 0xc9cc01f9, 0x3fe51eb8, 0x51eb852b},	/* 0.789992=f(0.66)*/
{64, 0,123,__LINE__, 0x3fe91511, 0x2c9b57ed, 0x3fe570a3, 0xd70a3d7d},	/* 0.783822=f(0.67)*/
{63, 0,123,__LINE__, 0x3fe8e1e0, 0x2ea98155, 0x3fe5c28f, 0x5c28f5cf},	/* 0.777573=f(0.68)*/
{64, 0,123,__LINE__, 0x3fe8ae0c, 0x1f72a713, 0x3fe6147a, 0xe147ae21},	/* 0.771246=f(0.69)*/
{63, 0,123,__LINE__, 0x3fe87996, 0x529f9d8a, 0x3fe66666, 0x66666673},	/* 0.764842=f(0.7)*/
{63, 0,123,__LINE__, 0x3fe84480, 0x1ffd32ad, 0x3fe6b851, 0xeb851ec5},	/* 0.758362=f(0.71)*/
{63, 0,123,__LINE__, 0x3fe80eca, 0xe37360dd, 0x3fe70a3d, 0x70a3d717},	/* 0.751806=f(0.72)*/
{64, 0,123,__LINE__, 0x3fe7d877, 0xfcfc66e4, 0x3fe75c28, 0xf5c28f69},	/* 0.745174=f(0.73)*/
{63, 0,123,__LINE__, 0x3fe7a188, 0xd09bc546, 0x3fe7ae14, 0x7ae147bb},	/* 0.738469=f(0.74)*/
{64, 0,123,__LINE__, 0x3fe769fe, 0xc6552116, 0x3fe80000, 0x0000000d},	/* 0.731689=f(0.75)*/
{63, 0,123,__LINE__, 0x3fe731db, 0x4a230c9a, 0x3fe851eb, 0x851eb85f},	/* 0.724836=f(0.76)*/
{63, 0,123,__LINE__, 0x3fe6f91f, 0xcbedb5ee, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.717911=f(0.77)*/
{63, 0,123,__LINE__, 0x3fe6bfcd, 0xbf817bf1, 0x3fe8f5c2, 0x8f5c2903},	/* 0.710914=f(0.78)*/
{64, 0,123,__LINE__, 0x3fe685e6, 0x9c8569a6, 0x3fe947ae, 0x147ae155},	/* 0.703845=f(0.79)*/
{62, 0,123,__LINE__, 0x3fe64b6b, 0xde71985c, 0x3fe99999, 0x999999a7},	/* 0.696707=f(0.8)*/
{64, 0,123,__LINE__, 0x3fe6105f, 0x048578d0, 0x3fe9eb85, 0x1eb851f9},	/* 0.689498=f(0.81)*/
{63, 0,123,__LINE__, 0x3fe5d4c1, 0x91be038b, 0x3fea3d70, 0xa3d70a4b},	/* 0.682221=f(0.82)*/
{64, 0,123,__LINE__, 0x3fe59895, 0x0ccbd0bc, 0x3fea8f5c, 0x28f5c29d},	/* 0.674876=f(0.83)*/
{63, 0,123,__LINE__, 0x3fe55bdb, 0x000917d1, 0x3feae147, 0xae147aef},	/* 0.667463=f(0.84)*/
{63, 0,123,__LINE__, 0x3fe51e94, 0xf96f9710, 0x3feb3333, 0x33333341},	/* 0.659983=f(0.85)*/
{63, 0,123,__LINE__, 0x3fe4e0c4, 0x8a8e6371, 0x3feb851e, 0xb851eb93},	/* 0.652437=f(0.86)*/
{63, 0,123,__LINE__, 0x3fe4a26b, 0x487fa0f7, 0x3febd70a, 0x3d70a3e5},	/* 0.644827=f(0.87)*/
{63, 0,123,__LINE__, 0x3fe4638a, 0xcbde23db, 0x3fec28f5, 0xc28f5c37},	/* 0.637151=f(0.88)*/
{64, 0,123,__LINE__, 0x3fe42424, 0xb0bafab9, 0x3fec7ae1, 0x47ae1489},	/* 0.629412=f(0.89)*/
{63, 0,123,__LINE__, 0x3fe3e43a, 0x9692e211, 0x3feccccc, 0xccccccdb},	/* 0.62161=f(0.9)*/
{64, 0,123,__LINE__, 0x3fe3a3ce, 0x2043a160, 0x3fed1eb8, 0x51eb852d},	/* 0.613746=f(0.91)*/
{63, 0,123,__LINE__, 0x3fe362e0, 0xf401520a, 0x3fed70a3, 0xd70a3d7f},	/* 0.60582=f(0.92)*/
{64, 0,123,__LINE__, 0x3fe32174, 0xbb4b9075, 0x3fedc28f, 0x5c28f5d1},	/* 0.597834=f(0.93)*/
{62, 0,123,__LINE__, 0x3fe2df8b, 0x22e2977a, 0x3fee147a, 0xe147ae23},	/* 0.589788=f(0.94)*/
{63, 0,123,__LINE__, 0x3fe29d25, 0xdabc4695, 0x3fee6666, 0x66666675},	/* 0.581683=f(0.95)*/
{62, 0,123,__LINE__, 0x3fe25a46, 0x95f91304, 0x3feeb851, 0xeb851ec7},	/* 0.57352=f(0.96)*/
{63, 0,123,__LINE__, 0x3fe216ef, 0x0ad8e423, 0x3fef0a3d, 0x70a3d719},	/* 0.5653=f(0.97)*/
{62, 0,123,__LINE__, 0x3fe1d320, 0xf2afdb5e, 0x3fef5c28, 0xf5c28f6b},	/* 0.557023=f(0.98)*/
{64, 0,123,__LINE__, 0x3fe18ede, 0x09db07e2, 0x3fefae14, 0x7ae147bd},	/* 0.54869=f(0.99)*/
{62, 0,123,__LINE__, 0x3fe14a28, 0x0fb50680, 0x3ff00000, 0x00000007},	/* 0.540302=f(1)*/
{64, 0,123,__LINE__, 0x3fe10500, 0xc68a8de1, 0x3ff028f5, 0xc28f5c30},	/* 0.531861=f(1.01)*/
{62, 0,123,__LINE__, 0x3fe0bf69, 0xf38ee780, 0x3ff051eb, 0x851eb859},	/* 0.523366=f(1.02)*/
{63, 0,123,__LINE__, 0x3fe07965, 0x5ed05594, 0x3ff07ae1, 0x47ae1482},	/* 0.514819=f(1.03)*/
{62, 0,123,__LINE__, 0x3fe032f4, 0xd32c6647, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.50622=f(1.04)*/
{63, 0,123,__LINE__, 0x3fdfd834, 0x3c88690b, 0x3ff0cccc, 0xccccccd4},	/* 0.497571=f(1.05)*/
{62, 0,123,__LINE__, 0x3fdf49ae, 0x20e12d61, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.488872=f(1.06)*/
{63, 0,123,__LINE__, 0x3fdeba5a, 0xf96c76fa, 0x3ff11eb8, 0x51eb8526},	/* 0.480124=f(1.07)*/
{61, 0,123,__LINE__, 0x3fde2a3e, 0x71736aaa, 0x3ff147ae, 0x147ae14f},	/* 0.471328=f(1.08)*/
{63, 0,123,__LINE__, 0x3fdd995c, 0x3966e907, 0x3ff170a3, 0xd70a3d78},	/* 0.462485=f(1.09)*/
{62, 0,123,__LINE__, 0x3fdd07b8, 0x06c760f8, 0x3ff19999, 0x999999a1},	/* 0.453596=f(1.1)*/
{63, 0,123,__LINE__, 0x3fdc7555, 0x940c811f, 0x3ff1c28f, 0x5c28f5ca},	/* 0.444662=f(1.11)*/
{61, 0,123,__LINE__, 0x3fdbe238, 0xa08cc8b1, 0x3ff1eb85, 0x1eb851f3},	/* 0.435682=f(1.12)*/
{63, 0,123,__LINE__, 0x3fdb4e64, 0xf064f864, 0x3ff2147a, 0xe147ae1c},	/* 0.42666=f(1.13)*/
{62, 0,123,__LINE__, 0x3fdab9de, 0x4c5f6417, 0x3ff23d70, 0xa3d70a45},	/* 0.417595=f(1.14)*/
{63, 0,123,__LINE__, 0x3fda24a8, 0x81db25ce, 0x3ff26666, 0x6666666e},	/* 0.408487=f(1.15)*/
{61, 0,123,__LINE__, 0x3fd98ec7, 0x62b332a8, 0x3ff28f5c, 0x28f5c297},	/* 0.39934=f(1.16)*/
{63, 0,123,__LINE__, 0x3fd8f83e, 0xc5255278, 0x3ff2b851, 0xeb851ec0},	/* 0.390152=f(1.17)*/
{62, 0,123,__LINE__, 0x3fd86112, 0x83b8fa95, 0x3ff2e147, 0xae147ae9},	/* 0.380925=f(1.18)*/
{63, 0,123,__LINE__, 0x3fd7c946, 0x7d260c9c, 0x3ff30a3d, 0x70a3d712},	/* 0.37166=f(1.19)*/
{63, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0xc01921fb, 0x54442d18},	/* 1=f(-6.28319)*/
{64, 0,123,__LINE__, 0xbcaa7939, 0x4c9e8a0a, 0xc012d97c, 0x7f3321d2},	/* -1.83697e-16=f(-4.71239)*/
{63, 0,123,__LINE__, 0xbff00000, 0x00000000, 0xc00921fb, 0x54442d18},	/* -1=f(-3.14159)*/
{64, 0,123,__LINE__, 0x3c91a626, 0x33145c07, 0xbff921fb, 0x54442d18},	/* 6.12323e-17=f(-1.5708)*/
{63, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x00000000, 0x00000000},	/* 1=f(0)*/
{ 1, 0,123,__LINE__, 0x3c91a626, 0x33145c07, 0x3ff921fb, 0x54442d18},	/* 6.12323e-17=f(1.5708)*/
{63, 0,123,__LINE__, 0xbff00000, 0x00000000, 0x400921fb, 0x54442d18},	/* -1=f(3.14159)*/
{ 0, 0,123,__LINE__, 0xbcaa7939, 0x4c9e8a0a, 0x4012d97c, 0x7f3321d2},	/* -1.83697e-16=f(4.71239)*/
{59, 0,123,__LINE__, 0x3fc3be82, 0xf2505a52, 0xc03e0000, 0x00000000},	/* 0.154251=f(-30)*/
{63, 0,123,__LINE__, 0xbfeffd4d, 0x49f56350, 0xc03c4ccc, 0xcccccccd},	/* -0.999671=f(-28.3)*/
{58, 0,123,__LINE__, 0x3fba7552, 0x052a7a62, 0xc03a9999, 0x9999999a},	/* 0.103353=f(-26.6)*/
{61, 0,123,__LINE__, 0x3fef2320, 0x2a931b4b, 0xc038e666, 0x66666667},	/* 0.973038=f(-24.9)*/
{60, 0,123,__LINE__, 0xbfd6a979, 0x0396a6c2, 0xc0373333, 0x33333334},	/* -0.354094=f(-23.2)*/
{60, 0,123,__LINE__, 0xbfec37a3, 0x48f58bfa, 0xc0358000, 0x00000001},	/* -0.881792=f(-21.5)*/
{60, 0,123,__LINE__, 0x3fe29a30, 0x334638fa, 0xc033cccc, 0xccccccce},	/* 0.581322=f(-19.8)*/
{60, 0,123,__LINE__, 0x3fe76c79, 0x6f014385, 0xc0321999, 0x9999999b},	/* 0.731991=f(-18.1)*/
{61, 0,123,__LINE__, 0xbfe8a369, 0xe7c4cd6e, 0xc0306666, 0x66666668},	/* -0.769948=f(-16.4)*/
{61, 0,123,__LINE__, 0xbfe1131f, 0x9041cee9, 0xc02d6666, 0x6666666a},	/* -0.533584=f(-14.7)*/
{62, 0,123,__LINE__, 0x3fed09cd, 0xd5260c9c, 0xc02a0000, 0x00000004},	/* 0.907447=f(-13)*/
{61, 0,123,__LINE__, 0x3fd32f07, 0x17a032d1, 0xc0269999, 0x9999999e},	/* 0.299745=f(-11.3)*/
{63, 0,123,__LINE__, 0xbfef8290, 0x1b2ceea8, 0xc0233333, 0x33333338},	/* -0.984688=f(-9.6)*/
{58, 0,123,__LINE__, 0xbfa78d97, 0x32562f2a, 0xc01f9999, 0x999999a3},	/* -0.0460021=f(-7.9)*/
{64, 0,123,__LINE__, 0x3fefe3ac, 0x4079a9d4, 0xc018cccc, 0xccccccd6},	/* 0.996542=f(-6.2)*/
{61, 0,123,__LINE__, 0xbfcafb5b, 0x54583c51, 0xc0120000, 0x00000009},	/* -0.210796=f(-4.5)*/
{64, 0,123,__LINE__, 0xbfee26af, 0x77577062, 0xc0066666, 0x66666678},	/* -0.942222=f(-2.8)*/
{63, 0,123,__LINE__, 0x3fdd07b8, 0x06c76094, 0xbff19999, 0x999999bd},	/* 0.453596=f(-1.1)*/
{64, 0,123,__LINE__, 0x3fea6926, 0x3c485b3d, 0x3fe33333, 0x333332ec},	/* 0.825336=f(0.6)*/
{64, 0,123,__LINE__, 0xbfe55222, 0x17302fab, 0x40026666, 0x66666654},	/* -0.666276=f(2.3)*/
{63, 0,123,__LINE__, 0xbfe4eaa6, 0x06db24f7, 0x400fffff, 0xffffffee},	/* -0.653644=f(4)*/
{63, 0,123,__LINE__, 0x3feab5f7, 0x960dfe02, 0x4016cccc, 0xccccccc4},	/* 0.834713=f(5.7)*/
{59, 0,123,__LINE__, 0x3fdc1128, 0xcf6b88fe, 0x401d9999, 0x99999991},	/* 0.438547=f(7.4)*/
{63, 0,123,__LINE__, 0xbfee53bc, 0x40dbb4f6, 0x40223333, 0x3333332f},	/* -0.947722=f(9.1)*/
{60, 0,123,__LINE__, 0xbfc8dfcd, 0x686e22e3, 0x40259999, 0x99999995},	/* -0.19433=f(10.8)*/
{64, 0,123,__LINE__, 0x3fefedf6, 0xa822776f, 0x4028ffff, 0xfffffffb},	/* 0.997798=f(12.5)*/
{58, 0,123,__LINE__, 0xbfb0131e, 0x4c6b1b62, 0x402c6666, 0x66666661},	/* -0.0627917=f(14.2)*/
{63, 0,123,__LINE__, 0xbfef6969, 0x31df045f, 0x402fcccc, 0xccccccc7},	/* -0.981618=f(15.9)*/
{59, 0,123,__LINE__, 0x3fd43525, 0x4b52d690, 0x40319999, 0x99999997},	/* 0.315744=f(17.6)*/
{60, 0,123,__LINE__, 0x3feccee1, 0x2c079aa4, 0x40334ccc, 0xccccccca},	/* 0.900254=f(19.3)*/
{61, 0,123,__LINE__, 0xbfe186ff, 0x83773709, 0x4034ffff, 0xfffffffd},	/* -0.547729=f(21)*/
{59, 0,123,__LINE__, 0xbfe84aa1, 0x2be3c301, 0x4036b333, 0x33333330},	/* -0.75911=f(22.7)*/
{61, 0,123,__LINE__, 0x3fe7c978, 0x706f1beb, 0x40386666, 0x66666663},	/* 0.743344=f(24.4)*/
{59, 0,123,__LINE__, 0x3fe22970, 0xa9c75420, 0x403a1999, 0x99999996},	/* 0.567559=f(26.1)*/
{62, 0,123,__LINE__, 0xbfec7794, 0x7992f401, 0x403bcccc, 0xccccccc9},	/* -0.889597=f(27.8)*/
{58, 0,123,__LINE__, 0xbfd5a705, 0x9eaeac43, 0x403d7fff, 0xfffffffc},	/* -0.338319=f(29.5)*/
{0}
};
void test_cos(m)   {run_vector_1(m,cos_vec,(char *)(cos),"cos","dd");   }	
