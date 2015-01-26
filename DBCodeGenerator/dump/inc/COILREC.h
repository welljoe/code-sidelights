/* ********************************************************************/
/* *   File               :    COILREC.h
                             
/* *   Short Description  :    Database Class ,COIL MANAGE TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         COILREC_H     
#define      COILREC_H     

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class COILREC
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
//char     pcoil = Unit[-]:Product coil number.Limit:[-,-]
char     c_pcoil[17];
//char     hcoil = Unit[-]:Hot coil number.Limit:[-,-]
char     c_hcoil[17];
//short    actflag = Unit[-]:Act Value Flag.Limit:[-,-]
short    s_actflag;
short    s_actflagZi;
//short    septflag = Unit[-]:Setup Value Flag.Limit:[-,-]
short    s_septflag;
short    s_septflagZi;
//short    shapflag = Unit[-]:Shape Value Flag.Limit:[-,-]
short    s_shapflag;
short    s_shapflagZi;
//short    edropflag = Unit[-]:Edrop Value Flag.Limit:[-,-]
short    s_edropflag;
short    s_edropflagZi;
//short    stadataflag = Unit[-]:Static Value Flag.Limit:[-,-]
short    s_stadataflag;
short    s_stadataflagZi;
//short    techdataflag = Unit[-]:Tech Value Flag.Limit:[-,-]
short    s_techdataflag;
short    s_techdataflagZi;
//char     toc = Unit[-]: -,-]
char     c_toc[15];
short    s_tocZi;
//char     tom = Unit[-]: -,-]
char     c_tom[15];
short    s_tomZi;
//char     mop = Unit[-]: -,-]
char     c_mop[121];
short    s_mopZi;
// arguments for Primary key
char     c_k_pcoil[17];   // Unit[-]:Product coil number.Limit:[-,-]
char     c_k_hcoil[17];   // Unit[-]:Hot coil number.Limit:[-,-]

public:
//
//Structure
//
struct STR_COILREC
{
	char      pcoil[17];
	char      hcoil[17];
	short     actflag;
	short     actflagZi;
	short     septflag;
	short     septflagZi;
	short     shapflag;
	short     shapflagZi;
	short     edropflag;
	short     edropflagZi;
	short     stadataflag;
	short     stadataflagZi;
	short     techdataflag;
	short     techdataflagZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structCOILREC;
           
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
COILREC();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~COILREC();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
COILREC(const COILREC &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	pcoil[17]= Unit[-]:Product coil number.Limit:[-,-]
//char*	hcoil[17]= Unit[-]:Hot coil number.Limit:[-,-]
COILREC( char* arg1,char* arg2);

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
	strncpy (structCOILREC.pcoil, pcoil(), sizeof( structCOILREC.pcoil));
	strncpy (structCOILREC.hcoil, hcoil(), sizeof( structCOILREC.hcoil));
	structCOILREC.actflag = actflag();
	structCOILREC.actflagZi = actflagZi();
	structCOILREC.septflag = septflag();
	structCOILREC.septflagZi = septflagZi();
	structCOILREC.shapflag = shapflag();
	structCOILREC.shapflagZi = shapflagZi();
	structCOILREC.edropflag = edropflag();
	structCOILREC.edropflagZi = edropflagZi();
	structCOILREC.stadataflag = stadataflag();
	structCOILREC.stadataflagZi = stadataflagZi();
	structCOILREC.techdataflag = techdataflag();
	structCOILREC.techdataflagZi = techdataflagZi();
	strncpy (structCOILREC.toc, toc(), sizeof( structCOILREC.toc));
	structCOILREC.tocZi = tocZi();
	strncpy (structCOILREC.tom, tom(), sizeof( structCOILREC.tom));
	structCOILREC.tomZi = tomZi();
	strncpy (structCOILREC.mop, mop(), sizeof( structCOILREC.mop));
	structCOILREC.mopZi = mopZi();
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
void setPrimKey(char* arg1,char* arg2);

//methods
public:
//this methode stores the unique key attributes
void initInsertKeys(char* arg1,char* arg2);

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
COILREC operator+(const COILREC &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const COILREC& operator=(const COILREC &inst);

           
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
//char* pcoil = Unit[-]:Product coil number.Limit:[-,-]
char*  pcoil() const
{
   return ((char*)c_pcoil);
}

void  set_pcoil (const char* arg)
{
   strncpy((char*)c_pcoil, arg, sizeof(c_pcoil));
    c_pcoil[sizeof(c_pcoil)-1] = '\0';
   return;
}

//char*k_pcoil = Unit[-]:Product coil number.Limit:[-,-]
char*  k_pcoil() const
{
   return ((char*)c_k_pcoil);
}

void  set_k_pcoil (const char* arg)
{
   strncpy((char*)c_k_pcoil, arg, sizeof(c_k_pcoil));
    c_k_pcoil[sizeof(c_k_pcoil)-1] = '\0';
    return;
}

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

//short actflag = Unit[-]:Act Value Flag.Limit:[-,-]
short  actflag() const
{
   return (s_actflag);
}

void  set_actflag (short arg)
{
   s_actflag= arg;
   s_actflagZi = 0;
   return;
}

short   actflagZi() const
{
   return (s_actflagZi);
}

void  set_actflagZi(short arg)
{
   s_actflagZi= arg;
    return;
}

//short septflag = Unit[-]:Setup Value Flag.Limit:[-,-]
short  septflag() const
{
   return (s_septflag);
}

void  set_septflag (short arg)
{
   s_septflag= arg;
   s_septflagZi = 0;
   return;
}

short   septflagZi() const
{
   return (s_septflagZi);
}

void  set_septflagZi(short arg)
{
   s_septflagZi= arg;
    return;
}

//short shapflag = Unit[-]:Shape Value Flag.Limit:[-,-]
short  shapflag() const
{
   return (s_shapflag);
}

void  set_shapflag (short arg)
{
   s_shapflag= arg;
   s_shapflagZi = 0;
   return;
}

short   shapflagZi() const
{
   return (s_shapflagZi);
}

void  set_shapflagZi(short arg)
{
   s_shapflagZi= arg;
    return;
}

//short edropflag = Unit[-]:Edrop Value Flag.Limit:[-,-]
short  edropflag() const
{
   return (s_edropflag);
}

void  set_edropflag (short arg)
{
   s_edropflag= arg;
   s_edropflagZi = 0;
   return;
}

short   edropflagZi() const
{
   return (s_edropflagZi);
}

void  set_edropflagZi(short arg)
{
   s_edropflagZi= arg;
    return;
}

//short stadataflag = Unit[-]:Static Value Flag.Limit:[-,-]
short  stadataflag() const
{
   return (s_stadataflag);
}

void  set_stadataflag (short arg)
{
   s_stadataflag= arg;
   s_stadataflagZi = 0;
   return;
}

short   stadataflagZi() const
{
   return (s_stadataflagZi);
}

void  set_stadataflagZi(short arg)
{
   s_stadataflagZi= arg;
    return;
}

//short techdataflag = Unit[-]:Tech Value Flag.Limit:[-,-]
short  techdataflag() const
{
   return (s_techdataflag);
}

void  set_techdataflag (short arg)
{
   s_techdataflag= arg;
   s_techdataflagZi = 0;
   return;
}

short   techdataflagZi() const
{
   return (s_techdataflagZi);
}

void  set_techdataflagZi(short arg)
{
   s_techdataflagZi= arg;
    return;
}

//char* toc = Unit[-]: -,-]
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

//char* tom = Unit[-]: -,-]
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

//char* mop = Unit[-]: -,-]
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
#endif //COILREC_H

