/* ********************************************************************/
/* *   File               :    COILRECDEAL.h
                             
/* *   Short Description  :    Database Class ,COIL MANAGE TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         COILRECDEAL_H 
#define      COILRECDEAL_H 

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class COILRECDEAL
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
//long     ceq = Unit[-]:钢种材料碳当量.Limit:[-,-]
long     l_ceq;
short    s_ceqZi;
//long     hentry = Unit[-]:原料带钢厚度.Limit:[-,-]
long     l_hentry;
short    s_hentryZi;
//long     hexit = Unit[-]:产品带钢厚度.Limit:[-,-]
long     l_hexit;
short    s_hexitZi;
//long     width = Unit[-]:产品带钢宽度.Limit:[-,-]
long     l_width;
short    s_widthZi;
//char     alloycode = Unit[-]:钢种材料.Limit:[-,-]
char     c_alloycode[6];
short    s_alloycodeZi;
//char     prodstart = Unit[-]:生产开始时间.Limit:[-,-]
char     c_prodstart[17];
short    s_prodstartZi;
//char     prodend = Unit[-]:生产结束时间.Limit:[-,-]
char     c_prodend[17];
short    s_prodendZi;
//short    shiftno = Unit[-]:Shift No.Limit:[-,-]
short    s_shiftno;
short    s_shiftnoZi;
//char     crewno = Unit[-]:Crew No.Limit:[-,-]
char     c_crewno[3];
short    s_crewnoZi;
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
char     c_k_pcoil[17];   // Unit[-]:Product coil number.Limit:[-,-]
char     c_k_hcoil[17];   // Unit[-]:Hot coil number.Limit:[-,-]

public:
//
//Structure
//
struct STR_COILRECDEAL
{
	char      pcoil[17];
	char      hcoil[17];
	long      ceq;
	short     ceqZi;
	long      hentry;
	short     hentryZi;
	long      hexit;
	short     hexitZi;
	long      width;
	short     widthZi;
	char      alloycode[6];
	short     alloycodeZi;
	char      prodstart[17];
	short     prodstartZi;
	char      prodend[17];
	short     prodendZi;
	short     shiftno;
	short     shiftnoZi;
	char      crewno[3];
	short     crewnoZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structCOILRECDEAL;
             
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
COILRECDEAL();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~COILRECDEAL();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
COILRECDEAL(const COILRECDEAL &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	pcoil[17]= Unit[-]:Product coil number.Limit:[-,-]
//char*	hcoil[17]= Unit[-]:Hot coil number.Limit:[-,-]
COILRECDEAL( char* arg1,char* arg2);

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
	strncpy (structCOILRECDEAL.pcoil, pcoil(), sizeof( structCOILRECDEAL.pcoil));
	strncpy (structCOILRECDEAL.hcoil, hcoil(), sizeof( structCOILRECDEAL.hcoil));
	structCOILRECDEAL.ceq = ceq();
	structCOILRECDEAL.ceqZi = ceqZi();
	structCOILRECDEAL.hentry = hentry();
	structCOILRECDEAL.hentryZi = hentryZi();
	structCOILRECDEAL.hexit = hexit();
	structCOILRECDEAL.hexitZi = hexitZi();
	structCOILRECDEAL.width = width();
	structCOILRECDEAL.widthZi = widthZi();
	strncpy (structCOILRECDEAL.alloycode, alloycode(), sizeof( structCOILRECDEAL.alloycode));
	structCOILRECDEAL.alloycodeZi = alloycodeZi();
	strncpy (structCOILRECDEAL.prodstart, prodstart(), sizeof( structCOILRECDEAL.prodstart));
	structCOILRECDEAL.prodstartZi = prodstartZi();
	strncpy (structCOILRECDEAL.prodend, prodend(), sizeof( structCOILRECDEAL.prodend));
	structCOILRECDEAL.prodendZi = prodendZi();
	structCOILRECDEAL.shiftno = shiftno();
	structCOILRECDEAL.shiftnoZi = shiftnoZi();
	strncpy (structCOILRECDEAL.crewno, crewno(), sizeof( structCOILRECDEAL.crewno));
	structCOILRECDEAL.crewnoZi = crewnoZi();
	strncpy (structCOILRECDEAL.toc, toc(), sizeof( structCOILRECDEAL.toc));
	structCOILRECDEAL.tocZi = tocZi();
	strncpy (structCOILRECDEAL.tom, tom(), sizeof( structCOILRECDEAL.tom));
	structCOILRECDEAL.tomZi = tomZi();
	strncpy (structCOILRECDEAL.mop, mop(), sizeof( structCOILRECDEAL.mop));
	structCOILRECDEAL.mopZi = mopZi();
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
COILRECDEAL operator+(const COILRECDEAL &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const COILRECDEAL& operator=(const COILRECDEAL &inst);

              
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

//long ceq = Unit[-]:钢种材料碳当量.Limit:[-,-]
long  ceq() const
{
   return (l_ceq);
}

void  set_ceq (long arg)
{
   l_ceq= arg;
   s_ceqZi = 0;
   return;
}

short   ceqZi() const
{
   return (s_ceqZi);
}

void  set_ceqZi(short arg)
{
   s_ceqZi= arg;
    return;
}

//long hentry = Unit[-]:原料带钢厚度.Limit:[-,-]
long  hentry() const
{
   return (l_hentry);
}

void  set_hentry (long arg)
{
   l_hentry= arg;
   s_hentryZi = 0;
   return;
}

short   hentryZi() const
{
   return (s_hentryZi);
}

void  set_hentryZi(short arg)
{
   s_hentryZi= arg;
    return;
}

//long hexit = Unit[-]:产品带钢厚度.Limit:[-,-]
long  hexit() const
{
   return (l_hexit);
}

void  set_hexit (long arg)
{
   l_hexit= arg;
   s_hexitZi = 0;
   return;
}

short   hexitZi() const
{
   return (s_hexitZi);
}

void  set_hexitZi(short arg)
{
   s_hexitZi= arg;
    return;
}

//long width = Unit[-]:产品带钢宽度.Limit:[-,-]
long  width() const
{
   return (l_width);
}

void  set_width (long arg)
{
   l_width= arg;
   s_widthZi = 0;
   return;
}

short   widthZi() const
{
   return (s_widthZi);
}

void  set_widthZi(short arg)
{
   s_widthZi= arg;
    return;
}

//char* alloycode = Unit[-]:钢种材料.Limit:[-,-]
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

//char* prodstart = Unit[-]:生产开始时间.Limit:[-,-]
char*  prodstart() const
{
   return ((char*)c_prodstart);
}

void  set_prodstart (const char* arg)
{
   strncpy((char*)c_prodstart, arg, sizeof(c_prodstart));
    c_prodstart[sizeof(c_prodstart)-1] = '\0';
   s_prodstartZi = 0;
   return;
}

short   prodstartZi() const
{
   return (s_prodstartZi);
}

void  set_prodstartZi(short arg)
{
   s_prodstartZi= arg;
    return;
}

//char* prodend = Unit[-]:生产结束时间.Limit:[-,-]
char*  prodend() const
{
   return ((char*)c_prodend);
}

void  set_prodend (const char* arg)
{
   strncpy((char*)c_prodend, arg, sizeof(c_prodend));
    c_prodend[sizeof(c_prodend)-1] = '\0';
   s_prodendZi = 0;
   return;
}

short   prodendZi() const
{
   return (s_prodendZi);
}

void  set_prodendZi(short arg)
{
   s_prodendZi= arg;
    return;
}

//short shiftno = Unit[-]:Shift No.Limit:[-,-]
short  shiftno() const
{
   return (s_shiftno);
}

void  set_shiftno (short arg)
{
   s_shiftno= arg;
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

//char* crewno = Unit[-]:Crew No.Limit:[-,-]
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
#endif //COILRECDEAL_H

