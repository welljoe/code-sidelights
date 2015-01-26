/* ********************************************************************/
/* *   File               :    TRD_DAT.h
                             
/* *   Short Description  :    Database Class ,TREND DATA(Before Cut Buffer)
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         TRD_DAT_H     
#define      TRD_DAT_H     

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class TRD_DAT
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
//short    trdtno = Unit[-]:Trend Data NO.Limit:[-,-]
short    s_trdtno;
//short    s1pos = Unit[-]:Stand1MesPos.Limit:[-,1]
short    s_s1pos;
short    s_s1posZi;
//short    s2pos = Unit[-]:Stand2MesPos.Limit:[-,-]
short    s_s2pos;
short    s_s2posZi;
//short    s3pos = Unit[-]:Stand3MesPos.Limit:[-,-]
short    s_s3pos;
short    s_s3posZi;
//short    s4pos = Unit[I]:Stand4MesPos.Limit:[-,-]
short    s_s4pos;
short    s_s4posZi;
//short    s5pos = Unit[I]:Stand5MesPos.Limit:[-,-]
short    s_s5pos;
short    s_s5posZi;
//char     stime = Unit[I]:Stand1MesTim.Limit:[-,-]
char     c_stime[17];
short    s_stimeZi;
//short    trdt_rf1 = Unit[I]:Roll Force #1.Limit:[-,-]
short    s_trdt_rf1;
short    s_trdt_rf1Zi;
//short    trdt_rf2 = Unit[I]:Roll Force #2.Limit:[-,-]
short    s_trdt_rf2;
short    s_trdt_rf2Zi;
//short    trdt_rf3 = Unit[I]:Roll Force #3.Limit:[-,-]
short    s_trdt_rf3;
short    s_trdt_rf3Zi;
//short    trdt_rf4 = Unit[I]:Roll Force #4.Limit:[-,-]
short    s_trdt_rf4;
short    s_trdt_rf4Zi;
//short    trdt_rf5 = Unit[I]:Roll Force #5.Limit:[-,-]
short    s_trdt_rf5;
short    s_trdt_rf5Zi;
//short    trdt_ten1 = Unit[I]:Tension #1E.Limit:[-,-]
short    s_trdt_ten1;
short    s_trdt_ten1Zi;
//short    trdt_ten2 = Unit[I]:Tension #1-#2.Limit:[-,-]
short    s_trdt_ten2;
short    s_trdt_ten2Zi;
//short    trdt_ten3 = Unit[I]:Tension #2-#3.Limit:[-,-]
short    s_trdt_ten3;
short    s_trdt_ten3Zi;
//short    trdt_ten4 = Unit[I]:Tension #3-#4.Limit:[-,-]
short    s_trdt_ten4;
short    s_trdt_ten4Zi;
//short    trdt_ten5 = Unit[I]:Tension #4-#5.Limit:[-,-]
short    s_trdt_ten5;
short    s_trdt_ten5Zi;
//short    trdt_ten6 = Unit[I]:Tension #5D.Limit:[-,-]
short    s_trdt_ten6;
short    s_trdt_ten6Zi;
//short    trdt_h1 = Unit[I]:X-ray Thickness #1E.Limit:[-,-]
short    s_trdt_h1;
short    s_trdt_h1Zi;
//short    trdt_h2 = Unit[I]:X-ray Thickness  #1-#2.Limit:[-,-]
short    s_trdt_h2;
short    s_trdt_h2Zi;
//short    trdt_h3 = Unit[I]:X-ray Thickness  #4-#5.Limit:[-,-]
short    s_trdt_h3;
short    s_trdt_h3Zi;
//short    trdt_h4 = Unit[I]:X-ray Thickness  #5D.Limit:[-,-]
short    s_trdt_h4;
short    s_trdt_h4Zi;
//short    trdt_vs1 = Unit[I]:Strip Speed #1D.Limit:[-,-]
short    s_trdt_vs1;
short    s_trdt_vs1Zi;
//short    trdt_vs2 = Unit[I]:Strip Speed #2D.Limit:[-,-]
short    s_trdt_vs2;
short    s_trdt_vs2Zi;
//short    trdt_vs3 = Unit[I]:Strip Speed #3D.Limit:[-,-]
short    s_trdt_vs3;
short    s_trdt_vs3Zi;
//short    trdt_vs4 = Unit[I]:Strip Speed #4D.Limit:[-,-]
short    s_trdt_vs4;
short    s_trdt_vs4Zi;
//short    trdt_vs5 = Unit[I]:Strip Speed #5D.Limit:[-,-]
short    s_trdt_vs5;
short    s_trdt_vs5Zi;
//short    trdt_cur1 = Unit[I]:Motor Current #1.Limit:[-,-]
short    s_trdt_cur1;
short    s_trdt_cur1Zi;
//short    trdt_cur2 = Unit[I]:Motor Current #2.Limit:[-,-]
short    s_trdt_cur2;
short    s_trdt_cur2Zi;
//short    trdt_cur3 = Unit[I]:Motor Current #3.Limit:[-,-]
short    s_trdt_cur3;
short    s_trdt_cur3Zi;
//short    trdt_cur4 = Unit[I]:Motor Current #4.Limit:[-,-]
short    s_trdt_cur4;
short    s_trdt_cur4Zi;
//short    trdt_cur5 = Unit[I]:Motor Current #5.Limit:[-,-]
short    s_trdt_cur5;
short    s_trdt_cur5Zi;
//short    trdt_wsben1 = Unit[I]:WR Bender #1.Limit:[-,-]
short    s_trdt_wsben1;
short    s_trdt_wsben1Zi;
//short    trdt_wsben2 = Unit[I]:WR Bender #2.Limit:[-,-]
short    s_trdt_wsben2;
short    s_trdt_wsben2Zi;
//short    trdt_wsben3 = Unit[I]:WR Bender #3.Limit:[-,-]
short    s_trdt_wsben3;
short    s_trdt_wsben3Zi;
//short    trdt_wsben4 = Unit[I]:WR Bender #4.Limit:[-,-]
short    s_trdt_wsben4;
short    s_trdt_wsben4Zi;
//short    trdt_wsben5 = Unit[I]:WR Bender #5.Limit:[-,-]
short    s_trdt_wsben5;
short    s_trdt_wsben5Zi;
//short    trdt_imrben1 = Unit[I]:IMR Bender #1.Limit:[-,-]
short    s_trdt_imrben1;
short    s_trdt_imrben1Zi;
//short    trdt_imrben2 = Unit[I]:IMR Bender #2.Limit:[-,-]
short    s_trdt_imrben2;
short    s_trdt_imrben2Zi;
//short    trdt_imrben3 = Unit[I]:IMR Bender #3.Limit:[-,-]
short    s_trdt_imrben3;
short    s_trdt_imrben3Zi;
//short    trdt_imrben4 = Unit[I]:IMR Bender #4.Limit:[-,-]
short    s_trdt_imrben4;
short    s_trdt_imrben4Zi;
//short    trdt_imrben5 = Unit[I]:IMR Bender #5.Limit:[-,-]
short    s_trdt_imrben5;
short    s_trdt_imrben5Zi;
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
short    s_k_trdtno;   // Unit[-]:Trend Data NO.Limit:[-,-]

public:
//
//Structure
//
struct STR_TRD_DAT
{
	char      hcoil[17];
	short     trdtno;
	short     s1pos;
	short     s1posZi;
	short     s2pos;
	short     s2posZi;
	short     s3pos;
	short     s3posZi;
	short     s4pos;
	short     s4posZi;
	short     s5pos;
	short     s5posZi;
	char      stime[17];
	short     stimeZi;
	short     trdt_rf1;
	short     trdt_rf1Zi;
	short     trdt_rf2;
	short     trdt_rf2Zi;
	short     trdt_rf3;
	short     trdt_rf3Zi;
	short     trdt_rf4;
	short     trdt_rf4Zi;
	short     trdt_rf5;
	short     trdt_rf5Zi;
	short     trdt_ten1;
	short     trdt_ten1Zi;
	short     trdt_ten2;
	short     trdt_ten2Zi;
	short     trdt_ten3;
	short     trdt_ten3Zi;
	short     trdt_ten4;
	short     trdt_ten4Zi;
	short     trdt_ten5;
	short     trdt_ten5Zi;
	short     trdt_ten6;
	short     trdt_ten6Zi;
	short     trdt_h1;
	short     trdt_h1Zi;
	short     trdt_h2;
	short     trdt_h2Zi;
	short     trdt_h3;
	short     trdt_h3Zi;
	short     trdt_h4;
	short     trdt_h4Zi;
	short     trdt_vs1;
	short     trdt_vs1Zi;
	short     trdt_vs2;
	short     trdt_vs2Zi;
	short     trdt_vs3;
	short     trdt_vs3Zi;
	short     trdt_vs4;
	short     trdt_vs4Zi;
	short     trdt_vs5;
	short     trdt_vs5Zi;
	short     trdt_cur1;
	short     trdt_cur1Zi;
	short     trdt_cur2;
	short     trdt_cur2Zi;
	short     trdt_cur3;
	short     trdt_cur3Zi;
	short     trdt_cur4;
	short     trdt_cur4Zi;
	short     trdt_cur5;
	short     trdt_cur5Zi;
	short     trdt_wsben1;
	short     trdt_wsben1Zi;
	short     trdt_wsben2;
	short     trdt_wsben2Zi;
	short     trdt_wsben3;
	short     trdt_wsben3Zi;
	short     trdt_wsben4;
	short     trdt_wsben4Zi;
	short     trdt_wsben5;
	short     trdt_wsben5Zi;
	short     trdt_imrben1;
	short     trdt_imrben1Zi;
	short     trdt_imrben2;
	short     trdt_imrben2Zi;
	short     trdt_imrben3;
	short     trdt_imrben3Zi;
	short     trdt_imrben4;
	short     trdt_imrben4Zi;
	short     trdt_imrben5;
	short     trdt_imrben5Zi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structTRD_DAT;
            
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
TRD_DAT();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~TRD_DAT();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
TRD_DAT(const TRD_DAT &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	hcoil[17]= Unit[-]:Hot coil number.Limit:[-,-]
//short	trdtno= Unit[-]:Trend Data NO.Limit:[-,-]
TRD_DAT( char* arg1,short arg2);

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
	strncpy (structTRD_DAT.hcoil, hcoil(), sizeof( structTRD_DAT.hcoil));
	structTRD_DAT.trdtno = trdtno();
	structTRD_DAT.s1pos = s1pos();
	structTRD_DAT.s1posZi = s1posZi();
	structTRD_DAT.s2pos = s2pos();
	structTRD_DAT.s2posZi = s2posZi();
	structTRD_DAT.s3pos = s3pos();
	structTRD_DAT.s3posZi = s3posZi();
	structTRD_DAT.s4pos = s4pos();
	structTRD_DAT.s4posZi = s4posZi();
	structTRD_DAT.s5pos = s5pos();
	structTRD_DAT.s5posZi = s5posZi();
	strncpy (structTRD_DAT.stime, stime(), sizeof( structTRD_DAT.stime));
	structTRD_DAT.stimeZi = stimeZi();
	structTRD_DAT.trdt_rf1 = trdt_rf1();
	structTRD_DAT.trdt_rf1Zi = trdt_rf1Zi();
	structTRD_DAT.trdt_rf2 = trdt_rf2();
	structTRD_DAT.trdt_rf2Zi = trdt_rf2Zi();
	structTRD_DAT.trdt_rf3 = trdt_rf3();
	structTRD_DAT.trdt_rf3Zi = trdt_rf3Zi();
	structTRD_DAT.trdt_rf4 = trdt_rf4();
	structTRD_DAT.trdt_rf4Zi = trdt_rf4Zi();
	structTRD_DAT.trdt_rf5 = trdt_rf5();
	structTRD_DAT.trdt_rf5Zi = trdt_rf5Zi();
	structTRD_DAT.trdt_ten1 = trdt_ten1();
	structTRD_DAT.trdt_ten1Zi = trdt_ten1Zi();
	structTRD_DAT.trdt_ten2 = trdt_ten2();
	structTRD_DAT.trdt_ten2Zi = trdt_ten2Zi();
	structTRD_DAT.trdt_ten3 = trdt_ten3();
	structTRD_DAT.trdt_ten3Zi = trdt_ten3Zi();
	structTRD_DAT.trdt_ten4 = trdt_ten4();
	structTRD_DAT.trdt_ten4Zi = trdt_ten4Zi();
	structTRD_DAT.trdt_ten5 = trdt_ten5();
	structTRD_DAT.trdt_ten5Zi = trdt_ten5Zi();
	structTRD_DAT.trdt_ten6 = trdt_ten6();
	structTRD_DAT.trdt_ten6Zi = trdt_ten6Zi();
	structTRD_DAT.trdt_h1 = trdt_h1();
	structTRD_DAT.trdt_h1Zi = trdt_h1Zi();
	structTRD_DAT.trdt_h2 = trdt_h2();
	structTRD_DAT.trdt_h2Zi = trdt_h2Zi();
	structTRD_DAT.trdt_h3 = trdt_h3();
	structTRD_DAT.trdt_h3Zi = trdt_h3Zi();
	structTRD_DAT.trdt_h4 = trdt_h4();
	structTRD_DAT.trdt_h4Zi = trdt_h4Zi();
	structTRD_DAT.trdt_vs1 = trdt_vs1();
	structTRD_DAT.trdt_vs1Zi = trdt_vs1Zi();
	structTRD_DAT.trdt_vs2 = trdt_vs2();
	structTRD_DAT.trdt_vs2Zi = trdt_vs2Zi();
	structTRD_DAT.trdt_vs3 = trdt_vs3();
	structTRD_DAT.trdt_vs3Zi = trdt_vs3Zi();
	structTRD_DAT.trdt_vs4 = trdt_vs4();
	structTRD_DAT.trdt_vs4Zi = trdt_vs4Zi();
	structTRD_DAT.trdt_vs5 = trdt_vs5();
	structTRD_DAT.trdt_vs5Zi = trdt_vs5Zi();
	structTRD_DAT.trdt_cur1 = trdt_cur1();
	structTRD_DAT.trdt_cur1Zi = trdt_cur1Zi();
	structTRD_DAT.trdt_cur2 = trdt_cur2();
	structTRD_DAT.trdt_cur2Zi = trdt_cur2Zi();
	structTRD_DAT.trdt_cur3 = trdt_cur3();
	structTRD_DAT.trdt_cur3Zi = trdt_cur3Zi();
	structTRD_DAT.trdt_cur4 = trdt_cur4();
	structTRD_DAT.trdt_cur4Zi = trdt_cur4Zi();
	structTRD_DAT.trdt_cur5 = trdt_cur5();
	structTRD_DAT.trdt_cur5Zi = trdt_cur5Zi();
	structTRD_DAT.trdt_wsben1 = trdt_wsben1();
	structTRD_DAT.trdt_wsben1Zi = trdt_wsben1Zi();
	structTRD_DAT.trdt_wsben2 = trdt_wsben2();
	structTRD_DAT.trdt_wsben2Zi = trdt_wsben2Zi();
	structTRD_DAT.trdt_wsben3 = trdt_wsben3();
	structTRD_DAT.trdt_wsben3Zi = trdt_wsben3Zi();
	structTRD_DAT.trdt_wsben4 = trdt_wsben4();
	structTRD_DAT.trdt_wsben4Zi = trdt_wsben4Zi();
	structTRD_DAT.trdt_wsben5 = trdt_wsben5();
	structTRD_DAT.trdt_wsben5Zi = trdt_wsben5Zi();
	structTRD_DAT.trdt_imrben1 = trdt_imrben1();
	structTRD_DAT.trdt_imrben1Zi = trdt_imrben1Zi();
	structTRD_DAT.trdt_imrben2 = trdt_imrben2();
	structTRD_DAT.trdt_imrben2Zi = trdt_imrben2Zi();
	structTRD_DAT.trdt_imrben3 = trdt_imrben3();
	structTRD_DAT.trdt_imrben3Zi = trdt_imrben3Zi();
	structTRD_DAT.trdt_imrben4 = trdt_imrben4();
	structTRD_DAT.trdt_imrben4Zi = trdt_imrben4Zi();
	structTRD_DAT.trdt_imrben5 = trdt_imrben5();
	structTRD_DAT.trdt_imrben5Zi = trdt_imrben5Zi();
	strncpy (structTRD_DAT.toc, toc(), sizeof( structTRD_DAT.toc));
	structTRD_DAT.tocZi = tocZi();
	strncpy (structTRD_DAT.tom, tom(), sizeof( structTRD_DAT.tom));
	structTRD_DAT.tomZi = tomZi();
	strncpy (structTRD_DAT.mop, mop(), sizeof( structTRD_DAT.mop));
	structTRD_DAT.mopZi = mopZi();
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
TRD_DAT operator+(const TRD_DAT &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const TRD_DAT& operator=(const TRD_DAT &inst);

      
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

//short trdtno = Unit[-]:Trend Data NO.Limit:[-,-]
short  trdtno() const
{
   return (s_trdtno);
}

void  set_trdtno (short arg)
{
   s_trdtno= arg;
   return;
}

//shortk_trdtno = Unit[-]:Trend Data NO.Limit:[-,-]
short  k_trdtno() const
{
   return (s_k_trdtno);
}

void  set_k_trdtno (short arg)
{
   s_k_trdtno= arg;
    return;
}

//short s1pos = Unit[-]:Stand1MesPos.Limit:[-,1]
short  s1pos() const
{
   return (s_s1pos);
}

void  set_s1pos (short arg)
{
   s_s1pos= arg;
   s_s1posZi = 0;
   return;
}

short   s1posZi() const
{
   return (s_s1posZi);
}

void  set_s1posZi(short arg)
{
   s_s1posZi= arg;
    return;
}

//short s2pos = Unit[-]:Stand2MesPos.Limit:[-,-]
short  s2pos() const
{
   return (s_s2pos);
}

void  set_s2pos (short arg)
{
   s_s2pos= arg;
   s_s2posZi = 0;
   return;
}

short   s2posZi() const
{
   return (s_s2posZi);
}

void  set_s2posZi(short arg)
{
   s_s2posZi= arg;
    return;
}

//short s3pos = Unit[-]:Stand3MesPos.Limit:[-,-]
short  s3pos() const
{
   return (s_s3pos);
}

void  set_s3pos (short arg)
{
   s_s3pos= arg;
   s_s3posZi = 0;
   return;
}

short   s3posZi() const
{
   return (s_s3posZi);
}

void  set_s3posZi(short arg)
{
   s_s3posZi= arg;
    return;
}

//short s4pos = Unit[I]:Stand4MesPos.Limit:[-,-]
short  s4pos() const
{
   return (s_s4pos);
}

void  set_s4pos (short arg)
{
   s_s4pos= arg;
   s_s4posZi = 0;
   return;
}

short   s4posZi() const
{
   return (s_s4posZi);
}

void  set_s4posZi(short arg)
{
   s_s4posZi= arg;
    return;
}

//short s5pos = Unit[I]:Stand5MesPos.Limit:[-,-]
short  s5pos() const
{
   return (s_s5pos);
}

void  set_s5pos (short arg)
{
   s_s5pos= arg;
   s_s5posZi = 0;
   return;
}

short   s5posZi() const
{
   return (s_s5posZi);
}

void  set_s5posZi(short arg)
{
   s_s5posZi= arg;
    return;
}

//char* stime = Unit[I]:Stand1MesTim.Limit:[-,-]
char*  stime() const
{
   return ((char*)c_stime);
}

void  set_stime (const char* arg)
{
   strncpy((char*)c_stime, arg, sizeof(c_stime));
    c_stime[sizeof(c_stime)-1] = '\0';
   s_stimeZi = 0;
   return;
}

short   stimeZi() const
{
   return (s_stimeZi);
}

void  set_stimeZi(short arg)
{
   s_stimeZi= arg;
    return;
}

//short trdt_rf1 = Unit[I]:Roll Force #1.Limit:[-,-]
short  trdt_rf1() const
{
   return (s_trdt_rf1);
}

void  set_trdt_rf1 (short arg)
{
   s_trdt_rf1= arg;
   s_trdt_rf1Zi = 0;
   return;
}

short   trdt_rf1Zi() const
{
   return (s_trdt_rf1Zi);
}

void  set_trdt_rf1Zi(short arg)
{
   s_trdt_rf1Zi= arg;
    return;
}

//short trdt_rf2 = Unit[I]:Roll Force #2.Limit:[-,-]
short  trdt_rf2() const
{
   return (s_trdt_rf2);
}

void  set_trdt_rf2 (short arg)
{
   s_trdt_rf2= arg;
   s_trdt_rf2Zi = 0;
   return;
}

short   trdt_rf2Zi() const
{
   return (s_trdt_rf2Zi);
}

void  set_trdt_rf2Zi(short arg)
{
   s_trdt_rf2Zi= arg;
    return;
}

//short trdt_rf3 = Unit[I]:Roll Force #3.Limit:[-,-]
short  trdt_rf3() const
{
   return (s_trdt_rf3);
}

void  set_trdt_rf3 (short arg)
{
   s_trdt_rf3= arg;
   s_trdt_rf3Zi = 0;
   return;
}

short   trdt_rf3Zi() const
{
   return (s_trdt_rf3Zi);
}

void  set_trdt_rf3Zi(short arg)
{
   s_trdt_rf3Zi= arg;
    return;
}

//short trdt_rf4 = Unit[I]:Roll Force #4.Limit:[-,-]
short  trdt_rf4() const
{
   return (s_trdt_rf4);
}

void  set_trdt_rf4 (short arg)
{
   s_trdt_rf4= arg;
   s_trdt_rf4Zi = 0;
   return;
}

short   trdt_rf4Zi() const
{
   return (s_trdt_rf4Zi);
}

void  set_trdt_rf4Zi(short arg)
{
   s_trdt_rf4Zi= arg;
    return;
}

//short trdt_rf5 = Unit[I]:Roll Force #5.Limit:[-,-]
short  trdt_rf5() const
{
   return (s_trdt_rf5);
}

void  set_trdt_rf5 (short arg)
{
   s_trdt_rf5= arg;
   s_trdt_rf5Zi = 0;
   return;
}

short   trdt_rf5Zi() const
{
   return (s_trdt_rf5Zi);
}

void  set_trdt_rf5Zi(short arg)
{
   s_trdt_rf5Zi= arg;
    return;
}

//short trdt_ten1 = Unit[I]:Tension #1E.Limit:[-,-]
short  trdt_ten1() const
{
   return (s_trdt_ten1);
}

void  set_trdt_ten1 (short arg)
{
   s_trdt_ten1= arg;
   s_trdt_ten1Zi = 0;
   return;
}

short   trdt_ten1Zi() const
{
   return (s_trdt_ten1Zi);
}

void  set_trdt_ten1Zi(short arg)
{
   s_trdt_ten1Zi= arg;
    return;
}

//short trdt_ten2 = Unit[I]:Tension #1-#2.Limit:[-,-]
short  trdt_ten2() const
{
   return (s_trdt_ten2);
}

void  set_trdt_ten2 (short arg)
{
   s_trdt_ten2= arg;
   s_trdt_ten2Zi = 0;
   return;
}

short   trdt_ten2Zi() const
{
   return (s_trdt_ten2Zi);
}

void  set_trdt_ten2Zi(short arg)
{
   s_trdt_ten2Zi= arg;
    return;
}

//short trdt_ten3 = Unit[I]:Tension #2-#3.Limit:[-,-]
short  trdt_ten3() const
{
   return (s_trdt_ten3);
}

void  set_trdt_ten3 (short arg)
{
   s_trdt_ten3= arg;
   s_trdt_ten3Zi = 0;
   return;
}

short   trdt_ten3Zi() const
{
   return (s_trdt_ten3Zi);
}

void  set_trdt_ten3Zi(short arg)
{
   s_trdt_ten3Zi= arg;
    return;
}

//short trdt_ten4 = Unit[I]:Tension #3-#4.Limit:[-,-]
short  trdt_ten4() const
{
   return (s_trdt_ten4);
}

void  set_trdt_ten4 (short arg)
{
   s_trdt_ten4= arg;
   s_trdt_ten4Zi = 0;
   return;
}

short   trdt_ten4Zi() const
{
   return (s_trdt_ten4Zi);
}

void  set_trdt_ten4Zi(short arg)
{
   s_trdt_ten4Zi= arg;
    return;
}

//short trdt_ten5 = Unit[I]:Tension #4-#5.Limit:[-,-]
short  trdt_ten5() const
{
   return (s_trdt_ten5);
}

void  set_trdt_ten5 (short arg)
{
   s_trdt_ten5= arg;
   s_trdt_ten5Zi = 0;
   return;
}

short   trdt_ten5Zi() const
{
   return (s_trdt_ten5Zi);
}

void  set_trdt_ten5Zi(short arg)
{
   s_trdt_ten5Zi= arg;
    return;
}

//short trdt_ten6 = Unit[I]:Tension #5D.Limit:[-,-]
short  trdt_ten6() const
{
   return (s_trdt_ten6);
}

void  set_trdt_ten6 (short arg)
{
   s_trdt_ten6= arg;
   s_trdt_ten6Zi = 0;
   return;
}

short   trdt_ten6Zi() const
{
   return (s_trdt_ten6Zi);
}

void  set_trdt_ten6Zi(short arg)
{
   s_trdt_ten6Zi= arg;
    return;
}

//short trdt_h1 = Unit[I]:X-ray Thickness #1E.Limit:[-,-]
short  trdt_h1() const
{
   return (s_trdt_h1);
}

void  set_trdt_h1 (short arg)
{
   s_trdt_h1= arg;
   s_trdt_h1Zi = 0;
   return;
}

short   trdt_h1Zi() const
{
   return (s_trdt_h1Zi);
}

void  set_trdt_h1Zi(short arg)
{
   s_trdt_h1Zi= arg;
    return;
}

//short trdt_h2 = Unit[I]:X-ray Thickness  #1-#2.Limit:[-,-]
short  trdt_h2() const
{
   return (s_trdt_h2);
}

void  set_trdt_h2 (short arg)
{
   s_trdt_h2= arg;
   s_trdt_h2Zi = 0;
   return;
}

short   trdt_h2Zi() const
{
   return (s_trdt_h2Zi);
}

void  set_trdt_h2Zi(short arg)
{
   s_trdt_h2Zi= arg;
    return;
}

//short trdt_h3 = Unit[I]:X-ray Thickness  #4-#5.Limit:[-,-]
short  trdt_h3() const
{
   return (s_trdt_h3);
}

void  set_trdt_h3 (short arg)
{
   s_trdt_h3= arg;
   s_trdt_h3Zi = 0;
   return;
}

short   trdt_h3Zi() const
{
   return (s_trdt_h3Zi);
}

void  set_trdt_h3Zi(short arg)
{
   s_trdt_h3Zi= arg;
    return;
}

//short trdt_h4 = Unit[I]:X-ray Thickness  #5D.Limit:[-,-]
short  trdt_h4() const
{
   return (s_trdt_h4);
}

void  set_trdt_h4 (short arg)
{
   s_trdt_h4= arg;
   s_trdt_h4Zi = 0;
   return;
}

short   trdt_h4Zi() const
{
   return (s_trdt_h4Zi);
}

void  set_trdt_h4Zi(short arg)
{
   s_trdt_h4Zi= arg;
    return;
}

//short trdt_vs1 = Unit[I]:Strip Speed #1D.Limit:[-,-]
short  trdt_vs1() const
{
   return (s_trdt_vs1);
}

void  set_trdt_vs1 (short arg)
{
   s_trdt_vs1= arg;
   s_trdt_vs1Zi = 0;
   return;
}

short   trdt_vs1Zi() const
{
   return (s_trdt_vs1Zi);
}

void  set_trdt_vs1Zi(short arg)
{
   s_trdt_vs1Zi= arg;
    return;
}

//short trdt_vs2 = Unit[I]:Strip Speed #2D.Limit:[-,-]
short  trdt_vs2() const
{
   return (s_trdt_vs2);
}

void  set_trdt_vs2 (short arg)
{
   s_trdt_vs2= arg;
   s_trdt_vs2Zi = 0;
   return;
}

short   trdt_vs2Zi() const
{
   return (s_trdt_vs2Zi);
}

void  set_trdt_vs2Zi(short arg)
{
   s_trdt_vs2Zi= arg;
    return;
}

//short trdt_vs3 = Unit[I]:Strip Speed #3D.Limit:[-,-]
short  trdt_vs3() const
{
   return (s_trdt_vs3);
}

void  set_trdt_vs3 (short arg)
{
   s_trdt_vs3= arg;
   s_trdt_vs3Zi = 0;
   return;
}

short   trdt_vs3Zi() const
{
   return (s_trdt_vs3Zi);
}

void  set_trdt_vs3Zi(short arg)
{
   s_trdt_vs3Zi= arg;
    return;
}

//short trdt_vs4 = Unit[I]:Strip Speed #4D.Limit:[-,-]
short  trdt_vs4() const
{
   return (s_trdt_vs4);
}

void  set_trdt_vs4 (short arg)
{
   s_trdt_vs4= arg;
   s_trdt_vs4Zi = 0;
   return;
}

short   trdt_vs4Zi() const
{
   return (s_trdt_vs4Zi);
}

void  set_trdt_vs4Zi(short arg)
{
   s_trdt_vs4Zi= arg;
    return;
}

//short trdt_vs5 = Unit[I]:Strip Speed #5D.Limit:[-,-]
short  trdt_vs5() const
{
   return (s_trdt_vs5);
}

void  set_trdt_vs5 (short arg)
{
   s_trdt_vs5= arg;
   s_trdt_vs5Zi = 0;
   return;
}

short   trdt_vs5Zi() const
{
   return (s_trdt_vs5Zi);
}

void  set_trdt_vs5Zi(short arg)
{
   s_trdt_vs5Zi= arg;
    return;
}

//short trdt_cur1 = Unit[I]:Motor Current #1.Limit:[-,-]
short  trdt_cur1() const
{
   return (s_trdt_cur1);
}

void  set_trdt_cur1 (short arg)
{
   s_trdt_cur1= arg;
   s_trdt_cur1Zi = 0;
   return;
}

short   trdt_cur1Zi() const
{
   return (s_trdt_cur1Zi);
}

void  set_trdt_cur1Zi(short arg)
{
   s_trdt_cur1Zi= arg;
    return;
}

//short trdt_cur2 = Unit[I]:Motor Current #2.Limit:[-,-]
short  trdt_cur2() const
{
   return (s_trdt_cur2);
}

void  set_trdt_cur2 (short arg)
{
   s_trdt_cur2= arg;
   s_trdt_cur2Zi = 0;
   return;
}

short   trdt_cur2Zi() const
{
   return (s_trdt_cur2Zi);
}

void  set_trdt_cur2Zi(short arg)
{
   s_trdt_cur2Zi= arg;
    return;
}

//short trdt_cur3 = Unit[I]:Motor Current #3.Limit:[-,-]
short  trdt_cur3() const
{
   return (s_trdt_cur3);
}

void  set_trdt_cur3 (short arg)
{
   s_trdt_cur3= arg;
   s_trdt_cur3Zi = 0;
   return;
}

short   trdt_cur3Zi() const
{
   return (s_trdt_cur3Zi);
}

void  set_trdt_cur3Zi(short arg)
{
   s_trdt_cur3Zi= arg;
    return;
}

//short trdt_cur4 = Unit[I]:Motor Current #4.Limit:[-,-]
short  trdt_cur4() const
{
   return (s_trdt_cur4);
}

void  set_trdt_cur4 (short arg)
{
   s_trdt_cur4= arg;
   s_trdt_cur4Zi = 0;
   return;
}

short   trdt_cur4Zi() const
{
   return (s_trdt_cur4Zi);
}

void  set_trdt_cur4Zi(short arg)
{
   s_trdt_cur4Zi= arg;
    return;
}

//short trdt_cur5 = Unit[I]:Motor Current #5.Limit:[-,-]
short  trdt_cur5() const
{
   return (s_trdt_cur5);
}

void  set_trdt_cur5 (short arg)
{
   s_trdt_cur5= arg;
   s_trdt_cur5Zi = 0;
   return;
}

short   trdt_cur5Zi() const
{
   return (s_trdt_cur5Zi);
}

void  set_trdt_cur5Zi(short arg)
{
   s_trdt_cur5Zi= arg;
    return;
}

//short trdt_wsben1 = Unit[I]:WR Bender #1.Limit:[-,-]
short  trdt_wsben1() const
{
   return (s_trdt_wsben1);
}

void  set_trdt_wsben1 (short arg)
{
   s_trdt_wsben1= arg;
   s_trdt_wsben1Zi = 0;
   return;
}

short   trdt_wsben1Zi() const
{
   return (s_trdt_wsben1Zi);
}

void  set_trdt_wsben1Zi(short arg)
{
   s_trdt_wsben1Zi= arg;
    return;
}

//short trdt_wsben2 = Unit[I]:WR Bender #2.Limit:[-,-]
short  trdt_wsben2() const
{
   return (s_trdt_wsben2);
}

void  set_trdt_wsben2 (short arg)
{
   s_trdt_wsben2= arg;
   s_trdt_wsben2Zi = 0;
   return;
}

short   trdt_wsben2Zi() const
{
   return (s_trdt_wsben2Zi);
}

void  set_trdt_wsben2Zi(short arg)
{
   s_trdt_wsben2Zi= arg;
    return;
}

//short trdt_wsben3 = Unit[I]:WR Bender #3.Limit:[-,-]
short  trdt_wsben3() const
{
   return (s_trdt_wsben3);
}

void  set_trdt_wsben3 (short arg)
{
   s_trdt_wsben3= arg;
   s_trdt_wsben3Zi = 0;
   return;
}

short   trdt_wsben3Zi() const
{
   return (s_trdt_wsben3Zi);
}

void  set_trdt_wsben3Zi(short arg)
{
   s_trdt_wsben3Zi= arg;
    return;
}

//short trdt_wsben4 = Unit[I]:WR Bender #4.Limit:[-,-]
short  trdt_wsben4() const
{
   return (s_trdt_wsben4);
}

void  set_trdt_wsben4 (short arg)
{
   s_trdt_wsben4= arg;
   s_trdt_wsben4Zi = 0;
   return;
}

short   trdt_wsben4Zi() const
{
   return (s_trdt_wsben4Zi);
}

void  set_trdt_wsben4Zi(short arg)
{
   s_trdt_wsben4Zi= arg;
    return;
}

//short trdt_wsben5 = Unit[I]:WR Bender #5.Limit:[-,-]
short  trdt_wsben5() const
{
   return (s_trdt_wsben5);
}

void  set_trdt_wsben5 (short arg)
{
   s_trdt_wsben5= arg;
   s_trdt_wsben5Zi = 0;
   return;
}

short   trdt_wsben5Zi() const
{
   return (s_trdt_wsben5Zi);
}

void  set_trdt_wsben5Zi(short arg)
{
   s_trdt_wsben5Zi= arg;
    return;
}

//short trdt_imrben1 = Unit[I]:IMR Bender #1.Limit:[-,-]
short  trdt_imrben1() const
{
   return (s_trdt_imrben1);
}

void  set_trdt_imrben1 (short arg)
{
   s_trdt_imrben1= arg;
   s_trdt_imrben1Zi = 0;
   return;
}

short   trdt_imrben1Zi() const
{
   return (s_trdt_imrben1Zi);
}

void  set_trdt_imrben1Zi(short arg)
{
   s_trdt_imrben1Zi= arg;
    return;
}

//short trdt_imrben2 = Unit[I]:IMR Bender #2.Limit:[-,-]
short  trdt_imrben2() const
{
   return (s_trdt_imrben2);
}

void  set_trdt_imrben2 (short arg)
{
   s_trdt_imrben2= arg;
   s_trdt_imrben2Zi = 0;
   return;
}

short   trdt_imrben2Zi() const
{
   return (s_trdt_imrben2Zi);
}

void  set_trdt_imrben2Zi(short arg)
{
   s_trdt_imrben2Zi= arg;
    return;
}

//short trdt_imrben3 = Unit[I]:IMR Bender #3.Limit:[-,-]
short  trdt_imrben3() const
{
   return (s_trdt_imrben3);
}

void  set_trdt_imrben3 (short arg)
{
   s_trdt_imrben3= arg;
   s_trdt_imrben3Zi = 0;
   return;
}

short   trdt_imrben3Zi() const
{
   return (s_trdt_imrben3Zi);
}

void  set_trdt_imrben3Zi(short arg)
{
   s_trdt_imrben3Zi= arg;
    return;
}

//short trdt_imrben4 = Unit[I]:IMR Bender #4.Limit:[-,-]
short  trdt_imrben4() const
{
   return (s_trdt_imrben4);
}

void  set_trdt_imrben4 (short arg)
{
   s_trdt_imrben4= arg;
   s_trdt_imrben4Zi = 0;
   return;
}

short   trdt_imrben4Zi() const
{
   return (s_trdt_imrben4Zi);
}

void  set_trdt_imrben4Zi(short arg)
{
   s_trdt_imrben4Zi= arg;
    return;
}

//short trdt_imrben5 = Unit[I]:IMR Bender #5.Limit:[-,-]
short  trdt_imrben5() const
{
   return (s_trdt_imrben5);
}

void  set_trdt_imrben5 (short arg)
{
   s_trdt_imrben5= arg;
   s_trdt_imrben5Zi = 0;
   return;
}

short   trdt_imrben5Zi() const
{
   return (s_trdt_imrben5Zi);
}

void  set_trdt_imrben5Zi(short arg)
{
   s_trdt_imrben5Zi= arg;
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
#endif //TRD_DAT_H

