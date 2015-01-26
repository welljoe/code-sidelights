/* ********************************************************************/
/* *   File               :    UTILITY_COIL.h
                             
/* *   Short Description  :    Database Class ,UTILITY DATA BY COILS
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         UTILITY_COIL_H              
#define      UTILITY_COIL_H              

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class UTILITY_COIL
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
char     c_hcoil[2];
//short    demwat = Unit[-]:Demineraized water flow sum  for one coil.Limit:[-,1]
short    s_demwat;
//short    steam = Unit[-]:Steam flow sum  for one coil.Limit:[-,-]
short    s_steam;
short    s_steamZi;
//short    recwat = Unit[-]:RECIRCUL. Water (supply) flow sum  for one coil.Limit:[-,-]
short    s_recwat;
short    s_recwatZi;
//short    potwat = Unit[I]:POTABLE Water flow sum  for one coil.Limit:[-,-]
short    s_potwat;
short    s_potwatZi;
//short    compres = Unit[I]:COMPRESSED Air  ( PL) flow sum  for one coil.Limit:[-,-]
short    s_compres;
short    s_compresZi;
//short    regacd = Unit[I]:Regene Acid flow (PL) flow sum  for one coil.Limit:[-,-]
short    s_regacd;
short    s_regacdZi;
//short    wasacd1 = Unit[I]:Waste Acid DISC. Flow (PL) flow sum  for one coil.Limit:[-,-]
short    s_wasacd1;
short    s_wasacd1Zi;
//short    wasacd2 = Unit[I]:Waste Acid flow (PL) flow sum  for one coil.Limit:[-,-]
short    s_wasacd2;
short    s_wasacd2Zi;
//short    waswat = Unit[I]:Wash Water (PL) flow sum  for one coil.Limit:[-,-]
short    s_waswat;
short    s_waswatZi;
//short    indwat = Unit[I]:Industrial Water flow sum  for one coil.Limit:[-,-]
short    s_indwat;
short    s_indwatZi;
//short    weakacd = Unit[I]:Weak Acid (PL) flow sum  for one coil.Limit:[-,-]
short    s_weakacd;
short    s_weakacdZi;
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
char     c_k_pcoil[17];   // Unit[-]:Product coil number.Limit:[-,-]

public:
//
//Structure
//
struct STR_UTILITY_COIL
{
	char      pcoil[17];
	char      hcoil[2];
	short     demwat;
	short     steam;
	short     steamZi;
	short     recwat;
	short     recwatZi;
	short     potwat;
	short     potwatZi;
	short     compres;
	short     compresZi;
	short     regacd;
	short     regacdZi;
	short     wasacd1;
	short     wasacd1Zi;
	short     wasacd2;
	short     wasacd2Zi;
	short     waswat;
	short     waswatZi;
	short     indwat;
	short     indwatZi;
	short     weakacd;
	short     weakacdZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structUTILITY_COIL;
   
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
UTILITY_COIL();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~UTILITY_COIL();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
UTILITY_COIL(const UTILITY_COIL &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	pcoil[17]= Unit[-]:Product coil number.Limit:[-,-]
UTILITY_COIL( char* arg1);

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
	strncpy (structUTILITY_COIL.pcoil, pcoil(), sizeof( structUTILITY_COIL.pcoil));
	strncpy (structUTILITY_COIL.hcoil, hcoil(), sizeof( structUTILITY_COIL.hcoil));
	structUTILITY_COIL.demwat = demwat();
	structUTILITY_COIL.steam = steam();
	structUTILITY_COIL.steamZi = steamZi();
	structUTILITY_COIL.recwat = recwat();
	structUTILITY_COIL.recwatZi = recwatZi();
	structUTILITY_COIL.potwat = potwat();
	structUTILITY_COIL.potwatZi = potwatZi();
	structUTILITY_COIL.compres = compres();
	structUTILITY_COIL.compresZi = compresZi();
	structUTILITY_COIL.regacd = regacd();
	structUTILITY_COIL.regacdZi = regacdZi();
	structUTILITY_COIL.wasacd1 = wasacd1();
	structUTILITY_COIL.wasacd1Zi = wasacd1Zi();
	structUTILITY_COIL.wasacd2 = wasacd2();
	structUTILITY_COIL.wasacd2Zi = wasacd2Zi();
	structUTILITY_COIL.waswat = waswat();
	structUTILITY_COIL.waswatZi = waswatZi();
	structUTILITY_COIL.indwat = indwat();
	structUTILITY_COIL.indwatZi = indwatZi();
	structUTILITY_COIL.weakacd = weakacd();
	structUTILITY_COIL.weakacdZi = weakacdZi();
	strncpy (structUTILITY_COIL.toc, toc(), sizeof( structUTILITY_COIL.toc));
	structUTILITY_COIL.tocZi = tocZi();
	strncpy (structUTILITY_COIL.tom, tom(), sizeof( structUTILITY_COIL.tom));
	structUTILITY_COIL.tomZi = tomZi();
	strncpy (structUTILITY_COIL.mop, mop(), sizeof( structUTILITY_COIL.mop));
	structUTILITY_COIL.mopZi = mopZi();
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
void setPrimKey(char* arg1);

//methods
public:
//this methode stores the unique key attributes
void initInsertKeys(char* arg1);

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
UTILITY_COIL operator+(const UTILITY_COIL &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const UTILITY_COIL& operator=(const UTILITY_COIL &inst);

          
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

//short demwat = Unit[-]:Demineraized water flow sum  for one coil.Limit:[-,1]
short  demwat() const
{
   return (s_demwat);
}

void  set_demwat (short arg)
{
   s_demwat= arg;
   return;
}

//short steam = Unit[-]:Steam flow sum  for one coil.Limit:[-,-]
short  steam() const
{
   return (s_steam);
}

void  set_steam (short arg)
{
   s_steam= arg;
   s_steamZi = 0;
   return;
}

short   steamZi() const
{
   return (s_steamZi);
}

void  set_steamZi(short arg)
{
   s_steamZi= arg;
    return;
}

//short recwat = Unit[-]:RECIRCUL. Water (supply) flow sum  for one coil.Limit:[-,-]
short  recwat() const
{
   return (s_recwat);
}

void  set_recwat (short arg)
{
   s_recwat= arg;
   s_recwatZi = 0;
   return;
}

short   recwatZi() const
{
   return (s_recwatZi);
}

void  set_recwatZi(short arg)
{
   s_recwatZi= arg;
    return;
}

//short potwat = Unit[I]:POTABLE Water flow sum  for one coil.Limit:[-,-]
short  potwat() const
{
   return (s_potwat);
}

void  set_potwat (short arg)
{
   s_potwat= arg;
   s_potwatZi = 0;
   return;
}

short   potwatZi() const
{
   return (s_potwatZi);
}

void  set_potwatZi(short arg)
{
   s_potwatZi= arg;
    return;
}

//short compres = Unit[I]:COMPRESSED Air  ( PL) flow sum  for one coil.Limit:[-,-]
short  compres() const
{
   return (s_compres);
}

void  set_compres (short arg)
{
   s_compres= arg;
   s_compresZi = 0;
   return;
}

short   compresZi() const
{
   return (s_compresZi);
}

void  set_compresZi(short arg)
{
   s_compresZi= arg;
    return;
}

//short regacd = Unit[I]:Regene Acid flow (PL) flow sum  for one coil.Limit:[-,-]
short  regacd() const
{
   return (s_regacd);
}

void  set_regacd (short arg)
{
   s_regacd= arg;
   s_regacdZi = 0;
   return;
}

short   regacdZi() const
{
   return (s_regacdZi);
}

void  set_regacdZi(short arg)
{
   s_regacdZi= arg;
    return;
}

//short wasacd1 = Unit[I]:Waste Acid DISC. Flow (PL) flow sum  for one coil.Limit:[-,-]
short  wasacd1() const
{
   return (s_wasacd1);
}

void  set_wasacd1 (short arg)
{
   s_wasacd1= arg;
   s_wasacd1Zi = 0;
   return;
}

short   wasacd1Zi() const
{
   return (s_wasacd1Zi);
}

void  set_wasacd1Zi(short arg)
{
   s_wasacd1Zi= arg;
    return;
}

//short wasacd2 = Unit[I]:Waste Acid flow (PL) flow sum  for one coil.Limit:[-,-]
short  wasacd2() const
{
   return (s_wasacd2);
}

void  set_wasacd2 (short arg)
{
   s_wasacd2= arg;
   s_wasacd2Zi = 0;
   return;
}

short   wasacd2Zi() const
{
   return (s_wasacd2Zi);
}

void  set_wasacd2Zi(short arg)
{
   s_wasacd2Zi= arg;
    return;
}

//short waswat = Unit[I]:Wash Water (PL) flow sum  for one coil.Limit:[-,-]
short  waswat() const
{
   return (s_waswat);
}

void  set_waswat (short arg)
{
   s_waswat= arg;
   s_waswatZi = 0;
   return;
}

short   waswatZi() const
{
   return (s_waswatZi);
}

void  set_waswatZi(short arg)
{
   s_waswatZi= arg;
    return;
}

//short indwat = Unit[I]:Industrial Water flow sum  for one coil.Limit:[-,-]
short  indwat() const
{
   return (s_indwat);
}

void  set_indwat (short arg)
{
   s_indwat= arg;
   s_indwatZi = 0;
   return;
}

short   indwatZi() const
{
   return (s_indwatZi);
}

void  set_indwatZi(short arg)
{
   s_indwatZi= arg;
    return;
}

//short weakacd = Unit[I]:Weak Acid (PL) flow sum  for one coil.Limit:[-,-]
short  weakacd() const
{
   return (s_weakacd);
}

void  set_weakacd (short arg)
{
   s_weakacd= arg;
   s_weakacdZi = 0;
   return;
}

short   weakacdZi() const
{
   return (s_weakacdZi);
}

void  set_weakacdZi(short arg)
{
   s_weakacdZi= arg;
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
#endif //UTILITY_COIL_H

