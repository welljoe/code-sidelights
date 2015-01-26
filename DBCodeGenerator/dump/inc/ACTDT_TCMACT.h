/* ********************************************************************/
/* *   File               :    ACTDT_TCMACT.h
                             
/* *   Short Description  :    Database Class ,TCM section actual data
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         ACTDT_TCMACT_H              
#define      ACTDT_TCMACT_H              

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class ACTDT_TCMACT
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
//short    linsts = Unit[-]:TCM line start/stop.Limit:[-,-]
short    s_linsts;
short    s_linstsZi;
//short    rmd = Unit[-]:Roll changing mode.Limit:[-,-]
short    s_rmd;
short    s_rmdZi;
//short    trno = Unit[-]:Upper position TR number.Limit:[-,-]
short    s_trno;
short    s_trnoZi;
//short    dia = Unit[10-1mm]:TR coil outer diameter.Limit:[-,-]
short    s_dia;
short    s_diaZi;
//short    acd = Unit[-]:Accel pattern code(1:H,2:M, 3:L).Limit:[-,-]
short    s_acd;
short    s_acdZi;
//short    mrh = Unit[%]:RHEOSTAT PRESENT(MRH).Limit:[-,-]
short    s_mrh;
short    s_mrhZi;
//short    dstd = Unit[-]:Dummy stand selection.Limit:[-,-]
short    s_dstd;
short    s_dstdZi;
//short    xrys1 = Unit[10-3mm]:No.1 std entry X-RAY (Setting data).Limit:[-,-]
short    s_xrys1;
short    s_xrys1Zi;
//short    xrys2 = Unit[10-3mm]:No.1 std delivery X-RAY (Setting data).Limit:[-,-]
short    s_xrys2;
short    s_xrys2Zi;
//short    xrys3 = Unit[10-3mm]:No.2 std delivery X-RAY (Setting data).Limit:[-,-]
short    s_xrys3;
short    s_xrys3Zi;
//short    xrys4 = Unit[10-3mm]:No.3 std delivery X-RAY (Setting data).Limit:[-,-]
short    s_xrys4;
short    s_xrys4Zi;
//short    xrys5 = Unit[10-3mm]:No.4 std delivery X-RAY (Setting data).Limit:[-,-]
short    s_xrys5;
short    s_xrys5Zi;
//short    xrys6 = Unit[10-3mm]:No.5 std delivery X-RAY (Setting data).Limit:[-,-]
short    s_xrys6;
short    s_xrys6Zi;
//short    xrya1 = Unit[10-3mm]:No.1 std entry X-RAY (Actual data).Limit:[-,-]
short    s_xrya1;
short    s_xrya1Zi;
//short    xrya2 = Unit[10-3mm]:No.1 std delivery X-RAY (Actual data).Limit:[-,-]
short    s_xrya2;
short    s_xrya2Zi;
//short    xrya3 = Unit[10-3mm]:No.2 std delivery X-RAY (Actual data).Limit:[-,-]
short    s_xrya3;
short    s_xrya3Zi;
//short    xrya4 = Unit[10-3mm]:No.3 std delivery X-RAY (Actual data).Limit:[-,-]
short    s_xrya4;
short    s_xrya4Zi;
//short    xrya5 = Unit[10-3mm]:No.4 std delivery X-RAY (Actual data).Limit:[-,-]
short    s_xrya5;
short    s_xrya5Zi;
//short    xrya6 = Unit[10-3mm]:No.5 std delivery X-RAY (Actual data).Limit:[-,-]
short    s_xrya6;
short    s_xrya6Zi;
//short    sspd1 = Unit[10-1mpm]:Mill entry strip speed.Limit:[-,-]
short    s_sspd1;
short    s_sspd1Zi;
//short    sspd2 = Unit[10-1mpm]:No.1 std delivery strip speed.Limit:[-,-]
short    s_sspd2;
short    s_sspd2Zi;
//short    sspd3 = Unit[10-1mpm]:No.2 std delivery strip speed.Limit:[-,-]
short    s_sspd3;
short    s_sspd3Zi;
//short    sspd4 = Unit[10-1mpm]:No.3 std delivery strip speed.Limit:[-,-]
short    s_sspd4;
short    s_sspd4Zi;
//short    sspd5 = Unit[10-1mpm]:No.4 std delivery strip speed.Limit:[-,-]
short    s_sspd5;
short    s_sspd5Zi;
//short    sspd6 = Unit[10-1mpm]:No.5 std delivery strip speed.Limit:[-,-]
short    s_sspd6;
short    s_sspd6Zi;
//short    rspd1 = Unit[10-1mpm]:No.1 std delivery roll speed.Limit:[-,-]
short    s_rspd1;
short    s_rspd1Zi;
//short    rspd2 = Unit[10-1mpm]:No.2 std delivery roll speed.Limit:[-,-]
short    s_rspd2;
short    s_rspd2Zi;
//short    rspd3 = Unit[10-1mpm]:No.3 std delivery roll speed.Limit:[-,-]
short    s_rspd3;
short    s_rspd3Zi;
//short    rspd4 = Unit[10-1mpm]:No.4 std delivery roll speed.Limit:[-,-]
short    s_rspd4;
short    s_rspd4Zi;
//short    rspd5 = Unit[10-1mpm]:No.5 std delivery roll speed.Limit:[-,-]
short    s_rspd5;
short    s_rspd5Zi;
//short    wrben1 = Unit[KN/ch]:WR bender 1std.Limit:[-,-]
short    s_wrben1;
short    s_wrben1Zi;
//short    wrben2 = Unit[KN/ch]:WR bender 2std.Limit:[-,-]
short    s_wrben2;
short    s_wrben2Zi;
//short    wrben3 = Unit[KN/ch]:WR bender 3std.Limit:[-,-]
short    s_wrben3;
short    s_wrben3Zi;
//short    wrben4 = Unit[KN/ch]:WR bender 4std.Limit:[-,-]
short    s_wrben4;
short    s_wrben4Zi;
//short    wrben5 = Unit[KN/ch]:WR bender 5std.Limit:[-,-]
short    s_wrben5;
short    s_wrben5Zi;
//short    imrben1 = Unit[KN/ch]:IMR bender 1std.Limit:[-,-]
short    s_imrben1;
short    s_imrben1Zi;
//short    imrben2 = Unit[KN/ch]:IMR bender 2std.Limit:[-,-]
short    s_imrben2;
short    s_imrben2Zi;
//short    imrben3 = Unit[KN/ch]:IMR bender 3std.Limit:[-,-]
short    s_imrben3;
short    s_imrben3Zi;
//short    imrben4 = Unit[KN/ch]:IMR bender 4std.Limit:[-,-]
short    s_imrben4;
short    s_imrben4Zi;
//short    imrben5 = Unit[KN/ch]:IMR bender 5std.Limit:[-,-]
short    s_imrben5;
short    s_imrben5Zi;
//short    wrst1 = Unit[mm]:WRS 1 std TOP   F.U..Limit:[-,-]
short    s_wrst1;
short    s_wrst1Zi;
//short    wrsb1 = Unit[mm]:WRS 1 std BOT.Limit:[-,-]
short    s_wrsb1;
short    s_wrsb1Zi;
//short    wrst2 = Unit[mm]:WRS 2 std TOP.Limit:[-,-]
short    s_wrst2;
short    s_wrst2Zi;
//short    wrsb2 = Unit[mm]:WRS 2 std BOT.Limit:[-,-]
short    s_wrsb2;
short    s_wrsb2Zi;
//short    wrst3 = Unit[mm]:WRS 3 std TOP.Limit:[-,-]
short    s_wrst3;
short    s_wrst3Zi;
//short    wrsb3 = Unit[mm]:WRS 3 std BOT.Limit:[-,-]
short    s_wrsb3;
short    s_wrsb3Zi;
//short    wrst4 = Unit[mm]:WRS 4 std TOP.Limit:[-,-]
short    s_wrst4;
short    s_wrst4Zi;
//short    wrsb4 = Unit[-]:WRS 4 std BOT.Limit:[-,-]
short    s_wrsb4;
short    s_wrsb4Zi;
//short    wrst5 = Unit[-]:WRS 5 std TOP.Limit:[-,-]
short    s_wrst5;
short    s_wrst5Zi;
//short    wrsb5 = Unit[-]:WRS 5 std BOT.Limit:[-,-]
short    s_wrsb5;
short    s_wrsb5Zi;
//short    imsht1 = Unit[mm]:IMR shift 1 std TOP.Limit:[-,-]
short    s_imsht1;
short    s_imsht1Zi;
//short    imshb1 = Unit[mm]:IMR shift 1 std BOT.Limit:[-,-]
short    s_imshb1;
short    s_imshb1Zi;
//short    imsht2 = Unit[mm]:IMR shift 2 std TOP.Limit:[-,-]
short    s_imsht2;
short    s_imsht2Zi;
//short    imshb2 = Unit[mm]:IMR shift 2 std BOT.Limit:[-,-]
short    s_imshb2;
short    s_imshb2Zi;
//short    imsht3 = Unit[mm]:IMR shift 3 std TOP.Limit:[-,-]
short    s_imsht3;
short    s_imsht3Zi;
//short    imshb3 = Unit[mm]:IMR shift 3 std BOT.Limit:[-,-]
short    s_imshb3;
short    s_imshb3Zi;
//short    imsht4 = Unit[mm]:IMR shift 4 std TOP.Limit:[-,-]
short    s_imsht4;
short    s_imsht4Zi;
//short    imshb4 = Unit[-]:IMR shift 4 std BOT.Limit:[-,-]
short    s_imshb4;
short    s_imshb4Zi;
//short    imsht5 = Unit[-]:IMR shift 5 std TOP.Limit:[-,-]
short    s_imsht5;
short    s_imsht5Zi;
//short    imshb5 = Unit[-]:IMR shift 5 std BOT.Limit:[-,-]
short    s_imshb5;
short    s_imshb5Zi;
//short    wgws1 = Unit[-]:Roll gap 1 std (WS).Limit:[-,-]
short    s_wgws1;
short    s_wgws1Zi;
//short    wgws2 = Unit[KN]:Roll gap 2 std (WS).Limit:[-,-]
short    s_wgws2;
short    s_wgws2Zi;
//short    wgws3 = Unit[mm]:Roll gap 3 std (WS).Limit:[-,-]
short    s_wgws3;
short    s_wgws3Zi;
//short    wgws4 = Unit[mm]:Roll gap 4 std (WS).Limit:[-,-]
short    s_wgws4;
short    s_wgws4Zi;
//short    wgws5 = Unit[KN]:Roll gap 5 std (WS).Limit:[-,-]
short    s_wgws5;
short    s_wgws5Zi;
//short    wgds1 = Unit[-]:Roll gap 1 std (DS).Limit:[-,-]
short    s_wgds1;
short    s_wgds1Zi;
//short    wgds2 = Unit[-]:Roll gap 2 std (DS).Limit:[-,-]
short    s_wgds2;
short    s_wgds2Zi;
//short    wgds3 = Unit[10-1mm]:Roll gap 3 std (DS).Limit:[-,-]
short    s_wgds3;
short    s_wgds3Zi;
//short    wgds4 = Unit[10-1mm]:Roll gap 4 std (DS).Limit:[-,-]
short    s_wgds4;
short    s_wgds4Zi;
//short    wgds5 = Unit[10-1mm]:Roll gap 5 std (DS).Limit:[-,-]
short    s_wgds5;
short    s_wgds5Zi;
//short    rttl1 = Unit[10-1mm]:Roll force 1 std total.Limit:[-,-]
short    s_rttl1;
short    s_rttl1Zi;
//short    rttl2 = Unit[10-1mm]:Roll force 2 std total.Limit:[-,-]
short    s_rttl2;
short    s_rttl2Zi;
//short    rttl3 = Unit[-]:Roll force 3 std total.Limit:[-,-]
short    s_rttl3;
short    s_rttl3Zi;
//short    rttl4 = Unit[10-1mpm]:Roll force 4 std total.Limit:[-,-]
short    s_rttl4;
short    s_rttl4Zi;
//short    rttl5 = Unit[-]:Roll force 5 std total.Limit:[-,-]
short    s_rttl5;
short    s_rttl5Zi;
//short    rdf1 = Unit[%]:Roll force 1 std differential.Limit:[-,-]
short    s_rdf1;
short    s_rdf1Zi;
//short    rdf2 = Unit[KN]:Roll force 2 std differential.Limit:[-,-]
short    s_rdf2;
short    s_rdf2Zi;
//short    rdf3 = Unit[-]:Roll force 3 std differential.Limit:[-,-]
short    s_rdf3;
short    s_rdf3Zi;
//short    rdf4 = Unit[mm]:Roll force 4 std differential.Limit:[-,-]
short    s_rdf4;
short    s_rdf4Zi;
//short    rdf5 = Unit[%]:Roll force 5 std differential.Limit:[-,-]
short    s_rdf5;
short    s_rdf5Zi;
//short    tens1 = Unit[-]:Tension before 1 std (total).Limit:[-,-]
short    s_tens1;
short    s_tens1Zi;
//short    tens2 = Unit[mm]:Tension after 1 std (total).Limit:[-,-]
short    s_tens2;
short    s_tens2Zi;
//short    tens3 = Unit[%]:Tension after 2 std (total).Limit:[-,-]
short    s_tens3;
short    s_tens3Zi;
//short    tens4 = Unit[KN]:Tension after 3 std (total).Limit:[-,-]
short    s_tens4;
short    s_tens4Zi;
//short    tens5 = Unit[-]:Tension after 4 std (total).Limit:[-,-]
short    s_tens5;
short    s_tens5Zi;
//short    tens6 = Unit[10-1mpm]:Tension after 5 std (total).Limit:[-,-]
short    s_tens6;
short    s_tens6Zi;
//short    tendf1 = Unit[-]:Tension differential  before 1 std (total).Limit:[-,-]
short    s_tendf1;
short    s_tendf1Zi;
//short    tendf2 = Unit[-]:Tension differential after 1 std (total).Limit:[-,-]
short    s_tendf2;
short    s_tendf2Zi;
//short    tendf3 = Unit[-]:Tension differential after 2 std (total).Limit:[-,-]
short    s_tendf3;
short    s_tendf3Zi;
//short    tendf4 = Unit[-]:Tensiondifferential after 3 std (total).Limit:[-,-]
short    s_tendf4;
short    s_tendf4Zi;
//short    tendf5 = Unit[-]:Tension differential after 4 std (total).Limit:[-,-]
short    s_tendf5;
short    s_tendf5Zi;
//short    tendf6 = Unit[-]:Tension differential after 5 std (total).Limit:[-,-]
short    s_tendf6;
short    s_tendf6Zi;
//short    mcnb1 = Unit[KN]:Motor current mill BR 1 roll.Limit:[-,-]
short    s_mcnb1;
short    s_mcnb1Zi;
//short    mcnb2 = Unit[¡æ]:Motor current mill BR 2 roll.Limit:[-,-]
short    s_mcnb2;
short    s_mcnb2Zi;
//short    mcnb3 = Unit[10-1%]:Motor current mill BR 3 roll.Limit:[-,-]
short    s_mcnb3;
short    s_mcnb3Zi;
//short    mcnb4 = Unit[10-1%]:Motor current mill BR 4 roll.Limit:[-,-]
short    s_mcnb4;
short    s_mcnb4Zi;
//short    mcst1 = Unit[¡æ]:Motor current 1 std.Limit:[-,-]
short    s_mcst1;
short    s_mcst1Zi;
//short    mcst2 = Unit[KN]:Motor current 2 std.Limit:[-,-]
short    s_mcst2;
short    s_mcst2Zi;
//short    mcst3 = Unit[¡æ]:Motor current 3 std.Limit:[-,-]
short    s_mcst3;
short    s_mcst3Zi;
//short    mcst4 = Unit[10-1%]:Motor current 4 std.Limit:[-,-]
short    s_mcst4;
short    s_mcst4Zi;
//short    mcst5 = Unit[10-1%]:Motor current 5 std.Limit:[-,-]
short    s_mcst5;
short    s_mcst5Zi;
//short    fslip1 = Unit[¡æ]:Forward Slip 1std.Limit:[-,-]
short    s_fslip1;
short    s_fslip1Zi;
//short    fslip2 = Unit[10-1%]:Forward Slip 2std.Limit:[-,-]
short    s_fslip2;
short    s_fslip2Zi;
//short    fslip3 = Unit[10-1%]:Forward Slip 3std.Limit:[-,-]
short    s_fslip3;
short    s_fslip3Zi;
//short    fslip4 = Unit[¡æ]:Forward Slip 4std.Limit:[-,-]
short    s_fslip4;
short    s_fslip4Zi;
//short    fslip5 = Unit[10-1%]:Forward Slip 5std.Limit:[-,-]
short    s_fslip5;
short    s_fslip5Zi;
//short    mvst1 = Unit[10-1%]:Motor voltage 1 std.Limit:[-,-]
short    s_mvst1;
short    s_mvst1Zi;
//short    mvst2 = Unit[-]:Motor voltage 2 std.Limit:[-,-]
short    s_mvst2;
short    s_mvst2Zi;
//short    mvst3 = Unit[KN]:Motor voltage 3 std.Limit:[-,-]
short    s_mvst3;
short    s_mvst3Zi;
//short    mvst4 = Unit[KN]:Motor voltage 4 std.Limit:[-,-]
short    s_mvst4;
short    s_mvst4Zi;
//short    mvst5 = Unit[10¦Ì]:Motor voltage 5 std.Limit:[-,-]
short    s_mvst5;
short    s_mvst5Zi;
//short    drop1 = Unit[11¦Ì]:Drooping 1 std.Limit:[-,-]
short    s_drop1;
short    s_drop1Zi;
//short    drop2 = Unit[10-1%]:Drooping 2 std.Limit:[-,-]
short    s_drop2;
short    s_drop2Zi;
//short    drop3 = Unit[10-1mpm]:Drooping 3 std.Limit:[-,-]
short    s_drop3;
short    s_drop3Zi;
//short    drop4 = Unit[-]:Drooping 4 std.Limit:[-,-]
short    s_drop4;
short    s_drop4Zi;
//short    drop5 = Unit[10-1mpm]:Drooping 5 std.Limit:[-,-]
short    s_drop5;
short    s_drop5Zi;
//short    drspd = Unit[mm]:Def. Roll speed.Limit:[-,-]
short    s_drspd;
short    s_drspdZi;
//short    smspd = Unit[mm]:Shape meter speed.Limit:[-,-]
short    s_smspd;
short    s_smspdZi;
//short    mctr1 = Unit[-]:Motor current TR-1.Limit:[-,-]
short    s_mctr1;
short    s_mctr1Zi;
//short    mctr2 = Unit[-]:Motor current TR-2.Limit:[-,-]
short    s_mctr2;
short    s_mctr2Zi;
//short    mvtr1 = Unit[-]:Motor voltage TR-1.Limit:[-,-]
short    s_mvtr1;
short    s_mvtr1Zi;
//short    mvtr2 = Unit[10¦Ì]:Motor voltage TR-2.Limit:[-,-]
short    s_mvtr2;
short    s_mvtr2Zi;
//short    trlen = Unit[10¦Ì]:TR coiling length.Limit:[-,-]
short    s_trlen;
short    s_trlenZi;
//short    msts = Unit[10¦Ì]:Mill speed status.Limit:[-,-]
short    s_msts;
short    s_mstsZi;
//short    accrat = Unit[-]:Acceleration Rate of mill entry.Limit:[-,-]
short    s_accrat;
short    s_accratZi;
//short    decrat = Unit[-]:Deceleration Rate of mill entry.Limit:[-,-]
short    s_decrat;
short    s_decratZi;
//short    mast = Unit[-]:Master on/off.Limit:[-,-]
short    s_mast;
short    s_mastZi;
//short    xsts1 = Unit[-]:X-RAY 1 status (No. 1E X-RAY).Limit:[-,-]
short    s_xsts1;
short    s_xsts1Zi;
//short    xsts2 = Unit[-]:X-RAY 2 status (No. 1D X-RAY).Limit:[-,-]
short    s_xsts2;
short    s_xsts2Zi;
//short    xsts3 = Unit[-]:X-RAY 3 status (No. 2D X-RAY).Limit:[-,-]
short    s_xsts3;
short    s_xsts3Zi;
//short    xsts4 = Unit[-]:X-RAY 4 status (No. 3D X-RAY).Limit:[-,-]
short    s_xsts4;
short    s_xsts4Zi;
//short    xsts5 = Unit[-]:X-RAY 5 status (No. 4D X-RAY).Limit:[-,-]
short    s_xsts5;
short    s_xsts5Zi;
//short    xsts6 = Unit[-]:X-RAY 6 status (No. 5D X-RAY).Limit:[-,-]
short    s_xsts6;
short    s_xsts6Zi;
//short    edsts = Unit[-]:Edge Drop meter status.Limit:[-,-]
short    s_edsts;
short    s_edstsZi;
//short    agmd1 = Unit[-]:AGC mode agc master.Limit:[-,-]
short    s_agmd1;
short    s_agmd1Zi;
//short    agmd2 = Unit[-]:AGC mode bisra.Limit:[-,-]
short    s_agmd2;
short    s_agmd2Zi;
//short    agmd3 = Unit[-]:AGC mode FF1.Limit:[-,-]
short    s_agmd3;
short    s_agmd3Zi;
//short    agmd4 = Unit[-]:AGC mode GMS1.Limit:[-,-]
short    s_agmd4;
short    s_agmd4Zi;
//short    agmd5 = Unit[-]:AGC mode REC.Limit:[-,-]
short    s_agmd5;
short    s_agmd5Zi;
//short    agmd6 = Unit[-]:AGC mode MF2.Limit:[-,-]
short    s_agmd6;
short    s_agmd6Zi;
//short    agmd7 = Unit[-]:AGC mode MF3.Limit:[-,-]
short    s_agmd7;
short    s_agmd7Zi;
//short    agmd8 = Unit[-]:AGC mode MF4.Limit:[-,-]
short    s_agmd8;
short    s_agmd8Zi;
//short    agmd9 = Unit[-]:AGC mode MF5.Limit:[-,-]
short    s_agmd9;
short    s_agmd9Zi;
//short    agmd10 = Unit[-]:AGC mode ACC/DEC.Limit:[-,-]
short    s_agmd10;
short    s_agmd10Zi;
//short    agmd11 = Unit[-]:AGC mode FF2.Limit:[-,-]
short    s_agmd11;
short    s_agmd11Zi;
//short    agmd12 = Unit[-]:AGC mode FB5.Limit:[-,-]
short    s_agmd12;
short    s_agmd12Zi;
//short    asmd1 = Unit[-]:ASC mode ASC master.Limit:[-,-]
short    s_asmd1;
short    s_asmd1Zi;
//short    asmd2 = Unit[-]:ASC mode wr-b.Limit:[-,-]
short    s_asmd2;
short    s_asmd2Zi;
//short    asmd3 = Unit[-]:ASC mode imr-b.Limit:[-,-]
short    s_asmd3;
short    s_asmd3Zi;
//short    asmd4 = Unit[-]:ASC mode levelling.Limit:[-,-]
short    s_asmd4;
short    s_asmd4Zi;
//short    asmd5 = Unit[-]:ASC mode coolant.Limit:[-,-]
short    s_asmd5;
short    s_asmd5Zi;
//short    cltptn = Unit[-]:Collant pattern.Limit:[-,-]
short    s_cltptn;
short    s_cltptnZi;
//short    ph_sp1 = Unit[-]:PH (Spray line #1 [1STD-4STD]).Limit:[-,-]
short    s_ph_sp1;
short    s_ph_sp1Zi;
//short    ph_sp2 = Unit[-]:PH (Spray line #2 [5STD]).Limit:[-,-]
short    s_ph_sp2;
short    s_ph_sp2Zi;
//short    conc_sp1 = Unit[-]:Concentration (Spray line #1).Limit:[-,-]
short    s_conc_sp1;
short    s_conc_sp1Zi;
//short    conc_sp2 = Unit[-]:Concentration (Spray line #2).Limit:[-,-]
short    s_conc_sp2;
short    s_conc_sp2Zi;
//short    temp_sp1 = Unit[-]:Temperature spray line #1.Limit:[-,-]
short    s_temp_sp1;
short    s_temp_sp1Zi;
//short    temp_sp2 = Unit[-]:Temperature spray line #2.Limit:[-,-]
short    s_temp_sp2;
short    s_temp_sp2Zi;
//short    ccposi = Unit[-]:Coil Car position.Limit:[-,-]
short    s_ccposi;
short    s_ccposiZi;
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
struct STR_ACTDT_TCMACT
{
	char      datee[9];
	char      timee[7];
	short     samp_no;
	short     linsts;
	short     linstsZi;
	short     rmd;
	short     rmdZi;
	short     trno;
	short     trnoZi;
	short     dia;
	short     diaZi;
	short     acd;
	short     acdZi;
	short     mrh;
	short     mrhZi;
	short     dstd;
	short     dstdZi;
	short     xrys1;
	short     xrys1Zi;
	short     xrys2;
	short     xrys2Zi;
	short     xrys3;
	short     xrys3Zi;
	short     xrys4;
	short     xrys4Zi;
	short     xrys5;
	short     xrys5Zi;
	short     xrys6;
	short     xrys6Zi;
	short     xrya1;
	short     xrya1Zi;
	short     xrya2;
	short     xrya2Zi;
	short     xrya3;
	short     xrya3Zi;
	short     xrya4;
	short     xrya4Zi;
	short     xrya5;
	short     xrya5Zi;
	short     xrya6;
	short     xrya6Zi;
	short     sspd1;
	short     sspd1Zi;
	short     sspd2;
	short     sspd2Zi;
	short     sspd3;
	short     sspd3Zi;
	short     sspd4;
	short     sspd4Zi;
	short     sspd5;
	short     sspd5Zi;
	short     sspd6;
	short     sspd6Zi;
	short     rspd1;
	short     rspd1Zi;
	short     rspd2;
	short     rspd2Zi;
	short     rspd3;
	short     rspd3Zi;
	short     rspd4;
	short     rspd4Zi;
	short     rspd5;
	short     rspd5Zi;
	short     wrben1;
	short     wrben1Zi;
	short     wrben2;
	short     wrben2Zi;
	short     wrben3;
	short     wrben3Zi;
	short     wrben4;
	short     wrben4Zi;
	short     wrben5;
	short     wrben5Zi;
	short     imrben1;
	short     imrben1Zi;
	short     imrben2;
	short     imrben2Zi;
	short     imrben3;
	short     imrben3Zi;
	short     imrben4;
	short     imrben4Zi;
	short     imrben5;
	short     imrben5Zi;
	short     wrst1;
	short     wrst1Zi;
	short     wrsb1;
	short     wrsb1Zi;
	short     wrst2;
	short     wrst2Zi;
	short     wrsb2;
	short     wrsb2Zi;
	short     wrst3;
	short     wrst3Zi;
	short     wrsb3;
	short     wrsb3Zi;
	short     wrst4;
	short     wrst4Zi;
	short     wrsb4;
	short     wrsb4Zi;
	short     wrst5;
	short     wrst5Zi;
	short     wrsb5;
	short     wrsb5Zi;
	short     imsht1;
	short     imsht1Zi;
	short     imshb1;
	short     imshb1Zi;
	short     imsht2;
	short     imsht2Zi;
	short     imshb2;
	short     imshb2Zi;
	short     imsht3;
	short     imsht3Zi;
	short     imshb3;
	short     imshb3Zi;
	short     imsht4;
	short     imsht4Zi;
	short     imshb4;
	short     imshb4Zi;
	short     imsht5;
	short     imsht5Zi;
	short     imshb5;
	short     imshb5Zi;
	short     wgws1;
	short     wgws1Zi;
	short     wgws2;
	short     wgws2Zi;
	short     wgws3;
	short     wgws3Zi;
	short     wgws4;
	short     wgws4Zi;
	short     wgws5;
	short     wgws5Zi;
	short     wgds1;
	short     wgds1Zi;
	short     wgds2;
	short     wgds2Zi;
	short     wgds3;
	short     wgds3Zi;
	short     wgds4;
	short     wgds4Zi;
	short     wgds5;
	short     wgds5Zi;
	short     rttl1;
	short     rttl1Zi;
	short     rttl2;
	short     rttl2Zi;
	short     rttl3;
	short     rttl3Zi;
	short     rttl4;
	short     rttl4Zi;
	short     rttl5;
	short     rttl5Zi;
	short     rdf1;
	short     rdf1Zi;
	short     rdf2;
	short     rdf2Zi;
	short     rdf3;
	short     rdf3Zi;
	short     rdf4;
	short     rdf4Zi;
	short     rdf5;
	short     rdf5Zi;
	short     tens1;
	short     tens1Zi;
	short     tens2;
	short     tens2Zi;
	short     tens3;
	short     tens3Zi;
	short     tens4;
	short     tens4Zi;
	short     tens5;
	short     tens5Zi;
	short     tens6;
	short     tens6Zi;
	short     tendf1;
	short     tendf1Zi;
	short     tendf2;
	short     tendf2Zi;
	short     tendf3;
	short     tendf3Zi;
	short     tendf4;
	short     tendf4Zi;
	short     tendf5;
	short     tendf5Zi;
	short     tendf6;
	short     tendf6Zi;
	short     mcnb1;
	short     mcnb1Zi;
	short     mcnb2;
	short     mcnb2Zi;
	short     mcnb3;
	short     mcnb3Zi;
	short     mcnb4;
	short     mcnb4Zi;
	short     mcst1;
	short     mcst1Zi;
	short     mcst2;
	short     mcst2Zi;
	short     mcst3;
	short     mcst3Zi;
	short     mcst4;
	short     mcst4Zi;
	short     mcst5;
	short     mcst5Zi;
	short     fslip1;
	short     fslip1Zi;
	short     fslip2;
	short     fslip2Zi;
	short     fslip3;
	short     fslip3Zi;
	short     fslip4;
	short     fslip4Zi;
	short     fslip5;
	short     fslip5Zi;
	short     mvst1;
	short     mvst1Zi;
	short     mvst2;
	short     mvst2Zi;
	short     mvst3;
	short     mvst3Zi;
	short     mvst4;
	short     mvst4Zi;
	short     mvst5;
	short     mvst5Zi;
	short     drop1;
	short     drop1Zi;
	short     drop2;
	short     drop2Zi;
	short     drop3;
	short     drop3Zi;
	short     drop4;
	short     drop4Zi;
	short     drop5;
	short     drop5Zi;
	short     drspd;
	short     drspdZi;
	short     smspd;
	short     smspdZi;
	short     mctr1;
	short     mctr1Zi;
	short     mctr2;
	short     mctr2Zi;
	short     mvtr1;
	short     mvtr1Zi;
	short     mvtr2;
	short     mvtr2Zi;
	short     trlen;
	short     trlenZi;
	short     msts;
	short     mstsZi;
	short     accrat;
	short     accratZi;
	short     decrat;
	short     decratZi;
	short     mast;
	short     mastZi;
	short     xsts1;
	short     xsts1Zi;
	short     xsts2;
	short     xsts2Zi;
	short     xsts3;
	short     xsts3Zi;
	short     xsts4;
	short     xsts4Zi;
	short     xsts5;
	short     xsts5Zi;
	short     xsts6;
	short     xsts6Zi;
	short     edsts;
	short     edstsZi;
	short     agmd1;
	short     agmd1Zi;
	short     agmd2;
	short     agmd2Zi;
	short     agmd3;
	short     agmd3Zi;
	short     agmd4;
	short     agmd4Zi;
	short     agmd5;
	short     agmd5Zi;
	short     agmd6;
	short     agmd6Zi;
	short     agmd7;
	short     agmd7Zi;
	short     agmd8;
	short     agmd8Zi;
	short     agmd9;
	short     agmd9Zi;
	short     agmd10;
	short     agmd10Zi;
	short     agmd11;
	short     agmd11Zi;
	short     agmd12;
	short     agmd12Zi;
	short     asmd1;
	short     asmd1Zi;
	short     asmd2;
	short     asmd2Zi;
	short     asmd3;
	short     asmd3Zi;
	short     asmd4;
	short     asmd4Zi;
	short     asmd5;
	short     asmd5Zi;
	short     cltptn;
	short     cltptnZi;
	short     ph_sp1;
	short     ph_sp1Zi;
	short     ph_sp2;
	short     ph_sp2Zi;
	short     conc_sp1;
	short     conc_sp1Zi;
	short     conc_sp2;
	short     conc_sp2Zi;
	short     temp_sp1;
	short     temp_sp1Zi;
	short     temp_sp2;
	short     temp_sp2Zi;
	short     ccposi;
	short     ccposiZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structACTDT_TCMACT;
  
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
ACTDT_TCMACT();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~ACTDT_TCMACT();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
ACTDT_TCMACT(const ACTDT_TCMACT &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//short	samp_no= Unit[-]:Sampling no..Limit:[-,500000]
ACTDT_TCMACT( short arg1);

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
	strncpy (structACTDT_TCMACT.datee, datee(), sizeof( structACTDT_TCMACT.datee));
	strncpy (structACTDT_TCMACT.timee, timee(), sizeof( structACTDT_TCMACT.timee));
	structACTDT_TCMACT.samp_no = samp_no();
	structACTDT_TCMACT.linsts = linsts();
	structACTDT_TCMACT.linstsZi = linstsZi();
	structACTDT_TCMACT.rmd = rmd();
	structACTDT_TCMACT.rmdZi = rmdZi();
	structACTDT_TCMACT.trno = trno();
	structACTDT_TCMACT.trnoZi = trnoZi();
	structACTDT_TCMACT.dia = dia();
	structACTDT_TCMACT.diaZi = diaZi();
	structACTDT_TCMACT.acd = acd();
	structACTDT_TCMACT.acdZi = acdZi();
	structACTDT_TCMACT.mrh = mrh();
	structACTDT_TCMACT.mrhZi = mrhZi();
	structACTDT_TCMACT.dstd = dstd();
	structACTDT_TCMACT.dstdZi = dstdZi();
	structACTDT_TCMACT.xrys1 = xrys1();
	structACTDT_TCMACT.xrys1Zi = xrys1Zi();
	structACTDT_TCMACT.xrys2 = xrys2();
	structACTDT_TCMACT.xrys2Zi = xrys2Zi();
	structACTDT_TCMACT.xrys3 = xrys3();
	structACTDT_TCMACT.xrys3Zi = xrys3Zi();
	structACTDT_TCMACT.xrys4 = xrys4();
	structACTDT_TCMACT.xrys4Zi = xrys4Zi();
	structACTDT_TCMACT.xrys5 = xrys5();
	structACTDT_TCMACT.xrys5Zi = xrys5Zi();
	structACTDT_TCMACT.xrys6 = xrys6();
	structACTDT_TCMACT.xrys6Zi = xrys6Zi();
	structACTDT_TCMACT.xrya1 = xrya1();
	structACTDT_TCMACT.xrya1Zi = xrya1Zi();
	structACTDT_TCMACT.xrya2 = xrya2();
	structACTDT_TCMACT.xrya2Zi = xrya2Zi();
	structACTDT_TCMACT.xrya3 = xrya3();
	structACTDT_TCMACT.xrya3Zi = xrya3Zi();
	structACTDT_TCMACT.xrya4 = xrya4();
	structACTDT_TCMACT.xrya4Zi = xrya4Zi();
	structACTDT_TCMACT.xrya5 = xrya5();
	structACTDT_TCMACT.xrya5Zi = xrya5Zi();
	structACTDT_TCMACT.xrya6 = xrya6();
	structACTDT_TCMACT.xrya6Zi = xrya6Zi();
	structACTDT_TCMACT.sspd1 = sspd1();
	structACTDT_TCMACT.sspd1Zi = sspd1Zi();
	structACTDT_TCMACT.sspd2 = sspd2();
	structACTDT_TCMACT.sspd2Zi = sspd2Zi();
	structACTDT_TCMACT.sspd3 = sspd3();
	structACTDT_TCMACT.sspd3Zi = sspd3Zi();
	structACTDT_TCMACT.sspd4 = sspd4();
	structACTDT_TCMACT.sspd4Zi = sspd4Zi();
	structACTDT_TCMACT.sspd5 = sspd5();
	structACTDT_TCMACT.sspd5Zi = sspd5Zi();
	structACTDT_TCMACT.sspd6 = sspd6();
	structACTDT_TCMACT.sspd6Zi = sspd6Zi();
	structACTDT_TCMACT.rspd1 = rspd1();
	structACTDT_TCMACT.rspd1Zi = rspd1Zi();
	structACTDT_TCMACT.rspd2 = rspd2();
	structACTDT_TCMACT.rspd2Zi = rspd2Zi();
	structACTDT_TCMACT.rspd3 = rspd3();
	structACTDT_TCMACT.rspd3Zi = rspd3Zi();
	structACTDT_TCMACT.rspd4 = rspd4();
	structACTDT_TCMACT.rspd4Zi = rspd4Zi();
	structACTDT_TCMACT.rspd5 = rspd5();
	structACTDT_TCMACT.rspd5Zi = rspd5Zi();
	structACTDT_TCMACT.wrben1 = wrben1();
	structACTDT_TCMACT.wrben1Zi = wrben1Zi();
	structACTDT_TCMACT.wrben2 = wrben2();
	structACTDT_TCMACT.wrben2Zi = wrben2Zi();
	structACTDT_TCMACT.wrben3 = wrben3();
	structACTDT_TCMACT.wrben3Zi = wrben3Zi();
	structACTDT_TCMACT.wrben4 = wrben4();
	structACTDT_TCMACT.wrben4Zi = wrben4Zi();
	structACTDT_TCMACT.wrben5 = wrben5();
	structACTDT_TCMACT.wrben5Zi = wrben5Zi();
	structACTDT_TCMACT.imrben1 = imrben1();
	structACTDT_TCMACT.imrben1Zi = imrben1Zi();
	structACTDT_TCMACT.imrben2 = imrben2();
	structACTDT_TCMACT.imrben2Zi = imrben2Zi();
	structACTDT_TCMACT.imrben3 = imrben3();
	structACTDT_TCMACT.imrben3Zi = imrben3Zi();
	structACTDT_TCMACT.imrben4 = imrben4();
	structACTDT_TCMACT.imrben4Zi = imrben4Zi();
	structACTDT_TCMACT.imrben5 = imrben5();
	structACTDT_TCMACT.imrben5Zi = imrben5Zi();
	structACTDT_TCMACT.wrst1 = wrst1();
	structACTDT_TCMACT.wrst1Zi = wrst1Zi();
	structACTDT_TCMACT.wrsb1 = wrsb1();
	structACTDT_TCMACT.wrsb1Zi = wrsb1Zi();
	structACTDT_TCMACT.wrst2 = wrst2();
	structACTDT_TCMACT.wrst2Zi = wrst2Zi();
	structACTDT_TCMACT.wrsb2 = wrsb2();
	structACTDT_TCMACT.wrsb2Zi = wrsb2Zi();
	structACTDT_TCMACT.wrst3 = wrst3();
	structACTDT_TCMACT.wrst3Zi = wrst3Zi();
	structACTDT_TCMACT.wrsb3 = wrsb3();
	structACTDT_TCMACT.wrsb3Zi = wrsb3Zi();
	structACTDT_TCMACT.wrst4 = wrst4();
	structACTDT_TCMACT.wrst4Zi = wrst4Zi();
	structACTDT_TCMACT.wrsb4 = wrsb4();
	structACTDT_TCMACT.wrsb4Zi = wrsb4Zi();
	structACTDT_TCMACT.wrst5 = wrst5();
	structACTDT_TCMACT.wrst5Zi = wrst5Zi();
	structACTDT_TCMACT.wrsb5 = wrsb5();
	structACTDT_TCMACT.wrsb5Zi = wrsb5Zi();
	structACTDT_TCMACT.imsht1 = imsht1();
	structACTDT_TCMACT.imsht1Zi = imsht1Zi();
	structACTDT_TCMACT.imshb1 = imshb1();
	structACTDT_TCMACT.imshb1Zi = imshb1Zi();
	structACTDT_TCMACT.imsht2 = imsht2();
	structACTDT_TCMACT.imsht2Zi = imsht2Zi();
	structACTDT_TCMACT.imshb2 = imshb2();
	structACTDT_TCMACT.imshb2Zi = imshb2Zi();
	structACTDT_TCMACT.imsht3 = imsht3();
	structACTDT_TCMACT.imsht3Zi = imsht3Zi();
	structACTDT_TCMACT.imshb3 = imshb3();
	structACTDT_TCMACT.imshb3Zi = imshb3Zi();
	structACTDT_TCMACT.imsht4 = imsht4();
	structACTDT_TCMACT.imsht4Zi = imsht4Zi();
	structACTDT_TCMACT.imshb4 = imshb4();
	structACTDT_TCMACT.imshb4Zi = imshb4Zi();
	structACTDT_TCMACT.imsht5 = imsht5();
	structACTDT_TCMACT.imsht5Zi = imsht5Zi();
	structACTDT_TCMACT.imshb5 = imshb5();
	structACTDT_TCMACT.imshb5Zi = imshb5Zi();
	structACTDT_TCMACT.wgws1 = wgws1();
	structACTDT_TCMACT.wgws1Zi = wgws1Zi();
	structACTDT_TCMACT.wgws2 = wgws2();
	structACTDT_TCMACT.wgws2Zi = wgws2Zi();
	structACTDT_TCMACT.wgws3 = wgws3();
	structACTDT_TCMACT.wgws3Zi = wgws3Zi();
	structACTDT_TCMACT.wgws4 = wgws4();
	structACTDT_TCMACT.wgws4Zi = wgws4Zi();
	structACTDT_TCMACT.wgws5 = wgws5();
	structACTDT_TCMACT.wgws5Zi = wgws5Zi();
	structACTDT_TCMACT.wgds1 = wgds1();
	structACTDT_TCMACT.wgds1Zi = wgds1Zi();
	structACTDT_TCMACT.wgds2 = wgds2();
	structACTDT_TCMACT.wgds2Zi = wgds2Zi();
	structACTDT_TCMACT.wgds3 = wgds3();
	structACTDT_TCMACT.wgds3Zi = wgds3Zi();
	structACTDT_TCMACT.wgds4 = wgds4();
	structACTDT_TCMACT.wgds4Zi = wgds4Zi();
	structACTDT_TCMACT.wgds5 = wgds5();
	structACTDT_TCMACT.wgds5Zi = wgds5Zi();
	structACTDT_TCMACT.rttl1 = rttl1();
	structACTDT_TCMACT.rttl1Zi = rttl1Zi();
	structACTDT_TCMACT.rttl2 = rttl2();
	structACTDT_TCMACT.rttl2Zi = rttl2Zi();
	structACTDT_TCMACT.rttl3 = rttl3();
	structACTDT_TCMACT.rttl3Zi = rttl3Zi();
	structACTDT_TCMACT.rttl4 = rttl4();
	structACTDT_TCMACT.rttl4Zi = rttl4Zi();
	structACTDT_TCMACT.rttl5 = rttl5();
	structACTDT_TCMACT.rttl5Zi = rttl5Zi();
	structACTDT_TCMACT.rdf1 = rdf1();
	structACTDT_TCMACT.rdf1Zi = rdf1Zi();
	structACTDT_TCMACT.rdf2 = rdf2();
	structACTDT_TCMACT.rdf2Zi = rdf2Zi();
	structACTDT_TCMACT.rdf3 = rdf3();
	structACTDT_TCMACT.rdf3Zi = rdf3Zi();
	structACTDT_TCMACT.rdf4 = rdf4();
	structACTDT_TCMACT.rdf4Zi = rdf4Zi();
	structACTDT_TCMACT.rdf5 = rdf5();
	structACTDT_TCMACT.rdf5Zi = rdf5Zi();
	structACTDT_TCMACT.tens1 = tens1();
	structACTDT_TCMACT.tens1Zi = tens1Zi();
	structACTDT_TCMACT.tens2 = tens2();
	structACTDT_TCMACT.tens2Zi = tens2Zi();
	structACTDT_TCMACT.tens3 = tens3();
	structACTDT_TCMACT.tens3Zi = tens3Zi();
	structACTDT_TCMACT.tens4 = tens4();
	structACTDT_TCMACT.tens4Zi = tens4Zi();
	structACTDT_TCMACT.tens5 = tens5();
	structACTDT_TCMACT.tens5Zi = tens5Zi();
	structACTDT_TCMACT.tens6 = tens6();
	structACTDT_TCMACT.tens6Zi = tens6Zi();
	structACTDT_TCMACT.tendf1 = tendf1();
	structACTDT_TCMACT.tendf1Zi = tendf1Zi();
	structACTDT_TCMACT.tendf2 = tendf2();
	structACTDT_TCMACT.tendf2Zi = tendf2Zi();
	structACTDT_TCMACT.tendf3 = tendf3();
	structACTDT_TCMACT.tendf3Zi = tendf3Zi();
	structACTDT_TCMACT.tendf4 = tendf4();
	structACTDT_TCMACT.tendf4Zi = tendf4Zi();
	structACTDT_TCMACT.tendf5 = tendf5();
	structACTDT_TCMACT.tendf5Zi = tendf5Zi();
	structACTDT_TCMACT.tendf6 = tendf6();
	structACTDT_TCMACT.tendf6Zi = tendf6Zi();
	structACTDT_TCMACT.mcnb1 = mcnb1();
	structACTDT_TCMACT.mcnb1Zi = mcnb1Zi();
	structACTDT_TCMACT.mcnb2 = mcnb2();
	structACTDT_TCMACT.mcnb2Zi = mcnb2Zi();
	structACTDT_TCMACT.mcnb3 = mcnb3();
	structACTDT_TCMACT.mcnb3Zi = mcnb3Zi();
	structACTDT_TCMACT.mcnb4 = mcnb4();
	structACTDT_TCMACT.mcnb4Zi = mcnb4Zi();
	structACTDT_TCMACT.mcst1 = mcst1();
	structACTDT_TCMACT.mcst1Zi = mcst1Zi();
	structACTDT_TCMACT.mcst2 = mcst2();
	structACTDT_TCMACT.mcst2Zi = mcst2Zi();
	structACTDT_TCMACT.mcst3 = mcst3();
	structACTDT_TCMACT.mcst3Zi = mcst3Zi();
	structACTDT_TCMACT.mcst4 = mcst4();
	structACTDT_TCMACT.mcst4Zi = mcst4Zi();
	structACTDT_TCMACT.mcst5 = mcst5();
	structACTDT_TCMACT.mcst5Zi = mcst5Zi();
	structACTDT_TCMACT.fslip1 = fslip1();
	structACTDT_TCMACT.fslip1Zi = fslip1Zi();
	structACTDT_TCMACT.fslip2 = fslip2();
	structACTDT_TCMACT.fslip2Zi = fslip2Zi();
	structACTDT_TCMACT.fslip3 = fslip3();
	structACTDT_TCMACT.fslip3Zi = fslip3Zi();
	structACTDT_TCMACT.fslip4 = fslip4();
	structACTDT_TCMACT.fslip4Zi = fslip4Zi();
	structACTDT_TCMACT.fslip5 = fslip5();
	structACTDT_TCMACT.fslip5Zi = fslip5Zi();
	structACTDT_TCMACT.mvst1 = mvst1();
	structACTDT_TCMACT.mvst1Zi = mvst1Zi();
	structACTDT_TCMACT.mvst2 = mvst2();
	structACTDT_TCMACT.mvst2Zi = mvst2Zi();
	structACTDT_TCMACT.mvst3 = mvst3();
	structACTDT_TCMACT.mvst3Zi = mvst3Zi();
	structACTDT_TCMACT.mvst4 = mvst4();
	structACTDT_TCMACT.mvst4Zi = mvst4Zi();
	structACTDT_TCMACT.mvst5 = mvst5();
	structACTDT_TCMACT.mvst5Zi = mvst5Zi();
	structACTDT_TCMACT.drop1 = drop1();
	structACTDT_TCMACT.drop1Zi = drop1Zi();
	structACTDT_TCMACT.drop2 = drop2();
	structACTDT_TCMACT.drop2Zi = drop2Zi();
	structACTDT_TCMACT.drop3 = drop3();
	structACTDT_TCMACT.drop3Zi = drop3Zi();
	structACTDT_TCMACT.drop4 = drop4();
	structACTDT_TCMACT.drop4Zi = drop4Zi();
	structACTDT_TCMACT.drop5 = drop5();
	structACTDT_TCMACT.drop5Zi = drop5Zi();
	structACTDT_TCMACT.drspd = drspd();
	structACTDT_TCMACT.drspdZi = drspdZi();
	structACTDT_TCMACT.smspd = smspd();
	structACTDT_TCMACT.smspdZi = smspdZi();
	structACTDT_TCMACT.mctr1 = mctr1();
	structACTDT_TCMACT.mctr1Zi = mctr1Zi();
	structACTDT_TCMACT.mctr2 = mctr2();
	structACTDT_TCMACT.mctr2Zi = mctr2Zi();
	structACTDT_TCMACT.mvtr1 = mvtr1();
	structACTDT_TCMACT.mvtr1Zi = mvtr1Zi();
	structACTDT_TCMACT.mvtr2 = mvtr2();
	structACTDT_TCMACT.mvtr2Zi = mvtr2Zi();
	structACTDT_TCMACT.trlen = trlen();
	structACTDT_TCMACT.trlenZi = trlenZi();
	structACTDT_TCMACT.msts = msts();
	structACTDT_TCMACT.mstsZi = mstsZi();
	structACTDT_TCMACT.accrat = accrat();
	structACTDT_TCMACT.accratZi = accratZi();
	structACTDT_TCMACT.decrat = decrat();
	structACTDT_TCMACT.decratZi = decratZi();
	structACTDT_TCMACT.mast = mast();
	structACTDT_TCMACT.mastZi = mastZi();
	structACTDT_TCMACT.xsts1 = xsts1();
	structACTDT_TCMACT.xsts1Zi = xsts1Zi();
	structACTDT_TCMACT.xsts2 = xsts2();
	structACTDT_TCMACT.xsts2Zi = xsts2Zi();
	structACTDT_TCMACT.xsts3 = xsts3();
	structACTDT_TCMACT.xsts3Zi = xsts3Zi();
	structACTDT_TCMACT.xsts4 = xsts4();
	structACTDT_TCMACT.xsts4Zi = xsts4Zi();
	structACTDT_TCMACT.xsts5 = xsts5();
	structACTDT_TCMACT.xsts5Zi = xsts5Zi();
	structACTDT_TCMACT.xsts6 = xsts6();
	structACTDT_TCMACT.xsts6Zi = xsts6Zi();
	structACTDT_TCMACT.edsts = edsts();
	structACTDT_TCMACT.edstsZi = edstsZi();
	structACTDT_TCMACT.agmd1 = agmd1();
	structACTDT_TCMACT.agmd1Zi = agmd1Zi();
	structACTDT_TCMACT.agmd2 = agmd2();
	structACTDT_TCMACT.agmd2Zi = agmd2Zi();
	structACTDT_TCMACT.agmd3 = agmd3();
	structACTDT_TCMACT.agmd3Zi = agmd3Zi();
	structACTDT_TCMACT.agmd4 = agmd4();
	structACTDT_TCMACT.agmd4Zi = agmd4Zi();
	structACTDT_TCMACT.agmd5 = agmd5();
	structACTDT_TCMACT.agmd5Zi = agmd5Zi();
	structACTDT_TCMACT.agmd6 = agmd6();
	structACTDT_TCMACT.agmd6Zi = agmd6Zi();
	structACTDT_TCMACT.agmd7 = agmd7();
	structACTDT_TCMACT.agmd7Zi = agmd7Zi();
	structACTDT_TCMACT.agmd8 = agmd8();
	structACTDT_TCMACT.agmd8Zi = agmd8Zi();
	structACTDT_TCMACT.agmd9 = agmd9();
	structACTDT_TCMACT.agmd9Zi = agmd9Zi();
	structACTDT_TCMACT.agmd10 = agmd10();
	structACTDT_TCMACT.agmd10Zi = agmd10Zi();
	structACTDT_TCMACT.agmd11 = agmd11();
	structACTDT_TCMACT.agmd11Zi = agmd11Zi();
	structACTDT_TCMACT.agmd12 = agmd12();
	structACTDT_TCMACT.agmd12Zi = agmd12Zi();
	structACTDT_TCMACT.asmd1 = asmd1();
	structACTDT_TCMACT.asmd1Zi = asmd1Zi();
	structACTDT_TCMACT.asmd2 = asmd2();
	structACTDT_TCMACT.asmd2Zi = asmd2Zi();
	structACTDT_TCMACT.asmd3 = asmd3();
	structACTDT_TCMACT.asmd3Zi = asmd3Zi();
	structACTDT_TCMACT.asmd4 = asmd4();
	structACTDT_TCMACT.asmd4Zi = asmd4Zi();
	structACTDT_TCMACT.asmd5 = asmd5();
	structACTDT_TCMACT.asmd5Zi = asmd5Zi();
	structACTDT_TCMACT.cltptn = cltptn();
	structACTDT_TCMACT.cltptnZi = cltptnZi();
	structACTDT_TCMACT.ph_sp1 = ph_sp1();
	structACTDT_TCMACT.ph_sp1Zi = ph_sp1Zi();
	structACTDT_TCMACT.ph_sp2 = ph_sp2();
	structACTDT_TCMACT.ph_sp2Zi = ph_sp2Zi();
	structACTDT_TCMACT.conc_sp1 = conc_sp1();
	structACTDT_TCMACT.conc_sp1Zi = conc_sp1Zi();
	structACTDT_TCMACT.conc_sp2 = conc_sp2();
	structACTDT_TCMACT.conc_sp2Zi = conc_sp2Zi();
	structACTDT_TCMACT.temp_sp1 = temp_sp1();
	structACTDT_TCMACT.temp_sp1Zi = temp_sp1Zi();
	structACTDT_TCMACT.temp_sp2 = temp_sp2();
	structACTDT_TCMACT.temp_sp2Zi = temp_sp2Zi();
	structACTDT_TCMACT.ccposi = ccposi();
	structACTDT_TCMACT.ccposiZi = ccposiZi();
	strncpy (structACTDT_TCMACT.toc, toc(), sizeof( structACTDT_TCMACT.toc));
	structACTDT_TCMACT.tocZi = tocZi();
	strncpy (structACTDT_TCMACT.tom, tom(), sizeof( structACTDT_TCMACT.tom));
	structACTDT_TCMACT.tomZi = tomZi();
	strncpy (structACTDT_TCMACT.mop, mop(), sizeof( structACTDT_TCMACT.mop));
	structACTDT_TCMACT.mopZi = mopZi();
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
ACTDT_TCMACT operator+(const ACTDT_TCMACT &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const ACTDT_TCMACT& operator=(const ACTDT_TCMACT &inst);

      
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

//short linsts = Unit[-]:TCM line start/stop.Limit:[-,-]
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

//short rmd = Unit[-]:Roll changing mode.Limit:[-,-]
short  rmd() const
{
   return (s_rmd);
}

void  set_rmd (short arg)
{
   s_rmd= arg;
   s_rmdZi = 0;
   return;
}

short   rmdZi() const
{
   return (s_rmdZi);
}

void  set_rmdZi(short arg)
{
   s_rmdZi= arg;
    return;
}

//short trno = Unit[-]:Upper position TR number.Limit:[-,-]
short  trno() const
{
   return (s_trno);
}

void  set_trno (short arg)
{
   s_trno= arg;
   s_trnoZi = 0;
   return;
}

short   trnoZi() const
{
   return (s_trnoZi);
}

void  set_trnoZi(short arg)
{
   s_trnoZi= arg;
    return;
}

//short dia = Unit[10-1mm]:TR coil outer diameter.Limit:[-,-]
short  dia() const
{
   return (s_dia);
}

void  set_dia (short arg)
{
   s_dia= arg;
   s_diaZi = 0;
   return;
}

short   diaZi() const
{
   return (s_diaZi);
}

void  set_diaZi(short arg)
{
   s_diaZi= arg;
    return;
}

//short acd = Unit[-]:Accel pattern code(1:H,2:M, 3:L).Limit:[-,-]
short  acd() const
{
   return (s_acd);
}

void  set_acd (short arg)
{
   s_acd= arg;
   s_acdZi = 0;
   return;
}

short   acdZi() const
{
   return (s_acdZi);
}

void  set_acdZi(short arg)
{
   s_acdZi= arg;
    return;
}

//short mrh = Unit[%]:RHEOSTAT PRESENT(MRH).Limit:[-,-]
short  mrh() const
{
   return (s_mrh);
}

void  set_mrh (short arg)
{
   s_mrh= arg;
   s_mrhZi = 0;
   return;
}

short   mrhZi() const
{
   return (s_mrhZi);
}

void  set_mrhZi(short arg)
{
   s_mrhZi= arg;
    return;
}

//short dstd = Unit[-]:Dummy stand selection.Limit:[-,-]
short  dstd() const
{
   return (s_dstd);
}

void  set_dstd (short arg)
{
   s_dstd= arg;
   s_dstdZi = 0;
   return;
}

short   dstdZi() const
{
   return (s_dstdZi);
}

void  set_dstdZi(short arg)
{
   s_dstdZi= arg;
    return;
}

//short xrys1 = Unit[10-3mm]:No.1 std entry X-RAY (Setting data).Limit:[-,-]
short  xrys1() const
{
   return (s_xrys1);
}

void  set_xrys1 (short arg)
{
   s_xrys1= arg;
   s_xrys1Zi = 0;
   return;
}

short   xrys1Zi() const
{
   return (s_xrys1Zi);
}

void  set_xrys1Zi(short arg)
{
   s_xrys1Zi= arg;
    return;
}

//short xrys2 = Unit[10-3mm]:No.1 std delivery X-RAY (Setting data).Limit:[-,-]
short  xrys2() const
{
   return (s_xrys2);
}

void  set_xrys2 (short arg)
{
   s_xrys2= arg;
   s_xrys2Zi = 0;
   return;
}

short   xrys2Zi() const
{
   return (s_xrys2Zi);
}

void  set_xrys2Zi(short arg)
{
   s_xrys2Zi= arg;
    return;
}

//short xrys3 = Unit[10-3mm]:No.2 std delivery X-RAY (Setting data).Limit:[-,-]
short  xrys3() const
{
   return (s_xrys3);
}

void  set_xrys3 (short arg)
{
   s_xrys3= arg;
   s_xrys3Zi = 0;
   return;
}

short   xrys3Zi() const
{
   return (s_xrys3Zi);
}

void  set_xrys3Zi(short arg)
{
   s_xrys3Zi= arg;
    return;
}

//short xrys4 = Unit[10-3mm]:No.3 std delivery X-RAY (Setting data).Limit:[-,-]
short  xrys4() const
{
   return (s_xrys4);
}

void  set_xrys4 (short arg)
{
   s_xrys4= arg;
   s_xrys4Zi = 0;
   return;
}

short   xrys4Zi() const
{
   return (s_xrys4Zi);
}

void  set_xrys4Zi(short arg)
{
   s_xrys4Zi= arg;
    return;
}

//short xrys5 = Unit[10-3mm]:No.4 std delivery X-RAY (Setting data).Limit:[-,-]
short  xrys5() const
{
   return (s_xrys5);
}

void  set_xrys5 (short arg)
{
   s_xrys5= arg;
   s_xrys5Zi = 0;
   return;
}

short   xrys5Zi() const
{
   return (s_xrys5Zi);
}

void  set_xrys5Zi(short arg)
{
   s_xrys5Zi= arg;
    return;
}

//short xrys6 = Unit[10-3mm]:No.5 std delivery X-RAY (Setting data).Limit:[-,-]
short  xrys6() const
{
   return (s_xrys6);
}

void  set_xrys6 (short arg)
{
   s_xrys6= arg;
   s_xrys6Zi = 0;
   return;
}

short   xrys6Zi() const
{
   return (s_xrys6Zi);
}

void  set_xrys6Zi(short arg)
{
   s_xrys6Zi= arg;
    return;
}

//short xrya1 = Unit[10-3mm]:No.1 std entry X-RAY (Actual data).Limit:[-,-]
short  xrya1() const
{
   return (s_xrya1);
}

void  set_xrya1 (short arg)
{
   s_xrya1= arg;
   s_xrya1Zi = 0;
   return;
}

short   xrya1Zi() const
{
   return (s_xrya1Zi);
}

void  set_xrya1Zi(short arg)
{
   s_xrya1Zi= arg;
    return;
}

//short xrya2 = Unit[10-3mm]:No.1 std delivery X-RAY (Actual data).Limit:[-,-]
short  xrya2() const
{
   return (s_xrya2);
}

void  set_xrya2 (short arg)
{
   s_xrya2= arg;
   s_xrya2Zi = 0;
   return;
}

short   xrya2Zi() const
{
   return (s_xrya2Zi);
}

void  set_xrya2Zi(short arg)
{
   s_xrya2Zi= arg;
    return;
}

//short xrya3 = Unit[10-3mm]:No.2 std delivery X-RAY (Actual data).Limit:[-,-]
short  xrya3() const
{
   return (s_xrya3);
}

void  set_xrya3 (short arg)
{
   s_xrya3= arg;
   s_xrya3Zi = 0;
   return;
}

short   xrya3Zi() const
{
   return (s_xrya3Zi);
}

void  set_xrya3Zi(short arg)
{
   s_xrya3Zi= arg;
    return;
}

//short xrya4 = Unit[10-3mm]:No.3 std delivery X-RAY (Actual data).Limit:[-,-]
short  xrya4() const
{
   return (s_xrya4);
}

void  set_xrya4 (short arg)
{
   s_xrya4= arg;
   s_xrya4Zi = 0;
   return;
}

short   xrya4Zi() const
{
   return (s_xrya4Zi);
}

void  set_xrya4Zi(short arg)
{
   s_xrya4Zi= arg;
    return;
}

//short xrya5 = Unit[10-3mm]:No.4 std delivery X-RAY (Actual data).Limit:[-,-]
short  xrya5() const
{
   return (s_xrya5);
}

void  set_xrya5 (short arg)
{
   s_xrya5= arg;
   s_xrya5Zi = 0;
   return;
}

short   xrya5Zi() const
{
   return (s_xrya5Zi);
}

void  set_xrya5Zi(short arg)
{
   s_xrya5Zi= arg;
    return;
}

//short xrya6 = Unit[10-3mm]:No.5 std delivery X-RAY (Actual data).Limit:[-,-]
short  xrya6() const
{
   return (s_xrya6);
}

void  set_xrya6 (short arg)
{
   s_xrya6= arg;
   s_xrya6Zi = 0;
   return;
}

short   xrya6Zi() const
{
   return (s_xrya6Zi);
}

void  set_xrya6Zi(short arg)
{
   s_xrya6Zi= arg;
    return;
}

//short sspd1 = Unit[10-1mpm]:Mill entry strip speed.Limit:[-,-]
short  sspd1() const
{
   return (s_sspd1);
}

void  set_sspd1 (short arg)
{
   s_sspd1= arg;
   s_sspd1Zi = 0;
   return;
}

short   sspd1Zi() const
{
   return (s_sspd1Zi);
}

void  set_sspd1Zi(short arg)
{
   s_sspd1Zi= arg;
    return;
}

//short sspd2 = Unit[10-1mpm]:No.1 std delivery strip speed.Limit:[-,-]
short  sspd2() const
{
   return (s_sspd2);
}

void  set_sspd2 (short arg)
{
   s_sspd2= arg;
   s_sspd2Zi = 0;
   return;
}

short   sspd2Zi() const
{
   return (s_sspd2Zi);
}

void  set_sspd2Zi(short arg)
{
   s_sspd2Zi= arg;
    return;
}

//short sspd3 = Unit[10-1mpm]:No.2 std delivery strip speed.Limit:[-,-]
short  sspd3() const
{
   return (s_sspd3);
}

void  set_sspd3 (short arg)
{
   s_sspd3= arg;
   s_sspd3Zi = 0;
   return;
}

short   sspd3Zi() const
{
   return (s_sspd3Zi);
}

void  set_sspd3Zi(short arg)
{
   s_sspd3Zi= arg;
    return;
}

//short sspd4 = Unit[10-1mpm]:No.3 std delivery strip speed.Limit:[-,-]
short  sspd4() const
{
   return (s_sspd4);
}

void  set_sspd4 (short arg)
{
   s_sspd4= arg;
   s_sspd4Zi = 0;
   return;
}

short   sspd4Zi() const
{
   return (s_sspd4Zi);
}

void  set_sspd4Zi(short arg)
{
   s_sspd4Zi= arg;
    return;
}

//short sspd5 = Unit[10-1mpm]:No.4 std delivery strip speed.Limit:[-,-]
short  sspd5() const
{
   return (s_sspd5);
}

void  set_sspd5 (short arg)
{
   s_sspd5= arg;
   s_sspd5Zi = 0;
   return;
}

short   sspd5Zi() const
{
   return (s_sspd5Zi);
}

void  set_sspd5Zi(short arg)
{
   s_sspd5Zi= arg;
    return;
}

//short sspd6 = Unit[10-1mpm]:No.5 std delivery strip speed.Limit:[-,-]
short  sspd6() const
{
   return (s_sspd6);
}

void  set_sspd6 (short arg)
{
   s_sspd6= arg;
   s_sspd6Zi = 0;
   return;
}

short   sspd6Zi() const
{
   return (s_sspd6Zi);
}

void  set_sspd6Zi(short arg)
{
   s_sspd6Zi= arg;
    return;
}

//short rspd1 = Unit[10-1mpm]:No.1 std delivery roll speed.Limit:[-,-]
short  rspd1() const
{
   return (s_rspd1);
}

void  set_rspd1 (short arg)
{
   s_rspd1= arg;
   s_rspd1Zi = 0;
   return;
}

short   rspd1Zi() const
{
   return (s_rspd1Zi);
}

void  set_rspd1Zi(short arg)
{
   s_rspd1Zi= arg;
    return;
}

//short rspd2 = Unit[10-1mpm]:No.2 std delivery roll speed.Limit:[-,-]
short  rspd2() const
{
   return (s_rspd2);
}

void  set_rspd2 (short arg)
{
   s_rspd2= arg;
   s_rspd2Zi = 0;
   return;
}

short   rspd2Zi() const
{
   return (s_rspd2Zi);
}

void  set_rspd2Zi(short arg)
{
   s_rspd2Zi= arg;
    return;
}

//short rspd3 = Unit[10-1mpm]:No.3 std delivery roll speed.Limit:[-,-]
short  rspd3() const
{
   return (s_rspd3);
}

void  set_rspd3 (short arg)
{
   s_rspd3= arg;
   s_rspd3Zi = 0;
   return;
}

short   rspd3Zi() const
{
   return (s_rspd3Zi);
}

void  set_rspd3Zi(short arg)
{
   s_rspd3Zi= arg;
    return;
}

//short rspd4 = Unit[10-1mpm]:No.4 std delivery roll speed.Limit:[-,-]
short  rspd4() const
{
   return (s_rspd4);
}

void  set_rspd4 (short arg)
{
   s_rspd4= arg;
   s_rspd4Zi = 0;
   return;
}

short   rspd4Zi() const
{
   return (s_rspd4Zi);
}

void  set_rspd4Zi(short arg)
{
   s_rspd4Zi= arg;
    return;
}

//short rspd5 = Unit[10-1mpm]:No.5 std delivery roll speed.Limit:[-,-]
short  rspd5() const
{
   return (s_rspd5);
}

void  set_rspd5 (short arg)
{
   s_rspd5= arg;
   s_rspd5Zi = 0;
   return;
}

short   rspd5Zi() const
{
   return (s_rspd5Zi);
}

void  set_rspd5Zi(short arg)
{
   s_rspd5Zi= arg;
    return;
}

//short wrben1 = Unit[KN/ch]:WR bender 1std.Limit:[-,-]
short  wrben1() const
{
   return (s_wrben1);
}

void  set_wrben1 (short arg)
{
   s_wrben1= arg;
   s_wrben1Zi = 0;
   return;
}

short   wrben1Zi() const
{
   return (s_wrben1Zi);
}

void  set_wrben1Zi(short arg)
{
   s_wrben1Zi= arg;
    return;
}

//short wrben2 = Unit[KN/ch]:WR bender 2std.Limit:[-,-]
short  wrben2() const
{
   return (s_wrben2);
}

void  set_wrben2 (short arg)
{
   s_wrben2= arg;
   s_wrben2Zi = 0;
   return;
}

short   wrben2Zi() const
{
   return (s_wrben2Zi);
}

void  set_wrben2Zi(short arg)
{
   s_wrben2Zi= arg;
    return;
}

//short wrben3 = Unit[KN/ch]:WR bender 3std.Limit:[-,-]
short  wrben3() const
{
   return (s_wrben3);
}

void  set_wrben3 (short arg)
{
   s_wrben3= arg;
   s_wrben3Zi = 0;
   return;
}

short   wrben3Zi() const
{
   return (s_wrben3Zi);
}

void  set_wrben3Zi(short arg)
{
   s_wrben3Zi= arg;
    return;
}

//short wrben4 = Unit[KN/ch]:WR bender 4std.Limit:[-,-]
short  wrben4() const
{
   return (s_wrben4);
}

void  set_wrben4 (short arg)
{
   s_wrben4= arg;
   s_wrben4Zi = 0;
   return;
}

short   wrben4Zi() const
{
   return (s_wrben4Zi);
}

void  set_wrben4Zi(short arg)
{
   s_wrben4Zi= arg;
    return;
}

//short wrben5 = Unit[KN/ch]:WR bender 5std.Limit:[-,-]
short  wrben5() const
{
   return (s_wrben5);
}

void  set_wrben5 (short arg)
{
   s_wrben5= arg;
   s_wrben5Zi = 0;
   return;
}

short   wrben5Zi() const
{
   return (s_wrben5Zi);
}

void  set_wrben5Zi(short arg)
{
   s_wrben5Zi= arg;
    return;
}

//short imrben1 = Unit[KN/ch]:IMR bender 1std.Limit:[-,-]
short  imrben1() const
{
   return (s_imrben1);
}

void  set_imrben1 (short arg)
{
   s_imrben1= arg;
   s_imrben1Zi = 0;
   return;
}

short   imrben1Zi() const
{
   return (s_imrben1Zi);
}

void  set_imrben1Zi(short arg)
{
   s_imrben1Zi= arg;
    return;
}

//short imrben2 = Unit[KN/ch]:IMR bender 2std.Limit:[-,-]
short  imrben2() const
{
   return (s_imrben2);
}

void  set_imrben2 (short arg)
{
   s_imrben2= arg;
   s_imrben2Zi = 0;
   return;
}

short   imrben2Zi() const
{
   return (s_imrben2Zi);
}

void  set_imrben2Zi(short arg)
{
   s_imrben2Zi= arg;
    return;
}

//short imrben3 = Unit[KN/ch]:IMR bender 3std.Limit:[-,-]
short  imrben3() const
{
   return (s_imrben3);
}

void  set_imrben3 (short arg)
{
   s_imrben3= arg;
   s_imrben3Zi = 0;
   return;
}

short   imrben3Zi() const
{
   return (s_imrben3Zi);
}

void  set_imrben3Zi(short arg)
{
   s_imrben3Zi= arg;
    return;
}

//short imrben4 = Unit[KN/ch]:IMR bender 4std.Limit:[-,-]
short  imrben4() const
{
   return (s_imrben4);
}

void  set_imrben4 (short arg)
{
   s_imrben4= arg;
   s_imrben4Zi = 0;
   return;
}

short   imrben4Zi() const
{
   return (s_imrben4Zi);
}

void  set_imrben4Zi(short arg)
{
   s_imrben4Zi= arg;
    return;
}

//short imrben5 = Unit[KN/ch]:IMR bender 5std.Limit:[-,-]
short  imrben5() const
{
   return (s_imrben5);
}

void  set_imrben5 (short arg)
{
   s_imrben5= arg;
   s_imrben5Zi = 0;
   return;
}

short   imrben5Zi() const
{
   return (s_imrben5Zi);
}

void  set_imrben5Zi(short arg)
{
   s_imrben5Zi= arg;
    return;
}

//short wrst1 = Unit[mm]:WRS 1 std TOP   F.U..Limit:[-,-]
short  wrst1() const
{
   return (s_wrst1);
}

void  set_wrst1 (short arg)
{
   s_wrst1= arg;
   s_wrst1Zi = 0;
   return;
}

short   wrst1Zi() const
{
   return (s_wrst1Zi);
}

void  set_wrst1Zi(short arg)
{
   s_wrst1Zi= arg;
    return;
}

//short wrsb1 = Unit[mm]:WRS 1 std BOT.Limit:[-,-]
short  wrsb1() const
{
   return (s_wrsb1);
}

void  set_wrsb1 (short arg)
{
   s_wrsb1= arg;
   s_wrsb1Zi = 0;
   return;
}

short   wrsb1Zi() const
{
   return (s_wrsb1Zi);
}

void  set_wrsb1Zi(short arg)
{
   s_wrsb1Zi= arg;
    return;
}

//short wrst2 = Unit[mm]:WRS 2 std TOP.Limit:[-,-]
short  wrst2() const
{
   return (s_wrst2);
}

void  set_wrst2 (short arg)
{
   s_wrst2= arg;
   s_wrst2Zi = 0;
   return;
}

short   wrst2Zi() const
{
   return (s_wrst2Zi);
}

void  set_wrst2Zi(short arg)
{
   s_wrst2Zi= arg;
    return;
}

//short wrsb2 = Unit[mm]:WRS 2 std BOT.Limit:[-,-]
short  wrsb2() const
{
   return (s_wrsb2);
}

void  set_wrsb2 (short arg)
{
   s_wrsb2= arg;
   s_wrsb2Zi = 0;
   return;
}

short   wrsb2Zi() const
{
   return (s_wrsb2Zi);
}

void  set_wrsb2Zi(short arg)
{
   s_wrsb2Zi= arg;
    return;
}

//short wrst3 = Unit[mm]:WRS 3 std TOP.Limit:[-,-]
short  wrst3() const
{
   return (s_wrst3);
}

void  set_wrst3 (short arg)
{
   s_wrst3= arg;
   s_wrst3Zi = 0;
   return;
}

short   wrst3Zi() const
{
   return (s_wrst3Zi);
}

void  set_wrst3Zi(short arg)
{
   s_wrst3Zi= arg;
    return;
}

//short wrsb3 = Unit[mm]:WRS 3 std BOT.Limit:[-,-]
short  wrsb3() const
{
   return (s_wrsb3);
}

void  set_wrsb3 (short arg)
{
   s_wrsb3= arg;
   s_wrsb3Zi = 0;
   return;
}

short   wrsb3Zi() const
{
   return (s_wrsb3Zi);
}

void  set_wrsb3Zi(short arg)
{
   s_wrsb3Zi= arg;
    return;
}

//short wrst4 = Unit[mm]:WRS 4 std TOP.Limit:[-,-]
short  wrst4() const
{
   return (s_wrst4);
}

void  set_wrst4 (short arg)
{
   s_wrst4= arg;
   s_wrst4Zi = 0;
   return;
}

short   wrst4Zi() const
{
   return (s_wrst4Zi);
}

void  set_wrst4Zi(short arg)
{
   s_wrst4Zi= arg;
    return;
}

//short wrsb4 = Unit[-]:WRS 4 std BOT.Limit:[-,-]
short  wrsb4() const
{
   return (s_wrsb4);
}

void  set_wrsb4 (short arg)
{
   s_wrsb4= arg;
   s_wrsb4Zi = 0;
   return;
}

short   wrsb4Zi() const
{
   return (s_wrsb4Zi);
}

void  set_wrsb4Zi(short arg)
{
   s_wrsb4Zi= arg;
    return;
}

//short wrst5 = Unit[-]:WRS 5 std TOP.Limit:[-,-]
short  wrst5() const
{
   return (s_wrst5);
}

void  set_wrst5 (short arg)
{
   s_wrst5= arg;
   s_wrst5Zi = 0;
   return;
}

short   wrst5Zi() const
{
   return (s_wrst5Zi);
}

void  set_wrst5Zi(short arg)
{
   s_wrst5Zi= arg;
    return;
}

//short wrsb5 = Unit[-]:WRS 5 std BOT.Limit:[-,-]
short  wrsb5() const
{
   return (s_wrsb5);
}

void  set_wrsb5 (short arg)
{
   s_wrsb5= arg;
   s_wrsb5Zi = 0;
   return;
}

short   wrsb5Zi() const
{
   return (s_wrsb5Zi);
}

void  set_wrsb5Zi(short arg)
{
   s_wrsb5Zi= arg;
    return;
}

//short imsht1 = Unit[mm]:IMR shift 1 std TOP.Limit:[-,-]
short  imsht1() const
{
   return (s_imsht1);
}

void  set_imsht1 (short arg)
{
   s_imsht1= arg;
   s_imsht1Zi = 0;
   return;
}

short   imsht1Zi() const
{
   return (s_imsht1Zi);
}

void  set_imsht1Zi(short arg)
{
   s_imsht1Zi= arg;
    return;
}

//short imshb1 = Unit[mm]:IMR shift 1 std BOT.Limit:[-,-]
short  imshb1() const
{
   return (s_imshb1);
}

void  set_imshb1 (short arg)
{
   s_imshb1= arg;
   s_imshb1Zi = 0;
   return;
}

short   imshb1Zi() const
{
   return (s_imshb1Zi);
}

void  set_imshb1Zi(short arg)
{
   s_imshb1Zi= arg;
    return;
}

//short imsht2 = Unit[mm]:IMR shift 2 std TOP.Limit:[-,-]
short  imsht2() const
{
   return (s_imsht2);
}

void  set_imsht2 (short arg)
{
   s_imsht2= arg;
   s_imsht2Zi = 0;
   return;
}

short   imsht2Zi() const
{
   return (s_imsht2Zi);
}

void  set_imsht2Zi(short arg)
{
   s_imsht2Zi= arg;
    return;
}

//short imshb2 = Unit[mm]:IMR shift 2 std BOT.Limit:[-,-]
short  imshb2() const
{
   return (s_imshb2);
}

void  set_imshb2 (short arg)
{
   s_imshb2= arg;
   s_imshb2Zi = 0;
   return;
}

short   imshb2Zi() const
{
   return (s_imshb2Zi);
}

void  set_imshb2Zi(short arg)
{
   s_imshb2Zi= arg;
    return;
}

//short imsht3 = Unit[mm]:IMR shift 3 std TOP.Limit:[-,-]
short  imsht3() const
{
   return (s_imsht3);
}

void  set_imsht3 (short arg)
{
   s_imsht3= arg;
   s_imsht3Zi = 0;
   return;
}

short   imsht3Zi() const
{
   return (s_imsht3Zi);
}

void  set_imsht3Zi(short arg)
{
   s_imsht3Zi= arg;
    return;
}

//short imshb3 = Unit[mm]:IMR shift 3 std BOT.Limit:[-,-]
short  imshb3() const
{
   return (s_imshb3);
}

void  set_imshb3 (short arg)
{
   s_imshb3= arg;
   s_imshb3Zi = 0;
   return;
}

short   imshb3Zi() const
{
   return (s_imshb3Zi);
}

void  set_imshb3Zi(short arg)
{
   s_imshb3Zi= arg;
    return;
}

//short imsht4 = Unit[mm]:IMR shift 4 std TOP.Limit:[-,-]
short  imsht4() const
{
   return (s_imsht4);
}

void  set_imsht4 (short arg)
{
   s_imsht4= arg;
   s_imsht4Zi = 0;
   return;
}

short   imsht4Zi() const
{
   return (s_imsht4Zi);
}

void  set_imsht4Zi(short arg)
{
   s_imsht4Zi= arg;
    return;
}

//short imshb4 = Unit[-]:IMR shift 4 std BOT.Limit:[-,-]
short  imshb4() const
{
   return (s_imshb4);
}

void  set_imshb4 (short arg)
{
   s_imshb4= arg;
   s_imshb4Zi = 0;
   return;
}

short   imshb4Zi() const
{
   return (s_imshb4Zi);
}

void  set_imshb4Zi(short arg)
{
   s_imshb4Zi= arg;
    return;
}

//short imsht5 = Unit[-]:IMR shift 5 std TOP.Limit:[-,-]
short  imsht5() const
{
   return (s_imsht5);
}

void  set_imsht5 (short arg)
{
   s_imsht5= arg;
   s_imsht5Zi = 0;
   return;
}

short   imsht5Zi() const
{
   return (s_imsht5Zi);
}

void  set_imsht5Zi(short arg)
{
   s_imsht5Zi= arg;
    return;
}

//short imshb5 = Unit[-]:IMR shift 5 std BOT.Limit:[-,-]
short  imshb5() const
{
   return (s_imshb5);
}

void  set_imshb5 (short arg)
{
   s_imshb5= arg;
   s_imshb5Zi = 0;
   return;
}

short   imshb5Zi() const
{
   return (s_imshb5Zi);
}

void  set_imshb5Zi(short arg)
{
   s_imshb5Zi= arg;
    return;
}

//short wgws1 = Unit[-]:Roll gap 1 std (WS).Limit:[-,-]
short  wgws1() const
{
   return (s_wgws1);
}

void  set_wgws1 (short arg)
{
   s_wgws1= arg;
   s_wgws1Zi = 0;
   return;
}

short   wgws1Zi() const
{
   return (s_wgws1Zi);
}

void  set_wgws1Zi(short arg)
{
   s_wgws1Zi= arg;
    return;
}

//short wgws2 = Unit[KN]:Roll gap 2 std (WS).Limit:[-,-]
short  wgws2() const
{
   return (s_wgws2);
}

void  set_wgws2 (short arg)
{
   s_wgws2= arg;
   s_wgws2Zi = 0;
   return;
}

short   wgws2Zi() const
{
   return (s_wgws2Zi);
}

void  set_wgws2Zi(short arg)
{
   s_wgws2Zi= arg;
    return;
}

//short wgws3 = Unit[mm]:Roll gap 3 std (WS).Limit:[-,-]
short  wgws3() const
{
   return (s_wgws3);
}

void  set_wgws3 (short arg)
{
   s_wgws3= arg;
   s_wgws3Zi = 0;
   return;
}

short   wgws3Zi() const
{
   return (s_wgws3Zi);
}

void  set_wgws3Zi(short arg)
{
   s_wgws3Zi= arg;
    return;
}

//short wgws4 = Unit[mm]:Roll gap 4 std (WS).Limit:[-,-]
short  wgws4() const
{
   return (s_wgws4);
}

void  set_wgws4 (short arg)
{
   s_wgws4= arg;
   s_wgws4Zi = 0;
   return;
}

short   wgws4Zi() const
{
   return (s_wgws4Zi);
}

void  set_wgws4Zi(short arg)
{
   s_wgws4Zi= arg;
    return;
}

//short wgws5 = Unit[KN]:Roll gap 5 std (WS).Limit:[-,-]
short  wgws5() const
{
   return (s_wgws5);
}

void  set_wgws5 (short arg)
{
   s_wgws5= arg;
   s_wgws5Zi = 0;
   return;
}

short   wgws5Zi() const
{
   return (s_wgws5Zi);
}

void  set_wgws5Zi(short arg)
{
   s_wgws5Zi= arg;
    return;
}

//short wgds1 = Unit[-]:Roll gap 1 std (DS).Limit:[-,-]
short  wgds1() const
{
   return (s_wgds1);
}

void  set_wgds1 (short arg)
{
   s_wgds1= arg;
   s_wgds1Zi = 0;
   return;
}

short   wgds1Zi() const
{
   return (s_wgds1Zi);
}

void  set_wgds1Zi(short arg)
{
   s_wgds1Zi= arg;
    return;
}

//short wgds2 = Unit[-]:Roll gap 2 std (DS).Limit:[-,-]
short  wgds2() const
{
   return (s_wgds2);
}

void  set_wgds2 (short arg)
{
   s_wgds2= arg;
   s_wgds2Zi = 0;
   return;
}

short   wgds2Zi() const
{
   return (s_wgds2Zi);
}

void  set_wgds2Zi(short arg)
{
   s_wgds2Zi= arg;
    return;
}

//short wgds3 = Unit[10-1mm]:Roll gap 3 std (DS).Limit:[-,-]
short  wgds3() const
{
   return (s_wgds3);
}

void  set_wgds3 (short arg)
{
   s_wgds3= arg;
   s_wgds3Zi = 0;
   return;
}

short   wgds3Zi() const
{
   return (s_wgds3Zi);
}

void  set_wgds3Zi(short arg)
{
   s_wgds3Zi= arg;
    return;
}

//short wgds4 = Unit[10-1mm]:Roll gap 4 std (DS).Limit:[-,-]
short  wgds4() const
{
   return (s_wgds4);
}

void  set_wgds4 (short arg)
{
   s_wgds4= arg;
   s_wgds4Zi = 0;
   return;
}

short   wgds4Zi() const
{
   return (s_wgds4Zi);
}

void  set_wgds4Zi(short arg)
{
   s_wgds4Zi= arg;
    return;
}

//short wgds5 = Unit[10-1mm]:Roll gap 5 std (DS).Limit:[-,-]
short  wgds5() const
{
   return (s_wgds5);
}

void  set_wgds5 (short arg)
{
   s_wgds5= arg;
   s_wgds5Zi = 0;
   return;
}

short   wgds5Zi() const
{
   return (s_wgds5Zi);
}

void  set_wgds5Zi(short arg)
{
   s_wgds5Zi= arg;
    return;
}

//short rttl1 = Unit[10-1mm]:Roll force 1 std total.Limit:[-,-]
short  rttl1() const
{
   return (s_rttl1);
}

void  set_rttl1 (short arg)
{
   s_rttl1= arg;
   s_rttl1Zi = 0;
   return;
}

short   rttl1Zi() const
{
   return (s_rttl1Zi);
}

void  set_rttl1Zi(short arg)
{
   s_rttl1Zi= arg;
    return;
}

//short rttl2 = Unit[10-1mm]:Roll force 2 std total.Limit:[-,-]
short  rttl2() const
{
   return (s_rttl2);
}

void  set_rttl2 (short arg)
{
   s_rttl2= arg;
   s_rttl2Zi = 0;
   return;
}

short   rttl2Zi() const
{
   return (s_rttl2Zi);
}

void  set_rttl2Zi(short arg)
{
   s_rttl2Zi= arg;
    return;
}

//short rttl3 = Unit[-]:Roll force 3 std total.Limit:[-,-]
short  rttl3() const
{
   return (s_rttl3);
}

void  set_rttl3 (short arg)
{
   s_rttl3= arg;
   s_rttl3Zi = 0;
   return;
}

short   rttl3Zi() const
{
   return (s_rttl3Zi);
}

void  set_rttl3Zi(short arg)
{
   s_rttl3Zi= arg;
    return;
}

//short rttl4 = Unit[10-1mpm]:Roll force 4 std total.Limit:[-,-]
short  rttl4() const
{
   return (s_rttl4);
}

void  set_rttl4 (short arg)
{
   s_rttl4= arg;
   s_rttl4Zi = 0;
   return;
}

short   rttl4Zi() const
{
   return (s_rttl4Zi);
}

void  set_rttl4Zi(short arg)
{
   s_rttl4Zi= arg;
    return;
}

//short rttl5 = Unit[-]:Roll force 5 std total.Limit:[-,-]
short  rttl5() const
{
   return (s_rttl5);
}

void  set_rttl5 (short arg)
{
   s_rttl5= arg;
   s_rttl5Zi = 0;
   return;
}

short   rttl5Zi() const
{
   return (s_rttl5Zi);
}

void  set_rttl5Zi(short arg)
{
   s_rttl5Zi= arg;
    return;
}

//short rdf1 = Unit[%]:Roll force 1 std differential.Limit:[-,-]
short  rdf1() const
{
   return (s_rdf1);
}

void  set_rdf1 (short arg)
{
   s_rdf1= arg;
   s_rdf1Zi = 0;
   return;
}

short   rdf1Zi() const
{
   return (s_rdf1Zi);
}

void  set_rdf1Zi(short arg)
{
   s_rdf1Zi= arg;
    return;
}

//short rdf2 = Unit[KN]:Roll force 2 std differential.Limit:[-,-]
short  rdf2() const
{
   return (s_rdf2);
}

void  set_rdf2 (short arg)
{
   s_rdf2= arg;
   s_rdf2Zi = 0;
   return;
}

short   rdf2Zi() const
{
   return (s_rdf2Zi);
}

void  set_rdf2Zi(short arg)
{
   s_rdf2Zi= arg;
    return;
}

//short rdf3 = Unit[-]:Roll force 3 std differential.Limit:[-,-]
short  rdf3() const
{
   return (s_rdf3);
}

void  set_rdf3 (short arg)
{
   s_rdf3= arg;
   s_rdf3Zi = 0;
   return;
}

short   rdf3Zi() const
{
   return (s_rdf3Zi);
}

void  set_rdf3Zi(short arg)
{
   s_rdf3Zi= arg;
    return;
}

//short rdf4 = Unit[mm]:Roll force 4 std differential.Limit:[-,-]
short  rdf4() const
{
   return (s_rdf4);
}

void  set_rdf4 (short arg)
{
   s_rdf4= arg;
   s_rdf4Zi = 0;
   return;
}

short   rdf4Zi() const
{
   return (s_rdf4Zi);
}

void  set_rdf4Zi(short arg)
{
   s_rdf4Zi= arg;
    return;
}

//short rdf5 = Unit[%]:Roll force 5 std differential.Limit:[-,-]
short  rdf5() const
{
   return (s_rdf5);
}

void  set_rdf5 (short arg)
{
   s_rdf5= arg;
   s_rdf5Zi = 0;
   return;
}

short   rdf5Zi() const
{
   return (s_rdf5Zi);
}

void  set_rdf5Zi(short arg)
{
   s_rdf5Zi= arg;
    return;
}

//short tens1 = Unit[-]:Tension before 1 std (total).Limit:[-,-]
short  tens1() const
{
   return (s_tens1);
}

void  set_tens1 (short arg)
{
   s_tens1= arg;
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

//short tens2 = Unit[mm]:Tension after 1 std (total).Limit:[-,-]
short  tens2() const
{
   return (s_tens2);
}

void  set_tens2 (short arg)
{
   s_tens2= arg;
   s_tens2Zi = 0;
   return;
}

short   tens2Zi() const
{
   return (s_tens2Zi);
}

void  set_tens2Zi(short arg)
{
   s_tens2Zi= arg;
    return;
}

//short tens3 = Unit[%]:Tension after 2 std (total).Limit:[-,-]
short  tens3() const
{
   return (s_tens3);
}

void  set_tens3 (short arg)
{
   s_tens3= arg;
   s_tens3Zi = 0;
   return;
}

short   tens3Zi() const
{
   return (s_tens3Zi);
}

void  set_tens3Zi(short arg)
{
   s_tens3Zi= arg;
    return;
}

//short tens4 = Unit[KN]:Tension after 3 std (total).Limit:[-,-]
short  tens4() const
{
   return (s_tens4);
}

void  set_tens4 (short arg)
{
   s_tens4= arg;
   s_tens4Zi = 0;
   return;
}

short   tens4Zi() const
{
   return (s_tens4Zi);
}

void  set_tens4Zi(short arg)
{
   s_tens4Zi= arg;
    return;
}

//short tens5 = Unit[-]:Tension after 4 std (total).Limit:[-,-]
short  tens5() const
{
   return (s_tens5);
}

void  set_tens5 (short arg)
{
   s_tens5= arg;
   s_tens5Zi = 0;
   return;
}

short   tens5Zi() const
{
   return (s_tens5Zi);
}

void  set_tens5Zi(short arg)
{
   s_tens5Zi= arg;
    return;
}

//short tens6 = Unit[10-1mpm]:Tension after 5 std (total).Limit:[-,-]
short  tens6() const
{
   return (s_tens6);
}

void  set_tens6 (short arg)
{
   s_tens6= arg;
   s_tens6Zi = 0;
   return;
}

short   tens6Zi() const
{
   return (s_tens6Zi);
}

void  set_tens6Zi(short arg)
{
   s_tens6Zi= arg;
    return;
}

//short tendf1 = Unit[-]:Tension differential  before 1 std (total).Limit:[-,-]
short  tendf1() const
{
   return (s_tendf1);
}

void  set_tendf1 (short arg)
{
   s_tendf1= arg;
   s_tendf1Zi = 0;
   return;
}

short   tendf1Zi() const
{
   return (s_tendf1Zi);
}

void  set_tendf1Zi(short arg)
{
   s_tendf1Zi= arg;
    return;
}

//short tendf2 = Unit[-]:Tension differential after 1 std (total).Limit:[-,-]
short  tendf2() const
{
   return (s_tendf2);
}

void  set_tendf2 (short arg)
{
   s_tendf2= arg;
   s_tendf2Zi = 0;
   return;
}

short   tendf2Zi() const
{
   return (s_tendf2Zi);
}

void  set_tendf2Zi(short arg)
{
   s_tendf2Zi= arg;
    return;
}

//short tendf3 = Unit[-]:Tension differential after 2 std (total).Limit:[-,-]
short  tendf3() const
{
   return (s_tendf3);
}

void  set_tendf3 (short arg)
{
   s_tendf3= arg;
   s_tendf3Zi = 0;
   return;
}

short   tendf3Zi() const
{
   return (s_tendf3Zi);
}

void  set_tendf3Zi(short arg)
{
   s_tendf3Zi= arg;
    return;
}

//short tendf4 = Unit[-]:Tensiondifferential after 3 std (total).Limit:[-,-]
short  tendf4() const
{
   return (s_tendf4);
}

void  set_tendf4 (short arg)
{
   s_tendf4= arg;
   s_tendf4Zi = 0;
   return;
}

short   tendf4Zi() const
{
   return (s_tendf4Zi);
}

void  set_tendf4Zi(short arg)
{
   s_tendf4Zi= arg;
    return;
}

//short tendf5 = Unit[-]:Tension differential after 4 std (total).Limit:[-,-]
short  tendf5() const
{
   return (s_tendf5);
}

void  set_tendf5 (short arg)
{
   s_tendf5= arg;
   s_tendf5Zi = 0;
   return;
}

short   tendf5Zi() const
{
   return (s_tendf5Zi);
}

void  set_tendf5Zi(short arg)
{
   s_tendf5Zi= arg;
    return;
}

//short tendf6 = Unit[-]:Tension differential after 5 std (total).Limit:[-,-]
short  tendf6() const
{
   return (s_tendf6);
}

void  set_tendf6 (short arg)
{
   s_tendf6= arg;
   s_tendf6Zi = 0;
   return;
}

short   tendf6Zi() const
{
   return (s_tendf6Zi);
}

void  set_tendf6Zi(short arg)
{
   s_tendf6Zi= arg;
    return;
}

//short mcnb1 = Unit[KN]:Motor current mill BR 1 roll.Limit:[-,-]
short  mcnb1() const
{
   return (s_mcnb1);
}

void  set_mcnb1 (short arg)
{
   s_mcnb1= arg;
   s_mcnb1Zi = 0;
   return;
}

short   mcnb1Zi() const
{
   return (s_mcnb1Zi);
}

void  set_mcnb1Zi(short arg)
{
   s_mcnb1Zi= arg;
    return;
}

//short mcnb2 = Unit[¡æ]:Motor current mill BR 2 roll.Limit:[-,-]
short  mcnb2() const
{
   return (s_mcnb2);
}

void  set_mcnb2 (short arg)
{
   s_mcnb2= arg;
   s_mcnb2Zi = 0;
   return;
}

short   mcnb2Zi() const
{
   return (s_mcnb2Zi);
}

void  set_mcnb2Zi(short arg)
{
   s_mcnb2Zi= arg;
    return;
}

//short mcnb3 = Unit[10-1%]:Motor current mill BR 3 roll.Limit:[-,-]
short  mcnb3() const
{
   return (s_mcnb3);
}

void  set_mcnb3 (short arg)
{
   s_mcnb3= arg;
   s_mcnb3Zi = 0;
   return;
}

short   mcnb3Zi() const
{
   return (s_mcnb3Zi);
}

void  set_mcnb3Zi(short arg)
{
   s_mcnb3Zi= arg;
    return;
}

//short mcnb4 = Unit[10-1%]:Motor current mill BR 4 roll.Limit:[-,-]
short  mcnb4() const
{
   return (s_mcnb4);
}

void  set_mcnb4 (short arg)
{
   s_mcnb4= arg;
   s_mcnb4Zi = 0;
   return;
}

short   mcnb4Zi() const
{
   return (s_mcnb4Zi);
}

void  set_mcnb4Zi(short arg)
{
   s_mcnb4Zi= arg;
    return;
}

//short mcst1 = Unit[¡æ]:Motor current 1 std.Limit:[-,-]
short  mcst1() const
{
   return (s_mcst1);
}

void  set_mcst1 (short arg)
{
   s_mcst1= arg;
   s_mcst1Zi = 0;
   return;
}

short   mcst1Zi() const
{
   return (s_mcst1Zi);
}

void  set_mcst1Zi(short arg)
{
   s_mcst1Zi= arg;
    return;
}

//short mcst2 = Unit[KN]:Motor current 2 std.Limit:[-,-]
short  mcst2() const
{
   return (s_mcst2);
}

void  set_mcst2 (short arg)
{
   s_mcst2= arg;
   s_mcst2Zi = 0;
   return;
}

short   mcst2Zi() const
{
   return (s_mcst2Zi);
}

void  set_mcst2Zi(short arg)
{
   s_mcst2Zi= arg;
    return;
}

//short mcst3 = Unit[¡æ]:Motor current 3 std.Limit:[-,-]
short  mcst3() const
{
   return (s_mcst3);
}

void  set_mcst3 (short arg)
{
   s_mcst3= arg;
   s_mcst3Zi = 0;
   return;
}

short   mcst3Zi() const
{
   return (s_mcst3Zi);
}

void  set_mcst3Zi(short arg)
{
   s_mcst3Zi= arg;
    return;
}

//short mcst4 = Unit[10-1%]:Motor current 4 std.Limit:[-,-]
short  mcst4() const
{
   return (s_mcst4);
}

void  set_mcst4 (short arg)
{
   s_mcst4= arg;
   s_mcst4Zi = 0;
   return;
}

short   mcst4Zi() const
{
   return (s_mcst4Zi);
}

void  set_mcst4Zi(short arg)
{
   s_mcst4Zi= arg;
    return;
}

//short mcst5 = Unit[10-1%]:Motor current 5 std.Limit:[-,-]
short  mcst5() const
{
   return (s_mcst5);
}

void  set_mcst5 (short arg)
{
   s_mcst5= arg;
   s_mcst5Zi = 0;
   return;
}

short   mcst5Zi() const
{
   return (s_mcst5Zi);
}

void  set_mcst5Zi(short arg)
{
   s_mcst5Zi= arg;
    return;
}

//short fslip1 = Unit[¡æ]:Forward Slip 1std.Limit:[-,-]
short  fslip1() const
{
   return (s_fslip1);
}

void  set_fslip1 (short arg)
{
   s_fslip1= arg;
   s_fslip1Zi = 0;
   return;
}

short   fslip1Zi() const
{
   return (s_fslip1Zi);
}

void  set_fslip1Zi(short arg)
{
   s_fslip1Zi= arg;
    return;
}

//short fslip2 = Unit[10-1%]:Forward Slip 2std.Limit:[-,-]
short  fslip2() const
{
   return (s_fslip2);
}

void  set_fslip2 (short arg)
{
   s_fslip2= arg;
   s_fslip2Zi = 0;
   return;
}

short   fslip2Zi() const
{
   return (s_fslip2Zi);
}

void  set_fslip2Zi(short arg)
{
   s_fslip2Zi= arg;
    return;
}

//short fslip3 = Unit[10-1%]:Forward Slip 3std.Limit:[-,-]
short  fslip3() const
{
   return (s_fslip3);
}

void  set_fslip3 (short arg)
{
   s_fslip3= arg;
   s_fslip3Zi = 0;
   return;
}

short   fslip3Zi() const
{
   return (s_fslip3Zi);
}

void  set_fslip3Zi(short arg)
{
   s_fslip3Zi= arg;
    return;
}

//short fslip4 = Unit[¡æ]:Forward Slip 4std.Limit:[-,-]
short  fslip4() const
{
   return (s_fslip4);
}

void  set_fslip4 (short arg)
{
   s_fslip4= arg;
   s_fslip4Zi = 0;
   return;
}

short   fslip4Zi() const
{
   return (s_fslip4Zi);
}

void  set_fslip4Zi(short arg)
{
   s_fslip4Zi= arg;
    return;
}

//short fslip5 = Unit[10-1%]:Forward Slip 5std.Limit:[-,-]
short  fslip5() const
{
   return (s_fslip5);
}

void  set_fslip5 (short arg)
{
   s_fslip5= arg;
   s_fslip5Zi = 0;
   return;
}

short   fslip5Zi() const
{
   return (s_fslip5Zi);
}

void  set_fslip5Zi(short arg)
{
   s_fslip5Zi= arg;
    return;
}

//short mvst1 = Unit[10-1%]:Motor voltage 1 std.Limit:[-,-]
short  mvst1() const
{
   return (s_mvst1);
}

void  set_mvst1 (short arg)
{
   s_mvst1= arg;
   s_mvst1Zi = 0;
   return;
}

short   mvst1Zi() const
{
   return (s_mvst1Zi);
}

void  set_mvst1Zi(short arg)
{
   s_mvst1Zi= arg;
    return;
}

//short mvst2 = Unit[-]:Motor voltage 2 std.Limit:[-,-]
short  mvst2() const
{
   return (s_mvst2);
}

void  set_mvst2 (short arg)
{
   s_mvst2= arg;
   s_mvst2Zi = 0;
   return;
}

short   mvst2Zi() const
{
   return (s_mvst2Zi);
}

void  set_mvst2Zi(short arg)
{
   s_mvst2Zi= arg;
    return;
}

//short mvst3 = Unit[KN]:Motor voltage 3 std.Limit:[-,-]
short  mvst3() const
{
   return (s_mvst3);
}

void  set_mvst3 (short arg)
{
   s_mvst3= arg;
   s_mvst3Zi = 0;
   return;
}

short   mvst3Zi() const
{
   return (s_mvst3Zi);
}

void  set_mvst3Zi(short arg)
{
   s_mvst3Zi= arg;
    return;
}

//short mvst4 = Unit[KN]:Motor voltage 4 std.Limit:[-,-]
short  mvst4() const
{
   return (s_mvst4);
}

void  set_mvst4 (short arg)
{
   s_mvst4= arg;
   s_mvst4Zi = 0;
   return;
}

short   mvst4Zi() const
{
   return (s_mvst4Zi);
}

void  set_mvst4Zi(short arg)
{
   s_mvst4Zi= arg;
    return;
}

//short mvst5 = Unit[10¦Ì]:Motor voltage 5 std.Limit:[-,-]
short  mvst5() const
{
   return (s_mvst5);
}

void  set_mvst5 (short arg)
{
   s_mvst5= arg;
   s_mvst5Zi = 0;
   return;
}

short   mvst5Zi() const
{
   return (s_mvst5Zi);
}

void  set_mvst5Zi(short arg)
{
   s_mvst5Zi= arg;
    return;
}

//short drop1 = Unit[11¦Ì]:Drooping 1 std.Limit:[-,-]
short  drop1() const
{
   return (s_drop1);
}

void  set_drop1 (short arg)
{
   s_drop1= arg;
   s_drop1Zi = 0;
   return;
}

short   drop1Zi() const
{
   return (s_drop1Zi);
}

void  set_drop1Zi(short arg)
{
   s_drop1Zi= arg;
    return;
}

//short drop2 = Unit[10-1%]:Drooping 2 std.Limit:[-,-]
short  drop2() const
{
   return (s_drop2);
}

void  set_drop2 (short arg)
{
   s_drop2= arg;
   s_drop2Zi = 0;
   return;
}

short   drop2Zi() const
{
   return (s_drop2Zi);
}

void  set_drop2Zi(short arg)
{
   s_drop2Zi= arg;
    return;
}

//short drop3 = Unit[10-1mpm]:Drooping 3 std.Limit:[-,-]
short  drop3() const
{
   return (s_drop3);
}

void  set_drop3 (short arg)
{
   s_drop3= arg;
   s_drop3Zi = 0;
   return;
}

short   drop3Zi() const
{
   return (s_drop3Zi);
}

void  set_drop3Zi(short arg)
{
   s_drop3Zi= arg;
    return;
}

//short drop4 = Unit[-]:Drooping 4 std.Limit:[-,-]
short  drop4() const
{
   return (s_drop4);
}

void  set_drop4 (short arg)
{
   s_drop4= arg;
   s_drop4Zi = 0;
   return;
}

short   drop4Zi() const
{
   return (s_drop4Zi);
}

void  set_drop4Zi(short arg)
{
   s_drop4Zi= arg;
    return;
}

//short drop5 = Unit[10-1mpm]:Drooping 5 std.Limit:[-,-]
short  drop5() const
{
   return (s_drop5);
}

void  set_drop5 (short arg)
{
   s_drop5= arg;
   s_drop5Zi = 0;
   return;
}

short   drop5Zi() const
{
   return (s_drop5Zi);
}

void  set_drop5Zi(short arg)
{
   s_drop5Zi= arg;
    return;
}

//short drspd = Unit[mm]:Def. Roll speed.Limit:[-,-]
short  drspd() const
{
   return (s_drspd);
}

void  set_drspd (short arg)
{
   s_drspd= arg;
   s_drspdZi = 0;
   return;
}

short   drspdZi() const
{
   return (s_drspdZi);
}

void  set_drspdZi(short arg)
{
   s_drspdZi= arg;
    return;
}

//short smspd = Unit[mm]:Shape meter speed.Limit:[-,-]
short  smspd() const
{
   return (s_smspd);
}

void  set_smspd (short arg)
{
   s_smspd= arg;
   s_smspdZi = 0;
   return;
}

short   smspdZi() const
{
   return (s_smspdZi);
}

void  set_smspdZi(short arg)
{
   s_smspdZi= arg;
    return;
}

//short mctr1 = Unit[-]:Motor current TR-1.Limit:[-,-]
short  mctr1() const
{
   return (s_mctr1);
}

void  set_mctr1 (short arg)
{
   s_mctr1= arg;
   s_mctr1Zi = 0;
   return;
}

short   mctr1Zi() const
{
   return (s_mctr1Zi);
}

void  set_mctr1Zi(short arg)
{
   s_mctr1Zi= arg;
    return;
}

//short mctr2 = Unit[-]:Motor current TR-2.Limit:[-,-]
short  mctr2() const
{
   return (s_mctr2);
}

void  set_mctr2 (short arg)
{
   s_mctr2= arg;
   s_mctr2Zi = 0;
   return;
}

short   mctr2Zi() const
{
   return (s_mctr2Zi);
}

void  set_mctr2Zi(short arg)
{
   s_mctr2Zi= arg;
    return;
}

//short mvtr1 = Unit[-]:Motor voltage TR-1.Limit:[-,-]
short  mvtr1() const
{
   return (s_mvtr1);
}

void  set_mvtr1 (short arg)
{
   s_mvtr1= arg;
   s_mvtr1Zi = 0;
   return;
}

short   mvtr1Zi() const
{
   return (s_mvtr1Zi);
}

void  set_mvtr1Zi(short arg)
{
   s_mvtr1Zi= arg;
    return;
}

//short mvtr2 = Unit[10¦Ì]:Motor voltage TR-2.Limit:[-,-]
short  mvtr2() const
{
   return (s_mvtr2);
}

void  set_mvtr2 (short arg)
{
   s_mvtr2= arg;
   s_mvtr2Zi = 0;
   return;
}

short   mvtr2Zi() const
{
   return (s_mvtr2Zi);
}

void  set_mvtr2Zi(short arg)
{
   s_mvtr2Zi= arg;
    return;
}

//short trlen = Unit[10¦Ì]:TR coiling length.Limit:[-,-]
short  trlen() const
{
   return (s_trlen);
}

void  set_trlen (short arg)
{
   s_trlen= arg;
   s_trlenZi = 0;
   return;
}

short   trlenZi() const
{
   return (s_trlenZi);
}

void  set_trlenZi(short arg)
{
   s_trlenZi= arg;
    return;
}

//short msts = Unit[10¦Ì]:Mill speed status.Limit:[-,-]
short  msts() const
{
   return (s_msts);
}

void  set_msts (short arg)
{
   s_msts= arg;
   s_mstsZi = 0;
   return;
}

short   mstsZi() const
{
   return (s_mstsZi);
}

void  set_mstsZi(short arg)
{
   s_mstsZi= arg;
    return;
}

//short accrat = Unit[-]:Acceleration Rate of mill entry.Limit:[-,-]
short  accrat() const
{
   return (s_accrat);
}

void  set_accrat (short arg)
{
   s_accrat= arg;
   s_accratZi = 0;
   return;
}

short   accratZi() const
{
   return (s_accratZi);
}

void  set_accratZi(short arg)
{
   s_accratZi= arg;
    return;
}

//short decrat = Unit[-]:Deceleration Rate of mill entry.Limit:[-,-]
short  decrat() const
{
   return (s_decrat);
}

void  set_decrat (short arg)
{
   s_decrat= arg;
   s_decratZi = 0;
   return;
}

short   decratZi() const
{
   return (s_decratZi);
}

void  set_decratZi(short arg)
{
   s_decratZi= arg;
    return;
}

//short mast = Unit[-]:Master on/off.Limit:[-,-]
short  mast() const
{
   return (s_mast);
}

void  set_mast (short arg)
{
   s_mast= arg;
   s_mastZi = 0;
   return;
}

short   mastZi() const
{
   return (s_mastZi);
}

void  set_mastZi(short arg)
{
   s_mastZi= arg;
    return;
}

//short xsts1 = Unit[-]:X-RAY 1 status (No. 1E X-RAY).Limit:[-,-]
short  xsts1() const
{
   return (s_xsts1);
}

void  set_xsts1 (short arg)
{
   s_xsts1= arg;
   s_xsts1Zi = 0;
   return;
}

short   xsts1Zi() const
{
   return (s_xsts1Zi);
}

void  set_xsts1Zi(short arg)
{
   s_xsts1Zi= arg;
    return;
}

//short xsts2 = Unit[-]:X-RAY 2 status (No. 1D X-RAY).Limit:[-,-]
short  xsts2() const
{
   return (s_xsts2);
}

void  set_xsts2 (short arg)
{
   s_xsts2= arg;
   s_xsts2Zi = 0;
   return;
}

short   xsts2Zi() const
{
   return (s_xsts2Zi);
}

void  set_xsts2Zi(short arg)
{
   s_xsts2Zi= arg;
    return;
}

//short xsts3 = Unit[-]:X-RAY 3 status (No. 2D X-RAY).Limit:[-,-]
short  xsts3() const
{
   return (s_xsts3);
}

void  set_xsts3 (short arg)
{
   s_xsts3= arg;
   s_xsts3Zi = 0;
   return;
}

short   xsts3Zi() const
{
   return (s_xsts3Zi);
}

void  set_xsts3Zi(short arg)
{
   s_xsts3Zi= arg;
    return;
}

//short xsts4 = Unit[-]:X-RAY 4 status (No. 3D X-RAY).Limit:[-,-]
short  xsts4() const
{
   return (s_xsts4);
}

void  set_xsts4 (short arg)
{
   s_xsts4= arg;
   s_xsts4Zi = 0;
   return;
}

short   xsts4Zi() const
{
   return (s_xsts4Zi);
}

void  set_xsts4Zi(short arg)
{
   s_xsts4Zi= arg;
    return;
}

//short xsts5 = Unit[-]:X-RAY 5 status (No. 4D X-RAY).Limit:[-,-]
short  xsts5() const
{
   return (s_xsts5);
}

void  set_xsts5 (short arg)
{
   s_xsts5= arg;
   s_xsts5Zi = 0;
   return;
}

short   xsts5Zi() const
{
   return (s_xsts5Zi);
}

void  set_xsts5Zi(short arg)
{
   s_xsts5Zi= arg;
    return;
}

//short xsts6 = Unit[-]:X-RAY 6 status (No. 5D X-RAY).Limit:[-,-]
short  xsts6() const
{
   return (s_xsts6);
}

void  set_xsts6 (short arg)
{
   s_xsts6= arg;
   s_xsts6Zi = 0;
   return;
}

short   xsts6Zi() const
{
   return (s_xsts6Zi);
}

void  set_xsts6Zi(short arg)
{
   s_xsts6Zi= arg;
    return;
}

//short edsts = Unit[-]:Edge Drop meter status.Limit:[-,-]
short  edsts() const
{
   return (s_edsts);
}

void  set_edsts (short arg)
{
   s_edsts= arg;
   s_edstsZi = 0;
   return;
}

short   edstsZi() const
{
   return (s_edstsZi);
}

void  set_edstsZi(short arg)
{
   s_edstsZi= arg;
    return;
}

//short agmd1 = Unit[-]:AGC mode agc master.Limit:[-,-]
short  agmd1() const
{
   return (s_agmd1);
}

void  set_agmd1 (short arg)
{
   s_agmd1= arg;
   s_agmd1Zi = 0;
   return;
}

short   agmd1Zi() const
{
   return (s_agmd1Zi);
}

void  set_agmd1Zi(short arg)
{
   s_agmd1Zi= arg;
    return;
}

//short agmd2 = Unit[-]:AGC mode bisra.Limit:[-,-]
short  agmd2() const
{
   return (s_agmd2);
}

void  set_agmd2 (short arg)
{
   s_agmd2= arg;
   s_agmd2Zi = 0;
   return;
}

short   agmd2Zi() const
{
   return (s_agmd2Zi);
}

void  set_agmd2Zi(short arg)
{
   s_agmd2Zi= arg;
    return;
}

//short agmd3 = Unit[-]:AGC mode FF1.Limit:[-,-]
short  agmd3() const
{
   return (s_agmd3);
}

void  set_agmd3 (short arg)
{
   s_agmd3= arg;
   s_agmd3Zi = 0;
   return;
}

short   agmd3Zi() const
{
   return (s_agmd3Zi);
}

void  set_agmd3Zi(short arg)
{
   s_agmd3Zi= arg;
    return;
}

//short agmd4 = Unit[-]:AGC mode GMS1.Limit:[-,-]
short  agmd4() const
{
   return (s_agmd4);
}

void  set_agmd4 (short arg)
{
   s_agmd4= arg;
   s_agmd4Zi = 0;
   return;
}

short   agmd4Zi() const
{
   return (s_agmd4Zi);
}

void  set_agmd4Zi(short arg)
{
   s_agmd4Zi= arg;
    return;
}

//short agmd5 = Unit[-]:AGC mode REC.Limit:[-,-]
short  agmd5() const
{
   return (s_agmd5);
}

void  set_agmd5 (short arg)
{
   s_agmd5= arg;
   s_agmd5Zi = 0;
   return;
}

short   agmd5Zi() const
{
   return (s_agmd5Zi);
}

void  set_agmd5Zi(short arg)
{
   s_agmd5Zi= arg;
    return;
}

//short agmd6 = Unit[-]:AGC mode MF2.Limit:[-,-]
short  agmd6() const
{
   return (s_agmd6);
}

void  set_agmd6 (short arg)
{
   s_agmd6= arg;
   s_agmd6Zi = 0;
   return;
}

short   agmd6Zi() const
{
   return (s_agmd6Zi);
}

void  set_agmd6Zi(short arg)
{
   s_agmd6Zi= arg;
    return;
}

//short agmd7 = Unit[-]:AGC mode MF3.Limit:[-,-]
short  agmd7() const
{
   return (s_agmd7);
}

void  set_agmd7 (short arg)
{
   s_agmd7= arg;
   s_agmd7Zi = 0;
   return;
}

short   agmd7Zi() const
{
   return (s_agmd7Zi);
}

void  set_agmd7Zi(short arg)
{
   s_agmd7Zi= arg;
    return;
}

//short agmd8 = Unit[-]:AGC mode MF4.Limit:[-,-]
short  agmd8() const
{
   return (s_agmd8);
}

void  set_agmd8 (short arg)
{
   s_agmd8= arg;
   s_agmd8Zi = 0;
   return;
}

short   agmd8Zi() const
{
   return (s_agmd8Zi);
}

void  set_agmd8Zi(short arg)
{
   s_agmd8Zi= arg;
    return;
}

//short agmd9 = Unit[-]:AGC mode MF5.Limit:[-,-]
short  agmd9() const
{
   return (s_agmd9);
}

void  set_agmd9 (short arg)
{
   s_agmd9= arg;
   s_agmd9Zi = 0;
   return;
}

short   agmd9Zi() const
{
   return (s_agmd9Zi);
}

void  set_agmd9Zi(short arg)
{
   s_agmd9Zi= arg;
    return;
}

//short agmd10 = Unit[-]:AGC mode ACC/DEC.Limit:[-,-]
short  agmd10() const
{
   return (s_agmd10);
}

void  set_agmd10 (short arg)
{
   s_agmd10= arg;
   s_agmd10Zi = 0;
   return;
}

short   agmd10Zi() const
{
   return (s_agmd10Zi);
}

void  set_agmd10Zi(short arg)
{
   s_agmd10Zi= arg;
    return;
}

//short agmd11 = Unit[-]:AGC mode FF2.Limit:[-,-]
short  agmd11() const
{
   return (s_agmd11);
}

void  set_agmd11 (short arg)
{
   s_agmd11= arg;
   s_agmd11Zi = 0;
   return;
}

short   agmd11Zi() const
{
   return (s_agmd11Zi);
}

void  set_agmd11Zi(short arg)
{
   s_agmd11Zi= arg;
    return;
}

//short agmd12 = Unit[-]:AGC mode FB5.Limit:[-,-]
short  agmd12() const
{
   return (s_agmd12);
}

void  set_agmd12 (short arg)
{
   s_agmd12= arg;
   s_agmd12Zi = 0;
   return;
}

short   agmd12Zi() const
{
   return (s_agmd12Zi);
}

void  set_agmd12Zi(short arg)
{
   s_agmd12Zi= arg;
    return;
}

//short asmd1 = Unit[-]:ASC mode ASC master.Limit:[-,-]
short  asmd1() const
{
   return (s_asmd1);
}

void  set_asmd1 (short arg)
{
   s_asmd1= arg;
   s_asmd1Zi = 0;
   return;
}

short   asmd1Zi() const
{
   return (s_asmd1Zi);
}

void  set_asmd1Zi(short arg)
{
   s_asmd1Zi= arg;
    return;
}

//short asmd2 = Unit[-]:ASC mode wr-b.Limit:[-,-]
short  asmd2() const
{
   return (s_asmd2);
}

void  set_asmd2 (short arg)
{
   s_asmd2= arg;
   s_asmd2Zi = 0;
   return;
}

short   asmd2Zi() const
{
   return (s_asmd2Zi);
}

void  set_asmd2Zi(short arg)
{
   s_asmd2Zi= arg;
    return;
}

//short asmd3 = Unit[-]:ASC mode imr-b.Limit:[-,-]
short  asmd3() const
{
   return (s_asmd3);
}

void  set_asmd3 (short arg)
{
   s_asmd3= arg;
   s_asmd3Zi = 0;
   return;
}

short   asmd3Zi() const
{
   return (s_asmd3Zi);
}

void  set_asmd3Zi(short arg)
{
   s_asmd3Zi= arg;
    return;
}

//short asmd4 = Unit[-]:ASC mode levelling.Limit:[-,-]
short  asmd4() const
{
   return (s_asmd4);
}

void  set_asmd4 (short arg)
{
   s_asmd4= arg;
   s_asmd4Zi = 0;
   return;
}

short   asmd4Zi() const
{
   return (s_asmd4Zi);
}

void  set_asmd4Zi(short arg)
{
   s_asmd4Zi= arg;
    return;
}

//short asmd5 = Unit[-]:ASC mode coolant.Limit:[-,-]
short  asmd5() const
{
   return (s_asmd5);
}

void  set_asmd5 (short arg)
{
   s_asmd5= arg;
   s_asmd5Zi = 0;
   return;
}

short   asmd5Zi() const
{
   return (s_asmd5Zi);
}

void  set_asmd5Zi(short arg)
{
   s_asmd5Zi= arg;
    return;
}

//short cltptn = Unit[-]:Collant pattern.Limit:[-,-]
short  cltptn() const
{
   return (s_cltptn);
}

void  set_cltptn (short arg)
{
   s_cltptn= arg;
   s_cltptnZi = 0;
   return;
}

short   cltptnZi() const
{
   return (s_cltptnZi);
}

void  set_cltptnZi(short arg)
{
   s_cltptnZi= arg;
    return;
}

//short ph_sp1 = Unit[-]:PH (Spray line #1 [1STD-4STD]).Limit:[-,-]
short  ph_sp1() const
{
   return (s_ph_sp1);
}

void  set_ph_sp1 (short arg)
{
   s_ph_sp1= arg;
   s_ph_sp1Zi = 0;
   return;
}

short   ph_sp1Zi() const
{
   return (s_ph_sp1Zi);
}

void  set_ph_sp1Zi(short arg)
{
   s_ph_sp1Zi= arg;
    return;
}

//short ph_sp2 = Unit[-]:PH (Spray line #2 [5STD]).Limit:[-,-]
short  ph_sp2() const
{
   return (s_ph_sp2);
}

void  set_ph_sp2 (short arg)
{
   s_ph_sp2= arg;
   s_ph_sp2Zi = 0;
   return;
}

short   ph_sp2Zi() const
{
   return (s_ph_sp2Zi);
}

void  set_ph_sp2Zi(short arg)
{
   s_ph_sp2Zi= arg;
    return;
}

//short conc_sp1 = Unit[-]:Concentration (Spray line #1).Limit:[-,-]
short  conc_sp1() const
{
   return (s_conc_sp1);
}

void  set_conc_sp1 (short arg)
{
   s_conc_sp1= arg;
   s_conc_sp1Zi = 0;
   return;
}

short   conc_sp1Zi() const
{
   return (s_conc_sp1Zi);
}

void  set_conc_sp1Zi(short arg)
{
   s_conc_sp1Zi= arg;
    return;
}

//short conc_sp2 = Unit[-]:Concentration (Spray line #2).Limit:[-,-]
short  conc_sp2() const
{
   return (s_conc_sp2);
}

void  set_conc_sp2 (short arg)
{
   s_conc_sp2= arg;
   s_conc_sp2Zi = 0;
   return;
}

short   conc_sp2Zi() const
{
   return (s_conc_sp2Zi);
}

void  set_conc_sp2Zi(short arg)
{
   s_conc_sp2Zi= arg;
    return;
}

//short temp_sp1 = Unit[-]:Temperature spray line #1.Limit:[-,-]
short  temp_sp1() const
{
   return (s_temp_sp1);
}

void  set_temp_sp1 (short arg)
{
   s_temp_sp1= arg;
   s_temp_sp1Zi = 0;
   return;
}

short   temp_sp1Zi() const
{
   return (s_temp_sp1Zi);
}

void  set_temp_sp1Zi(short arg)
{
   s_temp_sp1Zi= arg;
    return;
}

//short temp_sp2 = Unit[-]:Temperature spray line #2.Limit:[-,-]
short  temp_sp2() const
{
   return (s_temp_sp2);
}

void  set_temp_sp2 (short arg)
{
   s_temp_sp2= arg;
   s_temp_sp2Zi = 0;
   return;
}

short   temp_sp2Zi() const
{
   return (s_temp_sp2Zi);
}

void  set_temp_sp2Zi(short arg)
{
   s_temp_sp2Zi= arg;
    return;
}

//short ccposi = Unit[-]:Coil Car position.Limit:[-,-]
short  ccposi() const
{
   return (s_ccposi);
}

void  set_ccposi (short arg)
{
   s_ccposi= arg;
   s_ccposiZi = 0;
   return;
}

short   ccposiZi() const
{
   return (s_ccposiZi);
}

void  set_ccposiZi(short arg)
{
   s_ccposiZi= arg;
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
#endif //ACTDT_TCMACT_H

