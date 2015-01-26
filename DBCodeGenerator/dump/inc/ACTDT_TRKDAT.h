/* ********************************************************************/
/* *   File               :    ACTDT_TRKDAT.h
                             
/* *   Short Description  :    Database Class ,PL Tracking Data
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         ACTDT_TRKDAT_H              
#define      ACTDT_TRKDAT_H              

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class ACTDT_TRKDAT
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
//long     wpdx_1 = Unit[-]:wpdx 1.Limit:[-,-]
long     l_wpdx_1;
short    s_wpdx_1Zi;
//long     ti_1 = Unit[-]:ti1.Limit:[-,-]
long     l_ti_1;
short    s_ti_1Zi;
//long     plength_1 = Unit[-]:Hot coil Id1.Limit:[-,-]
long     l_plength_1;
short    s_plength_1Zi;
//char     hcoil_id_1 = Unit[-]:length1.Limit:[-,-]
char     c_hcoil_id_1[17];
short    s_hcoil_id_1Zi;
//long     wpdx_2 = Unit[-]:wpdx 2.Limit:[-,-]
long     l_wpdx_2;
short    s_wpdx_2Zi;
//long     ti_2 = Unit[-]:ti2.Limit:[-,-]
long     l_ti_2;
short    s_ti_2Zi;
//long     plength_2 = Unit[-]:Hot coil Id2.Limit:[-,-]
long     l_plength_2;
short    s_plength_2Zi;
//char     hcoil_id_2 = Unit[-]:length2.Limit:[-,-]
char     c_hcoil_id_2[17];
short    s_hcoil_id_2Zi;
//long     wpdx_3 = Unit[-]:wpdx 3.Limit:[-,-]
long     l_wpdx_3;
short    s_wpdx_3Zi;
//long     ti_3 = Unit[-]:ti3.Limit:[-,-]
long     l_ti_3;
short    s_ti_3Zi;
//long     plength_3 = Unit[-]:Hot coil Id3.Limit:[-,-]
long     l_plength_3;
short    s_plength_3Zi;
//char     hcoil_id_3 = Unit[-]:length3.Limit:[-,-]
char     c_hcoil_id_3[17];
short    s_hcoil_id_3Zi;
//long     wpdx_4 = Unit[-]:wpdx 4.Limit:[-,-]
long     l_wpdx_4;
short    s_wpdx_4Zi;
//long     ti_4 = Unit[-]:ti4.Limit:[-,-]
long     l_ti_4;
short    s_ti_4Zi;
//long     plength_4 = Unit[-]:Hot coil Id4.Limit:[-,-]
long     l_plength_4;
short    s_plength_4Zi;
//char     hcoil_id_4 = Unit[-]:length4.Limit:[-,-]
char     c_hcoil_id_4[17];
short    s_hcoil_id_4Zi;
//long     wpdx_5 = Unit[-]:wpdx 5.Limit:[-,-]
long     l_wpdx_5;
short    s_wpdx_5Zi;
//long     ti_5 = Unit[-]:ti5.Limit:[-,-]
long     l_ti_5;
short    s_ti_5Zi;
//long     plength_5 = Unit[-]:Hot coil Id5.Limit:[-,-]
long     l_plength_5;
short    s_plength_5Zi;
//char     hcoil_id_5 = Unit[-]:length5.Limit:[-,-]
char     c_hcoil_id_5[17];
short    s_hcoil_id_5Zi;
//long     wpdx_6 = Unit[-]:wpdx 6.Limit:[-,-]
long     l_wpdx_6;
short    s_wpdx_6Zi;
//long     ti_6 = Unit[-]:ti6.Limit:[-,-]
long     l_ti_6;
short    s_ti_6Zi;
//long     plength_6 = Unit[-]:Hot coil Id6.Limit:[-,-]
long     l_plength_6;
short    s_plength_6Zi;
//char     hcoil_id_6 = Unit[-]:length6.Limit:[-,-]
char     c_hcoil_id_6[17];
short    s_hcoil_id_6Zi;
//long     wpdx_7 = Unit[-]:wpdx 7.Limit:[-,-]
long     l_wpdx_7;
short    s_wpdx_7Zi;
//long     ti_7 = Unit[-]:ti7.Limit:[-,-]
long     l_ti_7;
short    s_ti_7Zi;
//long     plength_7 = Unit[-]:Hot coil Id7.Limit:[-,-]
long     l_plength_7;
short    s_plength_7Zi;
//char     hcoil_id_7 = Unit[-]:length7.Limit:[-,-]
char     c_hcoil_id_7[17];
short    s_hcoil_id_7Zi;
//long     wpdx_8 = Unit[-]:wpdx 8.Limit:[-,-]
long     l_wpdx_8;
short    s_wpdx_8Zi;
//long     ti_8 = Unit[-]:ti8.Limit:[-,-]
long     l_ti_8;
short    s_ti_8Zi;
//long     plength_8 = Unit[-]:Hot coil Id8.Limit:[-,-]
long     l_plength_8;
short    s_plength_8Zi;
//char     hcoil_id_8 = Unit[-]:length8.Limit:[-,-]
char     c_hcoil_id_8[17];
short    s_hcoil_id_8Zi;
//long     wpdx_9 = Unit[-]:wpdx 9.Limit:[-,-]
long     l_wpdx_9;
short    s_wpdx_9Zi;
//long     ti_9 = Unit[-]:ti9.Limit:[-,-]
long     l_ti_9;
short    s_ti_9Zi;
//long     plength_9 = Unit[-]:Hot coil Id9.Limit:[-,-]
long     l_plength_9;
short    s_plength_9Zi;
//char     hcoil_id_9 = Unit[-]:length9.Limit:[-,-]
char     c_hcoil_id_9[17];
short    s_hcoil_id_9Zi;
//long     wpdx_10 = Unit[-]:wpdx 10.Limit:[-,-]
long     l_wpdx_10;
short    s_wpdx_10Zi;
//long     ti_10 = Unit[-]:ti10.Limit:[-,-]
long     l_ti_10;
short    s_ti_10Zi;
//long     plength_10 = Unit[-]:Hot coil Id10.Limit:[-,-]
long     l_plength_10;
short    s_plength_10Zi;
//char     hcoil_id_10 = Unit[-]:length10.Limit:[-,-]
char     c_hcoil_id_10[17];
short    s_hcoil_id_10Zi;
//long     wpdx_11 = Unit[-]:wpdx 11.Limit:[-,-]
long     l_wpdx_11;
short    s_wpdx_11Zi;
//long     ti_11 = Unit[-]:ti11.Limit:[-,-]
long     l_ti_11;
short    s_ti_11Zi;
//long     plength_11 = Unit[-]:Hot coil Id11.Limit:[-,-]
long     l_plength_11;
short    s_plength_11Zi;
//char     hcoil_id_11 = Unit[-]:length11.Limit:[-,-]
char     c_hcoil_id_11[17];
short    s_hcoil_id_11Zi;
//long     wpdx_12 = Unit[-]:wpdx 12.Limit:[-,-]
long     l_wpdx_12;
short    s_wpdx_12Zi;
//long     ti_12 = Unit[-]:ti12.Limit:[-,-]
long     l_ti_12;
short    s_ti_12Zi;
//long     plength_12 = Unit[-]:Hot coil Id12.Limit:[-,-]
long     l_plength_12;
short    s_plength_12Zi;
//char     hcoil_id_12 = Unit[-]:length12.Limit:[-,-]
char     c_hcoil_id_12[17];
short    s_hcoil_id_12Zi;
//long     wpdx_13 = Unit[-]:wpdx 13.Limit:[-,-]
long     l_wpdx_13;
short    s_wpdx_13Zi;
//long     ti_13 = Unit[-]:ti13.Limit:[-,-]
long     l_ti_13;
short    s_ti_13Zi;
//long     plength_13 = Unit[-]:Hot coil Id13.Limit:[-,-]
long     l_plength_13;
short    s_plength_13Zi;
//char     hcoil_id_13 = Unit[-]:length13.Limit:[-,-]
char     c_hcoil_id_13[17];
short    s_hcoil_id_13Zi;
//long     wpdx_14 = Unit[-]:wpdx 14.Limit:[-,-]
long     l_wpdx_14;
short    s_wpdx_14Zi;
//long     ti_14 = Unit[-]:ti14.Limit:[-,-]
long     l_ti_14;
short    s_ti_14Zi;
//long     plength_14 = Unit[-]:Hot coil Id14.Limit:[-,-]
long     l_plength_14;
short    s_plength_14Zi;
//char     hcoil_id_14 = Unit[-]:length14.Limit:[-,-]
char     c_hcoil_id_14[17];
short    s_hcoil_id_14Zi;
//long     wpdx_15 = Unit[-]:wpdx 15.Limit:[-,-]
long     l_wpdx_15;
short    s_wpdx_15Zi;
//long     ti_15 = Unit[-]:ti15.Limit:[-,-]
long     l_ti_15;
short    s_ti_15Zi;
//long     plength_15 = Unit[-]:Hot coil Id15.Limit:[-,-]
long     l_plength_15;
short    s_plength_15Zi;
//char     hcoil_id_15 = Unit[-]:length15.Limit:[-,-]
char     c_hcoil_id_15[17];
short    s_hcoil_id_15Zi;
//long     wpdx_16 = Unit[-]:wpdx 16.Limit:[-,-]
long     l_wpdx_16;
short    s_wpdx_16Zi;
//long     ti_16 = Unit[-]:ti16.Limit:[-,-]
long     l_ti_16;
short    s_ti_16Zi;
//long     plength_16 = Unit[-]:Hot coil Id16.Limit:[-,-]
long     l_plength_16;
short    s_plength_16Zi;
//char     hcoil_id_16 = Unit[-]:length16.Limit:[-,-]
char     c_hcoil_id_16[17];
short    s_hcoil_id_16Zi;
//long     wpdx_17 = Unit[-]:wpdx 17.Limit:[-,-]
long     l_wpdx_17;
short    s_wpdx_17Zi;
//long     ti_17 = Unit[-]:ti17.Limit:[-,-]
long     l_ti_17;
short    s_ti_17Zi;
//long     plength_17 = Unit[-]:Hot coil Id17.Limit:[-,-]
long     l_plength_17;
short    s_plength_17Zi;
//char     hcoil_id_17 = Unit[-]:length17.Limit:[-,-]
char     c_hcoil_id_17[17];
short    s_hcoil_id_17Zi;
//long     wpdx_18 = Unit[-]:wpdx 18.Limit:[-,-]
long     l_wpdx_18;
short    s_wpdx_18Zi;
//long     ti_18 = Unit[-]:ti18.Limit:[-,-]
long     l_ti_18;
short    s_ti_18Zi;
//long     plength_18 = Unit[-]:Hot coil Id18.Limit:[-,-]
long     l_plength_18;
short    s_plength_18Zi;
//char     hcoil_id_18 = Unit[-]:length18.Limit:[-,-]
char     c_hcoil_id_18[17];
short    s_hcoil_id_18Zi;
//long     wpdx_19 = Unit[-]:wpdx 19.Limit:[-,-]
long     l_wpdx_19;
short    s_wpdx_19Zi;
//long     ti_19 = Unit[-]:ti19.Limit:[-,-]
long     l_ti_19;
short    s_ti_19Zi;
//long     plength_19 = Unit[-]:Hot coil Id19.Limit:[-,-]
long     l_plength_19;
short    s_plength_19Zi;
//char     hcoil_id_19 = Unit[-]:length19.Limit:[-,-]
char     c_hcoil_id_19[17];
short    s_hcoil_id_19Zi;
//long     wpdx_20 = Unit[-]:wpdx 20.Limit:[-,-]
long     l_wpdx_20;
short    s_wpdx_20Zi;
//long     ti_20 = Unit[-]:ti20.Limit:[-,-]
long     l_ti_20;
short    s_ti_20Zi;
//long     plength_20 = Unit[-]:Hot coil Id20.Limit:[-,-]
long     l_plength_20;
short    s_plength_20Zi;
//char     hcoil_id_20 = Unit[-]:length20.Limit:[-,-]
char     c_hcoil_id_20[17];
short    s_hcoil_id_20Zi;
//long     wpdx_21 = Unit[-]:wpdx 21.Limit:[-,-]
long     l_wpdx_21;
short    s_wpdx_21Zi;
//long     ti_21 = Unit[-]:ti21.Limit:[-,-]
long     l_ti_21;
short    s_ti_21Zi;
//long     plength_21 = Unit[-]:Hot coil Id21.Limit:[-,-]
long     l_plength_21;
short    s_plength_21Zi;
//char     hcoil_id_21 = Unit[-]:length21.Limit:[-,-]
char     c_hcoil_id_21[17];
short    s_hcoil_id_21Zi;
//long     wpdx_22 = Unit[-]:wpdx 22.Limit:[-,-]
long     l_wpdx_22;
short    s_wpdx_22Zi;
//long     ti_22 = Unit[-]:ti22.Limit:[-,-]
long     l_ti_22;
short    s_ti_22Zi;
//long     plength_22 = Unit[-]:Hot coil Id22.Limit:[-,-]
long     l_plength_22;
short    s_plength_22Zi;
//char     hcoil_id_22 = Unit[-]:length22.Limit:[-,-]
char     c_hcoil_id_22[17];
short    s_hcoil_id_22Zi;
//long     wpdx_23 = Unit[-]:wpdx 23.Limit:[-,-]
long     l_wpdx_23;
short    s_wpdx_23Zi;
//long     ti_23 = Unit[-]:ti23.Limit:[-,-]
long     l_ti_23;
short    s_ti_23Zi;
//long     plength_23 = Unit[-]:Hot coil Id23.Limit:[-,-]
long     l_plength_23;
short    s_plength_23Zi;
//char     hcoil_id_23 = Unit[-]:length23.Limit:[-,-]
char     c_hcoil_id_23[17];
short    s_hcoil_id_23Zi;
//long     wpdx_24 = Unit[-]:wpdx 24.Limit:[-,-]
long     l_wpdx_24;
short    s_wpdx_24Zi;
//long     ti_24 = Unit[-]:ti24.Limit:[-,-]
long     l_ti_24;
short    s_ti_24Zi;
//long     plength_24 = Unit[-]:Hot coil Id24.Limit:[-,-]
long     l_plength_24;
short    s_plength_24Zi;
//char     hcoil_id_24 = Unit[-]:length24.Limit:[-,-]
char     c_hcoil_id_24[17];
short    s_hcoil_id_24Zi;
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
struct STR_ACTDT_TRKDAT
{
	char      datee[9];
	char      timee[7];
	short     samp_no;
	long      wpdx_1;
	short     wpdx_1Zi;
	long      ti_1;
	short     ti_1Zi;
	long      plength_1;
	short     plength_1Zi;
	char      hcoil_id_1[17];
	short     hcoil_id_1Zi;
	long      wpdx_2;
	short     wpdx_2Zi;
	long      ti_2;
	short     ti_2Zi;
	long      plength_2;
	short     plength_2Zi;
	char      hcoil_id_2[17];
	short     hcoil_id_2Zi;
	long      wpdx_3;
	short     wpdx_3Zi;
	long      ti_3;
	short     ti_3Zi;
	long      plength_3;
	short     plength_3Zi;
	char      hcoil_id_3[17];
	short     hcoil_id_3Zi;
	long      wpdx_4;
	short     wpdx_4Zi;
	long      ti_4;
	short     ti_4Zi;
	long      plength_4;
	short     plength_4Zi;
	char      hcoil_id_4[17];
	short     hcoil_id_4Zi;
	long      wpdx_5;
	short     wpdx_5Zi;
	long      ti_5;
	short     ti_5Zi;
	long      plength_5;
	short     plength_5Zi;
	char      hcoil_id_5[17];
	short     hcoil_id_5Zi;
	long      wpdx_6;
	short     wpdx_6Zi;
	long      ti_6;
	short     ti_6Zi;
	long      plength_6;
	short     plength_6Zi;
	char      hcoil_id_6[17];
	short     hcoil_id_6Zi;
	long      wpdx_7;
	short     wpdx_7Zi;
	long      ti_7;
	short     ti_7Zi;
	long      plength_7;
	short     plength_7Zi;
	char      hcoil_id_7[17];
	short     hcoil_id_7Zi;
	long      wpdx_8;
	short     wpdx_8Zi;
	long      ti_8;
	short     ti_8Zi;
	long      plength_8;
	short     plength_8Zi;
	char      hcoil_id_8[17];
	short     hcoil_id_8Zi;
	long      wpdx_9;
	short     wpdx_9Zi;
	long      ti_9;
	short     ti_9Zi;
	long      plength_9;
	short     plength_9Zi;
	char      hcoil_id_9[17];
	short     hcoil_id_9Zi;
	long      wpdx_10;
	short     wpdx_10Zi;
	long      ti_10;
	short     ti_10Zi;
	long      plength_10;
	short     plength_10Zi;
	char      hcoil_id_10[17];
	short     hcoil_id_10Zi;
	long      wpdx_11;
	short     wpdx_11Zi;
	long      ti_11;
	short     ti_11Zi;
	long      plength_11;
	short     plength_11Zi;
	char      hcoil_id_11[17];
	short     hcoil_id_11Zi;
	long      wpdx_12;
	short     wpdx_12Zi;
	long      ti_12;
	short     ti_12Zi;
	long      plength_12;
	short     plength_12Zi;
	char      hcoil_id_12[17];
	short     hcoil_id_12Zi;
	long      wpdx_13;
	short     wpdx_13Zi;
	long      ti_13;
	short     ti_13Zi;
	long      plength_13;
	short     plength_13Zi;
	char      hcoil_id_13[17];
	short     hcoil_id_13Zi;
	long      wpdx_14;
	short     wpdx_14Zi;
	long      ti_14;
	short     ti_14Zi;
	long      plength_14;
	short     plength_14Zi;
	char      hcoil_id_14[17];
	short     hcoil_id_14Zi;
	long      wpdx_15;
	short     wpdx_15Zi;
	long      ti_15;
	short     ti_15Zi;
	long      plength_15;
	short     plength_15Zi;
	char      hcoil_id_15[17];
	short     hcoil_id_15Zi;
	long      wpdx_16;
	short     wpdx_16Zi;
	long      ti_16;
	short     ti_16Zi;
	long      plength_16;
	short     plength_16Zi;
	char      hcoil_id_16[17];
	short     hcoil_id_16Zi;
	long      wpdx_17;
	short     wpdx_17Zi;
	long      ti_17;
	short     ti_17Zi;
	long      plength_17;
	short     plength_17Zi;
	char      hcoil_id_17[17];
	short     hcoil_id_17Zi;
	long      wpdx_18;
	short     wpdx_18Zi;
	long      ti_18;
	short     ti_18Zi;
	long      plength_18;
	short     plength_18Zi;
	char      hcoil_id_18[17];
	short     hcoil_id_18Zi;
	long      wpdx_19;
	short     wpdx_19Zi;
	long      ti_19;
	short     ti_19Zi;
	long      plength_19;
	short     plength_19Zi;
	char      hcoil_id_19[17];
	short     hcoil_id_19Zi;
	long      wpdx_20;
	short     wpdx_20Zi;
	long      ti_20;
	short     ti_20Zi;
	long      plength_20;
	short     plength_20Zi;
	char      hcoil_id_20[17];
	short     hcoil_id_20Zi;
	long      wpdx_21;
	short     wpdx_21Zi;
	long      ti_21;
	short     ti_21Zi;
	long      plength_21;
	short     plength_21Zi;
	char      hcoil_id_21[17];
	short     hcoil_id_21Zi;
	long      wpdx_22;
	short     wpdx_22Zi;
	long      ti_22;
	short     ti_22Zi;
	long      plength_22;
	short     plength_22Zi;
	char      hcoil_id_22[17];
	short     hcoil_id_22Zi;
	long      wpdx_23;
	short     wpdx_23Zi;
	long      ti_23;
	short     ti_23Zi;
	long      plength_23;
	short     plength_23Zi;
	char      hcoil_id_23[17];
	short     hcoil_id_23Zi;
	long      wpdx_24;
	short     wpdx_24Zi;
	long      ti_24;
	short     ti_24Zi;
	long      plength_24;
	short     plength_24Zi;
	char      hcoil_id_24[17];
	short     hcoil_id_24Zi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structACTDT_TRKDAT;
          
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
ACTDT_TRKDAT();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~ACTDT_TRKDAT();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
ACTDT_TRKDAT(const ACTDT_TRKDAT &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//short	samp_no= Unit[-]:Sampling no..Limit:[-,500000]
ACTDT_TRKDAT( short arg1);

//methods
public:
//get creation time
char* getCreationTime(){ return "13.06.2013 16:38:27";};

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
	strncpy (structACTDT_TRKDAT.datee, datee(), sizeof( structACTDT_TRKDAT.datee));
	strncpy (structACTDT_TRKDAT.timee, timee(), sizeof( structACTDT_TRKDAT.timee));
	structACTDT_TRKDAT.samp_no = samp_no();
	structACTDT_TRKDAT.wpdx_1 = wpdx_1();
	structACTDT_TRKDAT.wpdx_1Zi = wpdx_1Zi();
	structACTDT_TRKDAT.ti_1 = ti_1();
	structACTDT_TRKDAT.ti_1Zi = ti_1Zi();
	structACTDT_TRKDAT.plength_1 = plength_1();
	structACTDT_TRKDAT.plength_1Zi = plength_1Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_1, hcoil_id_1(), sizeof( structACTDT_TRKDAT.hcoil_id_1));
	structACTDT_TRKDAT.hcoil_id_1Zi = hcoil_id_1Zi();
	structACTDT_TRKDAT.wpdx_2 = wpdx_2();
	structACTDT_TRKDAT.wpdx_2Zi = wpdx_2Zi();
	structACTDT_TRKDAT.ti_2 = ti_2();
	structACTDT_TRKDAT.ti_2Zi = ti_2Zi();
	structACTDT_TRKDAT.plength_2 = plength_2();
	structACTDT_TRKDAT.plength_2Zi = plength_2Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_2, hcoil_id_2(), sizeof( structACTDT_TRKDAT.hcoil_id_2));
	structACTDT_TRKDAT.hcoil_id_2Zi = hcoil_id_2Zi();
	structACTDT_TRKDAT.wpdx_3 = wpdx_3();
	structACTDT_TRKDAT.wpdx_3Zi = wpdx_3Zi();
	structACTDT_TRKDAT.ti_3 = ti_3();
	structACTDT_TRKDAT.ti_3Zi = ti_3Zi();
	structACTDT_TRKDAT.plength_3 = plength_3();
	structACTDT_TRKDAT.plength_3Zi = plength_3Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_3, hcoil_id_3(), sizeof( structACTDT_TRKDAT.hcoil_id_3));
	structACTDT_TRKDAT.hcoil_id_3Zi = hcoil_id_3Zi();
	structACTDT_TRKDAT.wpdx_4 = wpdx_4();
	structACTDT_TRKDAT.wpdx_4Zi = wpdx_4Zi();
	structACTDT_TRKDAT.ti_4 = ti_4();
	structACTDT_TRKDAT.ti_4Zi = ti_4Zi();
	structACTDT_TRKDAT.plength_4 = plength_4();
	structACTDT_TRKDAT.plength_4Zi = plength_4Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_4, hcoil_id_4(), sizeof( structACTDT_TRKDAT.hcoil_id_4));
	structACTDT_TRKDAT.hcoil_id_4Zi = hcoil_id_4Zi();
	structACTDT_TRKDAT.wpdx_5 = wpdx_5();
	structACTDT_TRKDAT.wpdx_5Zi = wpdx_5Zi();
	structACTDT_TRKDAT.ti_5 = ti_5();
	structACTDT_TRKDAT.ti_5Zi = ti_5Zi();
	structACTDT_TRKDAT.plength_5 = plength_5();
	structACTDT_TRKDAT.plength_5Zi = plength_5Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_5, hcoil_id_5(), sizeof( structACTDT_TRKDAT.hcoil_id_5));
	structACTDT_TRKDAT.hcoil_id_5Zi = hcoil_id_5Zi();
	structACTDT_TRKDAT.wpdx_6 = wpdx_6();
	structACTDT_TRKDAT.wpdx_6Zi = wpdx_6Zi();
	structACTDT_TRKDAT.ti_6 = ti_6();
	structACTDT_TRKDAT.ti_6Zi = ti_6Zi();
	structACTDT_TRKDAT.plength_6 = plength_6();
	structACTDT_TRKDAT.plength_6Zi = plength_6Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_6, hcoil_id_6(), sizeof( structACTDT_TRKDAT.hcoil_id_6));
	structACTDT_TRKDAT.hcoil_id_6Zi = hcoil_id_6Zi();
	structACTDT_TRKDAT.wpdx_7 = wpdx_7();
	structACTDT_TRKDAT.wpdx_7Zi = wpdx_7Zi();
	structACTDT_TRKDAT.ti_7 = ti_7();
	structACTDT_TRKDAT.ti_7Zi = ti_7Zi();
	structACTDT_TRKDAT.plength_7 = plength_7();
	structACTDT_TRKDAT.plength_7Zi = plength_7Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_7, hcoil_id_7(), sizeof( structACTDT_TRKDAT.hcoil_id_7));
	structACTDT_TRKDAT.hcoil_id_7Zi = hcoil_id_7Zi();
	structACTDT_TRKDAT.wpdx_8 = wpdx_8();
	structACTDT_TRKDAT.wpdx_8Zi = wpdx_8Zi();
	structACTDT_TRKDAT.ti_8 = ti_8();
	structACTDT_TRKDAT.ti_8Zi = ti_8Zi();
	structACTDT_TRKDAT.plength_8 = plength_8();
	structACTDT_TRKDAT.plength_8Zi = plength_8Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_8, hcoil_id_8(), sizeof( structACTDT_TRKDAT.hcoil_id_8));
	structACTDT_TRKDAT.hcoil_id_8Zi = hcoil_id_8Zi();
	structACTDT_TRKDAT.wpdx_9 = wpdx_9();
	structACTDT_TRKDAT.wpdx_9Zi = wpdx_9Zi();
	structACTDT_TRKDAT.ti_9 = ti_9();
	structACTDT_TRKDAT.ti_9Zi = ti_9Zi();
	structACTDT_TRKDAT.plength_9 = plength_9();
	structACTDT_TRKDAT.plength_9Zi = plength_9Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_9, hcoil_id_9(), sizeof( structACTDT_TRKDAT.hcoil_id_9));
	structACTDT_TRKDAT.hcoil_id_9Zi = hcoil_id_9Zi();
	structACTDT_TRKDAT.wpdx_10 = wpdx_10();
	structACTDT_TRKDAT.wpdx_10Zi = wpdx_10Zi();
	structACTDT_TRKDAT.ti_10 = ti_10();
	structACTDT_TRKDAT.ti_10Zi = ti_10Zi();
	structACTDT_TRKDAT.plength_10 = plength_10();
	structACTDT_TRKDAT.plength_10Zi = plength_10Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_10, hcoil_id_10(), sizeof( structACTDT_TRKDAT.hcoil_id_10));
	structACTDT_TRKDAT.hcoil_id_10Zi = hcoil_id_10Zi();
	structACTDT_TRKDAT.wpdx_11 = wpdx_11();
	structACTDT_TRKDAT.wpdx_11Zi = wpdx_11Zi();
	structACTDT_TRKDAT.ti_11 = ti_11();
	structACTDT_TRKDAT.ti_11Zi = ti_11Zi();
	structACTDT_TRKDAT.plength_11 = plength_11();
	structACTDT_TRKDAT.plength_11Zi = plength_11Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_11, hcoil_id_11(), sizeof( structACTDT_TRKDAT.hcoil_id_11));
	structACTDT_TRKDAT.hcoil_id_11Zi = hcoil_id_11Zi();
	structACTDT_TRKDAT.wpdx_12 = wpdx_12();
	structACTDT_TRKDAT.wpdx_12Zi = wpdx_12Zi();
	structACTDT_TRKDAT.ti_12 = ti_12();
	structACTDT_TRKDAT.ti_12Zi = ti_12Zi();
	structACTDT_TRKDAT.plength_12 = plength_12();
	structACTDT_TRKDAT.plength_12Zi = plength_12Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_12, hcoil_id_12(), sizeof( structACTDT_TRKDAT.hcoil_id_12));
	structACTDT_TRKDAT.hcoil_id_12Zi = hcoil_id_12Zi();
	structACTDT_TRKDAT.wpdx_13 = wpdx_13();
	structACTDT_TRKDAT.wpdx_13Zi = wpdx_13Zi();
	structACTDT_TRKDAT.ti_13 = ti_13();
	structACTDT_TRKDAT.ti_13Zi = ti_13Zi();
	structACTDT_TRKDAT.plength_13 = plength_13();
	structACTDT_TRKDAT.plength_13Zi = plength_13Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_13, hcoil_id_13(), sizeof( structACTDT_TRKDAT.hcoil_id_13));
	structACTDT_TRKDAT.hcoil_id_13Zi = hcoil_id_13Zi();
	structACTDT_TRKDAT.wpdx_14 = wpdx_14();
	structACTDT_TRKDAT.wpdx_14Zi = wpdx_14Zi();
	structACTDT_TRKDAT.ti_14 = ti_14();
	structACTDT_TRKDAT.ti_14Zi = ti_14Zi();
	structACTDT_TRKDAT.plength_14 = plength_14();
	structACTDT_TRKDAT.plength_14Zi = plength_14Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_14, hcoil_id_14(), sizeof( structACTDT_TRKDAT.hcoil_id_14));
	structACTDT_TRKDAT.hcoil_id_14Zi = hcoil_id_14Zi();
	structACTDT_TRKDAT.wpdx_15 = wpdx_15();
	structACTDT_TRKDAT.wpdx_15Zi = wpdx_15Zi();
	structACTDT_TRKDAT.ti_15 = ti_15();
	structACTDT_TRKDAT.ti_15Zi = ti_15Zi();
	structACTDT_TRKDAT.plength_15 = plength_15();
	structACTDT_TRKDAT.plength_15Zi = plength_15Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_15, hcoil_id_15(), sizeof( structACTDT_TRKDAT.hcoil_id_15));
	structACTDT_TRKDAT.hcoil_id_15Zi = hcoil_id_15Zi();
	structACTDT_TRKDAT.wpdx_16 = wpdx_16();
	structACTDT_TRKDAT.wpdx_16Zi = wpdx_16Zi();
	structACTDT_TRKDAT.ti_16 = ti_16();
	structACTDT_TRKDAT.ti_16Zi = ti_16Zi();
	structACTDT_TRKDAT.plength_16 = plength_16();
	structACTDT_TRKDAT.plength_16Zi = plength_16Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_16, hcoil_id_16(), sizeof( structACTDT_TRKDAT.hcoil_id_16));
	structACTDT_TRKDAT.hcoil_id_16Zi = hcoil_id_16Zi();
	structACTDT_TRKDAT.wpdx_17 = wpdx_17();
	structACTDT_TRKDAT.wpdx_17Zi = wpdx_17Zi();
	structACTDT_TRKDAT.ti_17 = ti_17();
	structACTDT_TRKDAT.ti_17Zi = ti_17Zi();
	structACTDT_TRKDAT.plength_17 = plength_17();
	structACTDT_TRKDAT.plength_17Zi = plength_17Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_17, hcoil_id_17(), sizeof( structACTDT_TRKDAT.hcoil_id_17));
	structACTDT_TRKDAT.hcoil_id_17Zi = hcoil_id_17Zi();
	structACTDT_TRKDAT.wpdx_18 = wpdx_18();
	structACTDT_TRKDAT.wpdx_18Zi = wpdx_18Zi();
	structACTDT_TRKDAT.ti_18 = ti_18();
	structACTDT_TRKDAT.ti_18Zi = ti_18Zi();
	structACTDT_TRKDAT.plength_18 = plength_18();
	structACTDT_TRKDAT.plength_18Zi = plength_18Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_18, hcoil_id_18(), sizeof( structACTDT_TRKDAT.hcoil_id_18));
	structACTDT_TRKDAT.hcoil_id_18Zi = hcoil_id_18Zi();
	structACTDT_TRKDAT.wpdx_19 = wpdx_19();
	structACTDT_TRKDAT.wpdx_19Zi = wpdx_19Zi();
	structACTDT_TRKDAT.ti_19 = ti_19();
	structACTDT_TRKDAT.ti_19Zi = ti_19Zi();
	structACTDT_TRKDAT.plength_19 = plength_19();
	structACTDT_TRKDAT.plength_19Zi = plength_19Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_19, hcoil_id_19(), sizeof( structACTDT_TRKDAT.hcoil_id_19));
	structACTDT_TRKDAT.hcoil_id_19Zi = hcoil_id_19Zi();
	structACTDT_TRKDAT.wpdx_20 = wpdx_20();
	structACTDT_TRKDAT.wpdx_20Zi = wpdx_20Zi();
	structACTDT_TRKDAT.ti_20 = ti_20();
	structACTDT_TRKDAT.ti_20Zi = ti_20Zi();
	structACTDT_TRKDAT.plength_20 = plength_20();
	structACTDT_TRKDAT.plength_20Zi = plength_20Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_20, hcoil_id_20(), sizeof( structACTDT_TRKDAT.hcoil_id_20));
	structACTDT_TRKDAT.hcoil_id_20Zi = hcoil_id_20Zi();
	structACTDT_TRKDAT.wpdx_21 = wpdx_21();
	structACTDT_TRKDAT.wpdx_21Zi = wpdx_21Zi();
	structACTDT_TRKDAT.ti_21 = ti_21();
	structACTDT_TRKDAT.ti_21Zi = ti_21Zi();
	structACTDT_TRKDAT.plength_21 = plength_21();
	structACTDT_TRKDAT.plength_21Zi = plength_21Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_21, hcoil_id_21(), sizeof( structACTDT_TRKDAT.hcoil_id_21));
	structACTDT_TRKDAT.hcoil_id_21Zi = hcoil_id_21Zi();
	structACTDT_TRKDAT.wpdx_22 = wpdx_22();
	structACTDT_TRKDAT.wpdx_22Zi = wpdx_22Zi();
	structACTDT_TRKDAT.ti_22 = ti_22();
	structACTDT_TRKDAT.ti_22Zi = ti_22Zi();
	structACTDT_TRKDAT.plength_22 = plength_22();
	structACTDT_TRKDAT.plength_22Zi = plength_22Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_22, hcoil_id_22(), sizeof( structACTDT_TRKDAT.hcoil_id_22));
	structACTDT_TRKDAT.hcoil_id_22Zi = hcoil_id_22Zi();
	structACTDT_TRKDAT.wpdx_23 = wpdx_23();
	structACTDT_TRKDAT.wpdx_23Zi = wpdx_23Zi();
	structACTDT_TRKDAT.ti_23 = ti_23();
	structACTDT_TRKDAT.ti_23Zi = ti_23Zi();
	structACTDT_TRKDAT.plength_23 = plength_23();
	structACTDT_TRKDAT.plength_23Zi = plength_23Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_23, hcoil_id_23(), sizeof( structACTDT_TRKDAT.hcoil_id_23));
	structACTDT_TRKDAT.hcoil_id_23Zi = hcoil_id_23Zi();
	structACTDT_TRKDAT.wpdx_24 = wpdx_24();
	structACTDT_TRKDAT.wpdx_24Zi = wpdx_24Zi();
	structACTDT_TRKDAT.ti_24 = ti_24();
	structACTDT_TRKDAT.ti_24Zi = ti_24Zi();
	structACTDT_TRKDAT.plength_24 = plength_24();
	structACTDT_TRKDAT.plength_24Zi = plength_24Zi();
	strncpy (structACTDT_TRKDAT.hcoil_id_24, hcoil_id_24(), sizeof( structACTDT_TRKDAT.hcoil_id_24));
	structACTDT_TRKDAT.hcoil_id_24Zi = hcoil_id_24Zi();
	strncpy (structACTDT_TRKDAT.toc, toc(), sizeof( structACTDT_TRKDAT.toc));
	structACTDT_TRKDAT.tocZi = tocZi();
	strncpy (structACTDT_TRKDAT.tom, tom(), sizeof( structACTDT_TRKDAT.tom));
	structACTDT_TRKDAT.tomZi = tomZi();
	strncpy (structACTDT_TRKDAT.mop, mop(), sizeof( structACTDT_TRKDAT.mop));
	structACTDT_TRKDAT.mopZi = mopZi();
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
ACTDT_TRKDAT operator+(const ACTDT_TRKDAT &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const ACTDT_TRKDAT& operator=(const ACTDT_TRKDAT &inst);

   
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

//long wpdx_1 = Unit[-]:wpdx 1.Limit:[-,-]
long  wpdx_1() const
{
   return (l_wpdx_1);
}

void  set_wpdx_1 (long arg)
{
   l_wpdx_1= arg;
   s_wpdx_1Zi = 0;
   return;
}

short   wpdx_1Zi() const
{
   return (s_wpdx_1Zi);
}

void  set_wpdx_1Zi(short arg)
{
   s_wpdx_1Zi= arg;
    return;
}

//long ti_1 = Unit[-]:ti1.Limit:[-,-]
long  ti_1() const
{
   return (l_ti_1);
}

void  set_ti_1 (long arg)
{
   l_ti_1= arg;
   s_ti_1Zi = 0;
   return;
}

short   ti_1Zi() const
{
   return (s_ti_1Zi);
}

void  set_ti_1Zi(short arg)
{
   s_ti_1Zi= arg;
    return;
}

//long plength_1 = Unit[-]:Hot coil Id1.Limit:[-,-]
long  plength_1() const
{
   return (l_plength_1);
}

void  set_plength_1 (long arg)
{
   l_plength_1= arg;
   s_plength_1Zi = 0;
   return;
}

short   plength_1Zi() const
{
   return (s_plength_1Zi);
}

void  set_plength_1Zi(short arg)
{
   s_plength_1Zi= arg;
    return;
}

//char* hcoil_id_1 = Unit[-]:length1.Limit:[-,-]
char*  hcoil_id_1() const
{
   return ((char*)c_hcoil_id_1);
}

void  set_hcoil_id_1 (const char* arg)
{
   strncpy((char*)c_hcoil_id_1, arg, sizeof(c_hcoil_id_1));
    c_hcoil_id_1[sizeof(c_hcoil_id_1)-1] = '\0';
   s_hcoil_id_1Zi = 0;
   return;
}

short   hcoil_id_1Zi() const
{
   return (s_hcoil_id_1Zi);
}

void  set_hcoil_id_1Zi(short arg)
{
   s_hcoil_id_1Zi= arg;
    return;
}

//long wpdx_2 = Unit[-]:wpdx 2.Limit:[-,-]
long  wpdx_2() const
{
   return (l_wpdx_2);
}

void  set_wpdx_2 (long arg)
{
   l_wpdx_2= arg;
   s_wpdx_2Zi = 0;
   return;
}

short   wpdx_2Zi() const
{
   return (s_wpdx_2Zi);
}

void  set_wpdx_2Zi(short arg)
{
   s_wpdx_2Zi= arg;
    return;
}

//long ti_2 = Unit[-]:ti2.Limit:[-,-]
long  ti_2() const
{
   return (l_ti_2);
}

void  set_ti_2 (long arg)
{
   l_ti_2= arg;
   s_ti_2Zi = 0;
   return;
}

short   ti_2Zi() const
{
   return (s_ti_2Zi);
}

void  set_ti_2Zi(short arg)
{
   s_ti_2Zi= arg;
    return;
}

//long plength_2 = Unit[-]:Hot coil Id2.Limit:[-,-]
long  plength_2() const
{
   return (l_plength_2);
}

void  set_plength_2 (long arg)
{
   l_plength_2= arg;
   s_plength_2Zi = 0;
   return;
}

short   plength_2Zi() const
{
   return (s_plength_2Zi);
}

void  set_plength_2Zi(short arg)
{
   s_plength_2Zi= arg;
    return;
}

//char* hcoil_id_2 = Unit[-]:length2.Limit:[-,-]
char*  hcoil_id_2() const
{
   return ((char*)c_hcoil_id_2);
}

void  set_hcoil_id_2 (const char* arg)
{
   strncpy((char*)c_hcoil_id_2, arg, sizeof(c_hcoil_id_2));
    c_hcoil_id_2[sizeof(c_hcoil_id_2)-1] = '\0';
   s_hcoil_id_2Zi = 0;
   return;
}

short   hcoil_id_2Zi() const
{
   return (s_hcoil_id_2Zi);
}

void  set_hcoil_id_2Zi(short arg)
{
   s_hcoil_id_2Zi= arg;
    return;
}

//long wpdx_3 = Unit[-]:wpdx 3.Limit:[-,-]
long  wpdx_3() const
{
   return (l_wpdx_3);
}

void  set_wpdx_3 (long arg)
{
   l_wpdx_3= arg;
   s_wpdx_3Zi = 0;
   return;
}

short   wpdx_3Zi() const
{
   return (s_wpdx_3Zi);
}

void  set_wpdx_3Zi(short arg)
{
   s_wpdx_3Zi= arg;
    return;
}

//long ti_3 = Unit[-]:ti3.Limit:[-,-]
long  ti_3() const
{
   return (l_ti_3);
}

void  set_ti_3 (long arg)
{
   l_ti_3= arg;
   s_ti_3Zi = 0;
   return;
}

short   ti_3Zi() const
{
   return (s_ti_3Zi);
}

void  set_ti_3Zi(short arg)
{
   s_ti_3Zi= arg;
    return;
}

//long plength_3 = Unit[-]:Hot coil Id3.Limit:[-,-]
long  plength_3() const
{
   return (l_plength_3);
}

void  set_plength_3 (long arg)
{
   l_plength_3= arg;
   s_plength_3Zi = 0;
   return;
}

short   plength_3Zi() const
{
   return (s_plength_3Zi);
}

void  set_plength_3Zi(short arg)
{
   s_plength_3Zi= arg;
    return;
}

//char* hcoil_id_3 = Unit[-]:length3.Limit:[-,-]
char*  hcoil_id_3() const
{
   return ((char*)c_hcoil_id_3);
}

void  set_hcoil_id_3 (const char* arg)
{
   strncpy((char*)c_hcoil_id_3, arg, sizeof(c_hcoil_id_3));
    c_hcoil_id_3[sizeof(c_hcoil_id_3)-1] = '\0';
   s_hcoil_id_3Zi = 0;
   return;
}

short   hcoil_id_3Zi() const
{
   return (s_hcoil_id_3Zi);
}

void  set_hcoil_id_3Zi(short arg)
{
   s_hcoil_id_3Zi= arg;
    return;
}

//long wpdx_4 = Unit[-]:wpdx 4.Limit:[-,-]
long  wpdx_4() const
{
   return (l_wpdx_4);
}

void  set_wpdx_4 (long arg)
{
   l_wpdx_4= arg;
   s_wpdx_4Zi = 0;
   return;
}

short   wpdx_4Zi() const
{
   return (s_wpdx_4Zi);
}

void  set_wpdx_4Zi(short arg)
{
   s_wpdx_4Zi= arg;
    return;
}

//long ti_4 = Unit[-]:ti4.Limit:[-,-]
long  ti_4() const
{
   return (l_ti_4);
}

void  set_ti_4 (long arg)
{
   l_ti_4= arg;
   s_ti_4Zi = 0;
   return;
}

short   ti_4Zi() const
{
   return (s_ti_4Zi);
}

void  set_ti_4Zi(short arg)
{
   s_ti_4Zi= arg;
    return;
}

//long plength_4 = Unit[-]:Hot coil Id4.Limit:[-,-]
long  plength_4() const
{
   return (l_plength_4);
}

void  set_plength_4 (long arg)
{
   l_plength_4= arg;
   s_plength_4Zi = 0;
   return;
}

short   plength_4Zi() const
{
   return (s_plength_4Zi);
}

void  set_plength_4Zi(short arg)
{
   s_plength_4Zi= arg;
    return;
}

//char* hcoil_id_4 = Unit[-]:length4.Limit:[-,-]
char*  hcoil_id_4() const
{
   return ((char*)c_hcoil_id_4);
}

void  set_hcoil_id_4 (const char* arg)
{
   strncpy((char*)c_hcoil_id_4, arg, sizeof(c_hcoil_id_4));
    c_hcoil_id_4[sizeof(c_hcoil_id_4)-1] = '\0';
   s_hcoil_id_4Zi = 0;
   return;
}

short   hcoil_id_4Zi() const
{
   return (s_hcoil_id_4Zi);
}

void  set_hcoil_id_4Zi(short arg)
{
   s_hcoil_id_4Zi= arg;
    return;
}

//long wpdx_5 = Unit[-]:wpdx 5.Limit:[-,-]
long  wpdx_5() const
{
   return (l_wpdx_5);
}

void  set_wpdx_5 (long arg)
{
   l_wpdx_5= arg;
   s_wpdx_5Zi = 0;
   return;
}

short   wpdx_5Zi() const
{
   return (s_wpdx_5Zi);
}

void  set_wpdx_5Zi(short arg)
{
   s_wpdx_5Zi= arg;
    return;
}

//long ti_5 = Unit[-]:ti5.Limit:[-,-]
long  ti_5() const
{
   return (l_ti_5);
}

void  set_ti_5 (long arg)
{
   l_ti_5= arg;
   s_ti_5Zi = 0;
   return;
}

short   ti_5Zi() const
{
   return (s_ti_5Zi);
}

void  set_ti_5Zi(short arg)
{
   s_ti_5Zi= arg;
    return;
}

//long plength_5 = Unit[-]:Hot coil Id5.Limit:[-,-]
long  plength_5() const
{
   return (l_plength_5);
}

void  set_plength_5 (long arg)
{
   l_plength_5= arg;
   s_plength_5Zi = 0;
   return;
}

short   plength_5Zi() const
{
   return (s_plength_5Zi);
}

void  set_plength_5Zi(short arg)
{
   s_plength_5Zi= arg;
    return;
}

//char* hcoil_id_5 = Unit[-]:length5.Limit:[-,-]
char*  hcoil_id_5() const
{
   return ((char*)c_hcoil_id_5);
}

void  set_hcoil_id_5 (const char* arg)
{
   strncpy((char*)c_hcoil_id_5, arg, sizeof(c_hcoil_id_5));
    c_hcoil_id_5[sizeof(c_hcoil_id_5)-1] = '\0';
   s_hcoil_id_5Zi = 0;
   return;
}

short   hcoil_id_5Zi() const
{
   return (s_hcoil_id_5Zi);
}

void  set_hcoil_id_5Zi(short arg)
{
   s_hcoil_id_5Zi= arg;
    return;
}

//long wpdx_6 = Unit[-]:wpdx 6.Limit:[-,-]
long  wpdx_6() const
{
   return (l_wpdx_6);
}

void  set_wpdx_6 (long arg)
{
   l_wpdx_6= arg;
   s_wpdx_6Zi = 0;
   return;
}

short   wpdx_6Zi() const
{
   return (s_wpdx_6Zi);
}

void  set_wpdx_6Zi(short arg)
{
   s_wpdx_6Zi= arg;
    return;
}

//long ti_6 = Unit[-]:ti6.Limit:[-,-]
long  ti_6() const
{
   return (l_ti_6);
}

void  set_ti_6 (long arg)
{
   l_ti_6= arg;
   s_ti_6Zi = 0;
   return;
}

short   ti_6Zi() const
{
   return (s_ti_6Zi);
}

void  set_ti_6Zi(short arg)
{
   s_ti_6Zi= arg;
    return;
}

//long plength_6 = Unit[-]:Hot coil Id6.Limit:[-,-]
long  plength_6() const
{
   return (l_plength_6);
}

void  set_plength_6 (long arg)
{
   l_plength_6= arg;
   s_plength_6Zi = 0;
   return;
}

short   plength_6Zi() const
{
   return (s_plength_6Zi);
}

void  set_plength_6Zi(short arg)
{
   s_plength_6Zi= arg;
    return;
}

//char* hcoil_id_6 = Unit[-]:length6.Limit:[-,-]
char*  hcoil_id_6() const
{
   return ((char*)c_hcoil_id_6);
}

void  set_hcoil_id_6 (const char* arg)
{
   strncpy((char*)c_hcoil_id_6, arg, sizeof(c_hcoil_id_6));
    c_hcoil_id_6[sizeof(c_hcoil_id_6)-1] = '\0';
   s_hcoil_id_6Zi = 0;
   return;
}

short   hcoil_id_6Zi() const
{
   return (s_hcoil_id_6Zi);
}

void  set_hcoil_id_6Zi(short arg)
{
   s_hcoil_id_6Zi= arg;
    return;
}

//long wpdx_7 = Unit[-]:wpdx 7.Limit:[-,-]
long  wpdx_7() const
{
   return (l_wpdx_7);
}

void  set_wpdx_7 (long arg)
{
   l_wpdx_7= arg;
   s_wpdx_7Zi = 0;
   return;
}

short   wpdx_7Zi() const
{
   return (s_wpdx_7Zi);
}

void  set_wpdx_7Zi(short arg)
{
   s_wpdx_7Zi= arg;
    return;
}

//long ti_7 = Unit[-]:ti7.Limit:[-,-]
long  ti_7() const
{
   return (l_ti_7);
}

void  set_ti_7 (long arg)
{
   l_ti_7= arg;
   s_ti_7Zi = 0;
   return;
}

short   ti_7Zi() const
{
   return (s_ti_7Zi);
}

void  set_ti_7Zi(short arg)
{
   s_ti_7Zi= arg;
    return;
}

//long plength_7 = Unit[-]:Hot coil Id7.Limit:[-,-]
long  plength_7() const
{
   return (l_plength_7);
}

void  set_plength_7 (long arg)
{
   l_plength_7= arg;
   s_plength_7Zi = 0;
   return;
}

short   plength_7Zi() const
{
   return (s_plength_7Zi);
}

void  set_plength_7Zi(short arg)
{
   s_plength_7Zi= arg;
    return;
}

//char* hcoil_id_7 = Unit[-]:length7.Limit:[-,-]
char*  hcoil_id_7() const
{
   return ((char*)c_hcoil_id_7);
}

void  set_hcoil_id_7 (const char* arg)
{
   strncpy((char*)c_hcoil_id_7, arg, sizeof(c_hcoil_id_7));
    c_hcoil_id_7[sizeof(c_hcoil_id_7)-1] = '\0';
   s_hcoil_id_7Zi = 0;
   return;
}

short   hcoil_id_7Zi() const
{
   return (s_hcoil_id_7Zi);
}

void  set_hcoil_id_7Zi(short arg)
{
   s_hcoil_id_7Zi= arg;
    return;
}

//long wpdx_8 = Unit[-]:wpdx 8.Limit:[-,-]
long  wpdx_8() const
{
   return (l_wpdx_8);
}

void  set_wpdx_8 (long arg)
{
   l_wpdx_8= arg;
   s_wpdx_8Zi = 0;
   return;
}

short   wpdx_8Zi() const
{
   return (s_wpdx_8Zi);
}

void  set_wpdx_8Zi(short arg)
{
   s_wpdx_8Zi= arg;
    return;
}

//long ti_8 = Unit[-]:ti8.Limit:[-,-]
long  ti_8() const
{
   return (l_ti_8);
}

void  set_ti_8 (long arg)
{
   l_ti_8= arg;
   s_ti_8Zi = 0;
   return;
}

short   ti_8Zi() const
{
   return (s_ti_8Zi);
}

void  set_ti_8Zi(short arg)
{
   s_ti_8Zi= arg;
    return;
}

//long plength_8 = Unit[-]:Hot coil Id8.Limit:[-,-]
long  plength_8() const
{
   return (l_plength_8);
}

void  set_plength_8 (long arg)
{
   l_plength_8= arg;
   s_plength_8Zi = 0;
   return;
}

short   plength_8Zi() const
{
   return (s_plength_8Zi);
}

void  set_plength_8Zi(short arg)
{
   s_plength_8Zi= arg;
    return;
}

//char* hcoil_id_8 = Unit[-]:length8.Limit:[-,-]
char*  hcoil_id_8() const
{
   return ((char*)c_hcoil_id_8);
}

void  set_hcoil_id_8 (const char* arg)
{
   strncpy((char*)c_hcoil_id_8, arg, sizeof(c_hcoil_id_8));
    c_hcoil_id_8[sizeof(c_hcoil_id_8)-1] = '\0';
   s_hcoil_id_8Zi = 0;
   return;
}

short   hcoil_id_8Zi() const
{
   return (s_hcoil_id_8Zi);
}

void  set_hcoil_id_8Zi(short arg)
{
   s_hcoil_id_8Zi= arg;
    return;
}

//long wpdx_9 = Unit[-]:wpdx 9.Limit:[-,-]
long  wpdx_9() const
{
   return (l_wpdx_9);
}

void  set_wpdx_9 (long arg)
{
   l_wpdx_9= arg;
   s_wpdx_9Zi = 0;
   return;
}

short   wpdx_9Zi() const
{
   return (s_wpdx_9Zi);
}

void  set_wpdx_9Zi(short arg)
{
   s_wpdx_9Zi= arg;
    return;
}

//long ti_9 = Unit[-]:ti9.Limit:[-,-]
long  ti_9() const
{
   return (l_ti_9);
}

void  set_ti_9 (long arg)
{
   l_ti_9= arg;
   s_ti_9Zi = 0;
   return;
}

short   ti_9Zi() const
{
   return (s_ti_9Zi);
}

void  set_ti_9Zi(short arg)
{
   s_ti_9Zi= arg;
    return;
}

//long plength_9 = Unit[-]:Hot coil Id9.Limit:[-,-]
long  plength_9() const
{
   return (l_plength_9);
}

void  set_plength_9 (long arg)
{
   l_plength_9= arg;
   s_plength_9Zi = 0;
   return;
}

short   plength_9Zi() const
{
   return (s_plength_9Zi);
}

void  set_plength_9Zi(short arg)
{
   s_plength_9Zi= arg;
    return;
}

//char* hcoil_id_9 = Unit[-]:length9.Limit:[-,-]
char*  hcoil_id_9() const
{
   return ((char*)c_hcoil_id_9);
}

void  set_hcoil_id_9 (const char* arg)
{
   strncpy((char*)c_hcoil_id_9, arg, sizeof(c_hcoil_id_9));
    c_hcoil_id_9[sizeof(c_hcoil_id_9)-1] = '\0';
   s_hcoil_id_9Zi = 0;
   return;
}

short   hcoil_id_9Zi() const
{
   return (s_hcoil_id_9Zi);
}

void  set_hcoil_id_9Zi(short arg)
{
   s_hcoil_id_9Zi= arg;
    return;
}

//long wpdx_10 = Unit[-]:wpdx 10.Limit:[-,-]
long  wpdx_10() const
{
   return (l_wpdx_10);
}

void  set_wpdx_10 (long arg)
{
   l_wpdx_10= arg;
   s_wpdx_10Zi = 0;
   return;
}

short   wpdx_10Zi() const
{
   return (s_wpdx_10Zi);
}

void  set_wpdx_10Zi(short arg)
{
   s_wpdx_10Zi= arg;
    return;
}

//long ti_10 = Unit[-]:ti10.Limit:[-,-]
long  ti_10() const
{
   return (l_ti_10);
}

void  set_ti_10 (long arg)
{
   l_ti_10= arg;
   s_ti_10Zi = 0;
   return;
}

short   ti_10Zi() const
{
   return (s_ti_10Zi);
}

void  set_ti_10Zi(short arg)
{
   s_ti_10Zi= arg;
    return;
}

//long plength_10 = Unit[-]:Hot coil Id10.Limit:[-,-]
long  plength_10() const
{
   return (l_plength_10);
}

void  set_plength_10 (long arg)
{
   l_plength_10= arg;
   s_plength_10Zi = 0;
   return;
}

short   plength_10Zi() const
{
   return (s_plength_10Zi);
}

void  set_plength_10Zi(short arg)
{
   s_plength_10Zi= arg;
    return;
}

//char* hcoil_id_10 = Unit[-]:length10.Limit:[-,-]
char*  hcoil_id_10() const
{
   return ((char*)c_hcoil_id_10);
}

void  set_hcoil_id_10 (const char* arg)
{
   strncpy((char*)c_hcoil_id_10, arg, sizeof(c_hcoil_id_10));
    c_hcoil_id_10[sizeof(c_hcoil_id_10)-1] = '\0';
   s_hcoil_id_10Zi = 0;
   return;
}

short   hcoil_id_10Zi() const
{
   return (s_hcoil_id_10Zi);
}

void  set_hcoil_id_10Zi(short arg)
{
   s_hcoil_id_10Zi= arg;
    return;
}

//long wpdx_11 = Unit[-]:wpdx 11.Limit:[-,-]
long  wpdx_11() const
{
   return (l_wpdx_11);
}

void  set_wpdx_11 (long arg)
{
   l_wpdx_11= arg;
   s_wpdx_11Zi = 0;
   return;
}

short   wpdx_11Zi() const
{
   return (s_wpdx_11Zi);
}

void  set_wpdx_11Zi(short arg)
{
   s_wpdx_11Zi= arg;
    return;
}

//long ti_11 = Unit[-]:ti11.Limit:[-,-]
long  ti_11() const
{
   return (l_ti_11);
}

void  set_ti_11 (long arg)
{
   l_ti_11= arg;
   s_ti_11Zi = 0;
   return;
}

short   ti_11Zi() const
{
   return (s_ti_11Zi);
}

void  set_ti_11Zi(short arg)
{
   s_ti_11Zi= arg;
    return;
}

//long plength_11 = Unit[-]:Hot coil Id11.Limit:[-,-]
long  plength_11() const
{
   return (l_plength_11);
}

void  set_plength_11 (long arg)
{
   l_plength_11= arg;
   s_plength_11Zi = 0;
   return;
}

short   plength_11Zi() const
{
   return (s_plength_11Zi);
}

void  set_plength_11Zi(short arg)
{
   s_plength_11Zi= arg;
    return;
}

//char* hcoil_id_11 = Unit[-]:length11.Limit:[-,-]
char*  hcoil_id_11() const
{
   return ((char*)c_hcoil_id_11);
}

void  set_hcoil_id_11 (const char* arg)
{
   strncpy((char*)c_hcoil_id_11, arg, sizeof(c_hcoil_id_11));
    c_hcoil_id_11[sizeof(c_hcoil_id_11)-1] = '\0';
   s_hcoil_id_11Zi = 0;
   return;
}

short   hcoil_id_11Zi() const
{
   return (s_hcoil_id_11Zi);
}

void  set_hcoil_id_11Zi(short arg)
{
   s_hcoil_id_11Zi= arg;
    return;
}

//long wpdx_12 = Unit[-]:wpdx 12.Limit:[-,-]
long  wpdx_12() const
{
   return (l_wpdx_12);
}

void  set_wpdx_12 (long arg)
{
   l_wpdx_12= arg;
   s_wpdx_12Zi = 0;
   return;
}

short   wpdx_12Zi() const
{
   return (s_wpdx_12Zi);
}

void  set_wpdx_12Zi(short arg)
{
   s_wpdx_12Zi= arg;
    return;
}

//long ti_12 = Unit[-]:ti12.Limit:[-,-]
long  ti_12() const
{
   return (l_ti_12);
}

void  set_ti_12 (long arg)
{
   l_ti_12= arg;
   s_ti_12Zi = 0;
   return;
}

short   ti_12Zi() const
{
   return (s_ti_12Zi);
}

void  set_ti_12Zi(short arg)
{
   s_ti_12Zi= arg;
    return;
}

//long plength_12 = Unit[-]:Hot coil Id12.Limit:[-,-]
long  plength_12() const
{
   return (l_plength_12);
}

void  set_plength_12 (long arg)
{
   l_plength_12= arg;
   s_plength_12Zi = 0;
   return;
}

short   plength_12Zi() const
{
   return (s_plength_12Zi);
}

void  set_plength_12Zi(short arg)
{
   s_plength_12Zi= arg;
    return;
}

//char* hcoil_id_12 = Unit[-]:length12.Limit:[-,-]
char*  hcoil_id_12() const
{
   return ((char*)c_hcoil_id_12);
}

void  set_hcoil_id_12 (const char* arg)
{
   strncpy((char*)c_hcoil_id_12, arg, sizeof(c_hcoil_id_12));
    c_hcoil_id_12[sizeof(c_hcoil_id_12)-1] = '\0';
   s_hcoil_id_12Zi = 0;
   return;
}

short   hcoil_id_12Zi() const
{
   return (s_hcoil_id_12Zi);
}

void  set_hcoil_id_12Zi(short arg)
{
   s_hcoil_id_12Zi= arg;
    return;
}

//long wpdx_13 = Unit[-]:wpdx 13.Limit:[-,-]
long  wpdx_13() const
{
   return (l_wpdx_13);
}

void  set_wpdx_13 (long arg)
{
   l_wpdx_13= arg;
   s_wpdx_13Zi = 0;
   return;
}

short   wpdx_13Zi() const
{
   return (s_wpdx_13Zi);
}

void  set_wpdx_13Zi(short arg)
{
   s_wpdx_13Zi= arg;
    return;
}

//long ti_13 = Unit[-]:ti13.Limit:[-,-]
long  ti_13() const
{
   return (l_ti_13);
}

void  set_ti_13 (long arg)
{
   l_ti_13= arg;
   s_ti_13Zi = 0;
   return;
}

short   ti_13Zi() const
{
   return (s_ti_13Zi);
}

void  set_ti_13Zi(short arg)
{
   s_ti_13Zi= arg;
    return;
}

//long plength_13 = Unit[-]:Hot coil Id13.Limit:[-,-]
long  plength_13() const
{
   return (l_plength_13);
}

void  set_plength_13 (long arg)
{
   l_plength_13= arg;
   s_plength_13Zi = 0;
   return;
}

short   plength_13Zi() const
{
   return (s_plength_13Zi);
}

void  set_plength_13Zi(short arg)
{
   s_plength_13Zi= arg;
    return;
}

//char* hcoil_id_13 = Unit[-]:length13.Limit:[-,-]
char*  hcoil_id_13() const
{
   return ((char*)c_hcoil_id_13);
}

void  set_hcoil_id_13 (const char* arg)
{
   strncpy((char*)c_hcoil_id_13, arg, sizeof(c_hcoil_id_13));
    c_hcoil_id_13[sizeof(c_hcoil_id_13)-1] = '\0';
   s_hcoil_id_13Zi = 0;
   return;
}

short   hcoil_id_13Zi() const
{
   return (s_hcoil_id_13Zi);
}

void  set_hcoil_id_13Zi(short arg)
{
   s_hcoil_id_13Zi= arg;
    return;
}

//long wpdx_14 = Unit[-]:wpdx 14.Limit:[-,-]
long  wpdx_14() const
{
   return (l_wpdx_14);
}

void  set_wpdx_14 (long arg)
{
   l_wpdx_14= arg;
   s_wpdx_14Zi = 0;
   return;
}

short   wpdx_14Zi() const
{
   return (s_wpdx_14Zi);
}

void  set_wpdx_14Zi(short arg)
{
   s_wpdx_14Zi= arg;
    return;
}

//long ti_14 = Unit[-]:ti14.Limit:[-,-]
long  ti_14() const
{
   return (l_ti_14);
}

void  set_ti_14 (long arg)
{
   l_ti_14= arg;
   s_ti_14Zi = 0;
   return;
}

short   ti_14Zi() const
{
   return (s_ti_14Zi);
}

void  set_ti_14Zi(short arg)
{
   s_ti_14Zi= arg;
    return;
}

//long plength_14 = Unit[-]:Hot coil Id14.Limit:[-,-]
long  plength_14() const
{
   return (l_plength_14);
}

void  set_plength_14 (long arg)
{
   l_plength_14= arg;
   s_plength_14Zi = 0;
   return;
}

short   plength_14Zi() const
{
   return (s_plength_14Zi);
}

void  set_plength_14Zi(short arg)
{
   s_plength_14Zi= arg;
    return;
}

//char* hcoil_id_14 = Unit[-]:length14.Limit:[-,-]
char*  hcoil_id_14() const
{
   return ((char*)c_hcoil_id_14);
}

void  set_hcoil_id_14 (const char* arg)
{
   strncpy((char*)c_hcoil_id_14, arg, sizeof(c_hcoil_id_14));
    c_hcoil_id_14[sizeof(c_hcoil_id_14)-1] = '\0';
   s_hcoil_id_14Zi = 0;
   return;
}

short   hcoil_id_14Zi() const
{
   return (s_hcoil_id_14Zi);
}

void  set_hcoil_id_14Zi(short arg)
{
   s_hcoil_id_14Zi= arg;
    return;
}

//long wpdx_15 = Unit[-]:wpdx 15.Limit:[-,-]
long  wpdx_15() const
{
   return (l_wpdx_15);
}

void  set_wpdx_15 (long arg)
{
   l_wpdx_15= arg;
   s_wpdx_15Zi = 0;
   return;
}

short   wpdx_15Zi() const
{
   return (s_wpdx_15Zi);
}

void  set_wpdx_15Zi(short arg)
{
   s_wpdx_15Zi= arg;
    return;
}

//long ti_15 = Unit[-]:ti15.Limit:[-,-]
long  ti_15() const
{
   return (l_ti_15);
}

void  set_ti_15 (long arg)
{
   l_ti_15= arg;
   s_ti_15Zi = 0;
   return;
}

short   ti_15Zi() const
{
   return (s_ti_15Zi);
}

void  set_ti_15Zi(short arg)
{
   s_ti_15Zi= arg;
    return;
}

//long plength_15 = Unit[-]:Hot coil Id15.Limit:[-,-]
long  plength_15() const
{
   return (l_plength_15);
}

void  set_plength_15 (long arg)
{
   l_plength_15= arg;
   s_plength_15Zi = 0;
   return;
}

short   plength_15Zi() const
{
   return (s_plength_15Zi);
}

void  set_plength_15Zi(short arg)
{
   s_plength_15Zi= arg;
    return;
}

//char* hcoil_id_15 = Unit[-]:length15.Limit:[-,-]
char*  hcoil_id_15() const
{
   return ((char*)c_hcoil_id_15);
}

void  set_hcoil_id_15 (const char* arg)
{
   strncpy((char*)c_hcoil_id_15, arg, sizeof(c_hcoil_id_15));
    c_hcoil_id_15[sizeof(c_hcoil_id_15)-1] = '\0';
   s_hcoil_id_15Zi = 0;
   return;
}

short   hcoil_id_15Zi() const
{
   return (s_hcoil_id_15Zi);
}

void  set_hcoil_id_15Zi(short arg)
{
   s_hcoil_id_15Zi= arg;
    return;
}

//long wpdx_16 = Unit[-]:wpdx 16.Limit:[-,-]
long  wpdx_16() const
{
   return (l_wpdx_16);
}

void  set_wpdx_16 (long arg)
{
   l_wpdx_16= arg;
   s_wpdx_16Zi = 0;
   return;
}

short   wpdx_16Zi() const
{
   return (s_wpdx_16Zi);
}

void  set_wpdx_16Zi(short arg)
{
   s_wpdx_16Zi= arg;
    return;
}

//long ti_16 = Unit[-]:ti16.Limit:[-,-]
long  ti_16() const
{
   return (l_ti_16);
}

void  set_ti_16 (long arg)
{
   l_ti_16= arg;
   s_ti_16Zi = 0;
   return;
}

short   ti_16Zi() const
{
   return (s_ti_16Zi);
}

void  set_ti_16Zi(short arg)
{
   s_ti_16Zi= arg;
    return;
}

//long plength_16 = Unit[-]:Hot coil Id16.Limit:[-,-]
long  plength_16() const
{
   return (l_plength_16);
}

void  set_plength_16 (long arg)
{
   l_plength_16= arg;
   s_plength_16Zi = 0;
   return;
}

short   plength_16Zi() const
{
   return (s_plength_16Zi);
}

void  set_plength_16Zi(short arg)
{
   s_plength_16Zi= arg;
    return;
}

//char* hcoil_id_16 = Unit[-]:length16.Limit:[-,-]
char*  hcoil_id_16() const
{
   return ((char*)c_hcoil_id_16);
}

void  set_hcoil_id_16 (const char* arg)
{
   strncpy((char*)c_hcoil_id_16, arg, sizeof(c_hcoil_id_16));
    c_hcoil_id_16[sizeof(c_hcoil_id_16)-1] = '\0';
   s_hcoil_id_16Zi = 0;
   return;
}

short   hcoil_id_16Zi() const
{
   return (s_hcoil_id_16Zi);
}

void  set_hcoil_id_16Zi(short arg)
{
   s_hcoil_id_16Zi= arg;
    return;
}

//long wpdx_17 = Unit[-]:wpdx 17.Limit:[-,-]
long  wpdx_17() const
{
   return (l_wpdx_17);
}

void  set_wpdx_17 (long arg)
{
   l_wpdx_17= arg;
   s_wpdx_17Zi = 0;
   return;
}

short   wpdx_17Zi() const
{
   return (s_wpdx_17Zi);
}

void  set_wpdx_17Zi(short arg)
{
   s_wpdx_17Zi= arg;
    return;
}

//long ti_17 = Unit[-]:ti17.Limit:[-,-]
long  ti_17() const
{
   return (l_ti_17);
}

void  set_ti_17 (long arg)
{
   l_ti_17= arg;
   s_ti_17Zi = 0;
   return;
}

short   ti_17Zi() const
{
   return (s_ti_17Zi);
}

void  set_ti_17Zi(short arg)
{
   s_ti_17Zi= arg;
    return;
}

//long plength_17 = Unit[-]:Hot coil Id17.Limit:[-,-]
long  plength_17() const
{
   return (l_plength_17);
}

void  set_plength_17 (long arg)
{
   l_plength_17= arg;
   s_plength_17Zi = 0;
   return;
}

short   plength_17Zi() const
{
   return (s_plength_17Zi);
}

void  set_plength_17Zi(short arg)
{
   s_plength_17Zi= arg;
    return;
}

//char* hcoil_id_17 = Unit[-]:length17.Limit:[-,-]
char*  hcoil_id_17() const
{
   return ((char*)c_hcoil_id_17);
}

void  set_hcoil_id_17 (const char* arg)
{
   strncpy((char*)c_hcoil_id_17, arg, sizeof(c_hcoil_id_17));
    c_hcoil_id_17[sizeof(c_hcoil_id_17)-1] = '\0';
   s_hcoil_id_17Zi = 0;
   return;
}

short   hcoil_id_17Zi() const
{
   return (s_hcoil_id_17Zi);
}

void  set_hcoil_id_17Zi(short arg)
{
   s_hcoil_id_17Zi= arg;
    return;
}

//long wpdx_18 = Unit[-]:wpdx 18.Limit:[-,-]
long  wpdx_18() const
{
   return (l_wpdx_18);
}

void  set_wpdx_18 (long arg)
{
   l_wpdx_18= arg;
   s_wpdx_18Zi = 0;
   return;
}

short   wpdx_18Zi() const
{
   return (s_wpdx_18Zi);
}

void  set_wpdx_18Zi(short arg)
{
   s_wpdx_18Zi= arg;
    return;
}

//long ti_18 = Unit[-]:ti18.Limit:[-,-]
long  ti_18() const
{
   return (l_ti_18);
}

void  set_ti_18 (long arg)
{
   l_ti_18= arg;
   s_ti_18Zi = 0;
   return;
}

short   ti_18Zi() const
{
   return (s_ti_18Zi);
}

void  set_ti_18Zi(short arg)
{
   s_ti_18Zi= arg;
    return;
}

//long plength_18 = Unit[-]:Hot coil Id18.Limit:[-,-]
long  plength_18() const
{
   return (l_plength_18);
}

void  set_plength_18 (long arg)
{
   l_plength_18= arg;
   s_plength_18Zi = 0;
   return;
}

short   plength_18Zi() const
{
   return (s_plength_18Zi);
}

void  set_plength_18Zi(short arg)
{
   s_plength_18Zi= arg;
    return;
}

//char* hcoil_id_18 = Unit[-]:length18.Limit:[-,-]
char*  hcoil_id_18() const
{
   return ((char*)c_hcoil_id_18);
}

void  set_hcoil_id_18 (const char* arg)
{
   strncpy((char*)c_hcoil_id_18, arg, sizeof(c_hcoil_id_18));
    c_hcoil_id_18[sizeof(c_hcoil_id_18)-1] = '\0';
   s_hcoil_id_18Zi = 0;
   return;
}

short   hcoil_id_18Zi() const
{
   return (s_hcoil_id_18Zi);
}

void  set_hcoil_id_18Zi(short arg)
{
   s_hcoil_id_18Zi= arg;
    return;
}

//long wpdx_19 = Unit[-]:wpdx 19.Limit:[-,-]
long  wpdx_19() const
{
   return (l_wpdx_19);
}

void  set_wpdx_19 (long arg)
{
   l_wpdx_19= arg;
   s_wpdx_19Zi = 0;
   return;
}

short   wpdx_19Zi() const
{
   return (s_wpdx_19Zi);
}

void  set_wpdx_19Zi(short arg)
{
   s_wpdx_19Zi= arg;
    return;
}

//long ti_19 = Unit[-]:ti19.Limit:[-,-]
long  ti_19() const
{
   return (l_ti_19);
}

void  set_ti_19 (long arg)
{
   l_ti_19= arg;
   s_ti_19Zi = 0;
   return;
}

short   ti_19Zi() const
{
   return (s_ti_19Zi);
}

void  set_ti_19Zi(short arg)
{
   s_ti_19Zi= arg;
    return;
}

//long plength_19 = Unit[-]:Hot coil Id19.Limit:[-,-]
long  plength_19() const
{
   return (l_plength_19);
}

void  set_plength_19 (long arg)
{
   l_plength_19= arg;
   s_plength_19Zi = 0;
   return;
}

short   plength_19Zi() const
{
   return (s_plength_19Zi);
}

void  set_plength_19Zi(short arg)
{
   s_plength_19Zi= arg;
    return;
}

//char* hcoil_id_19 = Unit[-]:length19.Limit:[-,-]
char*  hcoil_id_19() const
{
   return ((char*)c_hcoil_id_19);
}

void  set_hcoil_id_19 (const char* arg)
{
   strncpy((char*)c_hcoil_id_19, arg, sizeof(c_hcoil_id_19));
    c_hcoil_id_19[sizeof(c_hcoil_id_19)-1] = '\0';
   s_hcoil_id_19Zi = 0;
   return;
}

short   hcoil_id_19Zi() const
{
   return (s_hcoil_id_19Zi);
}

void  set_hcoil_id_19Zi(short arg)
{
   s_hcoil_id_19Zi= arg;
    return;
}

//long wpdx_20 = Unit[-]:wpdx 20.Limit:[-,-]
long  wpdx_20() const
{
   return (l_wpdx_20);
}

void  set_wpdx_20 (long arg)
{
   l_wpdx_20= arg;
   s_wpdx_20Zi = 0;
   return;
}

short   wpdx_20Zi() const
{
   return (s_wpdx_20Zi);
}

void  set_wpdx_20Zi(short arg)
{
   s_wpdx_20Zi= arg;
    return;
}

//long ti_20 = Unit[-]:ti20.Limit:[-,-]
long  ti_20() const
{
   return (l_ti_20);
}

void  set_ti_20 (long arg)
{
   l_ti_20= arg;
   s_ti_20Zi = 0;
   return;
}

short   ti_20Zi() const
{
   return (s_ti_20Zi);
}

void  set_ti_20Zi(short arg)
{
   s_ti_20Zi= arg;
    return;
}

//long plength_20 = Unit[-]:Hot coil Id20.Limit:[-,-]
long  plength_20() const
{
   return (l_plength_20);
}

void  set_plength_20 (long arg)
{
   l_plength_20= arg;
   s_plength_20Zi = 0;
   return;
}

short   plength_20Zi() const
{
   return (s_plength_20Zi);
}

void  set_plength_20Zi(short arg)
{
   s_plength_20Zi= arg;
    return;
}

//char* hcoil_id_20 = Unit[-]:length20.Limit:[-,-]
char*  hcoil_id_20() const
{
   return ((char*)c_hcoil_id_20);
}

void  set_hcoil_id_20 (const char* arg)
{
   strncpy((char*)c_hcoil_id_20, arg, sizeof(c_hcoil_id_20));
    c_hcoil_id_20[sizeof(c_hcoil_id_20)-1] = '\0';
   s_hcoil_id_20Zi = 0;
   return;
}

short   hcoil_id_20Zi() const
{
   return (s_hcoil_id_20Zi);
}

void  set_hcoil_id_20Zi(short arg)
{
   s_hcoil_id_20Zi= arg;
    return;
}

//long wpdx_21 = Unit[-]:wpdx 21.Limit:[-,-]
long  wpdx_21() const
{
   return (l_wpdx_21);
}

void  set_wpdx_21 (long arg)
{
   l_wpdx_21= arg;
   s_wpdx_21Zi = 0;
   return;
}

short   wpdx_21Zi() const
{
   return (s_wpdx_21Zi);
}

void  set_wpdx_21Zi(short arg)
{
   s_wpdx_21Zi= arg;
    return;
}

//long ti_21 = Unit[-]:ti21.Limit:[-,-]
long  ti_21() const
{
   return (l_ti_21);
}

void  set_ti_21 (long arg)
{
   l_ti_21= arg;
   s_ti_21Zi = 0;
   return;
}

short   ti_21Zi() const
{
   return (s_ti_21Zi);
}

void  set_ti_21Zi(short arg)
{
   s_ti_21Zi= arg;
    return;
}

//long plength_21 = Unit[-]:Hot coil Id21.Limit:[-,-]
long  plength_21() const
{
   return (l_plength_21);
}

void  set_plength_21 (long arg)
{
   l_plength_21= arg;
   s_plength_21Zi = 0;
   return;
}

short   plength_21Zi() const
{
   return (s_plength_21Zi);
}

void  set_plength_21Zi(short arg)
{
   s_plength_21Zi= arg;
    return;
}

//char* hcoil_id_21 = Unit[-]:length21.Limit:[-,-]
char*  hcoil_id_21() const
{
   return ((char*)c_hcoil_id_21);
}

void  set_hcoil_id_21 (const char* arg)
{
   strncpy((char*)c_hcoil_id_21, arg, sizeof(c_hcoil_id_21));
    c_hcoil_id_21[sizeof(c_hcoil_id_21)-1] = '\0';
   s_hcoil_id_21Zi = 0;
   return;
}

short   hcoil_id_21Zi() const
{
   return (s_hcoil_id_21Zi);
}

void  set_hcoil_id_21Zi(short arg)
{
   s_hcoil_id_21Zi= arg;
    return;
}

//long wpdx_22 = Unit[-]:wpdx 22.Limit:[-,-]
long  wpdx_22() const
{
   return (l_wpdx_22);
}

void  set_wpdx_22 (long arg)
{
   l_wpdx_22= arg;
   s_wpdx_22Zi = 0;
   return;
}

short   wpdx_22Zi() const
{
   return (s_wpdx_22Zi);
}

void  set_wpdx_22Zi(short arg)
{
   s_wpdx_22Zi= arg;
    return;
}

//long ti_22 = Unit[-]:ti22.Limit:[-,-]
long  ti_22() const
{
   return (l_ti_22);
}

void  set_ti_22 (long arg)
{
   l_ti_22= arg;
   s_ti_22Zi = 0;
   return;
}

short   ti_22Zi() const
{
   return (s_ti_22Zi);
}

void  set_ti_22Zi(short arg)
{
   s_ti_22Zi= arg;
    return;
}

//long plength_22 = Unit[-]:Hot coil Id22.Limit:[-,-]
long  plength_22() const
{
   return (l_plength_22);
}

void  set_plength_22 (long arg)
{
   l_plength_22= arg;
   s_plength_22Zi = 0;
   return;
}

short   plength_22Zi() const
{
   return (s_plength_22Zi);
}

void  set_plength_22Zi(short arg)
{
   s_plength_22Zi= arg;
    return;
}

//char* hcoil_id_22 = Unit[-]:length22.Limit:[-,-]
char*  hcoil_id_22() const
{
   return ((char*)c_hcoil_id_22);
}

void  set_hcoil_id_22 (const char* arg)
{
   strncpy((char*)c_hcoil_id_22, arg, sizeof(c_hcoil_id_22));
    c_hcoil_id_22[sizeof(c_hcoil_id_22)-1] = '\0';
   s_hcoil_id_22Zi = 0;
   return;
}

short   hcoil_id_22Zi() const
{
   return (s_hcoil_id_22Zi);
}

void  set_hcoil_id_22Zi(short arg)
{
   s_hcoil_id_22Zi= arg;
    return;
}

//long wpdx_23 = Unit[-]:wpdx 23.Limit:[-,-]
long  wpdx_23() const
{
   return (l_wpdx_23);
}

void  set_wpdx_23 (long arg)
{
   l_wpdx_23= arg;
   s_wpdx_23Zi = 0;
   return;
}

short   wpdx_23Zi() const
{
   return (s_wpdx_23Zi);
}

void  set_wpdx_23Zi(short arg)
{
   s_wpdx_23Zi= arg;
    return;
}

//long ti_23 = Unit[-]:ti23.Limit:[-,-]
long  ti_23() const
{
   return (l_ti_23);
}

void  set_ti_23 (long arg)
{
   l_ti_23= arg;
   s_ti_23Zi = 0;
   return;
}

short   ti_23Zi() const
{
   return (s_ti_23Zi);
}

void  set_ti_23Zi(short arg)
{
   s_ti_23Zi= arg;
    return;
}

//long plength_23 = Unit[-]:Hot coil Id23.Limit:[-,-]
long  plength_23() const
{
   return (l_plength_23);
}

void  set_plength_23 (long arg)
{
   l_plength_23= arg;
   s_plength_23Zi = 0;
   return;
}

short   plength_23Zi() const
{
   return (s_plength_23Zi);
}

void  set_plength_23Zi(short arg)
{
   s_plength_23Zi= arg;
    return;
}

//char* hcoil_id_23 = Unit[-]:length23.Limit:[-,-]
char*  hcoil_id_23() const
{
   return ((char*)c_hcoil_id_23);
}

void  set_hcoil_id_23 (const char* arg)
{
   strncpy((char*)c_hcoil_id_23, arg, sizeof(c_hcoil_id_23));
    c_hcoil_id_23[sizeof(c_hcoil_id_23)-1] = '\0';
   s_hcoil_id_23Zi = 0;
   return;
}

short   hcoil_id_23Zi() const
{
   return (s_hcoil_id_23Zi);
}

void  set_hcoil_id_23Zi(short arg)
{
   s_hcoil_id_23Zi= arg;
    return;
}

//long wpdx_24 = Unit[-]:wpdx 24.Limit:[-,-]
long  wpdx_24() const
{
   return (l_wpdx_24);
}

void  set_wpdx_24 (long arg)
{
   l_wpdx_24= arg;
   s_wpdx_24Zi = 0;
   return;
}

short   wpdx_24Zi() const
{
   return (s_wpdx_24Zi);
}

void  set_wpdx_24Zi(short arg)
{
   s_wpdx_24Zi= arg;
    return;
}

//long ti_24 = Unit[-]:ti24.Limit:[-,-]
long  ti_24() const
{
   return (l_ti_24);
}

void  set_ti_24 (long arg)
{
   l_ti_24= arg;
   s_ti_24Zi = 0;
   return;
}

short   ti_24Zi() const
{
   return (s_ti_24Zi);
}

void  set_ti_24Zi(short arg)
{
   s_ti_24Zi= arg;
    return;
}

//long plength_24 = Unit[-]:Hot coil Id24.Limit:[-,-]
long  plength_24() const
{
   return (l_plength_24);
}

void  set_plength_24 (long arg)
{
   l_plength_24= arg;
   s_plength_24Zi = 0;
   return;
}

short   plength_24Zi() const
{
   return (s_plength_24Zi);
}

void  set_plength_24Zi(short arg)
{
   s_plength_24Zi= arg;
    return;
}

//char* hcoil_id_24 = Unit[-]:length24.Limit:[-,-]
char*  hcoil_id_24() const
{
   return ((char*)c_hcoil_id_24);
}

void  set_hcoil_id_24 (const char* arg)
{
   strncpy((char*)c_hcoil_id_24, arg, sizeof(c_hcoil_id_24));
    c_hcoil_id_24[sizeof(c_hcoil_id_24)-1] = '\0';
   s_hcoil_id_24Zi = 0;
   return;
}

short   hcoil_id_24Zi() const
{
   return (s_hcoil_id_24Zi);
}

void  set_hcoil_id_24Zi(short arg)
{
   s_hcoil_id_24Zi= arg;
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
#endif //ACTDT_TRKDAT_H

