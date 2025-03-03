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
 one_line_type j0f_vec[] = {
{39, 0,123,__LINE__, 0x3fe579eb, 0x53b98ce6, 0xbff33333, 0x33333333},	/* 0.671133=f(-1.2)*/
{38, 0,123,__LINE__, 0x3fe5a2a2, 0x3c8ce615, 0xbff30a3d, 0x70a3d70a},	/* 0.676103=f(-1.19)*/
{36, 0,123,__LINE__, 0x3fe5cb22, 0xd73103ed, 0xbff2e147, 0xae147ae1},	/* 0.681047=f(-1.18)*/
{37, 0,123,__LINE__, 0x3fe5f36c, 0x218c233e, 0xbff2b851, 0xeb851eb8},	/* 0.685965=f(-1.17)*/
{36, 0,123,__LINE__, 0x3fe61b7d, 0x797d0163, 0xbff28f5c, 0x28f5c28f},	/* 0.690856=f(-1.16)*/
{35, 0,123,__LINE__, 0x3fe64356, 0x1e2233a4, 0xbff26666, 0x66666666},	/* 0.69572=f(-1.15)*/
{38, 0,123,__LINE__, 0x3fe66af5, 0x4f97f803, 0xbff23d70, 0xa3d70a3d},	/* 0.700556=f(-1.14)*/
{37, 0,123,__LINE__, 0x3fe6925a, 0x4efc4275, 0xbff2147a, 0xe147ae14},	/* 0.705365=f(-1.13)*/
{35, 0,123,__LINE__, 0x3fe6b984, 0x5e72c4f0, 0xbff1eb85, 0x1eb851eb},	/* 0.710146=f(-1.12)*/
{37, 0,123,__LINE__, 0x3fe6e072, 0xc128f217, 0xbff1c28f, 0x5c28f5c2},	/* 0.714898=f(-1.11)*/
{36, 0,123,__LINE__, 0x3fe70724, 0xbb59fa80, 0xbff19999, 0x99999999},	/* 0.719622=f(-1.1)*/
{36, 0,123,__LINE__, 0x3fe72d99, 0x9252c478, 0xbff170a3, 0xd70a3d70},	/* 0.724316=f(-1.09)*/
{39, 0,123,__LINE__, 0x3fe753d0, 0x8c75de30, 0xbff147ae, 0x147ae147},	/* 0.728981=f(-1.08)*/
{36, 0,123,__LINE__, 0x3fe779c8, 0xf13f6a38, 0xbff11eb8, 0x51eb851e},	/* 0.733616=f(-1.07)*/
{36, 0,123,__LINE__, 0x3fe79f82, 0x26a8b93a, 0xbff0f5c2, 0x8f5c28f5},	/* 0.738221=f(-1.06)*/
{38, 0,123,__LINE__, 0x3fe7c4fb, 0x3b7b157e, 0xbff0cccc, 0xcccccccc},	/* 0.742796=f(-1.05)*/
{37, 0,123,__LINE__, 0x3fe7ea33, 0x98281eb4, 0xbff0a3d7, 0x0a3d70a3},	/* 0.747339=f(-1.04)*/
{39, 0,123,__LINE__, 0x3fe80f2a, 0x88b911f6, 0xbff07ae1, 0x47ae147a},	/* 0.751851=f(-1.03)*/
{36, 0,123,__LINE__, 0x3fe833df, 0x5a6406e2, 0xbff051eb, 0x851eb851},	/* 0.756332=f(-1.02)*/
{35, 0,123,__LINE__, 0x3fe85851, 0x5b8fb82c, 0xbff028f5, 0xc28f5c28},	/* 0.760781=f(-1.01)*/
{39, 0,123,__LINE__, 0x3fe87c7f, 0xdbd745e5, 0xbfefffff, 0xfffffffe},	/* 0.765198=f(-1)*/
{36, 0,123,__LINE__, 0x3fe8a06a, 0x2c0df166, 0xbfefae14, 0x7ae147ac},	/* 0.769582=f(-0.99)*/
{36, 0,123,__LINE__, 0x3fe8c40f, 0x9e42d2c7, 0xbfef5c28, 0xf5c28f5a},	/* 0.773933=f(-0.98)*/
{35, 0,123,__LINE__, 0x3fe8e76f, 0x85c487c9, 0xbfef0a3d, 0x70a3d708},	/* 0.778251=f(-0.97)*/
{35, 0,123,__LINE__, 0x3fe90a89, 0x44cd1983, 0xbfeeb851, 0xeb851eb6},	/* 0.782536=f(-0.96)*/
{35, 0,123,__LINE__, 0x3fe92d5c, 0x15c8d7e6, 0xbfee6666, 0x66666664},	/* 0.786787=f(-0.95)*/
{41, 0,123,__LINE__, 0x3fe94fe7, 0x5d9e9507, 0xbfee147a, 0xe147ae12},	/* 0.791004=f(-0.94)*/
{40, 0,123,__LINE__, 0x3fe9722a, 0x74bf558e, 0xbfedc28f, 0x5c28f5c0},	/* 0.795186=f(-0.93)*/
{36, 0,123,__LINE__, 0x3fe99424, 0xb4eda996, 0xbfed70a3, 0xd70a3d6e},	/* 0.799334=f(-0.92)*/
{37, 0,123,__LINE__, 0x3fe9b5d5, 0x794132a9, 0xbfed1eb8, 0x51eb851c},	/* 0.803447=f(-0.91)*/
{35, 0,123,__LINE__, 0x3fe9d73c, 0x2b27ac9d, 0xbfeccccc, 0xccccccca},	/* 0.807524=f(-0.9)*/
{36, 0,123,__LINE__, 0x3fe9f858, 0x0e54ea84, 0xbfec7ae1, 0x47ae1478},	/* 0.811565=f(-0.89)*/
{36, 0,123,__LINE__, 0x3fea1928, 0x8f0f3d7f, 0xbfec28f5, 0xc28f5c26},	/* 0.815571=f(-0.88)*/
{38, 0,123,__LINE__, 0x3fea39ad, 0x0de53a7f, 0xbfebd70a, 0x3d70a3d4},	/* 0.819541=f(-0.87)*/
{37, 0,123,__LINE__, 0x3fea59e4, 0xeccbb9fa, 0xbfeb851e, 0xb851eb82},	/* 0.823473=f(-0.86)*/
{41, 0,123,__LINE__, 0x3fea79cf, 0x8f213232, 0xbfeb3333, 0x33333330},	/* 0.827369=f(-0.85)*/
{36, 0,123,__LINE__, 0x3fea996c, 0x65fb0196, 0xbfeae147, 0xae147ade},	/* 0.831228=f(-0.84)*/
{37, 0,123,__LINE__, 0x3feab8ba, 0xbee21900, 0xbfea8f5c, 0x28f5c28c},	/* 0.83505=f(-0.83)*/
{36, 0,123,__LINE__, 0x3fead7ba, 0x0dee1872, 0xbfea3d70, 0xa3d70a3a},	/* 0.838834=f(-0.82)*/
{38, 0,123,__LINE__, 0x3feaf669, 0xbc44dc74, 0xbfe9eb85, 0x1eb851e8},	/* 0.84258=f(-0.81)*/
{37, 0,123,__LINE__, 0x3feb14c9, 0x34862fe9, 0xbfe99999, 0x99999996},	/* 0.846287=f(-0.8)*/
{35, 0,123,__LINE__, 0x3feb32d7, 0xe2cef7e4, 0xbfe947ae, 0x147ae144},	/* 0.849956=f(-0.79)*/
{34, 0,123,__LINE__, 0x3feb5095, 0x404a5546, 0xbfe8f5c2, 0x8f5c28f2},	/* 0.853587=f(-0.78)*/
{39, 0,123,__LINE__, 0x3feb6e00, 0xa4dcacbe, 0xbfe8a3d7, 0x0a3d70a0},	/* 0.857178=f(-0.77)*/
{35, 0,123,__LINE__, 0x3feb8b19, 0x8cdacb90, 0xbfe851eb, 0x851eb84e},	/* 0.86073=f(-0.76)*/
{35, 0,123,__LINE__, 0x3feba7df, 0x6a7515b8, 0xbfe7ffff, 0xfffffffc},	/* 0.864242=f(-0.75)*/
{35, 0,123,__LINE__, 0x3febc451, 0xb1686b55, 0xbfe7ae14, 0x7ae147aa},	/* 0.867715=f(-0.74)*/
{38, 0,123,__LINE__, 0x3febe06f, 0xd7012383, 0xbfe75c28, 0xf5c28f58},	/* 0.871147=f(-0.73)*/
{36, 0,123,__LINE__, 0x3febfc39, 0x521dfed1, 0xbfe70a3d, 0x70a3d706},	/* 0.874539=f(-0.72)*/
{36, 0,123,__LINE__, 0x3fec17ad, 0xa5dbc926, 0xbfe6b851, 0xeb851eb4},	/* 0.87789=f(-0.71)*/
{37, 0,123,__LINE__, 0x3fec32cc, 0x36d3c5b3, 0xbfe66666, 0x66666662},	/* 0.881201=f(-0.7)*/
{37, 0,123,__LINE__, 0x3fec4d94, 0x8b776573, 0xbfe6147a, 0xe147ae10},	/* 0.88447=f(-0.69)*/
{35, 0,123,__LINE__, 0x3fec6806, 0x210bdd92, 0xbfe5c28f, 0x5c28f5be},	/* 0.887698=f(-0.68)*/
{36, 0,123,__LINE__, 0x3fec8220, 0x767708a9, 0xbfe570a3, 0xd70a3d6c},	/* 0.890885=f(-0.67)*/
{36, 0,123,__LINE__, 0x3fec9be3, 0x0c422568, 0xbfe51eb8, 0x51eb851a},	/* 0.894029=f(-0.66)*/
{35, 0,123,__LINE__, 0x3fecb54d, 0x6e78cb56, 0xbfe4cccc, 0xccccccc8},	/* 0.897132=f(-0.65)*/
{36, 0,123,__LINE__, 0x3fecce5f, 0x0d17dbaa, 0xbfe47ae1, 0x47ae1476},	/* 0.900192=f(-0.64)*/
{36, 0,123,__LINE__, 0x3fece717, 0x77a1b0a9, 0xbfe428f5, 0xc28f5c24},	/* 0.903209=f(-0.63)*/
{36, 0,123,__LINE__, 0x3fecff76, 0x3547db23, 0xbfe3d70a, 0x3d70a3d2},	/* 0.906184=f(-0.62)*/
{35, 0,123,__LINE__, 0x3fed177a, 0xceec838e, 0xbfe3851e, 0xb851eb80},	/* 0.909116=f(-0.61)*/
{36, 0,123,__LINE__, 0x3fed2f24, 0xcf24f2bf, 0xbfe33333, 0x3333332e},	/* 0.912005=f(-0.6)*/
{36, 0,123,__LINE__, 0x3fed4673, 0xcb451173, 0xbfe2e147, 0xae147adc},	/* 0.91485=f(-0.59)*/
{37, 0,123,__LINE__, 0x3fed5d67, 0x3f1a0ac1, 0xbfe28f5c, 0x28f5c28a},	/* 0.917652=f(-0.58)*/
{36, 0,123,__LINE__, 0x3fed73fe, 0xc38e08d6, 0xbfe23d70, 0xa3d70a38},	/* 0.92041=f(-0.57)*/
{35, 0,123,__LINE__, 0x3fed8a39, 0xea1b7502, 0xbfe1eb85, 0x1eb851e6},	/* 0.923123=f(-0.56)*/
{42, 0,123,__LINE__, 0x3feda018, 0x45fbf976, 0xbfe19999, 0x99999994},	/* 0.925793=f(-0.55)*/
{35, 0,123,__LINE__, 0x3fedb599, 0x6c2ad1f0, 0xbfe147ae, 0x147ae142},	/* 0.928418=f(-0.54)*/
{40, 0,123,__LINE__, 0x3fedcabc, 0xfb969dab, 0xbfe0f5c2, 0x8f5c28f0},	/* 0.930998=f(-0.53)*/
{36, 0,123,__LINE__, 0x3feddf82, 0x7c40a38b, 0xbfe0a3d7, 0x0a3d709e},	/* 0.933534=f(-0.52)*/
{39, 0,123,__LINE__, 0x3fedf3e9, 0x90ca8a9c, 0xbfe051eb, 0x851eb84c},	/* 0.936024=f(-0.51)*/
{37, 0,123,__LINE__, 0x3fee07f1, 0xd54c3d6c, 0xbfdfffff, 0xfffffff4},	/* 0.93847=f(-0.5)*/
{35, 0,123,__LINE__, 0x3fee1b9a, 0xe7aa3bc9, 0xbfdf5c28, 0xf5c28f50},	/* 0.94087=f(-0.49)*/
{36, 0,123,__LINE__, 0x3fee2ee4, 0x6b52b152, 0xbfdeb851, 0xeb851eac},	/* 0.943224=f(-0.48)*/
{36, 0,123,__LINE__, 0x3fee41cd, 0xfa40bd61, 0xbfde147a, 0xe147ae08},	/* 0.945533=f(-0.47)*/
{36, 0,123,__LINE__, 0x3fee5457, 0x3b98b52a, 0xbfdd70a3, 0xd70a3d64},	/* 0.947796=f(-0.46)*/
{37, 0,123,__LINE__, 0x3fee667f, 0xd808678d, 0xbfdccccc, 0xccccccc0},	/* 0.950012=f(-0.45)*/
{35, 0,123,__LINE__, 0x3fee7847, 0x6f79e5ef, 0xbfdc28f5, 0xc28f5c1c},	/* 0.952183=f(-0.44)*/
{36, 0,123,__LINE__, 0x3fee89ad, 0xae5d1812, 0xbfdb851e, 0xb851eb78},	/* 0.954306=f(-0.43)*/
{36, 0,123,__LINE__, 0x3fee9ab2, 0x42b03eb8, 0xbfdae147, 0xae147ad4},	/* 0.956384=f(-0.42)*/
{36, 0,123,__LINE__, 0x3feeab54, 0xd25ea5a3, 0xbfda3d70, 0xa3d70a30},	/* 0.958414=f(-0.41)*/
{38, 0,123,__LINE__, 0x3feebb95, 0x0f33de46, 0xbfd99999, 0x9999998c},	/* 0.960398=f(-0.4)*/
{37, 0,123,__LINE__, 0x3feecb72, 0xac8e64b7, 0xbfd8f5c2, 0x8f5c28e8},	/* 0.962335=f(-0.39)*/
{35, 0,123,__LINE__, 0x3feedaed, 0x566be3d5, 0xbfd851eb, 0x851eb844},	/* 0.964224=f(-0.38)*/
{36, 0,123,__LINE__, 0x3feeea04, 0xc402a67d, 0xbfd7ae14, 0x7ae147a0},	/* 0.966067=f(-0.37)*/
{35, 0,123,__LINE__, 0x3feef8b8, 0xab4abebb, 0xbfd70a3d, 0x70a3d6fc},	/* 0.967861=f(-0.36)*/
{36, 0,123,__LINE__, 0x3fef0708, 0xc6e467bc, 0xbfd66666, 0x66666658},	/* 0.969609=f(-0.35)*/
{35, 0,123,__LINE__, 0x3fef14f4, 0xcafe778e, 0xbfd5c28f, 0x5c28f5b4},	/* 0.971308=f(-0.34)*/
{36, 0,123,__LINE__, 0x3fef227c, 0x761dd101, 0xbfd51eb8, 0x51eb8510},	/* 0.97296=f(-0.33)*/
{35, 0,123,__LINE__, 0x3fef2f9f, 0x8863b79c, 0xbfd47ae1, 0x47ae146c},	/* 0.974563=f(-0.32)*/
{37, 0,123,__LINE__, 0x3fef3c5d, 0xbc34e004, 0xbfd3d70a, 0x3d70a3c8},	/* 0.976119=f(-0.31)*/
{35, 0,123,__LINE__, 0x3fef48b6, 0xd59ffa1d, 0xbfd33333, 0x33333324},	/* 0.977626=f(-0.3)*/
{42, 0,123,__LINE__, 0x3fef54aa, 0x9a539eed, 0xbfd28f5c, 0x28f5c280},	/* 0.979085=f(-0.29)*/
{35, 0,123,__LINE__, 0x3fef6038, 0xcaf7a2e2, 0xbfd1eb85, 0x1eb851dc},	/* 0.980496=f(-0.28)*/
{36, 0,123,__LINE__, 0x3fef6b61, 0x31300fe4, 0xbfd147ae, 0x147ae138},	/* 0.981858=f(-0.27)*/
{36, 0,123,__LINE__, 0x3fef7623, 0x98441034, 0xbfd0a3d7, 0x0a3d7094},	/* 0.983171=f(-0.26)*/
{38, 0,123,__LINE__, 0x3fef807f, 0xc72aa85d, 0xbfcfffff, 0xffffffe0},	/* 0.984436=f(-0.25)*/
{37, 0,123,__LINE__, 0x3fef8a75, 0x8e1bb4de, 0xbfceb851, 0xeb851e98},	/* 0.985652=f(-0.24)*/
{34, 0,123,__LINE__, 0x3fef9404, 0xba3b25ed, 0xbfcd70a3, 0xd70a3d50},	/* 0.986819=f(-0.23)*/
{37, 0,123,__LINE__, 0x3fef9d2d, 0x1e73ef35, 0xbfcc28f5, 0xc28f5c08},	/* 0.987937=f(-0.22)*/
{37, 0,123,__LINE__, 0x3fefa5ee, 0x8cd71df4, 0xbfcae147, 0xae147ac0},	/* 0.989005=f(-0.21)*/
{38, 0,123,__LINE__, 0x3fefae48, 0xd996ff67, 0xbfc99999, 0x99999978},	/* 0.990025=f(-0.2)*/
{35, 0,123,__LINE__, 0x3fefb63b, 0xdd4d4177, 0xbfc851eb, 0x851eb830},	/* 0.990995=f(-0.19)*/
{36, 0,123,__LINE__, 0x3fefbdc7, 0x6f5f505f, 0xbfc70a3d, 0x70a3d6e8},	/* 0.991916=f(-0.18)*/
{38, 0,123,__LINE__, 0x3fefc4eb, 0x6c34f4c5, 0xbfc5c28f, 0x5c28f5a0},	/* 0.992788=f(-0.17)*/
{35, 0,123,__LINE__, 0x3fefcba7, 0xaff7757e, 0xbfc47ae1, 0x47ae1458},	/* 0.99361=f(-0.16)*/
{37, 0,123,__LINE__, 0x3fefd1fc, 0x18f5cf9e, 0xbfc33333, 0x33333310},	/* 0.994383=f(-0.15)*/
{35, 0,123,__LINE__, 0x3fefd7e8, 0x89529179, 0xbfc1eb85, 0x1eb851c8},	/* 0.995106=f(-0.14)*/
{35, 0,123,__LINE__, 0x3fefdd6c, 0xe34f0a25, 0xbfc0a3d7, 0x0a3d7080},	/* 0.995779=f(-0.13)*/
{37, 0,123,__LINE__, 0x3fefe289, 0x0b91b535, 0xbfbeb851, 0xeb851e71},	/* 0.996403=f(-0.12)*/
{37, 0,123,__LINE__, 0x3fefe73c, 0xe945ab4d, 0xbfbc28f5, 0xc28f5be2},	/* 0.996977=f(-0.11)*/
{36, 0,123,__LINE__, 0x3fefeb88, 0x654ed089, 0xbfb99999, 0x99999953},	/* 0.997502=f(-0.1)*/
{38, 0,123,__LINE__, 0x3fefef6b, 0x6a91d3e1, 0xbfb70a3d, 0x70a3d6c4},	/* 0.997976=f(-0.09)*/
{37, 0,123,__LINE__, 0x3feff2e5, 0xe61d8fc7, 0xbfb47ae1, 0x47ae1435},	/* 0.998401=f(-0.08)*/
{35, 0,123,__LINE__, 0x3feff5f7, 0xc682a104, 0xbfb1eb85, 0x1eb851a6},	/* 0.998775=f(-0.07)*/
{38, 0,123,__LINE__, 0x3feff8a0, 0xfce801e5, 0xbfaeb851, 0xeb851e2d},	/* 0.9991=f(-0.06)*/
{34, 0,123,__LINE__, 0x3feffae1, 0x7c185c90, 0xbfa99999, 0x9999990e},	/* 0.999375=f(-0.05)*/
{36, 0,123,__LINE__, 0x3feffcb9, 0x391e61d2, 0xbfa47ae1, 0x47ae13ef},	/* 0.9996=f(-0.04)*/
{39, 0,123,__LINE__, 0x3feffe28, 0x2ad844f2, 0xbf9eb851, 0xeb851da0},	/* 0.999775=f(-0.03)*/
{36, 0,123,__LINE__, 0x3fefff2e, 0x4a40dc59, 0xbf947ae1, 0x47ae1362},	/* 0.9999=f(-0.02)*/
{35, 0,123,__LINE__, 0x3fefffcb, 0x924fcaa5, 0xbf847ae1, 0x47ae1249},	/* 0.999975=f(-0.01)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x3cd19000, 0x00000000},	/* 1=f(9.74915e-16)*/
{35, 0,123,__LINE__, 0x3fefffcb, 0x924fcaa5, 0x3f847ae1, 0x47ae16ad},	/* 0.999975=f(0.01)*/
{36, 0,123,__LINE__, 0x3fefff2e, 0x4a40dc59, 0x3f947ae1, 0x47ae1594},	/* 0.9999=f(0.02)*/
{39, 0,123,__LINE__, 0x3feffe28, 0x2ad844f2, 0x3f9eb851, 0xeb851fd2},	/* 0.999775=f(0.03)*/
{36, 0,123,__LINE__, 0x3feffcb9, 0x391e61d2, 0x3fa47ae1, 0x47ae1508},	/* 0.9996=f(0.04)*/
{34, 0,123,__LINE__, 0x3feffae1, 0x7c185c90, 0x3fa99999, 0x99999a27},	/* 0.999375=f(0.05)*/
{38, 0,123,__LINE__, 0x3feff8a0, 0xfce801e5, 0x3faeb851, 0xeb851f46},	/* 0.9991=f(0.06)*/
{35, 0,123,__LINE__, 0x3feff5f7, 0xc682a104, 0x3fb1eb85, 0x1eb85232},	/* 0.998775=f(0.07)*/
{37, 0,123,__LINE__, 0x3feff2e5, 0xe61d8fc7, 0x3fb47ae1, 0x47ae14c1},	/* 0.998401=f(0.08)*/
{38, 0,123,__LINE__, 0x3fefef6b, 0x6a91d3e1, 0x3fb70a3d, 0x70a3d750},	/* 0.997976=f(0.09)*/
{36, 0,123,__LINE__, 0x3fefeb88, 0x654ed089, 0x3fb99999, 0x999999df},	/* 0.997502=f(0.1)*/
{37, 0,123,__LINE__, 0x3fefe73c, 0xe945ab4d, 0x3fbc28f5, 0xc28f5c6e},	/* 0.996977=f(0.11)*/
{37, 0,123,__LINE__, 0x3fefe289, 0x0b91b535, 0x3fbeb851, 0xeb851efd},	/* 0.996403=f(0.12)*/
{35, 0,123,__LINE__, 0x3fefdd6c, 0xe34f0a25, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.995779=f(0.13)*/
{35, 0,123,__LINE__, 0x3fefd7e8, 0x89529179, 0x3fc1eb85, 0x1eb8520e},	/* 0.995106=f(0.14)*/
{37, 0,123,__LINE__, 0x3fefd1fc, 0x18f5cf9e, 0x3fc33333, 0x33333356},	/* 0.994383=f(0.15)*/
{35, 0,123,__LINE__, 0x3fefcba7, 0xaff7757e, 0x3fc47ae1, 0x47ae149e},	/* 0.99361=f(0.16)*/
{38, 0,123,__LINE__, 0x3fefc4eb, 0x6c34f4c5, 0x3fc5c28f, 0x5c28f5e6},	/* 0.992788=f(0.17)*/
{36, 0,123,__LINE__, 0x3fefbdc7, 0x6f5f505f, 0x3fc70a3d, 0x70a3d72e},	/* 0.991916=f(0.18)*/
{35, 0,123,__LINE__, 0x3fefb63b, 0xdd4d4177, 0x3fc851eb, 0x851eb876},	/* 0.990995=f(0.19)*/
{38, 0,123,__LINE__, 0x3fefae48, 0xd996ff67, 0x3fc99999, 0x999999be},	/* 0.990025=f(0.2)*/
{37, 0,123,__LINE__, 0x3fefa5ee, 0x8cd71df4, 0x3fcae147, 0xae147b06},	/* 0.989005=f(0.21)*/
{37, 0,123,__LINE__, 0x3fef9d2d, 0x1e73ef35, 0x3fcc28f5, 0xc28f5c4e},	/* 0.987937=f(0.22)*/
{34, 0,123,__LINE__, 0x3fef9404, 0xba3b25ed, 0x3fcd70a3, 0xd70a3d96},	/* 0.986819=f(0.23)*/
{37, 0,123,__LINE__, 0x3fef8a75, 0x8e1bb4de, 0x3fceb851, 0xeb851ede},	/* 0.985652=f(0.24)*/
{38, 0,123,__LINE__, 0x3fef807f, 0xc72aa85d, 0x3fd00000, 0x00000013},	/* 0.984436=f(0.25)*/
{36, 0,123,__LINE__, 0x3fef7623, 0x98441034, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.983171=f(0.26)*/
{36, 0,123,__LINE__, 0x3fef6b61, 0x31300fe4, 0x3fd147ae, 0x147ae15b},	/* 0.981858=f(0.27)*/
{35, 0,123,__LINE__, 0x3fef6038, 0xcaf7a2e2, 0x3fd1eb85, 0x1eb851ff},	/* 0.980496=f(0.28)*/
{42, 0,123,__LINE__, 0x3fef54aa, 0x9a539eed, 0x3fd28f5c, 0x28f5c2a3},	/* 0.979085=f(0.29)*/
{35, 0,123,__LINE__, 0x3fef48b6, 0xd59ffa1d, 0x3fd33333, 0x33333347},	/* 0.977626=f(0.3)*/
{37, 0,123,__LINE__, 0x3fef3c5d, 0xbc34e004, 0x3fd3d70a, 0x3d70a3eb},	/* 0.976119=f(0.31)*/
{35, 0,123,__LINE__, 0x3fef2f9f, 0x8863b79c, 0x3fd47ae1, 0x47ae148f},	/* 0.974563=f(0.32)*/
{36, 0,123,__LINE__, 0x3fef227c, 0x761dd101, 0x3fd51eb8, 0x51eb8533},	/* 0.97296=f(0.33)*/
{35, 0,123,__LINE__, 0x3fef14f4, 0xcafe778e, 0x3fd5c28f, 0x5c28f5d7},	/* 0.971308=f(0.34)*/
{36, 0,123,__LINE__, 0x3fef0708, 0xc6e467bc, 0x3fd66666, 0x6666667b},	/* 0.969609=f(0.35)*/
{35, 0,123,__LINE__, 0x3feef8b8, 0xab4abebb, 0x3fd70a3d, 0x70a3d71f},	/* 0.967861=f(0.36)*/
{36, 0,123,__LINE__, 0x3feeea04, 0xc402a67d, 0x3fd7ae14, 0x7ae147c3},	/* 0.966067=f(0.37)*/
{35, 0,123,__LINE__, 0x3feedaed, 0x566be3d5, 0x3fd851eb, 0x851eb867},	/* 0.964224=f(0.38)*/
{37, 0,123,__LINE__, 0x3feecb72, 0xac8e64b7, 0x3fd8f5c2, 0x8f5c290b},	/* 0.962335=f(0.39)*/
{38, 0,123,__LINE__, 0x3feebb95, 0x0f33de46, 0x3fd99999, 0x999999af},	/* 0.960398=f(0.4)*/
{36, 0,123,__LINE__, 0x3feeab54, 0xd25ea5a3, 0x3fda3d70, 0xa3d70a53},	/* 0.958414=f(0.41)*/
{36, 0,123,__LINE__, 0x3fee9ab2, 0x42b03eb8, 0x3fdae147, 0xae147af7},	/* 0.956384=f(0.42)*/
{36, 0,123,__LINE__, 0x3fee89ad, 0xae5d1812, 0x3fdb851e, 0xb851eb9b},	/* 0.954306=f(0.43)*/
{35, 0,123,__LINE__, 0x3fee7847, 0x6f79e5ef, 0x3fdc28f5, 0xc28f5c3f},	/* 0.952183=f(0.44)*/
{37, 0,123,__LINE__, 0x3fee667f, 0xd808678d, 0x3fdccccc, 0xcccccce3},	/* 0.950012=f(0.45)*/
{36, 0,123,__LINE__, 0x3fee5457, 0x3b98b52a, 0x3fdd70a3, 0xd70a3d87},	/* 0.947796=f(0.46)*/
{36, 0,123,__LINE__, 0x3fee41cd, 0xfa40bd61, 0x3fde147a, 0xe147ae2b},	/* 0.945533=f(0.47)*/
{36, 0,123,__LINE__, 0x3fee2ee4, 0x6b52b152, 0x3fdeb851, 0xeb851ecf},	/* 0.943224=f(0.48)*/
{35, 0,123,__LINE__, 0x3fee1b9a, 0xe7aa3bc9, 0x3fdf5c28, 0xf5c28f73},	/* 0.94087=f(0.49)*/
{37, 0,123,__LINE__, 0x3fee07f1, 0xd54c3d6c, 0x3fe00000, 0x0000000b},	/* 0.93847=f(0.5)*/
{39, 0,123,__LINE__, 0x3fedf3e9, 0x90ca8a9c, 0x3fe051eb, 0x851eb85d},	/* 0.936024=f(0.51)*/
{36, 0,123,__LINE__, 0x3feddf82, 0x7c40a38b, 0x3fe0a3d7, 0x0a3d70af},	/* 0.933534=f(0.52)*/
{40, 0,123,__LINE__, 0x3fedcabc, 0xfb969dab, 0x3fe0f5c2, 0x8f5c2901},	/* 0.930998=f(0.53)*/
{35, 0,123,__LINE__, 0x3fedb599, 0x6c2ad1f0, 0x3fe147ae, 0x147ae153},	/* 0.928418=f(0.54)*/
{42, 0,123,__LINE__, 0x3feda018, 0x45fbf976, 0x3fe19999, 0x999999a5},	/* 0.925793=f(0.55)*/
{35, 0,123,__LINE__, 0x3fed8a39, 0xea1b7502, 0x3fe1eb85, 0x1eb851f7},	/* 0.923123=f(0.56)*/
{36, 0,123,__LINE__, 0x3fed73fe, 0xc38e08d6, 0x3fe23d70, 0xa3d70a49},	/* 0.92041=f(0.57)*/
{37, 0,123,__LINE__, 0x3fed5d67, 0x3f1a0ac1, 0x3fe28f5c, 0x28f5c29b},	/* 0.917652=f(0.58)*/
{36, 0,123,__LINE__, 0x3fed4673, 0xcb451173, 0x3fe2e147, 0xae147aed},	/* 0.91485=f(0.59)*/
{36, 0,123,__LINE__, 0x3fed2f24, 0xcf24f2bf, 0x3fe33333, 0x3333333f},	/* 0.912005=f(0.6)*/
{35, 0,123,__LINE__, 0x3fed177a, 0xceec838e, 0x3fe3851e, 0xb851eb91},	/* 0.909116=f(0.61)*/
{36, 0,123,__LINE__, 0x3fecff76, 0x3547db23, 0x3fe3d70a, 0x3d70a3e3},	/* 0.906184=f(0.62)*/
{36, 0,123,__LINE__, 0x3fece717, 0x77a1b0a9, 0x3fe428f5, 0xc28f5c35},	/* 0.903209=f(0.63)*/
{36, 0,123,__LINE__, 0x3fecce5f, 0x0d17dbaa, 0x3fe47ae1, 0x47ae1487},	/* 0.900192=f(0.64)*/
{35, 0,123,__LINE__, 0x3fecb54d, 0x6e78cb56, 0x3fe4cccc, 0xccccccd9},	/* 0.897132=f(0.65)*/
{36, 0,123,__LINE__, 0x3fec9be3, 0x0c422568, 0x3fe51eb8, 0x51eb852b},	/* 0.894029=f(0.66)*/
{36, 0,123,__LINE__, 0x3fec8220, 0x767708a9, 0x3fe570a3, 0xd70a3d7d},	/* 0.890885=f(0.67)*/
{35, 0,123,__LINE__, 0x3fec6806, 0x210bdd92, 0x3fe5c28f, 0x5c28f5cf},	/* 0.887698=f(0.68)*/
{37, 0,123,__LINE__, 0x3fec4d94, 0x8b776573, 0x3fe6147a, 0xe147ae21},	/* 0.88447=f(0.69)*/
{37, 0,123,__LINE__, 0x3fec32cc, 0x36d3c5b3, 0x3fe66666, 0x66666673},	/* 0.881201=f(0.7)*/
{36, 0,123,__LINE__, 0x3fec17ad, 0xa5dbc926, 0x3fe6b851, 0xeb851ec5},	/* 0.87789=f(0.71)*/
{36, 0,123,__LINE__, 0x3febfc39, 0x521dfed1, 0x3fe70a3d, 0x70a3d717},	/* 0.874539=f(0.72)*/
{38, 0,123,__LINE__, 0x3febe06f, 0xd7012383, 0x3fe75c28, 0xf5c28f69},	/* 0.871147=f(0.73)*/
{35, 0,123,__LINE__, 0x3febc451, 0xb1686b55, 0x3fe7ae14, 0x7ae147bb},	/* 0.867715=f(0.74)*/
{35, 0,123,__LINE__, 0x3feba7df, 0x6a7515b8, 0x3fe80000, 0x0000000d},	/* 0.864242=f(0.75)*/
{35, 0,123,__LINE__, 0x3feb8b19, 0x8cdacb90, 0x3fe851eb, 0x851eb85f},	/* 0.86073=f(0.76)*/
{39, 0,123,__LINE__, 0x3feb6e00, 0xa4dcacbe, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.857178=f(0.77)*/
{34, 0,123,__LINE__, 0x3feb5095, 0x404a5546, 0x3fe8f5c2, 0x8f5c2903},	/* 0.853587=f(0.78)*/
{35, 0,123,__LINE__, 0x3feb32d7, 0xe2cef7e4, 0x3fe947ae, 0x147ae155},	/* 0.849956=f(0.79)*/
{37, 0,123,__LINE__, 0x3feb14c9, 0x34862fe9, 0x3fe99999, 0x999999a7},	/* 0.846287=f(0.8)*/
{38, 0,123,__LINE__, 0x3feaf669, 0xbc44dc74, 0x3fe9eb85, 0x1eb851f9},	/* 0.84258=f(0.81)*/
{36, 0,123,__LINE__, 0x3fead7ba, 0x0dee1872, 0x3fea3d70, 0xa3d70a4b},	/* 0.838834=f(0.82)*/
{37, 0,123,__LINE__, 0x3feab8ba, 0xbee21900, 0x3fea8f5c, 0x28f5c29d},	/* 0.83505=f(0.83)*/
{36, 0,123,__LINE__, 0x3fea996c, 0x65fb0196, 0x3feae147, 0xae147aef},	/* 0.831228=f(0.84)*/
{41, 0,123,__LINE__, 0x3fea79cf, 0x8f213232, 0x3feb3333, 0x33333341},	/* 0.827369=f(0.85)*/
{37, 0,123,__LINE__, 0x3fea59e4, 0xeccbb9fa, 0x3feb851e, 0xb851eb93},	/* 0.823473=f(0.86)*/
{38, 0,123,__LINE__, 0x3fea39ad, 0x0de53a7f, 0x3febd70a, 0x3d70a3e5},	/* 0.819541=f(0.87)*/
{36, 0,123,__LINE__, 0x3fea1928, 0x8f0f3d7f, 0x3fec28f5, 0xc28f5c37},	/* 0.815571=f(0.88)*/
{36, 0,123,__LINE__, 0x3fe9f858, 0x0e54ea84, 0x3fec7ae1, 0x47ae1489},	/* 0.811565=f(0.89)*/
{35, 0,123,__LINE__, 0x3fe9d73c, 0x2b27ac9d, 0x3feccccc, 0xccccccdb},	/* 0.807524=f(0.9)*/
{37, 0,123,__LINE__, 0x3fe9b5d5, 0x794132a9, 0x3fed1eb8, 0x51eb852d},	/* 0.803447=f(0.91)*/
{36, 0,123,__LINE__, 0x3fe99424, 0xb4eda996, 0x3fed70a3, 0xd70a3d7f},	/* 0.799334=f(0.92)*/
{40, 0,123,__LINE__, 0x3fe9722a, 0x74bf558e, 0x3fedc28f, 0x5c28f5d1},	/* 0.795186=f(0.93)*/
{41, 0,123,__LINE__, 0x3fe94fe7, 0x5d9e9507, 0x3fee147a, 0xe147ae23},	/* 0.791004=f(0.94)*/
{35, 0,123,__LINE__, 0x3fe92d5c, 0x15c8d7e6, 0x3fee6666, 0x66666675},	/* 0.786787=f(0.95)*/
{35, 0,123,__LINE__, 0x3fe90a89, 0x44cd1983, 0x3feeb851, 0xeb851ec7},	/* 0.782536=f(0.96)*/
{35, 0,123,__LINE__, 0x3fe8e76f, 0x85c487c9, 0x3fef0a3d, 0x70a3d719},	/* 0.778251=f(0.97)*/
{36, 0,123,__LINE__, 0x3fe8c40f, 0x9e42d2c7, 0x3fef5c28, 0xf5c28f6b},	/* 0.773933=f(0.98)*/
{36, 0,123,__LINE__, 0x3fe8a06a, 0x2c0df166, 0x3fefae14, 0x7ae147bd},	/* 0.769582=f(0.99)*/
{39, 0,123,__LINE__, 0x3fe87c7f, 0xdbd745e5, 0x3ff00000, 0x00000007},	/* 0.765198=f(1)*/
{35, 0,123,__LINE__, 0x3fe85851, 0x5b8fb82c, 0x3ff028f5, 0xc28f5c30},	/* 0.760781=f(1.01)*/
{36, 0,123,__LINE__, 0x3fe833df, 0x5a6406e2, 0x3ff051eb, 0x851eb859},	/* 0.756332=f(1.02)*/
{39, 0,123,__LINE__, 0x3fe80f2a, 0x88b911f6, 0x3ff07ae1, 0x47ae1482},	/* 0.751851=f(1.03)*/
{37, 0,123,__LINE__, 0x3fe7ea33, 0x98281eb4, 0x3ff0a3d7, 0x0a3d70ab},	/* 0.747339=f(1.04)*/
{38, 0,123,__LINE__, 0x3fe7c4fb, 0x3b7b157e, 0x3ff0cccc, 0xccccccd4},	/* 0.742796=f(1.05)*/
{36, 0,123,__LINE__, 0x3fe79f82, 0x26a8b93a, 0x3ff0f5c2, 0x8f5c28fd},	/* 0.738221=f(1.06)*/
{36, 0,123,__LINE__, 0x3fe779c8, 0xf13f6a38, 0x3ff11eb8, 0x51eb8526},	/* 0.733616=f(1.07)*/
{39, 0,123,__LINE__, 0x3fe753d0, 0x8c75de30, 0x3ff147ae, 0x147ae14f},	/* 0.728981=f(1.08)*/
{36, 0,123,__LINE__, 0x3fe72d99, 0x9252c478, 0x3ff170a3, 0xd70a3d78},	/* 0.724316=f(1.09)*/
{36, 0,123,__LINE__, 0x3fe70724, 0xbb59fa80, 0x3ff19999, 0x999999a1},	/* 0.719622=f(1.1)*/
{37, 0,123,__LINE__, 0x3fe6e072, 0xc128f217, 0x3ff1c28f, 0x5c28f5ca},	/* 0.714898=f(1.11)*/
{35, 0,123,__LINE__, 0x3fe6b984, 0x5e72c4f0, 0x3ff1eb85, 0x1eb851f3},	/* 0.710146=f(1.12)*/
{37, 0,123,__LINE__, 0x3fe6925a, 0x4efc4275, 0x3ff2147a, 0xe147ae1c},	/* 0.705365=f(1.13)*/
{38, 0,123,__LINE__, 0x3fe66af5, 0x4f97f803, 0x3ff23d70, 0xa3d70a45},	/* 0.700556=f(1.14)*/
{35, 0,123,__LINE__, 0x3fe64356, 0x1e2233a4, 0x3ff26666, 0x6666666e},	/* 0.69572=f(1.15)*/
{36, 0,123,__LINE__, 0x3fe61b7d, 0x797d0163, 0x3ff28f5c, 0x28f5c297},	/* 0.690856=f(1.16)*/
{37, 0,123,__LINE__, 0x3fe5f36c, 0x218c233e, 0x3ff2b851, 0xeb851ec0},	/* 0.685965=f(1.17)*/
{36, 0,123,__LINE__, 0x3fe5cb22, 0xd73103ed, 0x3ff2e147, 0xae147ae9},	/* 0.681047=f(1.18)*/
{38, 0,123,__LINE__, 0x3fe5a2a2, 0x3c8ce615, 0x3ff30a3d, 0x70a3d712},	/* 0.676103=f(1.19)*/
{31, 0,123,__LINE__, 0x3fcc3208, 0xedc626a4, 0xc01921fb, 0x54442d18},	/* 0.220277=f(-6.28319)*/
{33, 0,123,__LINE__, 0xbfd103ce, 0x275cddb6, 0xc012d97c, 0x7f3321d2},	/* -0.265857=f(-4.71239)*/
{38, 0,123,__LINE__, 0xbfd378b4, 0x5bff7c13, 0xc00921fb, 0x54442d18},	/* -0.304242=f(-3.14159)*/
{34, 0,123,__LINE__, 0x3fde3544, 0x7bb12577, 0xbff921fb, 0x54442d18},	/* 0.472001=f(-1.5708)*/
{64, 0,123,__LINE__, 0x3ff00000, 0x00000000, 0x00000000, 0x00000000},	/* 1=f(0)*/
{34, 0,123,__LINE__, 0x3fde3544, 0x7bb12577, 0x3ff921fb, 0x54442d18},	/* 0.472001=f(1.5708)*/
{38, 0,123,__LINE__, 0xbfd378b4, 0x5bff7c13, 0x400921fb, 0x54442d18},	/* -0.304242=f(3.14159)*/
{33, 0,123,__LINE__, 0xbfd103ce, 0x275cddb6, 0x4012d97c, 0x7f3321d2},	/* -0.265857=f(4.71239)*/
{32, 0,123,__LINE__, 0xbfb61c36, 0x5d354afd, 0xc03e0000, 0x00000000},	/* -0.086368=f(-30)*/
{30, 0,123,__LINE__, 0xbfbbb801, 0x1dbc6619, 0xc03c4ccc, 0xcccccccd},	/* -0.108276=f(-28.3)*/
{32, 0,123,__LINE__, 0x3fbedcdd, 0x5fdd7714, 0xc03a9999, 0x9999999a},	/* 0.120558=f(-26.6)*/
{32, 0,123,__LINE__, 0x3fb54f9a, 0xbe409cae, 0xc038e666, 0x66666667},	/* 0.0832459=f(-24.9)*/
{40, 0,123,__LINE__, 0xbfc36000, 0xbde60230, 0xc0373333, 0x33333334},	/* -0.151367=f(-23.2)*/
{31, 0,123,__LINE__, 0xbfa90eee, 0x96d1092e, 0xc0358000, 0x00000001},	/* -0.048942=f(-21.5)*/
{36, 0,123,__LINE__, 0x3fc6a8e0, 0x2672d56f, 0xc033cccc, 0xccccccce},	/* 0.177029=f(-19.8)*/
{28, 0,123,__LINE__, 0x3f763ab9, 0x2bbfe558, 0xc0321999, 0x9999999b},	/* 0.0054271=f(-18.1)*/
{35, 0,123,__LINE__, 0xbfc915b4, 0x2301db30, 0xc0306666, 0x66666668},	/* -0.195975=f(-16.4)*/
{29, 0,123,__LINE__, 0x3fa86484, 0x8fe3dfd1, 0xc02d6666, 0x6666666a},	/* 0.0476419=f(-14.7)*/
{32, 0,123,__LINE__, 0x3fca7c8e, 0x18c284bd, 0xc02a0000, 0x00000004},	/* 0.206926=f(-13)*/
{30, 0,123,__LINE__, 0xbfbcb084, 0x0f83de78, 0xc0269999, 0x9999999e},	/* -0.112068=f(-11.3)*/
{31, 0,123,__LINE__, 0xbfcabfd1, 0x03b59c5e, 0xc0233333, 0x33333338},	/* -0.208979=f(-9.6)*/
{29, 0,123,__LINE__, 0x3fc8e0d9, 0x1c74b183, 0xc01f9999, 0x999999a3},	/* 0.194362=f(-7.9)*/
{29, 0,123,__LINE__, 0x3fc9d2da, 0x03034f4a, 0xc018cccc, 0xccccccd6},	/* 0.201747=f(-6.2)*/
{33, 0,123,__LINE__, 0xbfd483c4, 0xc96e3f48, 0xc0120000, 0x00000009},	/* -0.320543=f(-4.5)*/
{36, 0,123,__LINE__, 0xbfc7af42, 0xd0f77f02, 0xc0066666, 0x66666678},	/* -0.185036=f(-2.8)*/
{36, 0,123,__LINE__, 0x3fe70724, 0xbb59fa80, 0xbff19999, 0x999999bd},	/* 0.719622=f(-1.1)*/
{36, 0,123,__LINE__, 0x3fed2f24, 0xcf24f2bf, 0x3fe33333, 0x333332ec},	/* 0.912005=f(0.6)*/
{32, 0,123,__LINE__, 0x3fac6fb6, 0xdf493b2f, 0x40026666, 0x66666654},	/* 0.0555398=f(2.3)*/
{33, 0,123,__LINE__, 0xbfd96ae7, 0x27b386e8, 0x400fffff, 0xffffffee},	/* -0.39715=f(4)*/
{29, 0,123,__LINE__, 0x3faeadd3, 0xfa9a85f8, 0x4016cccc, 0xccccccc4},	/* 0.05992=f(5.7)*/
{31, 0,123,__LINE__, 0x3fd1d485, 0x5f7a3aa3, 0x401d9999, 0x99999991},	/* 0.278596=f(7.4)*/
{30, 0,123,__LINE__, 0xbfbd3ec9, 0xe6dfef65, 0x40223333, 0x3333332f},	/* -0.114239=f(9.1)*/
{32, 0,123,__LINE__, 0xbfca0285, 0x807e5680, 0x40259999, 0x99999995},	/* -0.203202=f(10.8)*/
{31, 0,123,__LINE__, 0x3fc2cd18, 0xddf810d6, 0x4028ffff, 0xfffffffb},	/* 0.146884=f(12.5)*/
{31, 0,123,__LINE__, 0x3fc21864, 0xb97a9dca, 0x402c6666, 0x66666661},	/* 0.141369=f(14.2)*/
{34, 0,123,__LINE__, 0xbfc51dc0, 0x93630106, 0x402fcccc, 0xccccccc7},	/* -0.16497=f(15.9)*/
{35, 0,123,__LINE__, 0xbfb61995, 0x251c468a, 0x40319999, 0x99999997},	/* -0.0863279=f(17.6)*/
{35, 0,123,__LINE__, 0x3fc5e6d7, 0xf96afbc9, 0x40334ccc, 0xccccccca},	/* 0.171107=f(19.3)*/
{31, 0,123,__LINE__, 0x3fa2ba7e, 0x1286a683, 0x4034ffff, 0xfffffffd},	/* 0.0365791=f(21)*/
{34, 0,123,__LINE__, 0xbfc55c69, 0x33a8508a, 0x4036b333, 0x33333330},	/* -0.166883=f(22.7)*/
{27, 0,123,__LINE__, 0x3f7f6fce, 0x5a031652, 0x40386666, 0x66666663},	/* 0.00767499=f(24.4)*/
{35, 0,123,__LINE__, 0x3fc3ad27, 0xaec15e2f, 0x403a1999, 0x99999996},	/* 0.153722=f(26.1)*/
{31, 0,123,__LINE__, 0xbfa76177, 0xa9edecfb, 0x403bcccc, 0xccccccc9},	/* -0.0456655=f(27.8)*/
{34, 0,123,__LINE__, 0xbfc10afd, 0x42788fc9, 0x403d7fff, 0xfffffffc},	/* -0.133148=f(29.5)*/
{0},};
void test_j0f(m)   {run_vector_1(m,j0f_vec,(char *)(j0f),"j0f","ff");   }	
