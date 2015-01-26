/* ********************************************************************/
/* *   File               :    SHAPE_DAT.h
                             
/* *   Short Description  :    Database Class ,SHAPE TREND DATA TABLE(After cut)
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         SHAPE_DAT_H   
#define      SHAPE_DAT_H   

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class SHAPE_DAT
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
//char     hcoil = Unit[-]:Hot coil number.Limit:[-,-]
char     c_hcoil[17];
//short    shpdtno = Unit[-]:Shape trend Data NO.Limit:[-,-]
short    s_shpdtno;
//short    mespos = Unit[-]:MeasPosition.Limit:[-,1]
short    s_mespos;
short    s_mesposZi;
//char     mestim = Unit[-]:MeasTime.Limit:[-,-]
char     c_mestim[17];
short    s_mestimZi;
//short    low = Unit[-]:low.Limit:[-,-]
short    s_low;
short    s_lowZi;
//short    high = Unit[I]:hight.Limit:[-,-]
short    s_high;
short    s_highZi;
//short    shpdt1 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt1;
short    s_shpdt1Zi;
//short    shpdt2 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt2;
short    s_shpdt2Zi;
//short    shpdt3 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt3;
short    s_shpdt3Zi;
//short    shpdt4 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt4;
short    s_shpdt4Zi;
//short    shpdt5 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt5;
short    s_shpdt5Zi;
//short    shpdt6 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt6;
short    s_shpdt6Zi;
//short    shpdt7 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt7;
short    s_shpdt7Zi;
//short    shpdt8 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt8;
short    s_shpdt8Zi;
//short    shpdt9 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt9;
short    s_shpdt9Zi;
//short    shpdt10 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt10;
short    s_shpdt10Zi;
//short    shpdt11 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt11;
short    s_shpdt11Zi;
//short    shpdt12 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt12;
short    s_shpdt12Zi;
//short    shpdt13 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt13;
short    s_shpdt13Zi;
//short    shpdt14 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt14;
short    s_shpdt14Zi;
//short    shpdt15 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt15;
short    s_shpdt15Zi;
//short    shpdt16 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt16;
short    s_shpdt16Zi;
//short    shpdt17 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt17;
short    s_shpdt17Zi;
//short    shpdt18 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt18;
short    s_shpdt18Zi;
//short    shpdt19 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt19;
short    s_shpdt19Zi;
//short    shpdt20 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt20;
short    s_shpdt20Zi;
//short    shpdt21 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt21;
short    s_shpdt21Zi;
//short    shpdt22 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt22;
short    s_shpdt22Zi;
//short    shpdt23 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt23;
short    s_shpdt23Zi;
//short    shpdt24 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt24;
short    s_shpdt24Zi;
//short    shpdt25 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt25;
short    s_shpdt25Zi;
//short    shpdt26 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt26;
short    s_shpdt26Zi;
//short    shpdt27 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt27;
short    s_shpdt27Zi;
//short    shpdt28 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt28;
short    s_shpdt28Zi;
//short    shpdt29 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt29;
short    s_shpdt29Zi;
//short    shpdt30 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt30;
short    s_shpdt30Zi;
//short    shpdt31 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt31;
short    s_shpdt31Zi;
//short    shpdt32 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt32;
short    s_shpdt32Zi;
//short    shpdt33 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt33;
short    s_shpdt33Zi;
//short    shpdt34 = Unit[I]:Shape trend Data.Limit:[-,-]
short    s_shpdt34;
short    s_shpdt34Zi;
//short    shpdt35 = Unit[-]:Shape trend Data.Limit:[-,-]
short    s_shpdt35;
short    s_shpdt35Zi;
//short    shpdt36 = Unit[-]:Shape trend Data.Limit:[-,-]
short    s_shpdt36;
short    s_shpdt36Zi;
//short    shpdt37 = Unit[-]:Shape trend Data.Limit:[-,-]
short    s_shpdt37;
short    s_shpdt37Zi;
//short    shpdt38 = Unit[-]:Shape trend Data.Limit:[-,-]
short    s_shpdt38;
short    s_shpdt38Zi;
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
char     c_k_hcoil[17];   // Unit[-]:Hot coil number.Limit:[-,-]
short    s_k_shpdtno;   // Unit[-]:Shape trend Data NO.Limit:[-,-]

public:
//
//Structure
//
struct STR_SHAPE_DAT
{
	char      hcoil[17];
	short     shpdtno;
	short     mespos;
	short     mesposZi;
	char      mestim[17];
	short     mestimZi;
	short     low;
	short     lowZi;
	short     high;
	short     highZi;
	short     shpdt1;
	short     shpdt1Zi;
	short     shpdt2;
	short     shpdt2Zi;
	short     shpdt3;
	short     shpdt3Zi;
	short     shpdt4;
	short     shpdt4Zi;
	short     shpdt5;
	short     shpdt5Zi;
	short     shpdt6;
	short     shpdt6Zi;
	short     shpdt7;
	short     shpdt7Zi;
	short     shpdt8;
	short     shpdt8Zi;
	short     shpdt9;
	short     shpdt9Zi;
	short     shpdt10;
	short     shpdt10Zi;
	short     shpdt11;
	short     shpdt11Zi;
	short     shpdt12;
	short     shpdt12Zi;
	short     shpdt13;
	short     shpdt13Zi;
	short     shpdt14;
	short     shpdt14Zi;
	short     shpdt15;
	short     shpdt15Zi;
	short     shpdt16;
	short     shpdt16Zi;
	short     shpdt17;
	short     shpdt17Zi;
	short     shpdt18;
	short     shpdt18Zi;
	short     shpdt19;
	short     shpdt19Zi;
	short     shpdt20;
	short     shpdt20Zi;
	short     shpdt21;
	short     shpdt21Zi;
	short     shpdt22;
	short     shpdt22Zi;
	short     shpdt23;
	short     shpdt23Zi;
	short     shpdt24;
	short     shpdt24Zi;
	short     shpdt25;
	short     shpdt25Zi;
	short     shpdt26;
	short     shpdt26Zi;
	short     shpdt27;
	short     shpdt27Zi;
	short     shpdt28;
	short     shpdt28Zi;
	short     shpdt29;
	short     shpdt29Zi;
	short     shpdt30;
	short     shpdt30Zi;
	short     shpdt31;
	short     shpdt31Zi;
	short     shpdt32;
	short     shpdt32Zi;
	short     shpdt33;
	short     shpdt33Zi;
	short     shpdt34;
	short     shpdt34Zi;
	short     shpdt35;
	short     shpdt35Zi;
	short     shpdt36;
	short     shpdt36Zi;
	short     shpdt37;
	short     shpdt37Zi;
	short     shpdt38;
	short     shpdt38Zi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structSHAPE_DAT;
    
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
SHAPE_DAT();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~SHAPE_DAT();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
SHAPE_DAT(const SHAPE_DAT &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	hcoil[17]= Unit[-]:Hot coil number.Limit:[-,-]
//short	shpdtno= Unit[-]:Shape trend Data NO.Limit:[-,-]
SHAPE_DAT( char* arg1,short arg2);

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
	strncpy (structSHAPE_DAT.hcoil, hcoil(), sizeof( structSHAPE_DAT.hcoil));
	structSHAPE_DAT.shpdtno = shpdtno();
	structSHAPE_DAT.mespos = mespos();
	structSHAPE_DAT.mesposZi = mesposZi();
	strncpy (structSHAPE_DAT.mestim, mestim(), sizeof( structSHAPE_DAT.mestim));
	structSHAPE_DAT.mestimZi = mestimZi();
	structSHAPE_DAT.low = low();
	structSHAPE_DAT.lowZi = lowZi();
	structSHAPE_DAT.high = high();
	structSHAPE_DAT.highZi = highZi();
	structSHAPE_DAT.shpdt1 = shpdt1();
	structSHAPE_DAT.shpdt1Zi = shpdt1Zi();
	structSHAPE_DAT.shpdt2 = shpdt2();
	structSHAPE_DAT.shpdt2Zi = shpdt2Zi();
	structSHAPE_DAT.shpdt3 = shpdt3();
	structSHAPE_DAT.shpdt3Zi = shpdt3Zi();
	structSHAPE_DAT.shpdt4 = shpdt4();
	structSHAPE_DAT.shpdt4Zi = shpdt4Zi();
	structSHAPE_DAT.shpdt5 = shpdt5();
	structSHAPE_DAT.shpdt5Zi = shpdt5Zi();
	structSHAPE_DAT.shpdt6 = shpdt6();
	structSHAPE_DAT.shpdt6Zi = shpdt6Zi();
	structSHAPE_DAT.shpdt7 = shpdt7();
	structSHAPE_DAT.shpdt7Zi = shpdt7Zi();
	structSHAPE_DAT.shpdt8 = shpdt8();
	structSHAPE_DAT.shpdt8Zi = shpdt8Zi();
	structSHAPE_DAT.shpdt9 = shpdt9();
	structSHAPE_DAT.shpdt9Zi = shpdt9Zi();
	structSHAPE_DAT.shpdt10 = shpdt10();
	structSHAPE_DAT.shpdt10Zi = shpdt10Zi();
	structSHAPE_DAT.shpdt11 = shpdt11();
	structSHAPE_DAT.shpdt11Zi = shpdt11Zi();
	structSHAPE_DAT.shpdt12 = shpdt12();
	structSHAPE_DAT.shpdt12Zi = shpdt12Zi();
	structSHAPE_DAT.shpdt13 = shpdt13();
	structSHAPE_DAT.shpdt13Zi = shpdt13Zi();
	structSHAPE_DAT.shpdt14 = shpdt14();
	structSHAPE_DAT.shpdt14Zi = shpdt14Zi();
	structSHAPE_DAT.shpdt15 = shpdt15();
	structSHAPE_DAT.shpdt15Zi = shpdt15Zi();
	structSHAPE_DAT.shpdt16 = shpdt16();
	structSHAPE_DAT.shpdt16Zi = shpdt16Zi();
	structSHAPE_DAT.shpdt17 = shpdt17();
	structSHAPE_DAT.shpdt17Zi = shpdt17Zi();
	structSHAPE_DAT.shpdt18 = shpdt18();
	structSHAPE_DAT.shpdt18Zi = shpdt18Zi();
	structSHAPE_DAT.shpdt19 = shpdt19();
	structSHAPE_DAT.shpdt19Zi = shpdt19Zi();
	structSHAPE_DAT.shpdt20 = shpdt20();
	structSHAPE_DAT.shpdt20Zi = shpdt20Zi();
	structSHAPE_DAT.shpdt21 = shpdt21();
	structSHAPE_DAT.shpdt21Zi = shpdt21Zi();
	structSHAPE_DAT.shpdt22 = shpdt22();
	structSHAPE_DAT.shpdt22Zi = shpdt22Zi();
	structSHAPE_DAT.shpdt23 = shpdt23();
	structSHAPE_DAT.shpdt23Zi = shpdt23Zi();
	structSHAPE_DAT.shpdt24 = shpdt24();
	structSHAPE_DAT.shpdt24Zi = shpdt24Zi();
	structSHAPE_DAT.shpdt25 = shpdt25();
	structSHAPE_DAT.shpdt25Zi = shpdt25Zi();
	structSHAPE_DAT.shpdt26 = shpdt26();
	structSHAPE_DAT.shpdt26Zi = shpdt26Zi();
	structSHAPE_DAT.shpdt27 = shpdt27();
	structSHAPE_DAT.shpdt27Zi = shpdt27Zi();
	structSHAPE_DAT.shpdt28 = shpdt28();
	structSHAPE_DAT.shpdt28Zi = shpdt28Zi();
	structSHAPE_DAT.shpdt29 = shpdt29();
	structSHAPE_DAT.shpdt29Zi = shpdt29Zi();
	structSHAPE_DAT.shpdt30 = shpdt30();
	structSHAPE_DAT.shpdt30Zi = shpdt30Zi();
	structSHAPE_DAT.shpdt31 = shpdt31();
	structSHAPE_DAT.shpdt31Zi = shpdt31Zi();
	structSHAPE_DAT.shpdt32 = shpdt32();
	structSHAPE_DAT.shpdt32Zi = shpdt32Zi();
	structSHAPE_DAT.shpdt33 = shpdt33();
	structSHAPE_DAT.shpdt33Zi = shpdt33Zi();
	structSHAPE_DAT.shpdt34 = shpdt34();
	structSHAPE_DAT.shpdt34Zi = shpdt34Zi();
	structSHAPE_DAT.shpdt35 = shpdt35();
	structSHAPE_DAT.shpdt35Zi = shpdt35Zi();
	structSHAPE_DAT.shpdt36 = shpdt36();
	structSHAPE_DAT.shpdt36Zi = shpdt36Zi();
	structSHAPE_DAT.shpdt37 = shpdt37();
	structSHAPE_DAT.shpdt37Zi = shpdt37Zi();
	structSHAPE_DAT.shpdt38 = shpdt38();
	structSHAPE_DAT.shpdt38Zi = shpdt38Zi();
	strncpy (structSHAPE_DAT.toc, toc(), sizeof( structSHAPE_DAT.toc));
	structSHAPE_DAT.tocZi = tocZi();
	strncpy (structSHAPE_DAT.tom, tom(), sizeof( structSHAPE_DAT.tom));
	structSHAPE_DAT.tomZi = tomZi();
	strncpy (structSHAPE_DAT.mop, mop(), sizeof( structSHAPE_DAT.mop));
	structSHAPE_DAT.mopZi = mopZi();
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
void setPrimKey(char* arg1,short arg2);

//methods
public:
//this methode stores the unique key attributes
void initInsertKeys(char* arg1,short arg2);

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
SHAPE_DAT operator+(const SHAPE_DAT &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const SHAPE_DAT& operator=(const SHAPE_DAT &inst);

          
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
//char* hcoil = Unit[-]:Hot coil number.Limit:[-,-]
char*  hcoil() const
{
   return ((char*)c_hcoil);
}

void  set_hcoil (const char* arg)
{
   strncpy((char*)c_hcoil, arg, sizeof(c_hcoil));
    c_hcoil[sizeof(c_hcoil)-1] = '\0';
   return;
}

//char*k_hcoil = Unit[-]:Hot coil number.Limit:[-,-]
char*  k_hcoil() const
{
   return ((char*)c_k_hcoil);
}

void  set_k_hcoil (const char* arg)
{
   strncpy((char*)c_k_hcoil, arg, sizeof(c_k_hcoil));
    c_k_hcoil[sizeof(c_k_hcoil)-1] = '\0';
    return;
}

//short shpdtno = Unit[-]:Shape trend Data NO.Limit:[-,-]
short  shpdtno() const
{
   return (s_shpdtno);
}

void  set_shpdtno (short arg)
{
   s_shpdtno= arg;
   return;
}

//shortk_shpdtno = Unit[-]:Shape trend Data NO.Limit:[-,-]
short  k_shpdtno() const
{
   return (s_k_shpdtno);
}

void  set_k_shpdtno (short arg)
{
   s_k_shpdtno= arg;
    return;
}

//short mespos = Unit[-]:MeasPosition.Limit:[-,1]
short  mespos() const
{
   return (s_mespos);
}

void  set_mespos (short arg)
{
   s_mespos= arg;
   s_mesposZi = 0;
   return;
}

short   mesposZi() const
{
   return (s_mesposZi);
}

void  set_mesposZi(short arg)
{
   s_mesposZi= arg;
    return;
}

//char* mestim = Unit[-]:MeasTime.Limit:[-,-]
char*  mestim() const
{
   return ((char*)c_mestim);
}

void  set_mestim (const char* arg)
{
   strncpy((char*)c_mestim, arg, sizeof(c_mestim));
    c_mestim[sizeof(c_mestim)-1] = '\0';
   s_mestimZi = 0;
   return;
}

short   mestimZi() const
{
   return (s_mestimZi);
}

void  set_mestimZi(short arg)
{
   s_mestimZi= arg;
    return;
}

//short low = Unit[-]:low.Limit:[-,-]
short  low() const
{
   return (s_low);
}

void  set_low (short arg)
{
   s_low= arg;
   s_lowZi = 0;
   return;
}

short   lowZi() const
{
   return (s_lowZi);
}

void  set_lowZi(short arg)
{
   s_lowZi= arg;
    return;
}

//short high = Unit[I]:hight.Limit:[-,-]
short  high() const
{
   return (s_high);
}

void  set_high (short arg)
{
   s_high= arg;
   s_highZi = 0;
   return;
}

short   highZi() const
{
   return (s_highZi);
}

void  set_highZi(short arg)
{
   s_highZi= arg;
    return;
}

//short shpdt1 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt1() const
{
   return (s_shpdt1);
}

void  set_shpdt1 (short arg)
{
   s_shpdt1= arg;
   s_shpdt1Zi = 0;
   return;
}

short   shpdt1Zi() const
{
   return (s_shpdt1Zi);
}

void  set_shpdt1Zi(short arg)
{
   s_shpdt1Zi= arg;
    return;
}

//short shpdt2 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt2() const
{
   return (s_shpdt2);
}

void  set_shpdt2 (short arg)
{
   s_shpdt2= arg;
   s_shpdt2Zi = 0;
   return;
}

short   shpdt2Zi() const
{
   return (s_shpdt2Zi);
}

void  set_shpdt2Zi(short arg)
{
   s_shpdt2Zi= arg;
    return;
}

//short shpdt3 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt3() const
{
   return (s_shpdt3);
}

void  set_shpdt3 (short arg)
{
   s_shpdt3= arg;
   s_shpdt3Zi = 0;
   return;
}

short   shpdt3Zi() const
{
   return (s_shpdt3Zi);
}

void  set_shpdt3Zi(short arg)
{
   s_shpdt3Zi= arg;
    return;
}

//short shpdt4 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt4() const
{
   return (s_shpdt4);
}

void  set_shpdt4 (short arg)
{
   s_shpdt4= arg;
   s_shpdt4Zi = 0;
   return;
}

short   shpdt4Zi() const
{
   return (s_shpdt4Zi);
}

void  set_shpdt4Zi(short arg)
{
   s_shpdt4Zi= arg;
    return;
}

//short shpdt5 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt5() const
{
   return (s_shpdt5);
}

void  set_shpdt5 (short arg)
{
   s_shpdt5= arg;
   s_shpdt5Zi = 0;
   return;
}

short   shpdt5Zi() const
{
   return (s_shpdt5Zi);
}

void  set_shpdt5Zi(short arg)
{
   s_shpdt5Zi= arg;
    return;
}

//short shpdt6 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt6() const
{
   return (s_shpdt6);
}

void  set_shpdt6 (short arg)
{
   s_shpdt6= arg;
   s_shpdt6Zi = 0;
   return;
}

short   shpdt6Zi() const
{
   return (s_shpdt6Zi);
}

void  set_shpdt6Zi(short arg)
{
   s_shpdt6Zi= arg;
    return;
}

//short shpdt7 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt7() const
{
   return (s_shpdt7);
}

void  set_shpdt7 (short arg)
{
   s_shpdt7= arg;
   s_shpdt7Zi = 0;
   return;
}

short   shpdt7Zi() const
{
   return (s_shpdt7Zi);
}

void  set_shpdt7Zi(short arg)
{
   s_shpdt7Zi= arg;
    return;
}

//short shpdt8 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt8() const
{
   return (s_shpdt8);
}

void  set_shpdt8 (short arg)
{
   s_shpdt8= arg;
   s_shpdt8Zi = 0;
   return;
}

short   shpdt8Zi() const
{
   return (s_shpdt8Zi);
}

void  set_shpdt8Zi(short arg)
{
   s_shpdt8Zi= arg;
    return;
}

//short shpdt9 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt9() const
{
   return (s_shpdt9);
}

void  set_shpdt9 (short arg)
{
   s_shpdt9= arg;
   s_shpdt9Zi = 0;
   return;
}

short   shpdt9Zi() const
{
   return (s_shpdt9Zi);
}

void  set_shpdt9Zi(short arg)
{
   s_shpdt9Zi= arg;
    return;
}

//short shpdt10 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt10() const
{
   return (s_shpdt10);
}

void  set_shpdt10 (short arg)
{
   s_shpdt10= arg;
   s_shpdt10Zi = 0;
   return;
}

short   shpdt10Zi() const
{
   return (s_shpdt10Zi);
}

void  set_shpdt10Zi(short arg)
{
   s_shpdt10Zi= arg;
    return;
}

//short shpdt11 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt11() const
{
   return (s_shpdt11);
}

void  set_shpdt11 (short arg)
{
   s_shpdt11= arg;
   s_shpdt11Zi = 0;
   return;
}

short   shpdt11Zi() const
{
   return (s_shpdt11Zi);
}

void  set_shpdt11Zi(short arg)
{
   s_shpdt11Zi= arg;
    return;
}

//short shpdt12 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt12() const
{
   return (s_shpdt12);
}

void  set_shpdt12 (short arg)
{
   s_shpdt12= arg;
   s_shpdt12Zi = 0;
   return;
}

short   shpdt12Zi() const
{
   return (s_shpdt12Zi);
}

void  set_shpdt12Zi(short arg)
{
   s_shpdt12Zi= arg;
    return;
}

//short shpdt13 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt13() const
{
   return (s_shpdt13);
}

void  set_shpdt13 (short arg)
{
   s_shpdt13= arg;
   s_shpdt13Zi = 0;
   return;
}

short   shpdt13Zi() const
{
   return (s_shpdt13Zi);
}

void  set_shpdt13Zi(short arg)
{
   s_shpdt13Zi= arg;
    return;
}

//short shpdt14 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt14() const
{
   return (s_shpdt14);
}

void  set_shpdt14 (short arg)
{
   s_shpdt14= arg;
   s_shpdt14Zi = 0;
   return;
}

short   shpdt14Zi() const
{
   return (s_shpdt14Zi);
}

void  set_shpdt14Zi(short arg)
{
   s_shpdt14Zi= arg;
    return;
}

//short shpdt15 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt15() const
{
   return (s_shpdt15);
}

void  set_shpdt15 (short arg)
{
   s_shpdt15= arg;
   s_shpdt15Zi = 0;
   return;
}

short   shpdt15Zi() const
{
   return (s_shpdt15Zi);
}

void  set_shpdt15Zi(short arg)
{
   s_shpdt15Zi= arg;
    return;
}

//short shpdt16 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt16() const
{
   return (s_shpdt16);
}

void  set_shpdt16 (short arg)
{
   s_shpdt16= arg;
   s_shpdt16Zi = 0;
   return;
}

short   shpdt16Zi() const
{
   return (s_shpdt16Zi);
}

void  set_shpdt16Zi(short arg)
{
   s_shpdt16Zi= arg;
    return;
}

//short shpdt17 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt17() const
{
   return (s_shpdt17);
}

void  set_shpdt17 (short arg)
{
   s_shpdt17= arg;
   s_shpdt17Zi = 0;
   return;
}

short   shpdt17Zi() const
{
   return (s_shpdt17Zi);
}

void  set_shpdt17Zi(short arg)
{
   s_shpdt17Zi= arg;
    return;
}

//short shpdt18 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt18() const
{
   return (s_shpdt18);
}

void  set_shpdt18 (short arg)
{
   s_shpdt18= arg;
   s_shpdt18Zi = 0;
   return;
}

short   shpdt18Zi() const
{
   return (s_shpdt18Zi);
}

void  set_shpdt18Zi(short arg)
{
   s_shpdt18Zi= arg;
    return;
}

//short shpdt19 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt19() const
{
   return (s_shpdt19);
}

void  set_shpdt19 (short arg)
{
   s_shpdt19= arg;
   s_shpdt19Zi = 0;
   return;
}

short   shpdt19Zi() const
{
   return (s_shpdt19Zi);
}

void  set_shpdt19Zi(short arg)
{
   s_shpdt19Zi= arg;
    return;
}

//short shpdt20 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt20() const
{
   return (s_shpdt20);
}

void  set_shpdt20 (short arg)
{
   s_shpdt20= arg;
   s_shpdt20Zi = 0;
   return;
}

short   shpdt20Zi() const
{
   return (s_shpdt20Zi);
}

void  set_shpdt20Zi(short arg)
{
   s_shpdt20Zi= arg;
    return;
}

//short shpdt21 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt21() const
{
   return (s_shpdt21);
}

void  set_shpdt21 (short arg)
{
   s_shpdt21= arg;
   s_shpdt21Zi = 0;
   return;
}

short   shpdt21Zi() const
{
   return (s_shpdt21Zi);
}

void  set_shpdt21Zi(short arg)
{
   s_shpdt21Zi= arg;
    return;
}

//short shpdt22 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt22() const
{
   return (s_shpdt22);
}

void  set_shpdt22 (short arg)
{
   s_shpdt22= arg;
   s_shpdt22Zi = 0;
   return;
}

short   shpdt22Zi() const
{
   return (s_shpdt22Zi);
}

void  set_shpdt22Zi(short arg)
{
   s_shpdt22Zi= arg;
    return;
}

//short shpdt23 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt23() const
{
   return (s_shpdt23);
}

void  set_shpdt23 (short arg)
{
   s_shpdt23= arg;
   s_shpdt23Zi = 0;
   return;
}

short   shpdt23Zi() const
{
   return (s_shpdt23Zi);
}

void  set_shpdt23Zi(short arg)
{
   s_shpdt23Zi= arg;
    return;
}

//short shpdt24 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt24() const
{
   return (s_shpdt24);
}

void  set_shpdt24 (short arg)
{
   s_shpdt24= arg;
   s_shpdt24Zi = 0;
   return;
}

short   shpdt24Zi() const
{
   return (s_shpdt24Zi);
}

void  set_shpdt24Zi(short arg)
{
   s_shpdt24Zi= arg;
    return;
}

//short shpdt25 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt25() const
{
   return (s_shpdt25);
}

void  set_shpdt25 (short arg)
{
   s_shpdt25= arg;
   s_shpdt25Zi = 0;
   return;
}

short   shpdt25Zi() const
{
   return (s_shpdt25Zi);
}

void  set_shpdt25Zi(short arg)
{
   s_shpdt25Zi= arg;
    return;
}

//short shpdt26 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt26() const
{
   return (s_shpdt26);
}

void  set_shpdt26 (short arg)
{
   s_shpdt26= arg;
   s_shpdt26Zi = 0;
   return;
}

short   shpdt26Zi() const
{
   return (s_shpdt26Zi);
}

void  set_shpdt26Zi(short arg)
{
   s_shpdt26Zi= arg;
    return;
}

//short shpdt27 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt27() const
{
   return (s_shpdt27);
}

void  set_shpdt27 (short arg)
{
   s_shpdt27= arg;
   s_shpdt27Zi = 0;
   return;
}

short   shpdt27Zi() const
{
   return (s_shpdt27Zi);
}

void  set_shpdt27Zi(short arg)
{
   s_shpdt27Zi= arg;
    return;
}

//short shpdt28 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt28() const
{
   return (s_shpdt28);
}

void  set_shpdt28 (short arg)
{
   s_shpdt28= arg;
   s_shpdt28Zi = 0;
   return;
}

short   shpdt28Zi() const
{
   return (s_shpdt28Zi);
}

void  set_shpdt28Zi(short arg)
{
   s_shpdt28Zi= arg;
    return;
}

//short shpdt29 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt29() const
{
   return (s_shpdt29);
}

void  set_shpdt29 (short arg)
{
   s_shpdt29= arg;
   s_shpdt29Zi = 0;
   return;
}

short   shpdt29Zi() const
{
   return (s_shpdt29Zi);
}

void  set_shpdt29Zi(short arg)
{
   s_shpdt29Zi= arg;
    return;
}

//short shpdt30 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt30() const
{
   return (s_shpdt30);
}

void  set_shpdt30 (short arg)
{
   s_shpdt30= arg;
   s_shpdt30Zi = 0;
   return;
}

short   shpdt30Zi() const
{
   return (s_shpdt30Zi);
}

void  set_shpdt30Zi(short arg)
{
   s_shpdt30Zi= arg;
    return;
}

//short shpdt31 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt31() const
{
   return (s_shpdt31);
}

void  set_shpdt31 (short arg)
{
   s_shpdt31= arg;
   s_shpdt31Zi = 0;
   return;
}

short   shpdt31Zi() const
{
   return (s_shpdt31Zi);
}

void  set_shpdt31Zi(short arg)
{
   s_shpdt31Zi= arg;
    return;
}

//short shpdt32 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt32() const
{
   return (s_shpdt32);
}

void  set_shpdt32 (short arg)
{
   s_shpdt32= arg;
   s_shpdt32Zi = 0;
   return;
}

short   shpdt32Zi() const
{
   return (s_shpdt32Zi);
}

void  set_shpdt32Zi(short arg)
{
   s_shpdt32Zi= arg;
    return;
}

//short shpdt33 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt33() const
{
   return (s_shpdt33);
}

void  set_shpdt33 (short arg)
{
   s_shpdt33= arg;
   s_shpdt33Zi = 0;
   return;
}

short   shpdt33Zi() const
{
   return (s_shpdt33Zi);
}

void  set_shpdt33Zi(short arg)
{
   s_shpdt33Zi= arg;
    return;
}

//short shpdt34 = Unit[I]:Shape trend Data.Limit:[-,-]
short  shpdt34() const
{
   return (s_shpdt34);
}

void  set_shpdt34 (short arg)
{
   s_shpdt34= arg;
   s_shpdt34Zi = 0;
   return;
}

short   shpdt34Zi() const
{
   return (s_shpdt34Zi);
}

void  set_shpdt34Zi(short arg)
{
   s_shpdt34Zi= arg;
    return;
}

//short shpdt35 = Unit[-]:Shape trend Data.Limit:[-,-]
short  shpdt35() const
{
   return (s_shpdt35);
}

void  set_shpdt35 (short arg)
{
   s_shpdt35= arg;
   s_shpdt35Zi = 0;
   return;
}

short   shpdt35Zi() const
{
   return (s_shpdt35Zi);
}

void  set_shpdt35Zi(short arg)
{
   s_shpdt35Zi= arg;
    return;
}

//short shpdt36 = Unit[-]:Shape trend Data.Limit:[-,-]
short  shpdt36() const
{
   return (s_shpdt36);
}

void  set_shpdt36 (short arg)
{
   s_shpdt36= arg;
   s_shpdt36Zi = 0;
   return;
}

short   shpdt36Zi() const
{
   return (s_shpdt36Zi);
}

void  set_shpdt36Zi(short arg)
{
   s_shpdt36Zi= arg;
    return;
}

//short shpdt37 = Unit[-]:Shape trend Data.Limit:[-,-]
short  shpdt37() const
{
   return (s_shpdt37);
}

void  set_shpdt37 (short arg)
{
   s_shpdt37= arg;
   s_shpdt37Zi = 0;
   return;
}

short   shpdt37Zi() const
{
   return (s_shpdt37Zi);
}

void  set_shpdt37Zi(short arg)
{
   s_shpdt37Zi= arg;
    return;
}

//short shpdt38 = Unit[-]:Shape trend Data.Limit:[-,-]
short  shpdt38() const
{
   return (s_shpdt38);
}

void  set_shpdt38 (short arg)
{
   s_shpdt38= arg;
   s_shpdt38Zi = 0;
   return;
}

short   shpdt38Zi() const
{
   return (s_shpdt38Zi);
}

void  set_shpdt38Zi(short arg)
{
   s_shpdt38Zi= arg;
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
#endif //SHAPE_DAT_H

