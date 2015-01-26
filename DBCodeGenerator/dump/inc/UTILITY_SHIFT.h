/* ********************************************************************/
/* *   File               :    UTILITY_SHIFT.h
                             
/* *   Short Description  :    Database Class ,UTILITY DATA BY SHIFT
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         UTILITY_SHIFT_H             
#define      UTILITY_SHIFT_H             

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class UTILITY_SHIFT
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
//char     datee = Unit[-]:date.Limit:[-,-]
char     c_datee[9];
short    s_dateeZi;
//char     timee = Unit[-]:time.Limit:[-,-]
char     c_timee[7];
short    s_timeeZi;
//char     sendtime = Unit[-]:Record Time.Limit:[-,-]
char     c_sendtime[17];
//char     sno = Unit[-]:Shift code.Limit:[-,-]
char     c_sno[3];
short    s_snoZi;
//char     cno = Unit[-]:Crew code.Limit:[-,-]
char     c_cno[3];
short    s_cnoZi;
//short    demwat = Unit[I]:Demineraized water flow sum  for one shift.Limit:[-,-]
short    s_demwat;
short    s_demwatZi;
//short    steam = Unit[I]:Steam FLOW sum  for one shift.Limit:[-,-]
short    s_steam;
short    s_steamZi;
//short    recwat = Unit[I]:RECIRCUL. Water  (supply) sum  for one shift.Limit:[-,-]
short    s_recwat;
short    s_recwatZi;
//short    potwat = Unit[I]:POTABLE Water sum  for one shift.Limit:[-,-]
short    s_potwat;
short    s_potwatZi;
//short    compres = Unit[I]:COMPRESSED Air  ( PL) sum  for one shift.Limit:[-,-]
short    s_compres;
short    s_compresZi;
//short    regacd = Unit[I]:Regene Acid flow (PL) sum  for one shift.Limit:[-,-]
short    s_regacd;
short    s_regacdZi;
//short    wasacd1 = Unit[I]:Waste Acid DISC. Flow (PL) sum  for one shift.Limit:[-,-]
short    s_wasacd1;
short    s_wasacd1Zi;
//short    wasacd2 = Unit[I]:Waste Acid flow (PL) sum  for one shift.Limit:[-,-]
short    s_wasacd2;
short    s_wasacd2Zi;
//short    waswat = Unit[I]:Wash Water (PL) sum  for one shift.Limit:[-,-]
short    s_waswat;
short    s_waswatZi;
//short    indwat = Unit[-]:Industrial Water sum  for one shift.Limit:[-,-]
short    s_indwat;
short    s_indwatZi;
//short    weakacd = Unit[-]:Weak Acid (PL) sum  for one shift.Limit:[-,-]
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
char     c_k_sendtime[17];   // Unit[-]:Record Time.Limit:[-,-]

public:
//
//Structure
//
struct STR_UTILITY_SHIFT
{
	char      datee[9];
	short     dateeZi;
	char      timee[7];
	short     timeeZi;
	char      sendtime[17];
	char      sno[3];
	short     snoZi;
	char      cno[3];
	short     cnoZi;
	short     demwat;
	short     demwatZi;
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
}structUTILITY_SHIFT;
             
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
UTILITY_SHIFT();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~UTILITY_SHIFT();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
UTILITY_SHIFT(const UTILITY_SHIFT &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	sendtime[17]= Unit[-]:Record Time.Limit:[-,-]
UTILITY_SHIFT( char* arg1);

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
	strncpy (structUTILITY_SHIFT.datee, datee(), sizeof( structUTILITY_SHIFT.datee));
	structUTILITY_SHIFT.dateeZi = dateeZi();
	strncpy (structUTILITY_SHIFT.timee, timee(), sizeof( structUTILITY_SHIFT.timee));
	structUTILITY_SHIFT.timeeZi = timeeZi();
	strncpy (structUTILITY_SHIFT.sendtime, sendtime(), sizeof( structUTILITY_SHIFT.sendtime));
	strncpy (structUTILITY_SHIFT.sno, sno(), sizeof( structUTILITY_SHIFT.sno));
	structUTILITY_SHIFT.snoZi = snoZi();
	strncpy (structUTILITY_SHIFT.cno, cno(), sizeof( structUTILITY_SHIFT.cno));
	structUTILITY_SHIFT.cnoZi = cnoZi();
	structUTILITY_SHIFT.demwat = demwat();
	structUTILITY_SHIFT.demwatZi = demwatZi();
	structUTILITY_SHIFT.steam = steam();
	structUTILITY_SHIFT.steamZi = steamZi();
	structUTILITY_SHIFT.recwat = recwat();
	structUTILITY_SHIFT.recwatZi = recwatZi();
	structUTILITY_SHIFT.potwat = potwat();
	structUTILITY_SHIFT.potwatZi = potwatZi();
	structUTILITY_SHIFT.compres = compres();
	structUTILITY_SHIFT.compresZi = compresZi();
	structUTILITY_SHIFT.regacd = regacd();
	structUTILITY_SHIFT.regacdZi = regacdZi();
	structUTILITY_SHIFT.wasacd1 = wasacd1();
	structUTILITY_SHIFT.wasacd1Zi = wasacd1Zi();
	structUTILITY_SHIFT.wasacd2 = wasacd2();
	structUTILITY_SHIFT.wasacd2Zi = wasacd2Zi();
	structUTILITY_SHIFT.waswat = waswat();
	structUTILITY_SHIFT.waswatZi = waswatZi();
	structUTILITY_SHIFT.indwat = indwat();
	structUTILITY_SHIFT.indwatZi = indwatZi();
	structUTILITY_SHIFT.weakacd = weakacd();
	structUTILITY_SHIFT.weakacdZi = weakacdZi();
	strncpy (structUTILITY_SHIFT.toc, toc(), sizeof( structUTILITY_SHIFT.toc));
	structUTILITY_SHIFT.tocZi = tocZi();
	strncpy (structUTILITY_SHIFT.tom, tom(), sizeof( structUTILITY_SHIFT.tom));
	structUTILITY_SHIFT.tomZi = tomZi();
	strncpy (structUTILITY_SHIFT.mop, mop(), sizeof( structUTILITY_SHIFT.mop));
	structUTILITY_SHIFT.mopZi = mopZi();
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
UTILITY_SHIFT operator+(const UTILITY_SHIFT &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const UTILITY_SHIFT& operator=(const UTILITY_SHIFT &inst);

    
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
//char* datee = Unit[-]:date.Limit:[-,-]
char*  datee() const
{
   return ((char*)c_datee);
}

void  set_datee (const char* arg)
{
   strncpy((char*)c_datee, arg, sizeof(c_datee));
    c_datee[sizeof(c_datee)-1] = '\0';
   s_dateeZi = 0;
   return;
}

short   dateeZi() const
{
   return (s_dateeZi);
}

void  set_dateeZi(short arg)
{
   s_dateeZi= arg;
    return;
}

//char* timee = Unit[-]:time.Limit:[-,-]
char*  timee() const
{
   return ((char*)c_timee);
}

void  set_timee (const char* arg)
{
   strncpy((char*)c_timee, arg, sizeof(c_timee));
    c_timee[sizeof(c_timee)-1] = '\0';
   s_timeeZi = 0;
   return;
}

short   timeeZi() const
{
   return (s_timeeZi);
}

void  set_timeeZi(short arg)
{
   s_timeeZi= arg;
    return;
}

//char* sendtime = Unit[-]:Record Time.Limit:[-,-]
char*  sendtime() const
{
   return ((char*)c_sendtime);
}

void  set_sendtime (const char* arg)
{
   strncpy((char*)c_sendtime, arg, sizeof(c_sendtime));
    c_sendtime[sizeof(c_sendtime)-1] = '\0';
   return;
}

//char*k_sendtime = Unit[-]:Record Time.Limit:[-,-]
char*  k_sendtime() const
{
   return ((char*)c_k_sendtime);
}

void  set_k_sendtime (const char* arg)
{
   strncpy((char*)c_k_sendtime, arg, sizeof(c_k_sendtime));
    c_k_sendtime[sizeof(c_k_sendtime)-1] = '\0';
    return;
}

//char* sno = Unit[-]:Shift code.Limit:[-,-]
char*  sno() const
{
   return ((char*)c_sno);
}

void  set_sno (const char* arg)
{
   strncpy((char*)c_sno, arg, sizeof(c_sno));
    c_sno[sizeof(c_sno)-1] = '\0';
   s_snoZi = 0;
   return;
}

short   snoZi() const
{
   return (s_snoZi);
}

void  set_snoZi(short arg)
{
   s_snoZi= arg;
    return;
}

//char* cno = Unit[-]:Crew code.Limit:[-,-]
char*  cno() const
{
   return ((char*)c_cno);
}

void  set_cno (const char* arg)
{
   strncpy((char*)c_cno, arg, sizeof(c_cno));
    c_cno[sizeof(c_cno)-1] = '\0';
   s_cnoZi = 0;
   return;
}

short   cnoZi() const
{
   return (s_cnoZi);
}

void  set_cnoZi(short arg)
{
   s_cnoZi= arg;
    return;
}

//short demwat = Unit[I]:Demineraized water flow sum  for one shift.Limit:[-,-]
short  demwat() const
{
   return (s_demwat);
}

void  set_demwat (short arg)
{
   s_demwat= arg;
   s_demwatZi = 0;
   return;
}

short   demwatZi() const
{
   return (s_demwatZi);
}

void  set_demwatZi(short arg)
{
   s_demwatZi= arg;
    return;
}

//short steam = Unit[I]:Steam FLOW sum  for one shift.Limit:[-,-]
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

//short recwat = Unit[I]:RECIRCUL. Water  (supply) sum  for one shift.Limit:[-,-]
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

//short potwat = Unit[I]:POTABLE Water sum  for one shift.Limit:[-,-]
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

//short compres = Unit[I]:COMPRESSED Air  ( PL) sum  for one shift.Limit:[-,-]
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

//short regacd = Unit[I]:Regene Acid flow (PL) sum  for one shift.Limit:[-,-]
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

//short wasacd1 = Unit[I]:Waste Acid DISC. Flow (PL) sum  for one shift.Limit:[-,-]
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

//short wasacd2 = Unit[I]:Waste Acid flow (PL) sum  for one shift.Limit:[-,-]
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

//short waswat = Unit[I]:Wash Water (PL) sum  for one shift.Limit:[-,-]
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

//short indwat = Unit[-]:Industrial Water sum  for one shift.Limit:[-,-]
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

//short weakacd = Unit[-]:Weak Acid (PL) sum  for one shift.Limit:[-,-]
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
#endif //UTILITY_SHIFT_H

