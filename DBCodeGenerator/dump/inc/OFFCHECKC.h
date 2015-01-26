/* ********************************************************************/
/* *   File               :    OFFCHECKC.h
                             
/* *   Short Description  :    Database Class ,ACCOUNT OFFCHECKC TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         OFFCHECKC_H   
#define      OFFCHECKC_H   

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class OFFCHECKC
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
//char     coildate = Unit[-]:日期.Limit:[-,-]
char     c_coildate[33];
//char     coilno = Unit[-]:冷轧卷号.Limit:[-,-]
char     c_coilno[23];
short    s_coilnoZi;
//char     alloycode = Unit[-]:钢种.Limit:[-,-]
char     c_alloycode[33];
short    s_alloycodeZi;
//char     flat = Unit[-]:板形.Limit:[-,-]
char     c_flat[33];
short    s_flatZi;
//char     bend = Unit[-]:翘曲度.Limit:[-,-]
char     c_bend[33];
short    s_bendZi;
//char     codeman = Unit[-]:记录人.Limit:[-,-]
char     c_codeman[33];
short    s_codemanZi;
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
struct STR_OFFCHECKC
{
	char      coildate[33];
	char      coilno[23];
	short     coilnoZi;
	char      alloycode[33];
	short     alloycodeZi;
	char      flat[33];
	short     flatZi;
	char      bend[33];
	short     bendZi;
	char      codeman[33];
	short     codemanZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structOFFCHECKC;
              
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
OFFCHECKC();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~OFFCHECKC();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
OFFCHECKC(const OFFCHECKC &inst);
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
	strncpy (structOFFCHECKC.coildate, coildate(), sizeof( structOFFCHECKC.coildate));
	strncpy (structOFFCHECKC.coilno, coilno(), sizeof( structOFFCHECKC.coilno));
	structOFFCHECKC.coilnoZi = coilnoZi();
	strncpy (structOFFCHECKC.alloycode, alloycode(), sizeof( structOFFCHECKC.alloycode));
	structOFFCHECKC.alloycodeZi = alloycodeZi();
	strncpy (structOFFCHECKC.flat, flat(), sizeof( structOFFCHECKC.flat));
	structOFFCHECKC.flatZi = flatZi();
	strncpy (structOFFCHECKC.bend, bend(), sizeof( structOFFCHECKC.bend));
	structOFFCHECKC.bendZi = bendZi();
	strncpy (structOFFCHECKC.codeman, codeman(), sizeof( structOFFCHECKC.codeman));
	structOFFCHECKC.codemanZi = codemanZi();
	strncpy (structOFFCHECKC.toc, toc(), sizeof( structOFFCHECKC.toc));
	structOFFCHECKC.tocZi = tocZi();
	strncpy (structOFFCHECKC.tom, tom(), sizeof( structOFFCHECKC.tom));
	structOFFCHECKC.tomZi = tomZi();
	strncpy (structOFFCHECKC.mop, mop(), sizeof( structOFFCHECKC.mop));
	structOFFCHECKC.mopZi = mopZi();
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
OFFCHECKC operator+(const OFFCHECKC &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const OFFCHECKC& operator=(const OFFCHECKC &inst);

          
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
//char* coildate = Unit[-]:日期.Limit:[-,-]
char*  coildate() const
{
   return ((char*)c_coildate);
}

void  set_coildate (const char* arg)
{
   strncpy((char*)c_coildate, arg, sizeof(c_coildate));
    c_coildate[sizeof(c_coildate)-1] = '\0';
   return;
}

//char* coilno = Unit[-]:冷轧卷号.Limit:[-,-]
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

//char* alloycode = Unit[-]:钢种.Limit:[-,-]
char*  alloycode() const
{
   return ((char*)c_alloycode);
}

void  set_alloycode (const char* arg)
{
   strncpy((char*)c_alloycode, arg, sizeof(c_alloycode));
    c_alloycode[sizeof(c_alloycode)-1] = '\0';
   s_alloycodeZi = 0;
   return;
}

short   alloycodeZi() const
{
   return (s_alloycodeZi);
}

void  set_alloycodeZi(short arg)
{
   s_alloycodeZi= arg;
    return;
}

//char* flat = Unit[-]:板形.Limit:[-,-]
char*  flat() const
{
   return ((char*)c_flat);
}

void  set_flat (const char* arg)
{
   strncpy((char*)c_flat, arg, sizeof(c_flat));
    c_flat[sizeof(c_flat)-1] = '\0';
   s_flatZi = 0;
   return;
}

short   flatZi() const
{
   return (s_flatZi);
}

void  set_flatZi(short arg)
{
   s_flatZi= arg;
    return;
}

//char* bend = Unit[-]:翘曲度.Limit:[-,-]
char*  bend() const
{
   return ((char*)c_bend);
}

void  set_bend (const char* arg)
{
   strncpy((char*)c_bend, arg, sizeof(c_bend));
    c_bend[sizeof(c_bend)-1] = '\0';
   s_bendZi = 0;
   return;
}

short   bendZi() const
{
   return (s_bendZi);
}

void  set_bendZi(short arg)
{
   s_bendZi= arg;
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
#endif //OFFCHECKC_H

