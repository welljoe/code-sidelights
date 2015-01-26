/* ********************************************************************/
/* *   File               :    EDROPC_DAT.h
                             
/* *   Short Description  :    Database Class ,EDGE DROP DATA BULK   STORAGE TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         EDROPC_DAT_H  
#define      EDROPC_DAT_H  

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class EDROPC_DAT
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
//char     hcoil = Unit[-]:Product coil number.Limit:[-,-]
char     c_hcoil[17];
//short    edtno = Unit[-]:Hot coil number.Limit:[-,-]
short    s_edtno;
//short    len = Unit[-]:edge data no.Limit:[-,1]
short    s_len;
short    s_lenZi;
//char     mestim = Unit[-]:Every Point length (m).Limit:[-,-]
char     c_mestim[17];
short    s_mestimZi;
//short    ws_dt1 = Unit[-]:MeasTime.Limit:[-,-]
short    s_ws_dt1;
short    s_ws_dt1Zi;
//short    ws_dt2 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt2;
short    s_ws_dt2Zi;
//short    ws_dt3 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt3;
short    s_ws_dt3Zi;
//short    ws_dt4 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt4;
short    s_ws_dt4Zi;
//short    ws_dt5 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt5;
short    s_ws_dt5Zi;
//short    ws_dt6 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt6;
short    s_ws_dt6Zi;
//short    ws_dt7 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt7;
short    s_ws_dt7Zi;
//short    ws_dt8 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt8;
short    s_ws_dt8Zi;
//short    ws_dt9 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt9;
short    s_ws_dt9Zi;
//short    ws_dt10 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt10;
short    s_ws_dt10Zi;
//short    ws_dt11 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt11;
short    s_ws_dt11Zi;
//short    ws_dt12 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt12;
short    s_ws_dt12Zi;
//short    ws_dt13 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt13;
short    s_ws_dt13Zi;
//short    ws_dt14 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt14;
short    s_ws_dt14Zi;
//short    ws_dt15 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt15;
short    s_ws_dt15Zi;
//short    ws_dt16 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt16;
short    s_ws_dt16Zi;
//short    ws_dt17 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt17;
short    s_ws_dt17Zi;
//short    ws_dt18 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt18;
short    s_ws_dt18Zi;
//short    ws_dt19 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt19;
short    s_ws_dt19Zi;
//short    ws_dt20 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ws_dt20;
short    s_ws_dt20Zi;
//short    ds_dt1 = Unit[I]:WS Edge drop data.Limit:[-,-]
short    s_ds_dt1;
short    s_ds_dt1Zi;
//short    ds_dt2 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt2;
short    s_ds_dt2Zi;
//short    ds_dt3 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt3;
short    s_ds_dt3Zi;
//short    ds_dt4 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt4;
short    s_ds_dt4Zi;
//short    ds_dt5 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt5;
short    s_ds_dt5Zi;
//short    ds_dt6 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt6;
short    s_ds_dt6Zi;
//short    ds_dt7 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt7;
short    s_ds_dt7Zi;
//short    ds_dt8 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt8;
short    s_ds_dt8Zi;
//short    ds_dt9 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt9;
short    s_ds_dt9Zi;
//short    ds_dt10 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt10;
short    s_ds_dt10Zi;
//short    ds_dt11 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt11;
short    s_ds_dt11Zi;
//short    ds_dt12 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt12;
short    s_ds_dt12Zi;
//short    ds_dt13 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt13;
short    s_ds_dt13Zi;
//short    ds_dt14 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt14;
short    s_ds_dt14Zi;
//short    ds_dt15 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt15;
short    s_ds_dt15Zi;
//short    ds_dt16 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt16;
short    s_ds_dt16Zi;
//short    ds_dt17 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt17;
short    s_ds_dt17Zi;
//short    ds_dt18 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt18;
short    s_ds_dt18Zi;
//short    ds_dt19 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt19;
short    s_ds_dt19Zi;
//short    ds_dt20 = Unit[I]:DS Edge drop data.Limit:[-,-]
short    s_ds_dt20;
short    s_ds_dt20Zi;
//char     toc = Unit[-]:modify time.Limit:[-,-]
char     c_toc[15];
short    s_tocZi;
//char     tom = Unit[-]:creator or modifyer.Limit:[-,-]
char     c_tom[121];
short    s_tomZi;
//char     mop = Unit[-]:creator or modifyer.Limit:[-,-]
char     c_mop[121];
short    s_mopZi;
// arguments for Primary key
char     c_k_hcoil[17];   // Unit[-]:Product coil number.Limit:[-,-]
short    s_k_edtno;   // Unit[-]:Hot coil number.Limit:[-,-]

public:
//
//Structure
//
struct STR_EDROPC_DAT
{
	char      hcoil[17];
	short     edtno;
	short     len;
	short     lenZi;
	char      mestim[17];
	short     mestimZi;
	short     ws_dt1;
	short     ws_dt1Zi;
	short     ws_dt2;
	short     ws_dt2Zi;
	short     ws_dt3;
	short     ws_dt3Zi;
	short     ws_dt4;
	short     ws_dt4Zi;
	short     ws_dt5;
	short     ws_dt5Zi;
	short     ws_dt6;
	short     ws_dt6Zi;
	short     ws_dt7;
	short     ws_dt7Zi;
	short     ws_dt8;
	short     ws_dt8Zi;
	short     ws_dt9;
	short     ws_dt9Zi;
	short     ws_dt10;
	short     ws_dt10Zi;
	short     ws_dt11;
	short     ws_dt11Zi;
	short     ws_dt12;
	short     ws_dt12Zi;
	short     ws_dt13;
	short     ws_dt13Zi;
	short     ws_dt14;
	short     ws_dt14Zi;
	short     ws_dt15;
	short     ws_dt15Zi;
	short     ws_dt16;
	short     ws_dt16Zi;
	short     ws_dt17;
	short     ws_dt17Zi;
	short     ws_dt18;
	short     ws_dt18Zi;
	short     ws_dt19;
	short     ws_dt19Zi;
	short     ws_dt20;
	short     ws_dt20Zi;
	short     ds_dt1;
	short     ds_dt1Zi;
	short     ds_dt2;
	short     ds_dt2Zi;
	short     ds_dt3;
	short     ds_dt3Zi;
	short     ds_dt4;
	short     ds_dt4Zi;
	short     ds_dt5;
	short     ds_dt5Zi;
	short     ds_dt6;
	short     ds_dt6Zi;
	short     ds_dt7;
	short     ds_dt7Zi;
	short     ds_dt8;
	short     ds_dt8Zi;
	short     ds_dt9;
	short     ds_dt9Zi;
	short     ds_dt10;
	short     ds_dt10Zi;
	short     ds_dt11;
	short     ds_dt11Zi;
	short     ds_dt12;
	short     ds_dt12Zi;
	short     ds_dt13;
	short     ds_dt13Zi;
	short     ds_dt14;
	short     ds_dt14Zi;
	short     ds_dt15;
	short     ds_dt15Zi;
	short     ds_dt16;
	short     ds_dt16Zi;
	short     ds_dt17;
	short     ds_dt17Zi;
	short     ds_dt18;
	short     ds_dt18Zi;
	short     ds_dt19;
	short     ds_dt19Zi;
	short     ds_dt20;
	short     ds_dt20Zi;
	char      toc[15];
	short     tocZi;
	char      tom[121];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structEDROPC_DAT;
            
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
EDROPC_DAT();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~EDROPC_DAT();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
EDROPC_DAT(const EDROPC_DAT &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	hcoil[17]= Unit[-]:Product coil number.Limit:[-,-]
//short	edtno= Unit[-]:Hot coil number.Limit:[-,-]
EDROPC_DAT( char* arg1,short arg2);

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
	strncpy (structEDROPC_DAT.hcoil, hcoil(), sizeof( structEDROPC_DAT.hcoil));
	structEDROPC_DAT.edtno = edtno();
	structEDROPC_DAT.len = len();
	structEDROPC_DAT.lenZi = lenZi();
	strncpy (structEDROPC_DAT.mestim, mestim(), sizeof( structEDROPC_DAT.mestim));
	structEDROPC_DAT.mestimZi = mestimZi();
	structEDROPC_DAT.ws_dt1 = ws_dt1();
	structEDROPC_DAT.ws_dt1Zi = ws_dt1Zi();
	structEDROPC_DAT.ws_dt2 = ws_dt2();
	structEDROPC_DAT.ws_dt2Zi = ws_dt2Zi();
	structEDROPC_DAT.ws_dt3 = ws_dt3();
	structEDROPC_DAT.ws_dt3Zi = ws_dt3Zi();
	structEDROPC_DAT.ws_dt4 = ws_dt4();
	structEDROPC_DAT.ws_dt4Zi = ws_dt4Zi();
	structEDROPC_DAT.ws_dt5 = ws_dt5();
	structEDROPC_DAT.ws_dt5Zi = ws_dt5Zi();
	structEDROPC_DAT.ws_dt6 = ws_dt6();
	structEDROPC_DAT.ws_dt6Zi = ws_dt6Zi();
	structEDROPC_DAT.ws_dt7 = ws_dt7();
	structEDROPC_DAT.ws_dt7Zi = ws_dt7Zi();
	structEDROPC_DAT.ws_dt8 = ws_dt8();
	structEDROPC_DAT.ws_dt8Zi = ws_dt8Zi();
	structEDROPC_DAT.ws_dt9 = ws_dt9();
	structEDROPC_DAT.ws_dt9Zi = ws_dt9Zi();
	structEDROPC_DAT.ws_dt10 = ws_dt10();
	structEDROPC_DAT.ws_dt10Zi = ws_dt10Zi();
	structEDROPC_DAT.ws_dt11 = ws_dt11();
	structEDROPC_DAT.ws_dt11Zi = ws_dt11Zi();
	structEDROPC_DAT.ws_dt12 = ws_dt12();
	structEDROPC_DAT.ws_dt12Zi = ws_dt12Zi();
	structEDROPC_DAT.ws_dt13 = ws_dt13();
	structEDROPC_DAT.ws_dt13Zi = ws_dt13Zi();
	structEDROPC_DAT.ws_dt14 = ws_dt14();
	structEDROPC_DAT.ws_dt14Zi = ws_dt14Zi();
	structEDROPC_DAT.ws_dt15 = ws_dt15();
	structEDROPC_DAT.ws_dt15Zi = ws_dt15Zi();
	structEDROPC_DAT.ws_dt16 = ws_dt16();
	structEDROPC_DAT.ws_dt16Zi = ws_dt16Zi();
	structEDROPC_DAT.ws_dt17 = ws_dt17();
	structEDROPC_DAT.ws_dt17Zi = ws_dt17Zi();
	structEDROPC_DAT.ws_dt18 = ws_dt18();
	structEDROPC_DAT.ws_dt18Zi = ws_dt18Zi();
	structEDROPC_DAT.ws_dt19 = ws_dt19();
	structEDROPC_DAT.ws_dt19Zi = ws_dt19Zi();
	structEDROPC_DAT.ws_dt20 = ws_dt20();
	structEDROPC_DAT.ws_dt20Zi = ws_dt20Zi();
	structEDROPC_DAT.ds_dt1 = ds_dt1();
	structEDROPC_DAT.ds_dt1Zi = ds_dt1Zi();
	structEDROPC_DAT.ds_dt2 = ds_dt2();
	structEDROPC_DAT.ds_dt2Zi = ds_dt2Zi();
	structEDROPC_DAT.ds_dt3 = ds_dt3();
	structEDROPC_DAT.ds_dt3Zi = ds_dt3Zi();
	structEDROPC_DAT.ds_dt4 = ds_dt4();
	structEDROPC_DAT.ds_dt4Zi = ds_dt4Zi();
	structEDROPC_DAT.ds_dt5 = ds_dt5();
	structEDROPC_DAT.ds_dt5Zi = ds_dt5Zi();
	structEDROPC_DAT.ds_dt6 = ds_dt6();
	structEDROPC_DAT.ds_dt6Zi = ds_dt6Zi();
	structEDROPC_DAT.ds_dt7 = ds_dt7();
	structEDROPC_DAT.ds_dt7Zi = ds_dt7Zi();
	structEDROPC_DAT.ds_dt8 = ds_dt8();
	structEDROPC_DAT.ds_dt8Zi = ds_dt8Zi();
	structEDROPC_DAT.ds_dt9 = ds_dt9();
	structEDROPC_DAT.ds_dt9Zi = ds_dt9Zi();
	structEDROPC_DAT.ds_dt10 = ds_dt10();
	structEDROPC_DAT.ds_dt10Zi = ds_dt10Zi();
	structEDROPC_DAT.ds_dt11 = ds_dt11();
	structEDROPC_DAT.ds_dt11Zi = ds_dt11Zi();
	structEDROPC_DAT.ds_dt12 = ds_dt12();
	structEDROPC_DAT.ds_dt12Zi = ds_dt12Zi();
	structEDROPC_DAT.ds_dt13 = ds_dt13();
	structEDROPC_DAT.ds_dt13Zi = ds_dt13Zi();
	structEDROPC_DAT.ds_dt14 = ds_dt14();
	structEDROPC_DAT.ds_dt14Zi = ds_dt14Zi();
	structEDROPC_DAT.ds_dt15 = ds_dt15();
	structEDROPC_DAT.ds_dt15Zi = ds_dt15Zi();
	structEDROPC_DAT.ds_dt16 = ds_dt16();
	structEDROPC_DAT.ds_dt16Zi = ds_dt16Zi();
	structEDROPC_DAT.ds_dt17 = ds_dt17();
	structEDROPC_DAT.ds_dt17Zi = ds_dt17Zi();
	structEDROPC_DAT.ds_dt18 = ds_dt18();
	structEDROPC_DAT.ds_dt18Zi = ds_dt18Zi();
	structEDROPC_DAT.ds_dt19 = ds_dt19();
	structEDROPC_DAT.ds_dt19Zi = ds_dt19Zi();
	structEDROPC_DAT.ds_dt20 = ds_dt20();
	structEDROPC_DAT.ds_dt20Zi = ds_dt20Zi();
	strncpy (structEDROPC_DAT.toc, toc(), sizeof( structEDROPC_DAT.toc));
	structEDROPC_DAT.tocZi = tocZi();
	strncpy (structEDROPC_DAT.tom, tom(), sizeof( structEDROPC_DAT.tom));
	structEDROPC_DAT.tomZi = tomZi();
	strncpy (structEDROPC_DAT.mop, mop(), sizeof( structEDROPC_DAT.mop));
	structEDROPC_DAT.mopZi = mopZi();
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
EDROPC_DAT operator+(const EDROPC_DAT &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const EDROPC_DAT& operator=(const EDROPC_DAT &inst);

              
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
//char* hcoil = Unit[-]:Product coil number.Limit:[-,-]
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

//char*k_hcoil = Unit[-]:Product coil number.Limit:[-,-]
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

//short edtno = Unit[-]:Hot coil number.Limit:[-,-]
short  edtno() const
{
   return (s_edtno);
}

void  set_edtno (short arg)
{
   s_edtno= arg;
   return;
}

//shortk_edtno = Unit[-]:Hot coil number.Limit:[-,-]
short  k_edtno() const
{
   return (s_k_edtno);
}

void  set_k_edtno (short arg)
{
   s_k_edtno= arg;
    return;
}

//short len = Unit[-]:edge data no.Limit:[-,1]
short  len() const
{
   return (s_len);
}

void  set_len (short arg)
{
   s_len= arg;
   s_lenZi = 0;
   return;
}

short   lenZi() const
{
   return (s_lenZi);
}

void  set_lenZi(short arg)
{
   s_lenZi= arg;
    return;
}

//char* mestim = Unit[-]:Every Point length (m).Limit:[-,-]
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

//short ws_dt1 = Unit[-]:MeasTime.Limit:[-,-]
short  ws_dt1() const
{
   return (s_ws_dt1);
}

void  set_ws_dt1 (short arg)
{
   s_ws_dt1= arg;
   s_ws_dt1Zi = 0;
   return;
}

short   ws_dt1Zi() const
{
   return (s_ws_dt1Zi);
}

void  set_ws_dt1Zi(short arg)
{
   s_ws_dt1Zi= arg;
    return;
}

//short ws_dt2 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt2() const
{
   return (s_ws_dt2);
}

void  set_ws_dt2 (short arg)
{
   s_ws_dt2= arg;
   s_ws_dt2Zi = 0;
   return;
}

short   ws_dt2Zi() const
{
   return (s_ws_dt2Zi);
}

void  set_ws_dt2Zi(short arg)
{
   s_ws_dt2Zi= arg;
    return;
}

//short ws_dt3 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt3() const
{
   return (s_ws_dt3);
}

void  set_ws_dt3 (short arg)
{
   s_ws_dt3= arg;
   s_ws_dt3Zi = 0;
   return;
}

short   ws_dt3Zi() const
{
   return (s_ws_dt3Zi);
}

void  set_ws_dt3Zi(short arg)
{
   s_ws_dt3Zi= arg;
    return;
}

//short ws_dt4 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt4() const
{
   return (s_ws_dt4);
}

void  set_ws_dt4 (short arg)
{
   s_ws_dt4= arg;
   s_ws_dt4Zi = 0;
   return;
}

short   ws_dt4Zi() const
{
   return (s_ws_dt4Zi);
}

void  set_ws_dt4Zi(short arg)
{
   s_ws_dt4Zi= arg;
    return;
}

//short ws_dt5 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt5() const
{
   return (s_ws_dt5);
}

void  set_ws_dt5 (short arg)
{
   s_ws_dt5= arg;
   s_ws_dt5Zi = 0;
   return;
}

short   ws_dt5Zi() const
{
   return (s_ws_dt5Zi);
}

void  set_ws_dt5Zi(short arg)
{
   s_ws_dt5Zi= arg;
    return;
}

//short ws_dt6 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt6() const
{
   return (s_ws_dt6);
}

void  set_ws_dt6 (short arg)
{
   s_ws_dt6= arg;
   s_ws_dt6Zi = 0;
   return;
}

short   ws_dt6Zi() const
{
   return (s_ws_dt6Zi);
}

void  set_ws_dt6Zi(short arg)
{
   s_ws_dt6Zi= arg;
    return;
}

//short ws_dt7 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt7() const
{
   return (s_ws_dt7);
}

void  set_ws_dt7 (short arg)
{
   s_ws_dt7= arg;
   s_ws_dt7Zi = 0;
   return;
}

short   ws_dt7Zi() const
{
   return (s_ws_dt7Zi);
}

void  set_ws_dt7Zi(short arg)
{
   s_ws_dt7Zi= arg;
    return;
}

//short ws_dt8 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt8() const
{
   return (s_ws_dt8);
}

void  set_ws_dt8 (short arg)
{
   s_ws_dt8= arg;
   s_ws_dt8Zi = 0;
   return;
}

short   ws_dt8Zi() const
{
   return (s_ws_dt8Zi);
}

void  set_ws_dt8Zi(short arg)
{
   s_ws_dt8Zi= arg;
    return;
}

//short ws_dt9 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt9() const
{
   return (s_ws_dt9);
}

void  set_ws_dt9 (short arg)
{
   s_ws_dt9= arg;
   s_ws_dt9Zi = 0;
   return;
}

short   ws_dt9Zi() const
{
   return (s_ws_dt9Zi);
}

void  set_ws_dt9Zi(short arg)
{
   s_ws_dt9Zi= arg;
    return;
}

//short ws_dt10 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt10() const
{
   return (s_ws_dt10);
}

void  set_ws_dt10 (short arg)
{
   s_ws_dt10= arg;
   s_ws_dt10Zi = 0;
   return;
}

short   ws_dt10Zi() const
{
   return (s_ws_dt10Zi);
}

void  set_ws_dt10Zi(short arg)
{
   s_ws_dt10Zi= arg;
    return;
}

//short ws_dt11 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt11() const
{
   return (s_ws_dt11);
}

void  set_ws_dt11 (short arg)
{
   s_ws_dt11= arg;
   s_ws_dt11Zi = 0;
   return;
}

short   ws_dt11Zi() const
{
   return (s_ws_dt11Zi);
}

void  set_ws_dt11Zi(short arg)
{
   s_ws_dt11Zi= arg;
    return;
}

//short ws_dt12 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt12() const
{
   return (s_ws_dt12);
}

void  set_ws_dt12 (short arg)
{
   s_ws_dt12= arg;
   s_ws_dt12Zi = 0;
   return;
}

short   ws_dt12Zi() const
{
   return (s_ws_dt12Zi);
}

void  set_ws_dt12Zi(short arg)
{
   s_ws_dt12Zi= arg;
    return;
}

//short ws_dt13 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt13() const
{
   return (s_ws_dt13);
}

void  set_ws_dt13 (short arg)
{
   s_ws_dt13= arg;
   s_ws_dt13Zi = 0;
   return;
}

short   ws_dt13Zi() const
{
   return (s_ws_dt13Zi);
}

void  set_ws_dt13Zi(short arg)
{
   s_ws_dt13Zi= arg;
    return;
}

//short ws_dt14 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt14() const
{
   return (s_ws_dt14);
}

void  set_ws_dt14 (short arg)
{
   s_ws_dt14= arg;
   s_ws_dt14Zi = 0;
   return;
}

short   ws_dt14Zi() const
{
   return (s_ws_dt14Zi);
}

void  set_ws_dt14Zi(short arg)
{
   s_ws_dt14Zi= arg;
    return;
}

//short ws_dt15 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt15() const
{
   return (s_ws_dt15);
}

void  set_ws_dt15 (short arg)
{
   s_ws_dt15= arg;
   s_ws_dt15Zi = 0;
   return;
}

short   ws_dt15Zi() const
{
   return (s_ws_dt15Zi);
}

void  set_ws_dt15Zi(short arg)
{
   s_ws_dt15Zi= arg;
    return;
}

//short ws_dt16 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt16() const
{
   return (s_ws_dt16);
}

void  set_ws_dt16 (short arg)
{
   s_ws_dt16= arg;
   s_ws_dt16Zi = 0;
   return;
}

short   ws_dt16Zi() const
{
   return (s_ws_dt16Zi);
}

void  set_ws_dt16Zi(short arg)
{
   s_ws_dt16Zi= arg;
    return;
}

//short ws_dt17 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt17() const
{
   return (s_ws_dt17);
}

void  set_ws_dt17 (short arg)
{
   s_ws_dt17= arg;
   s_ws_dt17Zi = 0;
   return;
}

short   ws_dt17Zi() const
{
   return (s_ws_dt17Zi);
}

void  set_ws_dt17Zi(short arg)
{
   s_ws_dt17Zi= arg;
    return;
}

//short ws_dt18 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt18() const
{
   return (s_ws_dt18);
}

void  set_ws_dt18 (short arg)
{
   s_ws_dt18= arg;
   s_ws_dt18Zi = 0;
   return;
}

short   ws_dt18Zi() const
{
   return (s_ws_dt18Zi);
}

void  set_ws_dt18Zi(short arg)
{
   s_ws_dt18Zi= arg;
    return;
}

//short ws_dt19 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt19() const
{
   return (s_ws_dt19);
}

void  set_ws_dt19 (short arg)
{
   s_ws_dt19= arg;
   s_ws_dt19Zi = 0;
   return;
}

short   ws_dt19Zi() const
{
   return (s_ws_dt19Zi);
}

void  set_ws_dt19Zi(short arg)
{
   s_ws_dt19Zi= arg;
    return;
}

//short ws_dt20 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ws_dt20() const
{
   return (s_ws_dt20);
}

void  set_ws_dt20 (short arg)
{
   s_ws_dt20= arg;
   s_ws_dt20Zi = 0;
   return;
}

short   ws_dt20Zi() const
{
   return (s_ws_dt20Zi);
}

void  set_ws_dt20Zi(short arg)
{
   s_ws_dt20Zi= arg;
    return;
}

//short ds_dt1 = Unit[I]:WS Edge drop data.Limit:[-,-]
short  ds_dt1() const
{
   return (s_ds_dt1);
}

void  set_ds_dt1 (short arg)
{
   s_ds_dt1= arg;
   s_ds_dt1Zi = 0;
   return;
}

short   ds_dt1Zi() const
{
   return (s_ds_dt1Zi);
}

void  set_ds_dt1Zi(short arg)
{
   s_ds_dt1Zi= arg;
    return;
}

//short ds_dt2 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt2() const
{
   return (s_ds_dt2);
}

void  set_ds_dt2 (short arg)
{
   s_ds_dt2= arg;
   s_ds_dt2Zi = 0;
   return;
}

short   ds_dt2Zi() const
{
   return (s_ds_dt2Zi);
}

void  set_ds_dt2Zi(short arg)
{
   s_ds_dt2Zi= arg;
    return;
}

//short ds_dt3 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt3() const
{
   return (s_ds_dt3);
}

void  set_ds_dt3 (short arg)
{
   s_ds_dt3= arg;
   s_ds_dt3Zi = 0;
   return;
}

short   ds_dt3Zi() const
{
   return (s_ds_dt3Zi);
}

void  set_ds_dt3Zi(short arg)
{
   s_ds_dt3Zi= arg;
    return;
}

//short ds_dt4 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt4() const
{
   return (s_ds_dt4);
}

void  set_ds_dt4 (short arg)
{
   s_ds_dt4= arg;
   s_ds_dt4Zi = 0;
   return;
}

short   ds_dt4Zi() const
{
   return (s_ds_dt4Zi);
}

void  set_ds_dt4Zi(short arg)
{
   s_ds_dt4Zi= arg;
    return;
}

//short ds_dt5 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt5() const
{
   return (s_ds_dt5);
}

void  set_ds_dt5 (short arg)
{
   s_ds_dt5= arg;
   s_ds_dt5Zi = 0;
   return;
}

short   ds_dt5Zi() const
{
   return (s_ds_dt5Zi);
}

void  set_ds_dt5Zi(short arg)
{
   s_ds_dt5Zi= arg;
    return;
}

//short ds_dt6 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt6() const
{
   return (s_ds_dt6);
}

void  set_ds_dt6 (short arg)
{
   s_ds_dt6= arg;
   s_ds_dt6Zi = 0;
   return;
}

short   ds_dt6Zi() const
{
   return (s_ds_dt6Zi);
}

void  set_ds_dt6Zi(short arg)
{
   s_ds_dt6Zi= arg;
    return;
}

//short ds_dt7 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt7() const
{
   return (s_ds_dt7);
}

void  set_ds_dt7 (short arg)
{
   s_ds_dt7= arg;
   s_ds_dt7Zi = 0;
   return;
}

short   ds_dt7Zi() const
{
   return (s_ds_dt7Zi);
}

void  set_ds_dt7Zi(short arg)
{
   s_ds_dt7Zi= arg;
    return;
}

//short ds_dt8 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt8() const
{
   return (s_ds_dt8);
}

void  set_ds_dt8 (short arg)
{
   s_ds_dt8= arg;
   s_ds_dt8Zi = 0;
   return;
}

short   ds_dt8Zi() const
{
   return (s_ds_dt8Zi);
}

void  set_ds_dt8Zi(short arg)
{
   s_ds_dt8Zi= arg;
    return;
}

//short ds_dt9 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt9() const
{
   return (s_ds_dt9);
}

void  set_ds_dt9 (short arg)
{
   s_ds_dt9= arg;
   s_ds_dt9Zi = 0;
   return;
}

short   ds_dt9Zi() const
{
   return (s_ds_dt9Zi);
}

void  set_ds_dt9Zi(short arg)
{
   s_ds_dt9Zi= arg;
    return;
}

//short ds_dt10 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt10() const
{
   return (s_ds_dt10);
}

void  set_ds_dt10 (short arg)
{
   s_ds_dt10= arg;
   s_ds_dt10Zi = 0;
   return;
}

short   ds_dt10Zi() const
{
   return (s_ds_dt10Zi);
}

void  set_ds_dt10Zi(short arg)
{
   s_ds_dt10Zi= arg;
    return;
}

//short ds_dt11 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt11() const
{
   return (s_ds_dt11);
}

void  set_ds_dt11 (short arg)
{
   s_ds_dt11= arg;
   s_ds_dt11Zi = 0;
   return;
}

short   ds_dt11Zi() const
{
   return (s_ds_dt11Zi);
}

void  set_ds_dt11Zi(short arg)
{
   s_ds_dt11Zi= arg;
    return;
}

//short ds_dt12 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt12() const
{
   return (s_ds_dt12);
}

void  set_ds_dt12 (short arg)
{
   s_ds_dt12= arg;
   s_ds_dt12Zi = 0;
   return;
}

short   ds_dt12Zi() const
{
   return (s_ds_dt12Zi);
}

void  set_ds_dt12Zi(short arg)
{
   s_ds_dt12Zi= arg;
    return;
}

//short ds_dt13 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt13() const
{
   return (s_ds_dt13);
}

void  set_ds_dt13 (short arg)
{
   s_ds_dt13= arg;
   s_ds_dt13Zi = 0;
   return;
}

short   ds_dt13Zi() const
{
   return (s_ds_dt13Zi);
}

void  set_ds_dt13Zi(short arg)
{
   s_ds_dt13Zi= arg;
    return;
}

//short ds_dt14 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt14() const
{
   return (s_ds_dt14);
}

void  set_ds_dt14 (short arg)
{
   s_ds_dt14= arg;
   s_ds_dt14Zi = 0;
   return;
}

short   ds_dt14Zi() const
{
   return (s_ds_dt14Zi);
}

void  set_ds_dt14Zi(short arg)
{
   s_ds_dt14Zi= arg;
    return;
}

//short ds_dt15 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt15() const
{
   return (s_ds_dt15);
}

void  set_ds_dt15 (short arg)
{
   s_ds_dt15= arg;
   s_ds_dt15Zi = 0;
   return;
}

short   ds_dt15Zi() const
{
   return (s_ds_dt15Zi);
}

void  set_ds_dt15Zi(short arg)
{
   s_ds_dt15Zi= arg;
    return;
}

//short ds_dt16 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt16() const
{
   return (s_ds_dt16);
}

void  set_ds_dt16 (short arg)
{
   s_ds_dt16= arg;
   s_ds_dt16Zi = 0;
   return;
}

short   ds_dt16Zi() const
{
   return (s_ds_dt16Zi);
}

void  set_ds_dt16Zi(short arg)
{
   s_ds_dt16Zi= arg;
    return;
}

//short ds_dt17 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt17() const
{
   return (s_ds_dt17);
}

void  set_ds_dt17 (short arg)
{
   s_ds_dt17= arg;
   s_ds_dt17Zi = 0;
   return;
}

short   ds_dt17Zi() const
{
   return (s_ds_dt17Zi);
}

void  set_ds_dt17Zi(short arg)
{
   s_ds_dt17Zi= arg;
    return;
}

//short ds_dt18 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt18() const
{
   return (s_ds_dt18);
}

void  set_ds_dt18 (short arg)
{
   s_ds_dt18= arg;
   s_ds_dt18Zi = 0;
   return;
}

short   ds_dt18Zi() const
{
   return (s_ds_dt18Zi);
}

void  set_ds_dt18Zi(short arg)
{
   s_ds_dt18Zi= arg;
    return;
}

//short ds_dt19 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt19() const
{
   return (s_ds_dt19);
}

void  set_ds_dt19 (short arg)
{
   s_ds_dt19= arg;
   s_ds_dt19Zi = 0;
   return;
}

short   ds_dt19Zi() const
{
   return (s_ds_dt19Zi);
}

void  set_ds_dt19Zi(short arg)
{
   s_ds_dt19Zi= arg;
    return;
}

//short ds_dt20 = Unit[I]:DS Edge drop data.Limit:[-,-]
short  ds_dt20() const
{
   return (s_ds_dt20);
}

void  set_ds_dt20 (short arg)
{
   s_ds_dt20= arg;
   s_ds_dt20Zi = 0;
   return;
}

short   ds_dt20Zi() const
{
   return (s_ds_dt20Zi);
}

void  set_ds_dt20Zi(short arg)
{
   s_ds_dt20Zi= arg;
    return;
}

//char* toc = Unit[-]:modify time.Limit:[-,-]
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

//char* tom = Unit[-]:creator or modifyer.Limit:[-,-]
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
#endif //EDROPC_DAT_H

