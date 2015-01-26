/* ********************************************************************/
/* *   File               :    ACTDT_PLACT.h
                             
/* *   Short Description  :    Database Class ,PL section actual data
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         ACTDT_PLACT_H 
#define      ACTDT_PLACT_H 

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class ACTDT_PLACT
{        
public:      
//           
//A T T R I B U T E S      
//===================      
//           

    long     oracleSqlCode; // sqlcode of last operation
    long     oracleRowsProcessed; // number of executed rows
    CatchDbaxError*  pCatch; // pointer for Oracle Error handling
    bool     dbAccess;
    char*    dbMessage;	// pointer for the return values of DBAX methodes
    char     messageBuffer[200];	// temporary message buffer
protected:		
//			
//A T T R I B U T E S 
//=================== 
//			
//char     datee = Unit[-]:Date.Limit:[-,-]
char     c_datee[9];
//char     timee = Unit[-]:Time.Limit:[-,-]
char     c_timee[7];
//short    samp_no = Unit[-]:Sampling no..Limit:[-,500000]
short    s_samp_no;
//short    eshct_idx = Unit[-]:Tracking index WPDX24-E.shear.Limit:[-,-]
short    s_eshct_idx;
short    s_eshct_idxZi;
//short    std1_idx = Unit[-]:Tracking index E.shear-std1.Limit:[-,-]
short    s_std1_idx;
short    s_std1_idxZi;
//short    std2_idx = Unit[-]:Tracking index std1-std2.Limit:[-,-]
short    s_std2_idx;
short    s_std2_idxZi;
//short    std3_idx = Unit[-]:Tracking index std2-std3.Limit:[-,-]
short    s_std3_idx;
short    s_std3_idxZi;
//short    std4_idx = Unit[-]:Tracking index std3-std4.Limit:[-,-]
short    s_std4_idx;
short    s_std4_idxZi;
//short    std5_idx = Unit[-]:Tracking index std4-std5.Limit:[-,-]
short    s_std5_idx;
short    s_std5_idxZi;
//short    dshct_idx = Unit[-]:Tracking index std5-D.shear.Limit:[-,-]
short    s_dshct_idx;
short    s_dshct_idxZi;
//short    tr_idx = Unit[-]:Tracking index D.shear-TR.Limit:[-,-]
short    s_tr_idx;
short    s_tr_idxZi;
//short    por_no = Unit[-]:Paying off POR no.Limit:[-,-]
short    s_por_no;
short    s_por_noZi;
//short    por_dia = Unit[mm]:POR outer diameter.Limit:[-,-]
short    s_por_dia;
short    s_por_diaZi;
//short    por_width = Unit[mm]:Coil width.Limit:[-,-]
short    s_por_width;
short    s_por_widthZi;
//short    por_thick = Unit[10-3mm]:Coil thickness.Limit:[-,-]
short    s_por_thick;
short    s_por_thickZi;
//short    por_kind = Unit[-]:Coil kind.Limit:[-,-]
short    s_por_kind;
short    s_por_kindZi;
//short    por_tens = Unit[10N]:POR tension.Limit:[-,-]
short    s_por_tens;
short    s_por_tensZi;
//short    ent_maxsp = Unit[mpm]:Entry Max. Speed.Limit:[-,-]
short    s_ent_maxsp;
short    s_ent_maxspZi;
//short    por_rest = Unit[m]:Paying off Reel length.Limit:[-,-]
short    s_por_rest;
short    s_por_restZi;
//long     dist1 = Unit[mm]:Distance between WPDX1 and WPDX2.Limit:[-,-]
long     l_dist1;
short    s_dist1Zi;
//long     dist2 = Unit[mm]:Distance between WPDX2 and WPDX3.Limit:[-,-]
long     l_dist2;
short    s_dist2Zi;
//long     dist3 = Unit[mm]:Distance between WPDX3 and WPDX4.Limit:[-,-]
long     l_dist3;
short    s_dist3Zi;
//long     dist4 = Unit[mm]:Distance between WPDX4 and WPDX5.Limit:[-,-]
long     l_dist4;
short    s_dist4Zi;
//long     dist5 = Unit[mm]:Distance between WPDX5 and WPDX6.Limit:[-,-]
long     l_dist5;
short    s_dist5Zi;
//long     dist6 = Unit[mm]:Distance between WPDX6 and WPDX7.Limit:[-,-]
long     l_dist6;
short    s_dist6Zi;
//long     dist7 = Unit[mm]:Distance between WPDX7 and WPDX8.Limit:[-,-]
long     l_dist7;
short    s_dist7Zi;
//long     dist8 = Unit[mm]:Distance between WPDX8 and WPDX9.Limit:[-,-]
long     l_dist8;
short    s_dist8Zi;
//long     dist9 = Unit[mm]:Distance between WPDX9 and WPDX10.Limit:[-,-]
long     l_dist9;
short    s_dist9Zi;
//long     dist10 = Unit[mm]:Distance between WPDX10 and WPDX11.Limit:[-,-]
long     l_dist10;
short    s_dist10Zi;
//long     dist11 = Unit[mm]:Distance between WPDX11 and WPDX12.Limit:[-,-]
long     l_dist11;
short    s_dist11Zi;
//long     dist12 = Unit[mm]:Distance between WPDX12 and WPDX13.Limit:[-,-]
long     l_dist12;
short    s_dist12Zi;
//long     dist13 = Unit[mm]:Distance between WPDX13 and WPDX14.Limit:[-,-]
long     l_dist13;
short    s_dist13Zi;
//long     dist14 = Unit[mm]:Distance between WPDX14 and WPDX15.Limit:[-,-]
long     l_dist14;
short    s_dist14Zi;
//long     dist15 = Unit[mm]:Distance between WPDX15 and WPDX16.Limit:[-,-]
long     l_dist15;
short    s_dist15Zi;
//long     dist16 = Unit[mm]:Distance between WPDX16 and WPDX17.Limit:[-,-]
long     l_dist16;
short    s_dist16Zi;
//long     dist17 = Unit[mm]:Distance between WPDX17 and WPDX18.Limit:[-,-]
long     l_dist17;
short    s_dist17Zi;
//long     dist18 = Unit[mm]:Distance between WPDX18 and WPDX19.Limit:[-,-]
long     l_dist18;
short    s_dist18Zi;
//long     dist19 = Unit[mm]:Distance between WPDX19 and WPDX20.Limit:[-,-]
long     l_dist19;
short    s_dist19Zi;
//long     dist20 = Unit[mm]:Distance between WPDX20 and WPDX21.Limit:[-,-]
long     l_dist20;
short    s_dist20Zi;
//long     dist21 = Unit[mm]:Distance between WPDX21 and WPDX22.Limit:[-,-]
long     l_dist21;
short    s_dist21Zi;
//long     dist22 = Unit[mm]:Distance between WPDX22 and WPDX23.Limit:[-,-]
long     l_dist22;
short    s_dist22Zi;
//long     dist23 = Unit[mm]:Distance between WPDX23 and WPDX24.Limit:[-,-]
long     l_dist23;
short    s_dist23Zi;
//long     dist24 = Unit[mm]:Distance between WPDX24 and entry shear.Limit:[-,-]
long     l_dist24;
short    s_dist24Zi;
//long     dist25 = Unit[mm]:Distance between WPDX24 and STD 1.Limit:[-,-]
long     l_dist25;
short    s_dist25Zi;
//long     dist26 = Unit[mm]:Distance between WPDX24 and Del. Shear.Limit:[-,-]
long     l_dist26;
short    s_dist26Zi;
//long     dist27 = Unit[mm]:Distance between ASD preset point and STD1.Limit:[-,-]
long     l_dist27;
short    s_dist27Zi;
//long     dist28 = Unit[mm]:Distance between WPDX18 and S/T position.Limit:[-,-]
long     l_dist28;
short    s_dist28Zi;
//long     dist29 = Unit[mm]:Distance between STD1 and STD2.Limit:[-,-]
long     l_dist29;
short    s_dist29Zi;
//long     dist30 = Unit[mm]:Distance between STD2 and STD3.Limit:[-,-]
long     l_dist30;
short    s_dist30Zi;
//long     dist31 = Unit[mm]:Distance between STD3 and STD4.Limit:[-,-]
long     l_dist31;
short    s_dist31Zi;
//long     dist32 = Unit[mm]:Distance between STD4 and STD5.Limit:[-,-]
long     l_dist32;
short    s_dist32Zi;
//long     dist33 = Unit[mm]:Distance between STD5 and Del. Shear.Limit:[-,-]
long     l_dist33;
short    s_dist33Zi;
//long     dist34 = Unit[mm]:Distance between WPDX10 and T/L.Limit:[-,-]
long     l_dist34;
short    s_dist34Zi;
//short    csmode = Unit[-]:Coil shifting car mode.Limit:[-,-]
short    s_csmode;
short    s_csmodeZi;
//short    porno = Unit[KN]:Current POR No.Limit:[-,-]
short    s_porno;
short    s_pornoZi;
//short    ttens = Unit[mm]:POR total tension.Limit:[-,-]
short    s_ttens;
short    s_ttensZi;
//short    dia1 = Unit[mm]:No1 POR diameter.Limit:[-,-]
short    s_dia1;
short    s_dia1Zi;
//short    dia2 = Unit[KN]:No2 POR diameter.Limit:[-,-]
short    s_dia2;
short    s_dia2Zi;
//short    ten1 = Unit[KN]:POR1 delivery tension.Limit:[-,-]
short    s_ten1;
short    s_ten1Zi;
//short    ten2 = Unit[]:POR2 delivery tension.Limit:[-,-]
short    s_ten2;
short    s_ten2Zi;
//short    prrl1 = Unit[10-1mm]:POR1 processer roll intermesh 1.Limit:[-,-]
short    s_prrl1;
short    s_prrl1Zi;
//short    prrl2 = Unit[10-1mm]:POR1 processer roll intermesh 2.Limit:[-,-]
short    s_prrl2;
short    s_prrl2Zi;
//short    prrl3 = Unit[10-1mm]:POR1 processer roll intermesh 3.Limit:[-,-]
short    s_prrl3;
short    s_prrl3Zi;
//short    prrl4 = Unit[10-1mm]:POR2 processer roll intermesh 1.Limit:[-,-]
short    s_prrl4;
short    s_prrl4Zi;
//short    prrl5 = Unit[10-1mm]:POR2 processer roll intermesh 2.Limit:[-,-]
short    s_prrl5;
short    s_prrl5Zi;
//short    prrl6 = Unit[10-1mm]:POR2 processer roll intermesh 3.Limit:[-,-]
short    s_prrl6;
short    s_prrl6Zi;
//short    sspd = Unit[10-1mpm]:Strip speed under the welder.Limit:[-,-]
short    s_sspd;
short    s_sspdZi;
//long     slop1_len = Unit[mm]:Looper1 length.Limit:[-,-]
long     l_slop1_len;
short    s_slop1_lenZi;
//short    slop1_pos = Unit[%]:Looper1 car position.Limit:[-,-]
short    s_slop1_pos;
short    s_slop1_posZi;
//short    slop1_tens = Unit[KN]:Looper1 tension.Limit:[-,-]
short    s_slop1_tens;
short    s_slop1_tensZi;
//long     slop2_len = Unit[mm]:Looper2 length.Limit:[-,-]
long     l_slop2_len;
short    s_slop2_lenZi;
//short    slop2_pos = Unit[%]:Looper2 car position.Limit:[-,-]
short    s_slop2_pos;
short    s_slop2_posZi;
//short    slop2_tens = Unit[KN]:Looper2 tension.Limit:[-,-]
short    s_slop2_tens;
short    s_slop2_tensZi;
//long     slop3_len = Unit[mm]:Looper3 length.Limit:[-,-]
long     l_slop3_len;
short    s_slop3_lenZi;
//short    slop3_pos = Unit[%]:Looper3 car position.Limit:[-,-]
short    s_slop3_pos;
short    s_slop3_posZi;
//short    slop3_tens = Unit[KN]:Looper3 tension.Limit:[-,-]
short    s_slop3_tens;
short    s_slop3_tensZi;
//short    espd = Unit[10-1mpm]:PL entry speed.Limit:[-,-]
short    s_espd;
short    s_espdZi;
//short    cspd = Unit[10-1mpm]:Speed of center PL section.Limit:[-,-]
short    s_cspd;
short    s_cspdZi;
//short    tens = Unit[KN]:Pickling tank tension.Limit:[-,-]
short    s_tens;
short    s_tensZi;
//short    plbth1_1 = Unit[¡æ]:Temperature of pickling bath -1.Limit:[-,-]
short    s_plbth1_1;
short    s_plbth1_1Zi;
//short    plbth1_2 = Unit[10-1%]:Concentration of HCl -1.Limit:[-,-]
short    s_plbth1_2;
short    s_plbth1_2Zi;
//short    plbth1_3 = Unit[10-1%]:Concentration of FeCl2 -1.Limit:[-,-]
short    s_plbth1_3;
short    s_plbth1_3Zi;
//short    plbth2_1 = Unit[¡æ]:Temperature of pickling bath -2.Limit:[-,-]
short    s_plbth2_1;
short    s_plbth2_1Zi;
//short    plbth2_2 = Unit[10-1%]:Concentration of HCl -2.Limit:[-,-]
short    s_plbth2_2;
short    s_plbth2_2Zi;
//short    plbth2_3 = Unit[10-1%]:Concentration of FeCl2 -2.Limit:[-,-]
short    s_plbth2_3;
short    s_plbth2_3Zi;
//short    plbth3_1 = Unit[¡æ]:Temperature of pickling bath -3.Limit:[-,-]
short    s_plbth3_1;
short    s_plbth3_1Zi;
//short    plbth3_2 = Unit[10-1%]:Concentration of HCl -3.Limit:[-,-]
short    s_plbth3_2;
short    s_plbth3_2Zi;
//short    plbth3_3 = Unit[10-1%]:Concentration of FeCl2 -3.Limit:[-,-]
short    s_plbth3_3;
short    s_plbth3_3Zi;
//short    tvl_use = Unit[-]:Tension leveler use/no use.Limit:[-,-]
short    s_tvl_use;
short    s_tvl_useZi;
//long     tens1 = Unit[KN]:Tension leveler tension 1.Limit:[-,-]
long     l_tens1;
short    s_tens1Zi;
//long     rims1 = Unit[KN]:Tension leveler tension 2.Limit:[-,-]
long     l_rims1;
short    s_rims1Zi;
//long     rims2 = Unit[10¦Ì]:Tension leveler No.1 roll intermesh.Limit:[-,-]
long     l_rims2;
short    s_rims2Zi;
//long     rims3 = Unit[11¦Ì]:Tension leveler No.2 roll intermesh.Limit:[-,-]
long     l_rims3;
short    s_rims3Zi;
//long     elg = Unit[12¦Ì]:Tension leveler elongation.Limit:[-,-]
long     l_elg;
short    s_elgZi;
//long     tvl_espd = Unit[10-1%]:Tension leveler entry speed.Limit:[-,-]
long     l_tvl_espd;
short    s_tvl_espdZi;
//short    spd = Unit[10-1mpm]:Speed of trimmer section.Limit:[-,-]
short    s_spd;
short    s_spdZi;
//short    wid1 = Unit[10-1mpm]:Trimmer set width data.Limit:[-,-]
short    s_wid1;
short    s_wid1Zi;
//short    wid2 = Unit[mm]:Actual width at trimmer position.Limit:[-,-]
short    s_wid2;
short    s_wid2Zi;
//short    wid3 = Unit[mm]:Actual width before trimmer position.Limit:[-,-]
short    s_wid3;
short    s_wid3Zi;
//short    trm_use = Unit[mm]:Trimmer use/no use.Limit:[-,-]
short    s_trm_use;
short    s_trm_useZi;
//short    tno1 = Unit[-]:Trimmer number(OP).Limit:[-,-]
short    s_tno1;
short    s_tno1Zi;
//short    tno2 = Unit[-]:Trimmer number(DR).Limit:[-,-]
short    s_tno2;
short    s_tno2Zi;
//short    tgap1 = Unit[-]:Trimmer gap1 (OP).Limit:[-,-]
short    s_tgap1;
short    s_tgap1Zi;
//short    tgap2 = Unit[10¦Ì]:Trimmer gap2 (OP).Limit:[-,-]
short    s_tgap2;
short    s_tgap2Zi;
//short    tgap3 = Unit[10¦Ì]:Trimmer gap1 (DR).Limit:[-,-]
short    s_tgap3;
short    s_tgap3Zi;
//short    tgap4 = Unit[10¦Ì]:Trimmer gap2 (DR).Limit:[-,-]
short    s_tgap4;
short    s_tgap4Zi;
//short    tlap1 = Unit[10¦Ì]:Trimmer lap1 (OP).Limit:[-,-]
short    s_tlap1;
short    s_tlap1Zi;
//short    tlap2 = Unit[10¦Ì]:Trimmer lap2 (OP).Limit:[-,-]
short    s_tlap2;
short    s_tlap2Zi;
//short    tlap3 = Unit[10¦Ì]:Trimmer lap1 (DR).Limit:[-,-]
short    s_tlap3;
short    s_tlap3Zi;
//short    tlap4 = Unit[10¦Ì]:Trimmer lap2 (DR).Limit:[-,-]
short    s_tlap4;
short    s_tlap4Zi;
//short    plmaster = Unit[10¦Ì]:PL master ON/OFF.Limit:[-,-]
short    s_plmaster;
short    s_plmasterZi;
//short    linsts = Unit[-]:PL line start/stop.Limit:[-,-]
short    s_linsts;
short    s_linstsZi;
//short    awpd1 = Unit[-]:WPD status           1.Limit:[-,-]
short    s_awpd1;
short    s_awpd1Zi;
//short    awpd2 = Unit[-]:WPD status           2.Limit:[-,-]
short    s_awpd2;
short    s_awpd2Zi;
//short    awpd3 = Unit[-]:WPD status           3.Limit:[-,-]
short    s_awpd3;
short    s_awpd3Zi;
//short    awpd4 = Unit[-]:WPD status           4.Limit:[-,-]
short    s_awpd4;
short    s_awpd4Zi;
//short    awpd5 = Unit[-]:WPD status           5.Limit:[-,-]
short    s_awpd5;
short    s_awpd5Zi;
//short    awpd6 = Unit[-]:WPD status           6.Limit:[-,-]
short    s_awpd6;
short    s_awpd6Zi;
//short    arele1 = Unit[-]:Acceleration Rate for entry speed.Limit:[-,-]
short    s_arele1;
short    s_arele1Zi;
//short    arele2 = Unit[-]:Dcceleration Rate for entry speed.Limit:[-,-]
short    s_arele2;
short    s_arele2Zi;
//short    arele3 = Unit[-]:Acceleration Rate for PL speed.Limit:[-,-]
short    s_arele3;
short    s_arele3Zi;
//short    arele4 = Unit[-]:Dcceleration Rate for PL speed.Limit:[-,-]
short    s_arele4;
short    s_arele4Zi;
//short    arele5 = Unit[-]:Acceleration Rate for trimmer speed.Limit:[-,-]
short    s_arele5;
short    s_arele5Zi;
//short    arele6 = Unit[-]:Dcceleration Rate for trimmer speed.Limit:[-,-]
short    s_arele6;
short    s_arele6Zi;
//short    tktemp = Unit[-]:Temperature of Rinse tank.Limit:[-,-]
short    s_tktemp;
short    s_tktempZi;
//short    tkcond = Unit[-]:Conductance of Rinse tank.Limit:[-,-]
short    s_tkcond;
short    s_tkcondZi;
//short    rinspv = Unit[-]:HOT RINSE SUB TANK PV.Limit:[-,-]
short    s_rinspv;
short    s_rinspvZi;
//char     eshct_hcoilno = Unit[-]:Entry shear coil Id.Limit:[-,-]
char     c_eshct_hcoilno[17];
short    s_eshct_hcoilnoZi;
//char     std1_hcoilno = Unit[-]:stand 1 coil Id.Limit:[-,-]
char     c_std1_hcoilno[17];
short    s_std1_hcoilnoZi;
//char     std2_hcoilno = Unit[-]:stand 2 coil Id.Limit:[-,-]
char     c_std2_hcoilno[17];
short    s_std2_hcoilnoZi;
//char     std3_hcoilno = Unit[-]:stand 3 coil Id.Limit:[-,-]
char     c_std3_hcoilno[17];
short    s_std3_hcoilnoZi;
//char     std4_hcoilno = Unit[-]:stand 4 coil Id.Limit:[-,-]
char     c_std4_hcoilno[17];
short    s_std4_hcoilnoZi;
//char     std5_hcoilno = Unit[-]:stand 5 coil Id.Limit:[-,-]
char     c_std5_hcoilno[17];
short    s_std5_hcoilnoZi;
//char     dshct_hcoilno = Unit[-]:Delivery shear coil Id.Limit:[-,-]
char     c_dshct_hcoilno[17];
short    s_dshct_hcoilnoZi;
//char     tr_hcoilno = Unit[-]:TR coil Id.Limit:[-,-]
char     c_tr_hcoilno[17];
short    s_tr_hcoilnoZi;
//short    flatsp_1 = Unit[-]:set points for flatness 1.Limit:[-,-]
short    s_flatsp_1;
short    s_flatsp_1Zi;
//short    flatsp_2 = Unit[-]:set points for flatness 2.Limit:[-,-]
short    s_flatsp_2;
short    s_flatsp_2Zi;
//short    flatsp_3 = Unit[-]:set points for flatness 3.Limit:[-,-]
short    s_flatsp_3;
short    s_flatsp_3Zi;
//short    flatsp_4 = Unit[-]:set points for flatness 4.Limit:[-,-]
short    s_flatsp_4;
short    s_flatsp_4Zi;
//long     std1_len = Unit[-]:length of stand 1.Limit:[-,-]
long     l_std1_len;
short    s_std1_lenZi;
//long     std2_len = Unit[-]:length of stand 2.Limit:[-,-]
long     l_std2_len;
short    s_std2_lenZi;
//long     std3_len = Unit[-]:length of stand 3.Limit:[-,-]
long     l_std3_len;
short    s_std3_lenZi;
//long     std4_len = Unit[-]:length of stand 4.Limit:[-,-]
long     l_std4_len;
short    s_std4_lenZi;
//long     std5_len = Unit[-]:length of stand 5.Limit:[-,-]
long     l_std5_len;
short    s_std5_lenZi;
//char     toc = Unit[-]:create time.Limit:[-,-]
char     c_toc[15];
short    s_tocZi;
//char     tom = Unit[-]:modify time.Limit:[-,-]
char     c_tom[15];
short    s_tomZi;
//char     mop = Unit[-]:creator or modifyer.Limit:[-,-]
char     c_mop[121];
short    s_mopZi;
// arguments for Primary key
short    s_k_samp_no;   // Unit[-]:Sampling no..Limit:[-,500000]

public:
//
//Structure
//
struct STR_ACTDT_PLACT
{
	char      datee[9];
	char      timee[7];
	short     samp_no;
	short     eshct_idx;
	short     eshct_idxZi;
	short     std1_idx;
	short     std1_idxZi;
	short     std2_idx;
	short     std2_idxZi;
	short     std3_idx;
	short     std3_idxZi;
	short     std4_idx;
	short     std4_idxZi;
	short     std5_idx;
	short     std5_idxZi;
	short     dshct_idx;
	short     dshct_idxZi;
	short     tr_idx;
	short     tr_idxZi;
	short     por_no;
	short     por_noZi;
	short     por_dia;
	short     por_diaZi;
	short     por_width;
	short     por_widthZi;
	short     por_thick;
	short     por_thickZi;
	short     por_kind;
	short     por_kindZi;
	short     por_tens;
	short     por_tensZi;
	short     ent_maxsp;
	short     ent_maxspZi;
	short     por_rest;
	short     por_restZi;
	long      dist1;
	short     dist1Zi;
	long      dist2;
	short     dist2Zi;
	long      dist3;
	short     dist3Zi;
	long      dist4;
	short     dist4Zi;
	long      dist5;
	short     dist5Zi;
	long      dist6;
	short     dist6Zi;
	long      dist7;
	short     dist7Zi;
	long      dist8;
	short     dist8Zi;
	long      dist9;
	short     dist9Zi;
	long      dist10;
	short     dist10Zi;
	long      dist11;
	short     dist11Zi;
	long      dist12;
	short     dist12Zi;
	long      dist13;
	short     dist13Zi;
	long      dist14;
	short     dist14Zi;
	long      dist15;
	short     dist15Zi;
	long      dist16;
	short     dist16Zi;
	long      dist17;
	short     dist17Zi;
	long      dist18;
	short     dist18Zi;
	long      dist19;
	short     dist19Zi;
	long      dist20;
	short     dist20Zi;
	long      dist21;
	short     dist21Zi;
	long      dist22;
	short     dist22Zi;
	long      dist23;
	short     dist23Zi;
	long      dist24;
	short     dist24Zi;
	long      dist25;
	short     dist25Zi;
	long      dist26;
	short     dist26Zi;
	long      dist27;
	short     dist27Zi;
	long      dist28;
	short     dist28Zi;
	long      dist29;
	short     dist29Zi;
	long      dist30;
	short     dist30Zi;
	long      dist31;
	short     dist31Zi;
	long      dist32;
	short     dist32Zi;
	long      dist33;
	short     dist33Zi;
	long      dist34;
	short     dist34Zi;
	short     csmode;
	short     csmodeZi;
	short     porno;
	short     pornoZi;
	short     ttens;
	short     ttensZi;
	short     dia1;
	short     dia1Zi;
	short     dia2;
	short     dia2Zi;
	short     ten1;
	short     ten1Zi;
	short     ten2;
	short     ten2Zi;
	short     prrl1;
	short     prrl1Zi;
	short     prrl2;
	short     prrl2Zi;
	short     prrl3;
	short     prrl3Zi;
	short     prrl4;
	short     prrl4Zi;
	short     prrl5;
	short     prrl5Zi;
	short     prrl6;
	short     prrl6Zi;
	short     sspd;
	short     sspdZi;
	long      slop1_len;
	short     slop1_lenZi;
	short     slop1_pos;
	short     slop1_posZi;
	short     slop1_tens;
	short     slop1_tensZi;
	long      slop2_len;
	short     slop2_lenZi;
	short     slop2_pos;
	short     slop2_posZi;
	short     slop2_tens;
	short     slop2_tensZi;
	long      slop3_len;
	short     slop3_lenZi;
	short     slop3_pos;
	short     slop3_posZi;
	short     slop3_tens;
	short     slop3_tensZi;
	short     espd;
	short     espdZi;
	short     cspd;
	short     cspdZi;
	short     tens;
	short     tensZi;
	short     plbth1_1;
	short     plbth1_1Zi;
	short     plbth1_2;
	short     plbth1_2Zi;
	short     plbth1_3;
	short     plbth1_3Zi;
	short     plbth2_1;
	short     plbth2_1Zi;
	short     plbth2_2;
	short     plbth2_2Zi;
	short     plbth2_3;
	short     plbth2_3Zi;
	short     plbth3_1;
	short     plbth3_1Zi;
	short     plbth3_2;
	short     plbth3_2Zi;
	short     plbth3_3;
	short     plbth3_3Zi;
	short     tvl_use;
	short     tvl_useZi;
	long      tens1;
	short     tens1Zi;
	long      rims1;
	short     rims1Zi;
	long      rims2;
	short     rims2Zi;
	long      rims3;
	short     rims3Zi;
	long      elg;
	short     elgZi;
	long      tvl_espd;
	short     tvl_espdZi;
	short     spd;
	short     spdZi;
	short     wid1;
	short     wid1Zi;
	short     wid2;
	short     wid2Zi;
	short     wid3;
	short     wid3Zi;
	short     trm_use;
	short     trm_useZi;
	short     tno1;
	short     tno1Zi;
	short     tno2;
	short     tno2Zi;
	short     tgap1;
	short     tgap1Zi;
	short     tgap2;
	short     tgap2Zi;
	short     tgap3;
	short     tgap3Zi;
	short     tgap4;
	short     tgap4Zi;
	short     tlap1;
	short     tlap1Zi;
	short     tlap2;
	short     tlap2Zi;
	short     tlap3;
	short     tlap3Zi;
	short     tlap4;
	short     tlap4Zi;
	short     plmaster;
	short     plmasterZi;
	short     linsts;
	short     linstsZi;
	short     awpd1;
	short     awpd1Zi;
	short     awpd2;
	short     awpd2Zi;
	short     awpd3;
	short     awpd3Zi;
	short     awpd4;
	short     awpd4Zi;
	short     awpd5;
	short     awpd5Zi;
	short     awpd6;
	short     awpd6Zi;
	short     arele1;
	short     arele1Zi;
	short     arele2;
	short     arele2Zi;
	short     arele3;
	short     arele3Zi;
	short     arele4;
	short     arele4Zi;
	short     arele5;
	short     arele5Zi;
	short     arele6;
	short     arele6Zi;
	short     tktemp;
	short     tktempZi;
	short     tkcond;
	short     tkcondZi;
	short     rinspv;
	short     rinspvZi;
	char      eshct_hcoilno[17];
	short     eshct_hcoilnoZi;
	char      std1_hcoilno[17];
	short     std1_hcoilnoZi;
	char      std2_hcoilno[17];
	short     std2_hcoilnoZi;
	char      std3_hcoilno[17];
	short     std3_hcoilnoZi;
	char      std4_hcoilno[17];
	short     std4_hcoilnoZi;
	char      std5_hcoilno[17];
	short     std5_hcoilnoZi;
	char      dshct_hcoilno[17];
	short     dshct_hcoilnoZi;
	char      tr_hcoilno[17];
	short     tr_hcoilnoZi;
	short     flatsp_1;
	short     flatsp_1Zi;
	short     flatsp_2;
	short     flatsp_2Zi;
	short     flatsp_3;
	short     flatsp_3Zi;
	short     flatsp_4;
	short     flatsp_4Zi;
	long      std1_len;
	short     std1_lenZi;
	long      std2_len;
	short     std2_lenZi;
	long      std3_len;
	short     std3_lenZi;
	long      std4_len;
	short     std4_lenZi;
	long      std5_len;
	short     std5_lenZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structACTDT_PLACT;
  
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
ACTDT_PLACT();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~ACTDT_PLACT();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
ACTDT_PLACT(const ACTDT_PLACT &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//short	samp_no= Unit[-]:Sampling no..Limit:[-,500000]
ACTDT_PLACT( short arg1);

//methods
public:
//get creation time
char* getCreationTime(){ return "13.06.2013 16:38:26";};

//methods
public:
//initialise all member variables
void initial();

//methods
public:
//read a single entry from DB.
char* readDB();

//methods
public:
//updates a single entry from DB
char* updateDB();

//methods
public:
//inserts a single entry from DB
char* insertDB();

//methods
public:
//this methode tries to update a DB record,when the update fails.
char* storeDB();

//methods
public:
//deletes a single entry from DB
char* deleteDB();

//methods
public:
// Executes the SQL DELETE with a where clause
char* deleteDB(const char* where, long* count);
//methods
public:
//openSetDB data with where condition and sort order.
char* openSetDB(const char* where, char* order);
//methods
public:
//Executes the SQL FETCH Statement .
char* getSetDB();

//methods
public:
//Close a Oracle Cursor
char* closeSetDB();

//methods
public:
//Executes the SQL count(key) for a where clause
char* countDB(const char* where, long* count);
//methods
public:
//this methode filles the class structue with the private attributes.
void fillStructure()
{
	strncpy (structACTDT_PLACT.datee, datee(), sizeof( structACTDT_PLACT.datee));
	strncpy (structACTDT_PLACT.timee, timee(), sizeof( structACTDT_PLACT.timee));
	structACTDT_PLACT.samp_no = samp_no();
	structACTDT_PLACT.eshct_idx = eshct_idx();
	structACTDT_PLACT.eshct_idxZi = eshct_idxZi();
	structACTDT_PLACT.std1_idx = std1_idx();
	structACTDT_PLACT.std1_idxZi = std1_idxZi();
	structACTDT_PLACT.std2_idx = std2_idx();
	structACTDT_PLACT.std2_idxZi = std2_idxZi();
	structACTDT_PLACT.std3_idx = std3_idx();
	structACTDT_PLACT.std3_idxZi = std3_idxZi();
	structACTDT_PLACT.std4_idx = std4_idx();
	structACTDT_PLACT.std4_idxZi = std4_idxZi();
	structACTDT_PLACT.std5_idx = std5_idx();
	structACTDT_PLACT.std5_idxZi = std5_idxZi();
	structACTDT_PLACT.dshct_idx = dshct_idx();
	structACTDT_PLACT.dshct_idxZi = dshct_idxZi();
	structACTDT_PLACT.tr_idx = tr_idx();
	structACTDT_PLACT.tr_idxZi = tr_idxZi();
	structACTDT_PLACT.por_no = por_no();
	structACTDT_PLACT.por_noZi = por_noZi();
	structACTDT_PLACT.por_dia = por_dia();
	structACTDT_PLACT.por_diaZi = por_diaZi();
	structACTDT_PLACT.por_width = por_width();
	structACTDT_PLACT.por_widthZi = por_widthZi();
	structACTDT_PLACT.por_thick = por_thick();
	structACTDT_PLACT.por_thickZi = por_thickZi();
	structACTDT_PLACT.por_kind = por_kind();
	structACTDT_PLACT.por_kindZi = por_kindZi();
	structACTDT_PLACT.por_tens = por_tens();
	structACTDT_PLACT.por_tensZi = por_tensZi();
	structACTDT_PLACT.ent_maxsp = ent_maxsp();
	structACTDT_PLACT.ent_maxspZi = ent_maxspZi();
	structACTDT_PLACT.por_rest = por_rest();
	structACTDT_PLACT.por_restZi = por_restZi();
	structACTDT_PLACT.dist1 = dist1();
	structACTDT_PLACT.dist1Zi = dist1Zi();
	structACTDT_PLACT.dist2 = dist2();
	structACTDT_PLACT.dist2Zi = dist2Zi();
	structACTDT_PLACT.dist3 = dist3();
	structACTDT_PLACT.dist3Zi = dist3Zi();
	structACTDT_PLACT.dist4 = dist4();
	structACTDT_PLACT.dist4Zi = dist4Zi();
	structACTDT_PLACT.dist5 = dist5();
	structACTDT_PLACT.dist5Zi = dist5Zi();
	structACTDT_PLACT.dist6 = dist6();
	structACTDT_PLACT.dist6Zi = dist6Zi();
	structACTDT_PLACT.dist7 = dist7();
	structACTDT_PLACT.dist7Zi = dist7Zi();
	structACTDT_PLACT.dist8 = dist8();
	structACTDT_PLACT.dist8Zi = dist8Zi();
	structACTDT_PLACT.dist9 = dist9();
	structACTDT_PLACT.dist9Zi = dist9Zi();
	structACTDT_PLACT.dist10 = dist10();
	structACTDT_PLACT.dist10Zi = dist10Zi();
	structACTDT_PLACT.dist11 = dist11();
	structACTDT_PLACT.dist11Zi = dist11Zi();
	structACTDT_PLACT.dist12 = dist12();
	structACTDT_PLACT.dist12Zi = dist12Zi();
	structACTDT_PLACT.dist13 = dist13();
	structACTDT_PLACT.dist13Zi = dist13Zi();
	structACTDT_PLACT.dist14 = dist14();
	structACTDT_PLACT.dist14Zi = dist14Zi();
	structACTDT_PLACT.dist15 = dist15();
	structACTDT_PLACT.dist15Zi = dist15Zi();
	structACTDT_PLACT.dist16 = dist16();
	structACTDT_PLACT.dist16Zi = dist16Zi();
	structACTDT_PLACT.dist17 = dist17();
	structACTDT_PLACT.dist17Zi = dist17Zi();
	structACTDT_PLACT.dist18 = dist18();
	structACTDT_PLACT.dist18Zi = dist18Zi();
	structACTDT_PLACT.dist19 = dist19();
	structACTDT_PLACT.dist19Zi = dist19Zi();
	structACTDT_PLACT.dist20 = dist20();
	structACTDT_PLACT.dist20Zi = dist20Zi();
	structACTDT_PLACT.dist21 = dist21();
	structACTDT_PLACT.dist21Zi = dist21Zi();
	structACTDT_PLACT.dist22 = dist22();
	structACTDT_PLACT.dist22Zi = dist22Zi();
	structACTDT_PLACT.dist23 = dist23();
	structACTDT_PLACT.dist23Zi = dist23Zi();
	structACTDT_PLACT.dist24 = dist24();
	structACTDT_PLACT.dist24Zi = dist24Zi();
	structACTDT_PLACT.dist25 = dist25();
	structACTDT_PLACT.dist25Zi = dist25Zi();
	structACTDT_PLACT.dist26 = dist26();
	structACTDT_PLACT.dist26Zi = dist26Zi();
	structACTDT_PLACT.dist27 = dist27();
	structACTDT_PLACT.dist27Zi = dist27Zi();
	structACTDT_PLACT.dist28 = dist28();
	structACTDT_PLACT.dist28Zi = dist28Zi();
	structACTDT_PLACT.dist29 = dist29();
	structACTDT_PLACT.dist29Zi = dist29Zi();
	structACTDT_PLACT.dist30 = dist30();
	structACTDT_PLACT.dist30Zi = dist30Zi();
	structACTDT_PLACT.dist31 = dist31();
	structACTDT_PLACT.dist31Zi = dist31Zi();
	structACTDT_PLACT.dist32 = dist32();
	structACTDT_PLACT.dist32Zi = dist32Zi();
	structACTDT_PLACT.dist33 = dist33();
	structACTDT_PLACT.dist33Zi = dist33Zi();
	structACTDT_PLACT.dist34 = dist34();
	structACTDT_PLACT.dist34Zi = dist34Zi();
	structACTDT_PLACT.csmode = csmode();
	structACTDT_PLACT.csmodeZi = csmodeZi();
	structACTDT_PLACT.porno = porno();
	structACTDT_PLACT.pornoZi = pornoZi();
	structACTDT_PLACT.ttens = ttens();
	structACTDT_PLACT.ttensZi = ttensZi();
	structACTDT_PLACT.dia1 = dia1();
	structACTDT_PLACT.dia1Zi = dia1Zi();
	structACTDT_PLACT.dia2 = dia2();
	structACTDT_PLACT.dia2Zi = dia2Zi();
	structACTDT_PLACT.ten1 = ten1();
	structACTDT_PLACT.ten1Zi = ten1Zi();
	structACTDT_PLACT.ten2 = ten2();
	structACTDT_PLACT.ten2Zi = ten2Zi();
	structACTDT_PLACT.prrl1 = prrl1();
	structACTDT_PLACT.prrl1Zi = prrl1Zi();
	structACTDT_PLACT.prrl2 = prrl2();
	structACTDT_PLACT.prrl2Zi = prrl2Zi();
	structACTDT_PLACT.prrl3 = prrl3();
	structACTDT_PLACT.prrl3Zi = prrl3Zi();
	structACTDT_PLACT.prrl4 = prrl4();
	structACTDT_PLACT.prrl4Zi = prrl4Zi();
	structACTDT_PLACT.prrl5 = prrl5();
	structACTDT_PLACT.prrl5Zi = prrl5Zi();
	structACTDT_PLACT.prrl6 = prrl6();
	structACTDT_PLACT.prrl6Zi = prrl6Zi();
	structACTDT_PLACT.sspd = sspd();
	structACTDT_PLACT.sspdZi = sspdZi();
	structACTDT_PLACT.slop1_len = slop1_len();
	structACTDT_PLACT.slop1_lenZi = slop1_lenZi();
	structACTDT_PLACT.slop1_pos = slop1_pos();
	structACTDT_PLACT.slop1_posZi = slop1_posZi();
	structACTDT_PLACT.slop1_tens = slop1_tens();
	structACTDT_PLACT.slop1_tensZi = slop1_tensZi();
	structACTDT_PLACT.slop2_len = slop2_len();
	structACTDT_PLACT.slop2_lenZi = slop2_lenZi();
	structACTDT_PLACT.slop2_pos = slop2_pos();
	structACTDT_PLACT.slop2_posZi = slop2_posZi();
	structACTDT_PLACT.slop2_tens = slop2_tens();
	structACTDT_PLACT.slop2_tensZi = slop2_tensZi();
	structACTDT_PLACT.slop3_len = slop3_len();
	structACTDT_PLACT.slop3_lenZi = slop3_lenZi();
	structACTDT_PLACT.slop3_pos = slop3_pos();
	structACTDT_PLACT.slop3_posZi = slop3_posZi();
	structACTDT_PLACT.slop3_tens = slop3_tens();
	structACTDT_PLACT.slop3_tensZi = slop3_tensZi();
	structACTDT_PLACT.espd = espd();
	structACTDT_PLACT.espdZi = espdZi();
	structACTDT_PLACT.cspd = cspd();
	structACTDT_PLACT.cspdZi = cspdZi();
	structACTDT_PLACT.tens = tens();
	structACTDT_PLACT.tensZi = tensZi();
	structACTDT_PLACT.plbth1_1 = plbth1_1();
	structACTDT_PLACT.plbth1_1Zi = plbth1_1Zi();
	structACTDT_PLACT.plbth1_2 = plbth1_2();
	structACTDT_PLACT.plbth1_2Zi = plbth1_2Zi();
	structACTDT_PLACT.plbth1_3 = plbth1_3();
	structACTDT_PLACT.plbth1_3Zi = plbth1_3Zi();
	structACTDT_PLACT.plbth2_1 = plbth2_1();
	structACTDT_PLACT.plbth2_1Zi = plbth2_1Zi();
	structACTDT_PLACT.plbth2_2 = plbth2_2();
	structACTDT_PLACT.plbth2_2Zi = plbth2_2Zi();
	structACTDT_PLACT.plbth2_3 = plbth2_3();
	structACTDT_PLACT.plbth2_3Zi = plbth2_3Zi();
	structACTDT_PLACT.plbth3_1 = plbth3_1();
	structACTDT_PLACT.plbth3_1Zi = plbth3_1Zi();
	structACTDT_PLACT.plbth3_2 = plbth3_2();
	structACTDT_PLACT.plbth3_2Zi = plbth3_2Zi();
	structACTDT_PLACT.plbth3_3 = plbth3_3();
	structACTDT_PLACT.plbth3_3Zi = plbth3_3Zi();
	structACTDT_PLACT.tvl_use = tvl_use();
	structACTDT_PLACT.tvl_useZi = tvl_useZi();
	structACTDT_PLACT.tens1 = tens1();
	structACTDT_PLACT.tens1Zi = tens1Zi();
	structACTDT_PLACT.rims1 = rims1();
	structACTDT_PLACT.rims1Zi = rims1Zi();
	structACTDT_PLACT.rims2 = rims2();
	structACTDT_PLACT.rims2Zi = rims2Zi();
	structACTDT_PLACT.rims3 = rims3();
	structACTDT_PLACT.rims3Zi = rims3Zi();
	structACTDT_PLACT.elg = elg();
	structACTDT_PLACT.elgZi = elgZi();
	structACTDT_PLACT.tvl_espd = tvl_espd();
	structACTDT_PLACT.tvl_espdZi = tvl_espdZi();
	structACTDT_PLACT.spd = spd();
	structACTDT_PLACT.spdZi = spdZi();
	structACTDT_PLACT.wid1 = wid1();
	structACTDT_PLACT.wid1Zi = wid1Zi();
	structACTDT_PLACT.wid2 = wid2();
	structACTDT_PLACT.wid2Zi = wid2Zi();
	structACTDT_PLACT.wid3 = wid3();
	structACTDT_PLACT.wid3Zi = wid3Zi();
	structACTDT_PLACT.trm_use = trm_use();
	structACTDT_PLACT.trm_useZi = trm_useZi();
	structACTDT_PLACT.tno1 = tno1();
	structACTDT_PLACT.tno1Zi = tno1Zi();
	structACTDT_PLACT.tno2 = tno2();
	structACTDT_PLACT.tno2Zi = tno2Zi();
	structACTDT_PLACT.tgap1 = tgap1();
	structACTDT_PLACT.tgap1Zi = tgap1Zi();
	structACTDT_PLACT.tgap2 = tgap2();
	structACTDT_PLACT.tgap2Zi = tgap2Zi();
	structACTDT_PLACT.tgap3 = tgap3();
	structACTDT_PLACT.tgap3Zi = tgap3Zi();
	structACTDT_PLACT.tgap4 = tgap4();
	structACTDT_PLACT.tgap4Zi = tgap4Zi();
	structACTDT_PLACT.tlap1 = tlap1();
	structACTDT_PLACT.tlap1Zi = tlap1Zi();
	structACTDT_PLACT.tlap2 = tlap2();
	structACTDT_PLACT.tlap2Zi = tlap2Zi();
	structACTDT_PLACT.tlap3 = tlap3();
	structACTDT_PLACT.tlap3Zi = tlap3Zi();
	structACTDT_PLACT.tlap4 = tlap4();
	structACTDT_PLACT.tlap4Zi = tlap4Zi();
	structACTDT_PLACT.plmaster = plmaster();
	structACTDT_PLACT.plmasterZi = plmasterZi();
	structACTDT_PLACT.linsts = linsts();
	structACTDT_PLACT.linstsZi = linstsZi();
	structACTDT_PLACT.awpd1 = awpd1();
	structACTDT_PLACT.awpd1Zi = awpd1Zi();
	structACTDT_PLACT.awpd2 = awpd2();
	structACTDT_PLACT.awpd2Zi = awpd2Zi();
	structACTDT_PLACT.awpd3 = awpd3();
	structACTDT_PLACT.awpd3Zi = awpd3Zi();
	structACTDT_PLACT.awpd4 = awpd4();
	structACTDT_PLACT.awpd4Zi = awpd4Zi();
	structACTDT_PLACT.awpd5 = awpd5();
	structACTDT_PLACT.awpd5Zi = awpd5Zi();
	structACTDT_PLACT.awpd6 = awpd6();
	structACTDT_PLACT.awpd6Zi = awpd6Zi();
	structACTDT_PLACT.arele1 = arele1();
	structACTDT_PLACT.arele1Zi = arele1Zi();
	structACTDT_PLACT.arele2 = arele2();
	structACTDT_PLACT.arele2Zi = arele2Zi();
	structACTDT_PLACT.arele3 = arele3();
	structACTDT_PLACT.arele3Zi = arele3Zi();
	structACTDT_PLACT.arele4 = arele4();
	structACTDT_PLACT.arele4Zi = arele4Zi();
	structACTDT_PLACT.arele5 = arele5();
	structACTDT_PLACT.arele5Zi = arele5Zi();
	structACTDT_PLACT.arele6 = arele6();
	structACTDT_PLACT.arele6Zi = arele6Zi();
	structACTDT_PLACT.tktemp = tktemp();
	structACTDT_PLACT.tktempZi = tktempZi();
	structACTDT_PLACT.tkcond = tkcond();
	structACTDT_PLACT.tkcondZi = tkcondZi();
	structACTDT_PLACT.rinspv = rinspv();
	structACTDT_PLACT.rinspvZi = rinspvZi();
	strncpy (structACTDT_PLACT.eshct_hcoilno, eshct_hcoilno(), sizeof( structACTDT_PLACT.eshct_hcoilno));
	structACTDT_PLACT.eshct_hcoilnoZi = eshct_hcoilnoZi();
	strncpy (structACTDT_PLACT.std1_hcoilno, std1_hcoilno(), sizeof( structACTDT_PLACT.std1_hcoilno));
	structACTDT_PLACT.std1_hcoilnoZi = std1_hcoilnoZi();
	strncpy (structACTDT_PLACT.std2_hcoilno, std2_hcoilno(), sizeof( structACTDT_PLACT.std2_hcoilno));
	structACTDT_PLACT.std2_hcoilnoZi = std2_hcoilnoZi();
	strncpy (structACTDT_PLACT.std3_hcoilno, std3_hcoilno(), sizeof( structACTDT_PLACT.std3_hcoilno));
	structACTDT_PLACT.std3_hcoilnoZi = std3_hcoilnoZi();
	strncpy (structACTDT_PLACT.std4_hcoilno, std4_hcoilno(), sizeof( structACTDT_PLACT.std4_hcoilno));
	structACTDT_PLACT.std4_hcoilnoZi = std4_hcoilnoZi();
	strncpy (structACTDT_PLACT.std5_hcoilno, std5_hcoilno(), sizeof( structACTDT_PLACT.std5_hcoilno));
	structACTDT_PLACT.std5_hcoilnoZi = std5_hcoilnoZi();
	strncpy (structACTDT_PLACT.dshct_hcoilno, dshct_hcoilno(), sizeof( structACTDT_PLACT.dshct_hcoilno));
	structACTDT_PLACT.dshct_hcoilnoZi = dshct_hcoilnoZi();
	strncpy (structACTDT_PLACT.tr_hcoilno, tr_hcoilno(), sizeof( structACTDT_PLACT.tr_hcoilno));
	structACTDT_PLACT.tr_hcoilnoZi = tr_hcoilnoZi();
	structACTDT_PLACT.flatsp_1 = flatsp_1();
	structACTDT_PLACT.flatsp_1Zi = flatsp_1Zi();
	structACTDT_PLACT.flatsp_2 = flatsp_2();
	structACTDT_PLACT.flatsp_2Zi = flatsp_2Zi();
	structACTDT_PLACT.flatsp_3 = flatsp_3();
	structACTDT_PLACT.flatsp_3Zi = flatsp_3Zi();
	structACTDT_PLACT.flatsp_4 = flatsp_4();
	structACTDT_PLACT.flatsp_4Zi = flatsp_4Zi();
	structACTDT_PLACT.std1_len = std1_len();
	structACTDT_PLACT.std1_lenZi = std1_lenZi();
	structACTDT_PLACT.std2_len = std2_len();
	structACTDT_PLACT.std2_lenZi = std2_lenZi();
	structACTDT_PLACT.std3_len = std3_len();
	structACTDT_PLACT.std3_lenZi = std3_lenZi();
	structACTDT_PLACT.std4_len = std4_len();
	structACTDT_PLACT.std4_lenZi = std4_lenZi();
	structACTDT_PLACT.std5_len = std5_len();
	structACTDT_PLACT.std5_lenZi = std5_lenZi();
	strncpy (structACTDT_PLACT.toc, toc(), sizeof( structACTDT_PLACT.toc));
	structACTDT_PLACT.tocZi = tocZi();
	strncpy (structACTDT_PLACT.tom, tom(), sizeof( structACTDT_PLACT.tom));
	structACTDT_PLACT.tomZi = tomZi();
	strncpy (structACTDT_PLACT.mop, mop(), sizeof( structACTDT_PLACT.mop));
	structACTDT_PLACT.mopZi = mopZi();
	return; 
}

//methods
public:
//get sqlcode of last operation
long getSqlCode() { return ( oracleSqlCode);};

//methods
public:
//get Process row numbers
long getRowsProcessed() { return ( oracleRowsProcessed);};

//methods
public:
//this methode stores the unique key attributes
void setPrimKey(short arg1);

//methods
public:
//this methode stores the unique key attributes
void initInsertKeys(short arg1);

//methods
public:
//this methode set the unique key attributes from the DB Record Attributes
void setKeysFromRecord();

//		            
//O P E R A T O R  + 
//===================
//                   
//methods
public:
//
ACTDT_PLACT operator+(const ACTDT_PLACT &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const ACTDT_PLACT& operator=(const ACTDT_PLACT &inst);

         
//methods
private:
//get table name or class name
char* getName();

//methods
private:
//private methode copy Attribute to Oracle
void copyAttributeToOracle();

//methods
private:
//private methode copy Oracle to Attribute
void copyOracleToAttribute();

//methods
private:
//private methode copy Key to host
void copyKeyToHost();

//methods
private:
//private methode copy Host to Key
void copyHostToKey();

//methods
private:
//private methode log Oracle message information
void logOraMessageInfo();

  
public:      
//char* datee = Unit[-]:Date.Limit:[-,-]
char*  datee() const
{
   return ((char*)c_datee);
}

void  set_datee (const char* arg)
{
   strncpy((char*)c_datee, arg, sizeof(c_datee));
    c_datee[sizeof(c_datee)-1] = '\0';
   return;
}

//char* timee = Unit[-]:Time.Limit:[-,-]
char*  timee() const
{
   return ((char*)c_timee);
}

void  set_timee (const char* arg)
{
   strncpy((char*)c_timee, arg, sizeof(c_timee));
    c_timee[sizeof(c_timee)-1] = '\0';
   return;
}

//short samp_no = Unit[-]:Sampling no..Limit:[-,500000]
short  samp_no() const
{
   return (s_samp_no);
}

void  set_samp_no (short arg)
{
   s_samp_no= arg;
   return;
}

//shortk_samp_no = Unit[-]:Sampling no..Limit:[-,500000]
short  k_samp_no() const
{
   return (s_k_samp_no);
}

void  set_k_samp_no (short arg)
{
   s_k_samp_no= arg;
    return;
}

//short eshct_idx = Unit[-]:Tracking index WPDX24-E.shear.Limit:[-,-]
short  eshct_idx() const
{
   return (s_eshct_idx);
}

void  set_eshct_idx (short arg)
{
   s_eshct_idx= arg;
   s_eshct_idxZi = 0;
   return;
}

short   eshct_idxZi() const
{
   return (s_eshct_idxZi);
}

void  set_eshct_idxZi(short arg)
{
   s_eshct_idxZi= arg;
    return;
}

//short std1_idx = Unit[-]:Tracking index E.shear-std1.Limit:[-,-]
short  std1_idx() const
{
   return (s_std1_idx);
}

void  set_std1_idx (short arg)
{
   s_std1_idx= arg;
   s_std1_idxZi = 0;
   return;
}

short   std1_idxZi() const
{
   return (s_std1_idxZi);
}

void  set_std1_idxZi(short arg)
{
   s_std1_idxZi= arg;
    return;
}

//short std2_idx = Unit[-]:Tracking index std1-std2.Limit:[-,-]
short  std2_idx() const
{
   return (s_std2_idx);
}

void  set_std2_idx (short arg)
{
   s_std2_idx= arg;
   s_std2_idxZi = 0;
   return;
}

short   std2_idxZi() const
{
   return (s_std2_idxZi);
}

void  set_std2_idxZi(short arg)
{
   s_std2_idxZi= arg;
    return;
}

//short std3_idx = Unit[-]:Tracking index std2-std3.Limit:[-,-]
short  std3_idx() const
{
   return (s_std3_idx);
}

void  set_std3_idx (short arg)
{
   s_std3_idx= arg;
   s_std3_idxZi = 0;
   return;
}

short   std3_idxZi() const
{
   return (s_std3_idxZi);
}

void  set_std3_idxZi(short arg)
{
   s_std3_idxZi= arg;
    return;
}

//short std4_idx = Unit[-]:Tracking index std3-std4.Limit:[-,-]
short  std4_idx() const
{
   return (s_std4_idx);
}

void  set_std4_idx (short arg)
{
   s_std4_idx= arg;
   s_std4_idxZi = 0;
   return;
}

short   std4_idxZi() const
{
   return (s_std4_idxZi);
}

void  set_std4_idxZi(short arg)
{
   s_std4_idxZi= arg;
    return;
}

//short std5_idx = Unit[-]:Tracking index std4-std5.Limit:[-,-]
short  std5_idx() const
{
   return (s_std5_idx);
}

void  set_std5_idx (short arg)
{
   s_std5_idx= arg;
   s_std5_idxZi = 0;
   return;
}

short   std5_idxZi() const
{
   return (s_std5_idxZi);
}

void  set_std5_idxZi(short arg)
{
   s_std5_idxZi= arg;
    return;
}

//short dshct_idx = Unit[-]:Tracking index std5-D.shear.Limit:[-,-]
short  dshct_idx() const
{
   return (s_dshct_idx);
}

void  set_dshct_idx (short arg)
{
   s_dshct_idx= arg;
   s_dshct_idxZi = 0;
   return;
}

short   dshct_idxZi() const
{
   return (s_dshct_idxZi);
}

void  set_dshct_idxZi(short arg)
{
   s_dshct_idxZi= arg;
    return;
}

//short tr_idx = Unit[-]:Tracking index D.shear-TR.Limit:[-,-]
short  tr_idx() const
{
   return (s_tr_idx);
}

void  set_tr_idx (short arg)
{
   s_tr_idx= arg;
   s_tr_idxZi = 0;
   return;
}

short   tr_idxZi() const
{
   return (s_tr_idxZi);
}

void  set_tr_idxZi(short arg)
{
   s_tr_idxZi= arg;
    return;
}

//short por_no = Unit[-]:Paying off POR no.Limit:[-,-]
short  por_no() const
{
   return (s_por_no);
}

void  set_por_no (short arg)
{
   s_por_no= arg;
   s_por_noZi = 0;
   return;
}

short   por_noZi() const
{
   return (s_por_noZi);
}

void  set_por_noZi(short arg)
{
   s_por_noZi= arg;
    return;
}

//short por_dia = Unit[mm]:POR outer diameter.Limit:[-,-]
short  por_dia() const
{
   return (s_por_dia);
}

void  set_por_dia (short arg)
{
   s_por_dia= arg;
   s_por_diaZi = 0;
   return;
}

short   por_diaZi() const
{
   return (s_por_diaZi);
}

void  set_por_diaZi(short arg)
{
   s_por_diaZi= arg;
    return;
}

//short por_width = Unit[mm]:Coil width.Limit:[-,-]
short  por_width() const
{
   return (s_por_width);
}

void  set_por_width (short arg)
{
   s_por_width= arg;
   s_por_widthZi = 0;
   return;
}

short   por_widthZi() const
{
   return (s_por_widthZi);
}

void  set_por_widthZi(short arg)
{
   s_por_widthZi= arg;
    return;
}

//short por_thick = Unit[10-3mm]:Coil thickness.Limit:[-,-]
short  por_thick() const
{
   return (s_por_thick);
}

void  set_por_thick (short arg)
{
   s_por_thick= arg;
   s_por_thickZi = 0;
   return;
}

short   por_thickZi() const
{
   return (s_por_thickZi);
}

void  set_por_thickZi(short arg)
{
   s_por_thickZi= arg;
    return;
}

//short por_kind = Unit[-]:Coil kind.Limit:[-,-]
short  por_kind() const
{
   return (s_por_kind);
}

void  set_por_kind (short arg)
{
   s_por_kind= arg;
   s_por_kindZi = 0;
   return;
}

short   por_kindZi() const
{
   return (s_por_kindZi);
}

void  set_por_kindZi(short arg)
{
   s_por_kindZi= arg;
    return;
}

//short por_tens = Unit[10N]:POR tension.Limit:[-,-]
short  por_tens() const
{
   return (s_por_tens);
}

void  set_por_tens (short arg)
{
   s_por_tens= arg;
   s_por_tensZi = 0;
   return;
}

short   por_tensZi() const
{
   return (s_por_tensZi);
}

void  set_por_tensZi(short arg)
{
   s_por_tensZi= arg;
    return;
}

//short ent_maxsp = Unit[mpm]:Entry Max. Speed.Limit:[-,-]
short  ent_maxsp() const
{
   return (s_ent_maxsp);
}

void  set_ent_maxsp (short arg)
{
   s_ent_maxsp= arg;
   s_ent_maxspZi = 0;
   return;
}

short   ent_maxspZi() const
{
   return (s_ent_maxspZi);
}

void  set_ent_maxspZi(short arg)
{
   s_ent_maxspZi= arg;
    return;
}

//short por_rest = Unit[m]:Paying off Reel length.Limit:[-,-]
short  por_rest() const
{
   return (s_por_rest);
}

void  set_por_rest (short arg)
{
   s_por_rest= arg;
   s_por_restZi = 0;
   return;
}

short   por_restZi() const
{
   return (s_por_restZi);
}

void  set_por_restZi(short arg)
{
   s_por_restZi= arg;
    return;
}

//long dist1 = Unit[mm]:Distance between WPDX1 and WPDX2.Limit:[-,-]
long  dist1() const
{
   return (l_dist1);
}

void  set_dist1 (long arg)
{
   l_dist1= arg;
   s_dist1Zi = 0;
   return;
}

short   dist1Zi() const
{
   return (s_dist1Zi);
}

void  set_dist1Zi(short arg)
{
   s_dist1Zi= arg;
    return;
}

//long dist2 = Unit[mm]:Distance between WPDX2 and WPDX3.Limit:[-,-]
long  dist2() const
{
   return (l_dist2);
}

void  set_dist2 (long arg)
{
   l_dist2= arg;
   s_dist2Zi = 0;
   return;
}

short   dist2Zi() const
{
   return (s_dist2Zi);
}

void  set_dist2Zi(short arg)
{
   s_dist2Zi= arg;
    return;
}

//long dist3 = Unit[mm]:Distance between WPDX3 and WPDX4.Limit:[-,-]
long  dist3() const
{
   return (l_dist3);
}

void  set_dist3 (long arg)
{
   l_dist3= arg;
   s_dist3Zi = 0;
   return;
}

short   dist3Zi() const
{
   return (s_dist3Zi);
}

void  set_dist3Zi(short arg)
{
   s_dist3Zi= arg;
    return;
}

//long dist4 = Unit[mm]:Distance between WPDX4 and WPDX5.Limit:[-,-]
long  dist4() const
{
   return (l_dist4);
}

void  set_dist4 (long arg)
{
   l_dist4= arg;
   s_dist4Zi = 0;
   return;
}

short   dist4Zi() const
{
   return (s_dist4Zi);
}

void  set_dist4Zi(short arg)
{
   s_dist4Zi= arg;
    return;
}

//long dist5 = Unit[mm]:Distance between WPDX5 and WPDX6.Limit:[-,-]
long  dist5() const
{
   return (l_dist5);
}

void  set_dist5 (long arg)
{
   l_dist5= arg;
   s_dist5Zi = 0;
   return;
}

short   dist5Zi() const
{
   return (s_dist5Zi);
}

void  set_dist5Zi(short arg)
{
   s_dist5Zi= arg;
    return;
}

//long dist6 = Unit[mm]:Distance between WPDX6 and WPDX7.Limit:[-,-]
long  dist6() const
{
   return (l_dist6);
}

void  set_dist6 (long arg)
{
   l_dist6= arg;
   s_dist6Zi = 0;
   return;
}

short   dist6Zi() const
{
   return (s_dist6Zi);
}

void  set_dist6Zi(short arg)
{
   s_dist6Zi= arg;
    return;
}

//long dist7 = Unit[mm]:Distance between WPDX7 and WPDX8.Limit:[-,-]
long  dist7() const
{
   return (l_dist7);
}

void  set_dist7 (long arg)
{
   l_dist7= arg;
   s_dist7Zi = 0;
   return;
}

short   dist7Zi() const
{
   return (s_dist7Zi);
}

void  set_dist7Zi(short arg)
{
   s_dist7Zi= arg;
    return;
}

//long dist8 = Unit[mm]:Distance between WPDX8 and WPDX9.Limit:[-,-]
long  dist8() const
{
   return (l_dist8);
}

void  set_dist8 (long arg)
{
   l_dist8= arg;
   s_dist8Zi = 0;
   return;
}

short   dist8Zi() const
{
   return (s_dist8Zi);
}

void  set_dist8Zi(short arg)
{
   s_dist8Zi= arg;
    return;
}

//long dist9 = Unit[mm]:Distance between WPDX9 and WPDX10.Limit:[-,-]
long  dist9() const
{
   return (l_dist9);
}

void  set_dist9 (long arg)
{
   l_dist9= arg;
   s_dist9Zi = 0;
   return;
}

short   dist9Zi() const
{
   return (s_dist9Zi);
}

void  set_dist9Zi(short arg)
{
   s_dist9Zi= arg;
    return;
}

//long dist10 = Unit[mm]:Distance between WPDX10 and WPDX11.Limit:[-,-]
long  dist10() const
{
   return (l_dist10);
}

void  set_dist10 (long arg)
{
   l_dist10= arg;
   s_dist10Zi = 0;
   return;
}

short   dist10Zi() const
{
   return (s_dist10Zi);
}

void  set_dist10Zi(short arg)
{
   s_dist10Zi= arg;
    return;
}

//long dist11 = Unit[mm]:Distance between WPDX11 and WPDX12.Limit:[-,-]
long  dist11() const
{
   return (l_dist11);
}

void  set_dist11 (long arg)
{
   l_dist11= arg;
   s_dist11Zi = 0;
   return;
}

short   dist11Zi() const
{
   return (s_dist11Zi);
}

void  set_dist11Zi(short arg)
{
   s_dist11Zi= arg;
    return;
}

//long dist12 = Unit[mm]:Distance between WPDX12 and WPDX13.Limit:[-,-]
long  dist12() const
{
   return (l_dist12);
}

void  set_dist12 (long arg)
{
   l_dist12= arg;
   s_dist12Zi = 0;
   return;
}

short   dist12Zi() const
{
   return (s_dist12Zi);
}

void  set_dist12Zi(short arg)
{
   s_dist12Zi= arg;
    return;
}

//long dist13 = Unit[mm]:Distance between WPDX13 and WPDX14.Limit:[-,-]
long  dist13() const
{
   return (l_dist13);
}

void  set_dist13 (long arg)
{
   l_dist13= arg;
   s_dist13Zi = 0;
   return;
}

short   dist13Zi() const
{
   return (s_dist13Zi);
}

void  set_dist13Zi(short arg)
{
   s_dist13Zi= arg;
    return;
}

//long dist14 = Unit[mm]:Distance between WPDX14 and WPDX15.Limit:[-,-]
long  dist14() const
{
   return (l_dist14);
}

void  set_dist14 (long arg)
{
   l_dist14= arg;
   s_dist14Zi = 0;
   return;
}

short   dist14Zi() const
{
   return (s_dist14Zi);
}

void  set_dist14Zi(short arg)
{
   s_dist14Zi= arg;
    return;
}

//long dist15 = Unit[mm]:Distance between WPDX15 and WPDX16.Limit:[-,-]
long  dist15() const
{
   return (l_dist15);
}

void  set_dist15 (long arg)
{
   l_dist15= arg;
   s_dist15Zi = 0;
   return;
}

short   dist15Zi() const
{
   return (s_dist15Zi);
}

void  set_dist15Zi(short arg)
{
   s_dist15Zi= arg;
    return;
}

//long dist16 = Unit[mm]:Distance between WPDX16 and WPDX17.Limit:[-,-]
long  dist16() const
{
   return (l_dist16);
}

void  set_dist16 (long arg)
{
   l_dist16= arg;
   s_dist16Zi = 0;
   return;
}

short   dist16Zi() const
{
   return (s_dist16Zi);
}

void  set_dist16Zi(short arg)
{
   s_dist16Zi= arg;
    return;
}

//long dist17 = Unit[mm]:Distance between WPDX17 and WPDX18.Limit:[-,-]
long  dist17() const
{
   return (l_dist17);
}

void  set_dist17 (long arg)
{
   l_dist17= arg;
   s_dist17Zi = 0;
   return;
}

short   dist17Zi() const
{
   return (s_dist17Zi);
}

void  set_dist17Zi(short arg)
{
   s_dist17Zi= arg;
    return;
}

//long dist18 = Unit[mm]:Distance between WPDX18 and WPDX19.Limit:[-,-]
long  dist18() const
{
   return (l_dist18);
}

void  set_dist18 (long arg)
{
   l_dist18= arg;
   s_dist18Zi = 0;
   return;
}

short   dist18Zi() const
{
   return (s_dist18Zi);
}

void  set_dist18Zi(short arg)
{
   s_dist18Zi= arg;
    return;
}

//long dist19 = Unit[mm]:Distance between WPDX19 and WPDX20.Limit:[-,-]
long  dist19() const
{
   return (l_dist19);
}

void  set_dist19 (long arg)
{
   l_dist19= arg;
   s_dist19Zi = 0;
   return;
}

short   dist19Zi() const
{
   return (s_dist19Zi);
}

void  set_dist19Zi(short arg)
{
   s_dist19Zi= arg;
    return;
}

//long dist20 = Unit[mm]:Distance between WPDX20 and WPDX21.Limit:[-,-]
long  dist20() const
{
   return (l_dist20);
}

void  set_dist20 (long arg)
{
   l_dist20= arg;
   s_dist20Zi = 0;
   return;
}

short   dist20Zi() const
{
   return (s_dist20Zi);
}

void  set_dist20Zi(short arg)
{
   s_dist20Zi= arg;
    return;
}

//long dist21 = Unit[mm]:Distance between WPDX21 and WPDX22.Limit:[-,-]
long  dist21() const
{
   return (l_dist21);
}

void  set_dist21 (long arg)
{
   l_dist21= arg;
   s_dist21Zi = 0;
   return;
}

short   dist21Zi() const
{
   return (s_dist21Zi);
}

void  set_dist21Zi(short arg)
{
   s_dist21Zi= arg;
    return;
}

//long dist22 = Unit[mm]:Distance between WPDX22 and WPDX23.Limit:[-,-]
long  dist22() const
{
   return (l_dist22);
}

void  set_dist22 (long arg)
{
   l_dist22= arg;
   s_dist22Zi = 0;
   return;
}

short   dist22Zi() const
{
   return (s_dist22Zi);
}

void  set_dist22Zi(short arg)
{
   s_dist22Zi= arg;
    return;
}

//long dist23 = Unit[mm]:Distance between WPDX23 and WPDX24.Limit:[-,-]
long  dist23() const
{
   return (l_dist23);
}

void  set_dist23 (long arg)
{
   l_dist23= arg;
   s_dist23Zi = 0;
   return;
}

short   dist23Zi() const
{
   return (s_dist23Zi);
}

void  set_dist23Zi(short arg)
{
   s_dist23Zi= arg;
    return;
}

//long dist24 = Unit[mm]:Distance between WPDX24 and entry shear.Limit:[-,-]
long  dist24() const
{
   return (l_dist24);
}

void  set_dist24 (long arg)
{
   l_dist24= arg;
   s_dist24Zi = 0;
   return;
}

short   dist24Zi() const
{
   return (s_dist24Zi);
}

void  set_dist24Zi(short arg)
{
   s_dist24Zi= arg;
    return;
}

//long dist25 = Unit[mm]:Distance between WPDX24 and STD 1.Limit:[-,-]
long  dist25() const
{
   return (l_dist25);
}

void  set_dist25 (long arg)
{
   l_dist25= arg;
   s_dist25Zi = 0;
   return;
}

short   dist25Zi() const
{
   return (s_dist25Zi);
}

void  set_dist25Zi(short arg)
{
   s_dist25Zi= arg;
    return;
}

//long dist26 = Unit[mm]:Distance between WPDX24 and Del. Shear.Limit:[-,-]
long  dist26() const
{
   return (l_dist26);
}

void  set_dist26 (long arg)
{
   l_dist26= arg;
   s_dist26Zi = 0;
   return;
}

short   dist26Zi() const
{
   return (s_dist26Zi);
}

void  set_dist26Zi(short arg)
{
   s_dist26Zi= arg;
    return;
}

//long dist27 = Unit[mm]:Distance between ASD preset point and STD1.Limit:[-,-]
long  dist27() const
{
   return (l_dist27);
}

void  set_dist27 (long arg)
{
   l_dist27= arg;
   s_dist27Zi = 0;
   return;
}

short   dist27Zi() const
{
   return (s_dist27Zi);
}

void  set_dist27Zi(short arg)
{
   s_dist27Zi= arg;
    return;
}

//long dist28 = Unit[mm]:Distance between WPDX18 and S/T position.Limit:[-,-]
long  dist28() const
{
   return (l_dist28);
}

void  set_dist28 (long arg)
{
   l_dist28= arg;
   s_dist28Zi = 0;
   return;
}

short   dist28Zi() const
{
   return (s_dist28Zi);
}

void  set_dist28Zi(short arg)
{
   s_dist28Zi= arg;
    return;
}

//long dist29 = Unit[mm]:Distance between STD1 and STD2.Limit:[-,-]
long  dist29() const
{
   return (l_dist29);
}

void  set_dist29 (long arg)
{
   l_dist29= arg;
   s_dist29Zi = 0;
   return;
}

short   dist29Zi() const
{
   return (s_dist29Zi);
}

void  set_dist29Zi(short arg)
{
   s_dist29Zi= arg;
    return;
}

//long dist30 = Unit[mm]:Distance between STD2 and STD3.Limit:[-,-]
long  dist30() const
{
   return (l_dist30);
}

void  set_dist30 (long arg)
{
   l_dist30= arg;
   s_dist30Zi = 0;
   return;
}

short   dist30Zi() const
{
   return (s_dist30Zi);
}

void  set_dist30Zi(short arg)
{
   s_dist30Zi= arg;
    return;
}

//long dist31 = Unit[mm]:Distance between STD3 and STD4.Limit:[-,-]
long  dist31() const
{
   return (l_dist31);
}

void  set_dist31 (long arg)
{
   l_dist31= arg;
   s_dist31Zi = 0;
   return;
}

short   dist31Zi() const
{
   return (s_dist31Zi);
}

void  set_dist31Zi(short arg)
{
   s_dist31Zi= arg;
    return;
}

//long dist32 = Unit[mm]:Distance between STD4 and STD5.Limit:[-,-]
long  dist32() const
{
   return (l_dist32);
}

void  set_dist32 (long arg)
{
   l_dist32= arg;
   s_dist32Zi = 0;
   return;
}

short   dist32Zi() const
{
   return (s_dist32Zi);
}

void  set_dist32Zi(short arg)
{
   s_dist32Zi= arg;
    return;
}

//long dist33 = Unit[mm]:Distance between STD5 and Del. Shear.Limit:[-,-]
long  dist33() const
{
   return (l_dist33);
}

void  set_dist33 (long arg)
{
   l_dist33= arg;
   s_dist33Zi = 0;
   return;
}

short   dist33Zi() const
{
   return (s_dist33Zi);
}

void  set_dist33Zi(short arg)
{
   s_dist33Zi= arg;
    return;
}

//long dist34 = Unit[mm]:Distance between WPDX10 and T/L.Limit:[-,-]
long  dist34() const
{
   return (l_dist34);
}

void  set_dist34 (long arg)
{
   l_dist34= arg;
   s_dist34Zi = 0;
   return;
}

short   dist34Zi() const
{
   return (s_dist34Zi);
}

void  set_dist34Zi(short arg)
{
   s_dist34Zi= arg;
    return;
}

//short csmode = Unit[-]:Coil shifting car mode.Limit:[-,-]
short  csmode() const
{
   return (s_csmode);
}

void  set_csmode (short arg)
{
   s_csmode= arg;
   s_csmodeZi = 0;
   return;
}

short   csmodeZi() const
{
   return (s_csmodeZi);
}

void  set_csmodeZi(short arg)
{
   s_csmodeZi= arg;
    return;
}

//short porno = Unit[KN]:Current POR No.Limit:[-,-]
short  porno() const
{
   return (s_porno);
}

void  set_porno (short arg)
{
   s_porno= arg;
   s_pornoZi = 0;
   return;
}

short   pornoZi() const
{
   return (s_pornoZi);
}

void  set_pornoZi(short arg)
{
   s_pornoZi= arg;
    return;
}

//short ttens = Unit[mm]:POR total tension.Limit:[-,-]
short  ttens() const
{
   return (s_ttens);
}

void  set_ttens (short arg)
{
   s_ttens= arg;
   s_ttensZi = 0;
   return;
}

short   ttensZi() const
{
   return (s_ttensZi);
}

void  set_ttensZi(short arg)
{
   s_ttensZi= arg;
    return;
}

//short dia1 = Unit[mm]:No1 POR diameter.Limit:[-,-]
short  dia1() const
{
   return (s_dia1);
}

void  set_dia1 (short arg)
{
   s_dia1= arg;
   s_dia1Zi = 0;
   return;
}

short   dia1Zi() const
{
   return (s_dia1Zi);
}

void  set_dia1Zi(short arg)
{
   s_dia1Zi= arg;
    return;
}

//short dia2 = Unit[KN]:No2 POR diameter.Limit:[-,-]
short  dia2() const
{
   return (s_dia2);
}

void  set_dia2 (short arg)
{
   s_dia2= arg;
   s_dia2Zi = 0;
   return;
}

short   dia2Zi() const
{
   return (s_dia2Zi);
}

void  set_dia2Zi(short arg)
{
   s_dia2Zi= arg;
    return;
}

//short ten1 = Unit[KN]:POR1 delivery tension.Limit:[-,-]
short  ten1() const
{
   return (s_ten1);
}

void  set_ten1 (short arg)
{
   s_ten1= arg;
   s_ten1Zi = 0;
   return;
}

short   ten1Zi() const
{
   return (s_ten1Zi);
}

void  set_ten1Zi(short arg)
{
   s_ten1Zi= arg;
    return;
}

//short ten2 = Unit[]:POR2 delivery tension.Limit:[-,-]
short  ten2() const
{
   return (s_ten2);
}

void  set_ten2 (short arg)
{
   s_ten2= arg;
   s_ten2Zi = 0;
   return;
}

short   ten2Zi() const
{
   return (s_ten2Zi);
}

void  set_ten2Zi(short arg)
{
   s_ten2Zi= arg;
    return;
}

//short prrl1 = Unit[10-1mm]:POR1 processer roll intermesh 1.Limit:[-,-]
short  prrl1() const
{
   return (s_prrl1);
}

void  set_prrl1 (short arg)
{
   s_prrl1= arg;
   s_prrl1Zi = 0;
   return;
}

short   prrl1Zi() const
{
   return (s_prrl1Zi);
}

void  set_prrl1Zi(short arg)
{
   s_prrl1Zi= arg;
    return;
}

//short prrl2 = Unit[10-1mm]:POR1 processer roll intermesh 2.Limit:[-,-]
short  prrl2() const
{
   return (s_prrl2);
}

void  set_prrl2 (short arg)
{
   s_prrl2= arg;
   s_prrl2Zi = 0;
   return;
}

short   prrl2Zi() const
{
   return (s_prrl2Zi);
}

void  set_prrl2Zi(short arg)
{
   s_prrl2Zi= arg;
    return;
}

//short prrl3 = Unit[10-1mm]:POR1 processer roll intermesh 3.Limit:[-,-]
short  prrl3() const
{
   return (s_prrl3);
}

void  set_prrl3 (short arg)
{
   s_prrl3= arg;
   s_prrl3Zi = 0;
   return;
}

short   prrl3Zi() const
{
   return (s_prrl3Zi);
}

void  set_prrl3Zi(short arg)
{
   s_prrl3Zi= arg;
    return;
}

//short prrl4 = Unit[10-1mm]:POR2 processer roll intermesh 1.Limit:[-,-]
short  prrl4() const
{
   return (s_prrl4);
}

void  set_prrl4 (short arg)
{
   s_prrl4= arg;
   s_prrl4Zi = 0;
   return;
}

short   prrl4Zi() const
{
   return (s_prrl4Zi);
}

void  set_prrl4Zi(short arg)
{
   s_prrl4Zi= arg;
    return;
}

//short prrl5 = Unit[10-1mm]:POR2 processer roll intermesh 2.Limit:[-,-]
short  prrl5() const
{
   return (s_prrl5);
}

void  set_prrl5 (short arg)
{
   s_prrl5= arg;
   s_prrl5Zi = 0;
   return;
}

short   prrl5Zi() const
{
   return (s_prrl5Zi);
}

void  set_prrl5Zi(short arg)
{
   s_prrl5Zi= arg;
    return;
}

//short prrl6 = Unit[10-1mm]:POR2 processer roll intermesh 3.Limit:[-,-]
short  prrl6() const
{
   return (s_prrl6);
}

void  set_prrl6 (short arg)
{
   s_prrl6= arg;
   s_prrl6Zi = 0;
   return;
}

short   prrl6Zi() const
{
   return (s_prrl6Zi);
}

void  set_prrl6Zi(short arg)
{
   s_prrl6Zi= arg;
    return;
}

//short sspd = Unit[10-1mpm]:Strip speed under the welder.Limit:[-,-]
short  sspd() const
{
   return (s_sspd);
}

void  set_sspd (short arg)
{
   s_sspd= arg;
   s_sspdZi = 0;
   return;
}

short   sspdZi() const
{
   return (s_sspdZi);
}

void  set_sspdZi(short arg)
{
   s_sspdZi= arg;
    return;
}

//long slop1_len = Unit[mm]:Looper1 length.Limit:[-,-]
long  slop1_len() const
{
   return (l_slop1_len);
}

void  set_slop1_len (long arg)
{
   l_slop1_len= arg;
   s_slop1_lenZi = 0;
   return;
}

short   slop1_lenZi() const
{
   return (s_slop1_lenZi);
}

void  set_slop1_lenZi(short arg)
{
   s_slop1_lenZi= arg;
    return;
}

//short slop1_pos = Unit[%]:Looper1 car position.Limit:[-,-]
short  slop1_pos() const
{
   return (s_slop1_pos);
}

void  set_slop1_pos (short arg)
{
   s_slop1_pos= arg;
   s_slop1_posZi = 0;
   return;
}

short   slop1_posZi() const
{
   return (s_slop1_posZi);
}

void  set_slop1_posZi(short arg)
{
   s_slop1_posZi= arg;
    return;
}

//short slop1_tens = Unit[KN]:Looper1 tension.Limit:[-,-]
short  slop1_tens() const
{
   return (s_slop1_tens);
}

void  set_slop1_tens (short arg)
{
   s_slop1_tens= arg;
   s_slop1_tensZi = 0;
   return;
}

short   slop1_tensZi() const
{
   return (s_slop1_tensZi);
}

void  set_slop1_tensZi(short arg)
{
   s_slop1_tensZi= arg;
    return;
}

//long slop2_len = Unit[mm]:Looper2 length.Limit:[-,-]
long  slop2_len() const
{
   return (l_slop2_len);
}

void  set_slop2_len (long arg)
{
   l_slop2_len= arg;
   s_slop2_lenZi = 0;
   return;
}

short   slop2_lenZi() const
{
   return (s_slop2_lenZi);
}

void  set_slop2_lenZi(short arg)
{
   s_slop2_lenZi= arg;
    return;
}

//short slop2_pos = Unit[%]:Looper2 car position.Limit:[-,-]
short  slop2_pos() const
{
   return (s_slop2_pos);
}

void  set_slop2_pos (short arg)
{
   s_slop2_pos= arg;
   s_slop2_posZi = 0;
   return;
}

short   slop2_posZi() const
{
   return (s_slop2_posZi);
}

void  set_slop2_posZi(short arg)
{
   s_slop2_posZi= arg;
    return;
}

//short slop2_tens = Unit[KN]:Looper2 tension.Limit:[-,-]
short  slop2_tens() const
{
   return (s_slop2_tens);
}

void  set_slop2_tens (short arg)
{
   s_slop2_tens= arg;
   s_slop2_tensZi = 0;
   return;
}

short   slop2_tensZi() const
{
   return (s_slop2_tensZi);
}

void  set_slop2_tensZi(short arg)
{
   s_slop2_tensZi= arg;
    return;
}

//long slop3_len = Unit[mm]:Looper3 length.Limit:[-,-]
long  slop3_len() const
{
   return (l_slop3_len);
}

void  set_slop3_len (long arg)
{
   l_slop3_len= arg;
   s_slop3_lenZi = 0;
   return;
}

short   slop3_lenZi() const
{
   return (s_slop3_lenZi);
}

void  set_slop3_lenZi(short arg)
{
   s_slop3_lenZi= arg;
    return;
}

//short slop3_pos = Unit[%]:Looper3 car position.Limit:[-,-]
short  slop3_pos() const
{
   return (s_slop3_pos);
}

void  set_slop3_pos (short arg)
{
   s_slop3_pos= arg;
   s_slop3_posZi = 0;
   return;
}

short   slop3_posZi() const
{
   return (s_slop3_posZi);
}

void  set_slop3_posZi(short arg)
{
   s_slop3_posZi= arg;
    return;
}

//short slop3_tens = Unit[KN]:Looper3 tension.Limit:[-,-]
short  slop3_tens() const
{
   return (s_slop3_tens);
}

void  set_slop3_tens (short arg)
{
   s_slop3_tens= arg;
   s_slop3_tensZi = 0;
   return;
}

short   slop3_tensZi() const
{
   return (s_slop3_tensZi);
}

void  set_slop3_tensZi(short arg)
{
   s_slop3_tensZi= arg;
    return;
}

//short espd = Unit[10-1mpm]:PL entry speed.Limit:[-,-]
short  espd() const
{
   return (s_espd);
}

void  set_espd (short arg)
{
   s_espd= arg;
   s_espdZi = 0;
   return;
}

short   espdZi() const
{
   return (s_espdZi);
}

void  set_espdZi(short arg)
{
   s_espdZi= arg;
    return;
}

//short cspd = Unit[10-1mpm]:Speed of center PL section.Limit:[-,-]
short  cspd() const
{
   return (s_cspd);
}

void  set_cspd (short arg)
{
   s_cspd= arg;
   s_cspdZi = 0;
   return;
}

short   cspdZi() const
{
   return (s_cspdZi);
}

void  set_cspdZi(short arg)
{
   s_cspdZi= arg;
    return;
}

//short tens = Unit[KN]:Pickling tank tension.Limit:[-,-]
short  tens() const
{
   return (s_tens);
}

void  set_tens (short arg)
{
   s_tens= arg;
   s_tensZi = 0;
   return;
}

short   tensZi() const
{
   return (s_tensZi);
}

void  set_tensZi(short arg)
{
   s_tensZi= arg;
    return;
}

//short plbth1_1 = Unit[¡æ]:Temperature of pickling bath -1.Limit:[-,-]
short  plbth1_1() const
{
   return (s_plbth1_1);
}

void  set_plbth1_1 (short arg)
{
   s_plbth1_1= arg;
   s_plbth1_1Zi = 0;
   return;
}

short   plbth1_1Zi() const
{
   return (s_plbth1_1Zi);
}

void  set_plbth1_1Zi(short arg)
{
   s_plbth1_1Zi= arg;
    return;
}

//short plbth1_2 = Unit[10-1%]:Concentration of HCl -1.Limit:[-,-]
short  plbth1_2() const
{
   return (s_plbth1_2);
}

void  set_plbth1_2 (short arg)
{
   s_plbth1_2= arg;
   s_plbth1_2Zi = 0;
   return;
}

short   plbth1_2Zi() const
{
   return (s_plbth1_2Zi);
}

void  set_plbth1_2Zi(short arg)
{
   s_plbth1_2Zi= arg;
    return;
}

//short plbth1_3 = Unit[10-1%]:Concentration of FeCl2 -1.Limit:[-,-]
short  plbth1_3() const
{
   return (s_plbth1_3);
}

void  set_plbth1_3 (short arg)
{
   s_plbth1_3= arg;
   s_plbth1_3Zi = 0;
   return;
}

short   plbth1_3Zi() const
{
   return (s_plbth1_3Zi);
}

void  set_plbth1_3Zi(short arg)
{
   s_plbth1_3Zi= arg;
    return;
}

//short plbth2_1 = Unit[¡æ]:Temperature of pickling bath -2.Limit:[-,-]
short  plbth2_1() const
{
   return (s_plbth2_1);
}

void  set_plbth2_1 (short arg)
{
   s_plbth2_1= arg;
   s_plbth2_1Zi = 0;
   return;
}

short   plbth2_1Zi() const
{
   return (s_plbth2_1Zi);
}

void  set_plbth2_1Zi(short arg)
{
   s_plbth2_1Zi= arg;
    return;
}

//short plbth2_2 = Unit[10-1%]:Concentration of HCl -2.Limit:[-,-]
short  plbth2_2() const
{
   return (s_plbth2_2);
}

void  set_plbth2_2 (short arg)
{
   s_plbth2_2= arg;
   s_plbth2_2Zi = 0;
   return;
}

short   plbth2_2Zi() const
{
   return (s_plbth2_2Zi);
}

void  set_plbth2_2Zi(short arg)
{
   s_plbth2_2Zi= arg;
    return;
}

//short plbth2_3 = Unit[10-1%]:Concentration of FeCl2 -2.Limit:[-,-]
short  plbth2_3() const
{
   return (s_plbth2_3);
}

void  set_plbth2_3 (short arg)
{
   s_plbth2_3= arg;
   s_plbth2_3Zi = 0;
   return;
}

short   plbth2_3Zi() const
{
   return (s_plbth2_3Zi);
}

void  set_plbth2_3Zi(short arg)
{
   s_plbth2_3Zi= arg;
    return;
}

//short plbth3_1 = Unit[¡æ]:Temperature of pickling bath -3.Limit:[-,-]
short  plbth3_1() const
{
   return (s_plbth3_1);
}

void  set_plbth3_1 (short arg)
{
   s_plbth3_1= arg;
   s_plbth3_1Zi = 0;
   return;
}

short   plbth3_1Zi() const
{
   return (s_plbth3_1Zi);
}

void  set_plbth3_1Zi(short arg)
{
   s_plbth3_1Zi= arg;
    return;
}

//short plbth3_2 = Unit[10-1%]:Concentration of HCl -3.Limit:[-,-]
short  plbth3_2() const
{
   return (s_plbth3_2);
}

void  set_plbth3_2 (short arg)
{
   s_plbth3_2= arg;
   s_plbth3_2Zi = 0;
   return;
}

short   plbth3_2Zi() const
{
   return (s_plbth3_2Zi);
}

void  set_plbth3_2Zi(short arg)
{
   s_plbth3_2Zi= arg;
    return;
}

//short plbth3_3 = Unit[10-1%]:Concentration of FeCl2 -3.Limit:[-,-]
short  plbth3_3() const
{
   return (s_plbth3_3);
}

void  set_plbth3_3 (short arg)
{
   s_plbth3_3= arg;
   s_plbth3_3Zi = 0;
   return;
}

short   plbth3_3Zi() const
{
   return (s_plbth3_3Zi);
}

void  set_plbth3_3Zi(short arg)
{
   s_plbth3_3Zi= arg;
    return;
}

//short tvl_use = Unit[-]:Tension leveler use/no use.Limit:[-,-]
short  tvl_use() const
{
   return (s_tvl_use);
}

void  set_tvl_use (short arg)
{
   s_tvl_use= arg;
   s_tvl_useZi = 0;
   return;
}

short   tvl_useZi() const
{
   return (s_tvl_useZi);
}

void  set_tvl_useZi(short arg)
{
   s_tvl_useZi= arg;
    return;
}

//long tens1 = Unit[KN]:Tension leveler tension 1.Limit:[-,-]
long  tens1() const
{
   return (l_tens1);
}

void  set_tens1 (long arg)
{
   l_tens1= arg;
   s_tens1Zi = 0;
   return;
}

short   tens1Zi() const
{
   return (s_tens1Zi);
}

void  set_tens1Zi(short arg)
{
   s_tens1Zi= arg;
    return;
}

//long rims1 = Unit[KN]:Tension leveler tension 2.Limit:[-,-]
long  rims1() const
{
   return (l_rims1);
}

void  set_rims1 (long arg)
{
   l_rims1= arg;
   s_rims1Zi = 0;
   return;
}

short   rims1Zi() const
{
   return (s_rims1Zi);
}

void  set_rims1Zi(short arg)
{
   s_rims1Zi= arg;
    return;
}

//long rims2 = Unit[10¦Ì]:Tension leveler No.1 roll intermesh.Limit:[-,-]
long  rims2() const
{
   return (l_rims2);
}

void  set_rims2 (long arg)
{
   l_rims2= arg;
   s_rims2Zi = 0;
   return;
}

short   rims2Zi() const
{
   return (s_rims2Zi);
}

void  set_rims2Zi(short arg)
{
   s_rims2Zi= arg;
    return;
}

//long rims3 = Unit[11¦Ì]:Tension leveler No.2 roll intermesh.Limit:[-,-]
long  rims3() const
{
   return (l_rims3);
}

void  set_rims3 (long arg)
{
   l_rims3= arg;
   s_rims3Zi = 0;
   return;
}

short   rims3Zi() const
{
   return (s_rims3Zi);
}

void  set_rims3Zi(short arg)
{
   s_rims3Zi= arg;
    return;
}

//long elg = Unit[12¦Ì]:Tension leveler elongation.Limit:[-,-]
long  elg() const
{
   return (l_elg);
}

void  set_elg (long arg)
{
   l_elg= arg;
   s_elgZi = 0;
   return;
}

short   elgZi() const
{
   return (s_elgZi);
}

void  set_elgZi(short arg)
{
   s_elgZi= arg;
    return;
}

//long tvl_espd = Unit[10-1%]:Tension leveler entry speed.Limit:[-,-]
long  tvl_espd() const
{
   return (l_tvl_espd);
}

void  set_tvl_espd (long arg)
{
   l_tvl_espd= arg;
   s_tvl_espdZi = 0;
   return;
}

short   tvl_espdZi() const
{
   return (s_tvl_espdZi);
}

void  set_tvl_espdZi(short arg)
{
   s_tvl_espdZi= arg;
    return;
}

//short spd = Unit[10-1mpm]:Speed of trimmer section.Limit:[-,-]
short  spd() const
{
   return (s_spd);
}

void  set_spd (short arg)
{
   s_spd= arg;
   s_spdZi = 0;
   return;
}

short   spdZi() const
{
   return (s_spdZi);
}

void  set_spdZi(short arg)
{
   s_spdZi= arg;
    return;
}

//short wid1 = Unit[10-1mpm]:Trimmer set width data.Limit:[-,-]
short  wid1() const
{
   return (s_wid1);
}

void  set_wid1 (short arg)
{
   s_wid1= arg;
   s_wid1Zi = 0;
   return;
}

short   wid1Zi() const
{
   return (s_wid1Zi);
}

void  set_wid1Zi(short arg)
{
   s_wid1Zi= arg;
    return;
}

//short wid2 = Unit[mm]:Actual width at trimmer position.Limit:[-,-]
short  wid2() const
{
   return (s_wid2);
}

void  set_wid2 (short arg)
{
   s_wid2= arg;
   s_wid2Zi = 0;
   return;
}

short   wid2Zi() const
{
   return (s_wid2Zi);
}

void  set_wid2Zi(short arg)
{
   s_wid2Zi= arg;
    return;
}

//short wid3 = Unit[mm]:Actual width before trimmer position.Limit:[-,-]
short  wid3() const
{
   return (s_wid3);
}

void  set_wid3 (short arg)
{
   s_wid3= arg;
   s_wid3Zi = 0;
   return;
}

short   wid3Zi() const
{
   return (s_wid3Zi);
}

void  set_wid3Zi(short arg)
{
   s_wid3Zi= arg;
    return;
}

//short trm_use = Unit[mm]:Trimmer use/no use.Limit:[-,-]
short  trm_use() const
{
   return (s_trm_use);
}

void  set_trm_use (short arg)
{
   s_trm_use= arg;
   s_trm_useZi = 0;
   return;
}

short   trm_useZi() const
{
   return (s_trm_useZi);
}

void  set_trm_useZi(short arg)
{
   s_trm_useZi= arg;
    return;
}

//short tno1 = Unit[-]:Trimmer number(OP).Limit:[-,-]
short  tno1() const
{
   return (s_tno1);
}

void  set_tno1 (short arg)
{
   s_tno1= arg;
   s_tno1Zi = 0;
   return;
}

short   tno1Zi() const
{
   return (s_tno1Zi);
}

void  set_tno1Zi(short arg)
{
   s_tno1Zi= arg;
    return;
}

//short tno2 = Unit[-]:Trimmer number(DR).Limit:[-,-]
short  tno2() const
{
   return (s_tno2);
}

void  set_tno2 (short arg)
{
   s_tno2= arg;
   s_tno2Zi = 0;
   return;
}

short   tno2Zi() const
{
   return (s_tno2Zi);
}

void  set_tno2Zi(short arg)
{
   s_tno2Zi= arg;
    return;
}

//short tgap1 = Unit[-]:Trimmer gap1 (OP).Limit:[-,-]
short  tgap1() const
{
   return (s_tgap1);
}

void  set_tgap1 (short arg)
{
   s_tgap1= arg;
   s_tgap1Zi = 0;
   return;
}

short   tgap1Zi() const
{
   return (s_tgap1Zi);
}

void  set_tgap1Zi(short arg)
{
   s_tgap1Zi= arg;
    return;
}

//short tgap2 = Unit[10¦Ì]:Trimmer gap2 (OP).Limit:[-,-]
short  tgap2() const
{
   return (s_tgap2);
}

void  set_tgap2 (short arg)
{
   s_tgap2= arg;
   s_tgap2Zi = 0;
   return;
}

short   tgap2Zi() const
{
   return (s_tgap2Zi);
}

void  set_tgap2Zi(short arg)
{
   s_tgap2Zi= arg;
    return;
}

//short tgap3 = Unit[10¦Ì]:Trimmer gap1 (DR).Limit:[-,-]
short  tgap3() const
{
   return (s_tgap3);
}

void  set_tgap3 (short arg)
{
   s_tgap3= arg;
   s_tgap3Zi = 0;
   return;
}

short   tgap3Zi() const
{
   return (s_tgap3Zi);
}

void  set_tgap3Zi(short arg)
{
   s_tgap3Zi= arg;
    return;
}

//short tgap4 = Unit[10¦Ì]:Trimmer gap2 (DR).Limit:[-,-]
short  tgap4() const
{
   return (s_tgap4);
}

void  set_tgap4 (short arg)
{
   s_tgap4= arg;
   s_tgap4Zi = 0;
   return;
}

short   tgap4Zi() const
{
   return (s_tgap4Zi);
}

void  set_tgap4Zi(short arg)
{
   s_tgap4Zi= arg;
    return;
}

//short tlap1 = Unit[10¦Ì]:Trimmer lap1 (OP).Limit:[-,-]
short  tlap1() const
{
   return (s_tlap1);
}

void  set_tlap1 (short arg)
{
   s_tlap1= arg;
   s_tlap1Zi = 0;
   return;
}

short   tlap1Zi() const
{
   return (s_tlap1Zi);
}

void  set_tlap1Zi(short arg)
{
   s_tlap1Zi= arg;
    return;
}

//short tlap2 = Unit[10¦Ì]:Trimmer lap2 (OP).Limit:[-,-]
short  tlap2() const
{
   return (s_tlap2);
}

void  set_tlap2 (short arg)
{
   s_tlap2= arg;
   s_tlap2Zi = 0;
   return;
}

short   tlap2Zi() const
{
   return (s_tlap2Zi);
}

void  set_tlap2Zi(short arg)
{
   s_tlap2Zi= arg;
    return;
}

//short tlap3 = Unit[10¦Ì]:Trimmer lap1 (DR).Limit:[-,-]
short  tlap3() const
{
   return (s_tlap3);
}

void  set_tlap3 (short arg)
{
   s_tlap3= arg;
   s_tlap3Zi = 0;
   return;
}

short   tlap3Zi() const
{
   return (s_tlap3Zi);
}

void  set_tlap3Zi(short arg)
{
   s_tlap3Zi= arg;
    return;
}

//short tlap4 = Unit[10¦Ì]:Trimmer lap2 (DR).Limit:[-,-]
short  tlap4() const
{
   return (s_tlap4);
}

void  set_tlap4 (short arg)
{
   s_tlap4= arg;
   s_tlap4Zi = 0;
   return;
}

short   tlap4Zi() const
{
   return (s_tlap4Zi);
}

void  set_tlap4Zi(short arg)
{
   s_tlap4Zi= arg;
    return;
}

//short plmaster = Unit[10¦Ì]:PL master ON/OFF.Limit:[-,-]
short  plmaster() const
{
   return (s_plmaster);
}

void  set_plmaster (short arg)
{
   s_plmaster= arg;
   s_plmasterZi = 0;
   return;
}

short   plmasterZi() const
{
   return (s_plmasterZi);
}

void  set_plmasterZi(short arg)
{
   s_plmasterZi= arg;
    return;
}

//short linsts = Unit[-]:PL line start/stop.Limit:[-,-]
short  linsts() const
{
   return (s_linsts);
}

void  set_linsts (short arg)
{
   s_linsts= arg;
   s_linstsZi = 0;
   return;
}

short   linstsZi() const
{
   return (s_linstsZi);
}

void  set_linstsZi(short arg)
{
   s_linstsZi= arg;
    return;
}

//short awpd1 = Unit[-]:WPD status           1.Limit:[-,-]
short  awpd1() const
{
   return (s_awpd1);
}

void  set_awpd1 (short arg)
{
   s_awpd1= arg;
   s_awpd1Zi = 0;
   return;
}

short   awpd1Zi() const
{
   return (s_awpd1Zi);
}

void  set_awpd1Zi(short arg)
{
   s_awpd1Zi= arg;
    return;
}

//short awpd2 = Unit[-]:WPD status           2.Limit:[-,-]
short  awpd2() const
{
   return (s_awpd2);
}

void  set_awpd2 (short arg)
{
   s_awpd2= arg;
   s_awpd2Zi = 0;
   return;
}

short   awpd2Zi() const
{
   return (s_awpd2Zi);
}

void  set_awpd2Zi(short arg)
{
   s_awpd2Zi= arg;
    return;
}

//short awpd3 = Unit[-]:WPD status           3.Limit:[-,-]
short  awpd3() const
{
   return (s_awpd3);
}

void  set_awpd3 (short arg)
{
   s_awpd3= arg;
   s_awpd3Zi = 0;
   return;
}

short   awpd3Zi() const
{
   return (s_awpd3Zi);
}

void  set_awpd3Zi(short arg)
{
   s_awpd3Zi= arg;
    return;
}

//short awpd4 = Unit[-]:WPD status           4.Limit:[-,-]
short  awpd4() const
{
   return (s_awpd4);
}

void  set_awpd4 (short arg)
{
   s_awpd4= arg;
   s_awpd4Zi = 0;
   return;
}

short   awpd4Zi() const
{
   return (s_awpd4Zi);
}

void  set_awpd4Zi(short arg)
{
   s_awpd4Zi= arg;
    return;
}

//short awpd5 = Unit[-]:WPD status           5.Limit:[-,-]
short  awpd5() const
{
   return (s_awpd5);
}

void  set_awpd5 (short arg)
{
   s_awpd5= arg;
   s_awpd5Zi = 0;
   return;
}

short   awpd5Zi() const
{
   return (s_awpd5Zi);
}

void  set_awpd5Zi(short arg)
{
   s_awpd5Zi= arg;
    return;
}

//short awpd6 = Unit[-]:WPD status           6.Limit:[-,-]
short  awpd6() const
{
   return (s_awpd6);
}

void  set_awpd6 (short arg)
{
   s_awpd6= arg;
   s_awpd6Zi = 0;
   return;
}

short   awpd6Zi() const
{
   return (s_awpd6Zi);
}

void  set_awpd6Zi(short arg)
{
   s_awpd6Zi= arg;
    return;
}

//short arele1 = Unit[-]:Acceleration Rate for entry speed.Limit:[-,-]
short  arele1() const
{
   return (s_arele1);
}

void  set_arele1 (short arg)
{
   s_arele1= arg;
   s_arele1Zi = 0;
   return;
}

short   arele1Zi() const
{
   return (s_arele1Zi);
}

void  set_arele1Zi(short arg)
{
   s_arele1Zi= arg;
    return;
}

//short arele2 = Unit[-]:Dcceleration Rate for entry speed.Limit:[-,-]
short  arele2() const
{
   return (s_arele2);
}

void  set_arele2 (short arg)
{
   s_arele2= arg;
   s_arele2Zi = 0;
   return;
}

short   arele2Zi() const
{
   return (s_arele2Zi);
}

void  set_arele2Zi(short arg)
{
   s_arele2Zi= arg;
    return;
}

//short arele3 = Unit[-]:Acceleration Rate for PL speed.Limit:[-,-]
short  arele3() const
{
   return (s_arele3);
}

void  set_arele3 (short arg)
{
   s_arele3= arg;
   s_arele3Zi = 0;
   return;
}

short   arele3Zi() const
{
   return (s_arele3Zi);
}

void  set_arele3Zi(short arg)
{
   s_arele3Zi= arg;
    return;
}

//short arele4 = Unit[-]:Dcceleration Rate for PL speed.Limit:[-,-]
short  arele4() const
{
   return (s_arele4);
}

void  set_arele4 (short arg)
{
   s_arele4= arg;
   s_arele4Zi = 0;
   return;
}

short   arele4Zi() const
{
   return (s_arele4Zi);
}

void  set_arele4Zi(short arg)
{
   s_arele4Zi= arg;
    return;
}

//short arele5 = Unit[-]:Acceleration Rate for trimmer speed.Limit:[-,-]
short  arele5() const
{
   return (s_arele5);
}

void  set_arele5 (short arg)
{
   s_arele5= arg;
   s_arele5Zi = 0;
   return;
}

short   arele5Zi() const
{
   return (s_arele5Zi);
}

void  set_arele5Zi(short arg)
{
   s_arele5Zi= arg;
    return;
}

//short arele6 = Unit[-]:Dcceleration Rate for trimmer speed.Limit:[-,-]
short  arele6() const
{
   return (s_arele6);
}

void  set_arele6 (short arg)
{
   s_arele6= arg;
   s_arele6Zi = 0;
   return;
}

short   arele6Zi() const
{
   return (s_arele6Zi);
}

void  set_arele6Zi(short arg)
{
   s_arele6Zi= arg;
    return;
}

//short tktemp = Unit[-]:Temperature of Rinse tank.Limit:[-,-]
short  tktemp() const
{
   return (s_tktemp);
}

void  set_tktemp (short arg)
{
   s_tktemp= arg;
   s_tktempZi = 0;
   return;
}

short   tktempZi() const
{
   return (s_tktempZi);
}

void  set_tktempZi(short arg)
{
   s_tktempZi= arg;
    return;
}

//short tkcond = Unit[-]:Conductance of Rinse tank.Limit:[-,-]
short  tkcond() const
{
   return (s_tkcond);
}

void  set_tkcond (short arg)
{
   s_tkcond= arg;
   s_tkcondZi = 0;
   return;
}

short   tkcondZi() const
{
   return (s_tkcondZi);
}

void  set_tkcondZi(short arg)
{
   s_tkcondZi= arg;
    return;
}

//short rinspv = Unit[-]:HOT RINSE SUB TANK PV.Limit:[-,-]
short  rinspv() const
{
   return (s_rinspv);
}

void  set_rinspv (short arg)
{
   s_rinspv= arg;
   s_rinspvZi = 0;
   return;
}

short   rinspvZi() const
{
   return (s_rinspvZi);
}

void  set_rinspvZi(short arg)
{
   s_rinspvZi= arg;
    return;
}

//char* eshct_hcoilno = Unit[-]:Entry shear coil Id.Limit:[-,-]
char*  eshct_hcoilno() const
{
   return ((char*)c_eshct_hcoilno);
}

void  set_eshct_hcoilno (const char* arg)
{
   strncpy((char*)c_eshct_hcoilno, arg, sizeof(c_eshct_hcoilno));
    c_eshct_hcoilno[sizeof(c_eshct_hcoilno)-1] = '\0';
   s_eshct_hcoilnoZi = 0;
   return;
}

short   eshct_hcoilnoZi() const
{
   return (s_eshct_hcoilnoZi);
}

void  set_eshct_hcoilnoZi(short arg)
{
   s_eshct_hcoilnoZi= arg;
    return;
}

//char* std1_hcoilno = Unit[-]:stand 1 coil Id.Limit:[-,-]
char*  std1_hcoilno() const
{
   return ((char*)c_std1_hcoilno);
}

void  set_std1_hcoilno (const char* arg)
{
   strncpy((char*)c_std1_hcoilno, arg, sizeof(c_std1_hcoilno));
    c_std1_hcoilno[sizeof(c_std1_hcoilno)-1] = '\0';
   s_std1_hcoilnoZi = 0;
   return;
}

short   std1_hcoilnoZi() const
{
   return (s_std1_hcoilnoZi);
}

void  set_std1_hcoilnoZi(short arg)
{
   s_std1_hcoilnoZi= arg;
    return;
}

//char* std2_hcoilno = Unit[-]:stand 2 coil Id.Limit:[-,-]
char*  std2_hcoilno() const
{
   return ((char*)c_std2_hcoilno);
}

void  set_std2_hcoilno (const char* arg)
{
   strncpy((char*)c_std2_hcoilno, arg, sizeof(c_std2_hcoilno));
    c_std2_hcoilno[sizeof(c_std2_hcoilno)-1] = '\0';
   s_std2_hcoilnoZi = 0;
   return;
}

short   std2_hcoilnoZi() const
{
   return (s_std2_hcoilnoZi);
}

void  set_std2_hcoilnoZi(short arg)
{
   s_std2_hcoilnoZi= arg;
    return;
}

//char* std3_hcoilno = Unit[-]:stand 3 coil Id.Limit:[-,-]
char*  std3_hcoilno() const
{
   return ((char*)c_std3_hcoilno);
}

void  set_std3_hcoilno (const char* arg)
{
   strncpy((char*)c_std3_hcoilno, arg, sizeof(c_std3_hcoilno));
    c_std3_hcoilno[sizeof(c_std3_hcoilno)-1] = '\0';
   s_std3_hcoilnoZi = 0;
   return;
}

short   std3_hcoilnoZi() const
{
   return (s_std3_hcoilnoZi);
}

void  set_std3_hcoilnoZi(short arg)
{
   s_std3_hcoilnoZi= arg;
    return;
}

//char* std4_hcoilno = Unit[-]:stand 4 coil Id.Limit:[-,-]
char*  std4_hcoilno() const
{
   return ((char*)c_std4_hcoilno);
}

void  set_std4_hcoilno (const char* arg)
{
   strncpy((char*)c_std4_hcoilno, arg, sizeof(c_std4_hcoilno));
    c_std4_hcoilno[sizeof(c_std4_hcoilno)-1] = '\0';
   s_std4_hcoilnoZi = 0;
   return;
}

short   std4_hcoilnoZi() const
{
   return (s_std4_hcoilnoZi);
}

void  set_std4_hcoilnoZi(short arg)
{
   s_std4_hcoilnoZi= arg;
    return;
}

//char* std5_hcoilno = Unit[-]:stand 5 coil Id.Limit:[-,-]
char*  std5_hcoilno() const
{
   return ((char*)c_std5_hcoilno);
}

void  set_std5_hcoilno (const char* arg)
{
   strncpy((char*)c_std5_hcoilno, arg, sizeof(c_std5_hcoilno));
    c_std5_hcoilno[sizeof(c_std5_hcoilno)-1] = '\0';
   s_std5_hcoilnoZi = 0;
   return;
}

short   std5_hcoilnoZi() const
{
   return (s_std5_hcoilnoZi);
}

void  set_std5_hcoilnoZi(short arg)
{
   s_std5_hcoilnoZi= arg;
    return;
}

//char* dshct_hcoilno = Unit[-]:Delivery shear coil Id.Limit:[-,-]
char*  dshct_hcoilno() const
{
   return ((char*)c_dshct_hcoilno);
}

void  set_dshct_hcoilno (const char* arg)
{
   strncpy((char*)c_dshct_hcoilno, arg, sizeof(c_dshct_hcoilno));
    c_dshct_hcoilno[sizeof(c_dshct_hcoilno)-1] = '\0';
   s_dshct_hcoilnoZi = 0;
   return;
}

short   dshct_hcoilnoZi() const
{
   return (s_dshct_hcoilnoZi);
}

void  set_dshct_hcoilnoZi(short arg)
{
   s_dshct_hcoilnoZi= arg;
    return;
}

//char* tr_hcoilno = Unit[-]:TR coil Id.Limit:[-,-]
char*  tr_hcoilno() const
{
   return ((char*)c_tr_hcoilno);
}

void  set_tr_hcoilno (const char* arg)
{
   strncpy((char*)c_tr_hcoilno, arg, sizeof(c_tr_hcoilno));
    c_tr_hcoilno[sizeof(c_tr_hcoilno)-1] = '\0';
   s_tr_hcoilnoZi = 0;
   return;
}

short   tr_hcoilnoZi() const
{
   return (s_tr_hcoilnoZi);
}

void  set_tr_hcoilnoZi(short arg)
{
   s_tr_hcoilnoZi= arg;
    return;
}

//short flatsp_1 = Unit[-]:set points for flatness 1.Limit:[-,-]
short  flatsp_1() const
{
   return (s_flatsp_1);
}

void  set_flatsp_1 (short arg)
{
   s_flatsp_1= arg;
   s_flatsp_1Zi = 0;
   return;
}

short   flatsp_1Zi() const
{
   return (s_flatsp_1Zi);
}

void  set_flatsp_1Zi(short arg)
{
   s_flatsp_1Zi= arg;
    return;
}

//short flatsp_2 = Unit[-]:set points for flatness 2.Limit:[-,-]
short  flatsp_2() const
{
   return (s_flatsp_2);
}

void  set_flatsp_2 (short arg)
{
   s_flatsp_2= arg;
   s_flatsp_2Zi = 0;
   return;
}

short   flatsp_2Zi() const
{
   return (s_flatsp_2Zi);
}

void  set_flatsp_2Zi(short arg)
{
   s_flatsp_2Zi= arg;
    return;
}

//short flatsp_3 = Unit[-]:set points for flatness 3.Limit:[-,-]
short  flatsp_3() const
{
   return (s_flatsp_3);
}

void  set_flatsp_3 (short arg)
{
   s_flatsp_3= arg;
   s_flatsp_3Zi = 0;
   return;
}

short   flatsp_3Zi() const
{
   return (s_flatsp_3Zi);
}

void  set_flatsp_3Zi(short arg)
{
   s_flatsp_3Zi= arg;
    return;
}

//short flatsp_4 = Unit[-]:set points for flatness 4.Limit:[-,-]
short  flatsp_4() const
{
   return (s_flatsp_4);
}

void  set_flatsp_4 (short arg)
{
   s_flatsp_4= arg;
   s_flatsp_4Zi = 0;
   return;
}

short   flatsp_4Zi() const
{
   return (s_flatsp_4Zi);
}

void  set_flatsp_4Zi(short arg)
{
   s_flatsp_4Zi= arg;
    return;
}

//long std1_len = Unit[-]:length of stand 1.Limit:[-,-]
long  std1_len() const
{
   return (l_std1_len);
}

void  set_std1_len (long arg)
{
   l_std1_len= arg;
   s_std1_lenZi = 0;
   return;
}

short   std1_lenZi() const
{
   return (s_std1_lenZi);
}

void  set_std1_lenZi(short arg)
{
   s_std1_lenZi= arg;
    return;
}

//long std2_len = Unit[-]:length of stand 2.Limit:[-,-]
long  std2_len() const
{
   return (l_std2_len);
}

void  set_std2_len (long arg)
{
   l_std2_len= arg;
   s_std2_lenZi = 0;
   return;
}

short   std2_lenZi() const
{
   return (s_std2_lenZi);
}

void  set_std2_lenZi(short arg)
{
   s_std2_lenZi= arg;
    return;
}

//long std3_len = Unit[-]:length of stand 3.Limit:[-,-]
long  std3_len() const
{
   return (l_std3_len);
}

void  set_std3_len (long arg)
{
   l_std3_len= arg;
   s_std3_lenZi = 0;
   return;
}

short   std3_lenZi() const
{
   return (s_std3_lenZi);
}

void  set_std3_lenZi(short arg)
{
   s_std3_lenZi= arg;
    return;
}

//long std4_len = Unit[-]:length of stand 4.Limit:[-,-]
long  std4_len() const
{
   return (l_std4_len);
}

void  set_std4_len (long arg)
{
   l_std4_len= arg;
   s_std4_lenZi = 0;
   return;
}

short   std4_lenZi() const
{
   return (s_std4_lenZi);
}

void  set_std4_lenZi(short arg)
{
   s_std4_lenZi= arg;
    return;
}

//long std5_len = Unit[-]:length of stand 5.Limit:[-,-]
long  std5_len() const
{
   return (l_std5_len);
}

void  set_std5_len (long arg)
{
   l_std5_len= arg;
   s_std5_lenZi = 0;
   return;
}

short   std5_lenZi() const
{
   return (s_std5_lenZi);
}

void  set_std5_lenZi(short arg)
{
   s_std5_lenZi= arg;
    return;
}

//char* toc = Unit[-]:create time.Limit:[-,-]
char*  toc() const
{
   return ((char*)c_toc);
}

void  set_toc (const char* arg)
{
   strncpy((char*)c_toc, arg, sizeof(c_toc));
    c_toc[sizeof(c_toc)-1] = '\0';
   s_tocZi = 0;
   return;
}

short   tocZi() const
{
   return (s_tocZi);
}

void  set_tocZi(short arg)
{
   s_tocZi= arg;
    return;
}

//char* tom = Unit[-]:modify time.Limit:[-,-]
char*  tom() const
{
   return ((char*)c_tom);
}

void  set_tom (const char* arg)
{
   strncpy((char*)c_tom, arg, sizeof(c_tom));
    c_tom[sizeof(c_tom)-1] = '\0';
   s_tomZi = 0;
   return;
}

short   tomZi() const
{
   return (s_tomZi);
}

void  set_tomZi(short arg)
{
   s_tomZi= arg;
    return;
}

//char* mop = Unit[-]:creator or modifyer.Limit:[-,-]
char*  mop() const
{
   return ((char*)c_mop);
}

void  set_mop (const char* arg)
{
   strncpy((char*)c_mop, arg, sizeof(c_mop));
    c_mop[sizeof(c_mop)-1] = '\0';
   s_mopZi = 0;
   return;
}

short   mopZi() const
{
   return (s_mopZi);
}

void  set_mopZi(short arg)
{
   s_mopZi= arg;
    return;
}

};
#endif //ACTDT_PLACT_H

