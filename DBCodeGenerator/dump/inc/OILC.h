/* ********************************************************************/
/* *   File               :    OILC.h
                             
/* *   Short Description  :    Database Class ,ACCOUNT OILC TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         OILC_H        
#define      OILC_H        

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class OILC
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
//char     oildate = Unit[-]:日期.Limit:[-,-]
char     c_oildate[33];
//char     crewno = Unit[-]:班组.Limit:[-,-]
char     c_crewno[9];
short    s_crewnoZi;
//char     shiftno = Unit[-]:班次.Limit:[-,-]
char     c_shiftno[9];
short    s_shiftnoZi;
//char     coilno = Unit[-]:钢卷号.Limit:[-,-]
char     c_coilno[17];
short    s_coilnoZi;
//float    reflectup = Unit[-]:反射率(上).Limit:[-,-]
float    f_reflectup;
short    s_reflectupZi;
//float    reflectdown = Unit[-]:反射率(下).Limit:[-,-]
float    f_reflectdown;
short    s_reflectdownZi;
//char     codeman = Unit[-]:记录人.Limit:[-,-]
char     c_codeman[9];
short    s_codemanZi;
//float    rflectupws = Unit[-]:反射率上WS.Limit:[-,-]
float    f_rflectupws;
short    s_rflectupwsZi;
//float    rflectupce = Unit[-]:反射率上CE.Limit:[-,-]
float    f_rflectupce;
short    s_rflectupceZi;
//float    rflectupds = Unit[-]:反射率上DS.Limit:[-,-]
float    f_rflectupds;
short    s_rflectupdsZi;
//float    rflectdownws = Unit[-]:反射率下WS.Limit:[-,-]
float    f_rflectdownws;
short    s_rflectdownwsZi;
//float    rflectdownds = Unit[-]:反射率下DS.Limit:[-,-]
float    f_rflectdownds;
short    s_rflectdowndsZi;
//char     toc = Unit[-]:创建时间.Limit:[-,-]
char     c_toc[15];
short    s_tocZi;
//char     tom = Unit[-]:最后修改时间.Limit:[-,-]
char     c_tom[15];
short    s_tomZi;
//char     mop = Unit[-]:创建或者修改者.Limit:[-,-]
char     c_mop[121];
short    s_mopZi;
// arguments for Primary key

public:
//
//Structure
//
struct STR_OILC
{
	char      oildate[33];
	char      crewno[9];
	short     crewnoZi;
	char      shiftno[9];
	short     shiftnoZi;
	char      coilno[17];
	short     coilnoZi;
	float     reflectup;
	short     reflectupZi;
	float     reflectdown;
	short     reflectdownZi;
	char      codeman[9];
	short     codemanZi;
	float     rflectupws;
	short     rflectupwsZi;
	float     rflectupce;
	short     rflectupceZi;
	float     rflectupds;
	short     rflectupdsZi;
	float     rflectdownws;
	short     rflectdownwsZi;
	float     rflectdownds;
	short     rflectdowndsZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structOILC;
 
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
OILC();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~OILC();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
OILC(const OILC &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
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
	strncpy (structOILC.oildate, oildate(), sizeof( structOILC.oildate));
	strncpy (structOILC.crewno, crewno(), sizeof( structOILC.crewno));
	structOILC.crewnoZi = crewnoZi();
	strncpy (structOILC.shiftno, shiftno(), sizeof( structOILC.shiftno));
	structOILC.shiftnoZi = shiftnoZi();
	strncpy (structOILC.coilno, coilno(), sizeof( structOILC.coilno));
	structOILC.coilnoZi = coilnoZi();
	structOILC.reflectup = reflectup();
	structOILC.reflectupZi = reflectupZi();
	structOILC.reflectdown = reflectdown();
	structOILC.reflectdownZi = reflectdownZi();
	strncpy (structOILC.codeman, codeman(), sizeof( structOILC.codeman));
	structOILC.codemanZi = codemanZi();
	structOILC.rflectupws = rflectupws();
	structOILC.rflectupwsZi = rflectupwsZi();
	structOILC.rflectupce = rflectupce();
	structOILC.rflectupceZi = rflectupceZi();
	structOILC.rflectupds = rflectupds();
	structOILC.rflectupdsZi = rflectupdsZi();
	structOILC.rflectdownws = rflectdownws();
	structOILC.rflectdownwsZi = rflectdownwsZi();
	structOILC.rflectdownds = rflectdownds();
	structOILC.rflectdowndsZi = rflectdowndsZi();
	strncpy (structOILC.toc, toc(), sizeof( structOILC.toc));
	structOILC.tocZi = tocZi();
	strncpy (structOILC.tom, tom(), sizeof( structOILC.tom));
	structOILC.tomZi = tomZi();
	strncpy (structOILC.mop, mop(), sizeof( structOILC.mop));
	structOILC.mopZi = mopZi();
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
void setPrimKey();

//methods
public:
//this methode stores the unique key attributes
void initInsertKeys();

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
OILC operator+(const OILC &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const OILC& operator=(const OILC &inst);

          
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
//char* oildate = Unit[-]:日期.Limit:[-,-]
char*  oildate() const
{
   return ((char*)c_oildate);
}

void  set_oildate (const char* arg)
{
   strncpy((char*)c_oildate, arg, sizeof(c_oildate));
    c_oildate[sizeof(c_oildate)-1] = '\0';
   return;
}

//char* crewno = Unit[-]:班组.Limit:[-,-]
char*  crewno() const
{
   return ((char*)c_crewno);
}

void  set_crewno (const char* arg)
{
   strncpy((char*)c_crewno, arg, sizeof(c_crewno));
    c_crewno[sizeof(c_crewno)-1] = '\0';
   s_crewnoZi = 0;
   return;
}

short   crewnoZi() const
{
   return (s_crewnoZi);
}

void  set_crewnoZi(short arg)
{
   s_crewnoZi= arg;
    return;
}

//char* shiftno = Unit[-]:班次.Limit:[-,-]
char*  shiftno() const
{
   return ((char*)c_shiftno);
}

void  set_shiftno (const char* arg)
{
   strncpy((char*)c_shiftno, arg, sizeof(c_shiftno));
    c_shiftno[sizeof(c_shiftno)-1] = '\0';
   s_shiftnoZi = 0;
   return;
}

short   shiftnoZi() const
{
   return (s_shiftnoZi);
}

void  set_shiftnoZi(short arg)
{
   s_shiftnoZi= arg;
    return;
}

//char* coilno = Unit[-]:钢卷号.Limit:[-,-]
char*  coilno() const
{
   return ((char*)c_coilno);
}

void  set_coilno (const char* arg)
{
   strncpy((char*)c_coilno, arg, sizeof(c_coilno));
    c_coilno[sizeof(c_coilno)-1] = '\0';
   s_coilnoZi = 0;
   return;
}

short   coilnoZi() const
{
   return (s_coilnoZi);
}

void  set_coilnoZi(short arg)
{
   s_coilnoZi= arg;
    return;
}

//float reflectup = Unit[-]:反射率(上).Limit:[-,-]
float  reflectup() const
{
   return (f_reflectup);
}

void  set_reflectup (float arg)
{
   f_reflectup= arg;
   s_reflectupZi = 0;
   return;
}

short   reflectupZi() const
{
   return (s_reflectupZi);
}

void  set_reflectupZi(short arg)
{
   s_reflectupZi= arg;
    return;
}

//float reflectdown = Unit[-]:反射率(下).Limit:[-,-]
float  reflectdown() const
{
   return (f_reflectdown);
}

void  set_reflectdown (float arg)
{
   f_reflectdown= arg;
   s_reflectdownZi = 0;
   return;
}

short   reflectdownZi() const
{
   return (s_reflectdownZi);
}

void  set_reflectdownZi(short arg)
{
   s_reflectdownZi= arg;
    return;
}

//char* codeman = Unit[-]:记录人.Limit:[-,-]
char*  codeman() const
{
   return ((char*)c_codeman);
}

void  set_codeman (const char* arg)
{
   strncpy((char*)c_codeman, arg, sizeof(c_codeman));
    c_codeman[sizeof(c_codeman)-1] = '\0';
   s_codemanZi = 0;
   return;
}

short   codemanZi() const
{
   return (s_codemanZi);
}

void  set_codemanZi(short arg)
{
   s_codemanZi= arg;
    return;
}

//float rflectupws = Unit[-]:反射率上WS.Limit:[-,-]
float  rflectupws() const
{
   return (f_rflectupws);
}

void  set_rflectupws (float arg)
{
   f_rflectupws= arg;
   s_rflectupwsZi = 0;
   return;
}

short   rflectupwsZi() const
{
   return (s_rflectupwsZi);
}

void  set_rflectupwsZi(short arg)
{
   s_rflectupwsZi= arg;
    return;
}

//float rflectupce = Unit[-]:反射率上CE.Limit:[-,-]
float  rflectupce() const
{
   return (f_rflectupce);
}

void  set_rflectupce (float arg)
{
   f_rflectupce= arg;
   s_rflectupceZi = 0;
   return;
}

short   rflectupceZi() const
{
   return (s_rflectupceZi);
}

void  set_rflectupceZi(short arg)
{
   s_rflectupceZi= arg;
    return;
}

//float rflectupds = Unit[-]:反射率上DS.Limit:[-,-]
float  rflectupds() const
{
   return (f_rflectupds);
}

void  set_rflectupds (float arg)
{
   f_rflectupds= arg;
   s_rflectupdsZi = 0;
   return;
}

short   rflectupdsZi() const
{
   return (s_rflectupdsZi);
}

void  set_rflectupdsZi(short arg)
{
   s_rflectupdsZi= arg;
    return;
}

//float rflectdownws = Unit[-]:反射率下WS.Limit:[-,-]
float  rflectdownws() const
{
   return (f_rflectdownws);
}

void  set_rflectdownws (float arg)
{
   f_rflectdownws= arg;
   s_rflectdownwsZi = 0;
   return;
}

short   rflectdownwsZi() const
{
   return (s_rflectdownwsZi);
}

void  set_rflectdownwsZi(short arg)
{
   s_rflectdownwsZi= arg;
    return;
}

//float rflectdownds = Unit[-]:反射率下DS.Limit:[-,-]
float  rflectdownds() const
{
   return (f_rflectdownds);
}

void  set_rflectdownds (float arg)
{
   f_rflectdownds= arg;
   s_rflectdowndsZi = 0;
   return;
}

short   rflectdowndsZi() const
{
   return (s_rflectdowndsZi);
}

void  set_rflectdowndsZi(short arg)
{
   s_rflectdowndsZi= arg;
    return;
}

//char* toc = Unit[-]:创建时间.Limit:[-,-]
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

//char* tom = Unit[-]:最后修改时间.Limit:[-,-]
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

//char* mop = Unit[-]:创建或者修改者.Limit:[-,-]
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
#endif //OILC_H

