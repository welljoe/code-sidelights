/* ********************************************************************/
/* *   File               :    ACCOUNTROLL.h
                             
/* *   Short Description  :    Database Class ,ACCOUNT ROLL TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         ACCOUNTROLL_H 
#define      ACCOUNTROLL_H 

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class ACCOUNTROLL
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
//char     tdate = Unit[-]:日期.Limit:[-,-]
char     c_tdate[33];
short    s_tdateZi;
//char     crewno = Unit[-]:班组.Limit:[-,-]
char     c_crewno[9];
short    s_crewnoZi;
//short    shiftno = Unit[-]:班次.Limit:[-,-]
short    s_shiftno;
short    s_shiftnoZi;
//short    standno = Unit[-]:机架号.Limit:[-,-]
short    s_standno;
//long     recid = Unit[-]:记录号.Limit:[-,-]
long     l_recid;
short    s_recidZi;
//char     rollidup = Unit[-]:上工作辊ID.Limit:[-,-]
char     c_rollidup[33];
//char     rolliddw = Unit[-]:下工作辊ID.Limit:[-,-]
char     c_rolliddw[33];
//long     rollweightup = Unit[-]:上工作辊轧制重量.Limit:[-,-]
long     l_rollweightup;
short    s_rollweightupZi;
//long     rollweightdw = Unit[-]:上工作辊轧制重量.Limit:[-,-]
long     l_rollweightdw;
short    s_rollweightdwZi;
//short    rollchgreason = Unit[-]:换辊原因.Limit:[-,-]
short    s_rollchgreason;
short    s_rollchgreasonZi;
//short    rollcheck = Unit[-]:辊面检查结果.Limit:[-,-]
short    s_rollcheck;
short    s_rollcheckZi;
//char     recman = Unit[-]:记录人.Limit:[-,-]
char     c_recman[33];
short    s_recmanZi;
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
short    s_k_standno;   // Unit[-]:机架号.Limit:[-,-]
char     c_k_rollidup[33];   // Unit[-]:上工作辊ID.Limit:[-,-]
char     c_k_rolliddw[33];   // Unit[-]:下工作辊ID.Limit:[-,-]

public:
//
//Structure
//
struct STR_ACCOUNTROLL
{
	char      tdate[33];
	short     tdateZi;
	char      crewno[9];
	short     crewnoZi;
	short     shiftno;
	short     shiftnoZi;
	short     standno;
	long      recid;
	short     recidZi;
	char      rollidup[33];
	char      rolliddw[33];
	long      rollweightup;
	short     rollweightupZi;
	long      rollweightdw;
	short     rollweightdwZi;
	short     rollchgreason;
	short     rollchgreasonZi;
	short     rollcheck;
	short     rollcheckZi;
	char      recman[33];
	short     recmanZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structACCOUNTROLL;
         
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
ACCOUNTROLL();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~ACCOUNTROLL();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
ACCOUNTROLL(const ACCOUNTROLL &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//short	standno= Unit[-]:机架号.Limit:[-,-]
//char*	rollidup[33]= Unit[-]:上工作辊ID.Limit:[-,-]
//char*	rolliddw[33]= Unit[-]:下工作辊ID.Limit:[-,-]
ACCOUNTROLL( short arg1,char* arg2,char* arg3);

//methods
public:
//get creation time
char* getCreationTime(){ return "13.06.2013 16:38:26";};

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
	strncpy (structACCOUNTROLL.tdate, tdate(), sizeof( structACCOUNTROLL.tdate));
	structACCOUNTROLL.tdateZi = tdateZi();
	strncpy (structACCOUNTROLL.crewno, crewno(), sizeof( structACCOUNTROLL.crewno));
	structACCOUNTROLL.crewnoZi = crewnoZi();
	structACCOUNTROLL.shiftno = shiftno();
	structACCOUNTROLL.shiftnoZi = shiftnoZi();
	structACCOUNTROLL.standno = standno();
	structACCOUNTROLL.recid = recid();
	structACCOUNTROLL.recidZi = recidZi();
	strncpy (structACCOUNTROLL.rollidup, rollidup(), sizeof( structACCOUNTROLL.rollidup));
	strncpy (structACCOUNTROLL.rolliddw, rolliddw(), sizeof( structACCOUNTROLL.rolliddw));
	structACCOUNTROLL.rollweightup = rollweightup();
	structACCOUNTROLL.rollweightupZi = rollweightupZi();
	structACCOUNTROLL.rollweightdw = rollweightdw();
	structACCOUNTROLL.rollweightdwZi = rollweightdwZi();
	structACCOUNTROLL.rollchgreason = rollchgreason();
	structACCOUNTROLL.rollchgreasonZi = rollchgreasonZi();
	structACCOUNTROLL.rollcheck = rollcheck();
	structACCOUNTROLL.rollcheckZi = rollcheckZi();
	strncpy (structACCOUNTROLL.recman, recman(), sizeof( structACCOUNTROLL.recman));
	structACCOUNTROLL.recmanZi = recmanZi();
	strncpy (structACCOUNTROLL.toc, toc(), sizeof( structACCOUNTROLL.toc));
	structACCOUNTROLL.tocZi = tocZi();
	strncpy (structACCOUNTROLL.tom, tom(), sizeof( structACCOUNTROLL.tom));
	structACCOUNTROLL.tomZi = tomZi();
	strncpy (structACCOUNTROLL.mop, mop(), sizeof( structACCOUNTROLL.mop));
	structACCOUNTROLL.mopZi = mopZi();
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
void setPrimKey(short arg1,char* arg2,char* arg3);

//methods
public:
//this methode stores the unique key attributes
void initInsertKeys(short arg1,char* arg2,char* arg3);

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
ACCOUNTROLL operator+(const ACCOUNTROLL &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const ACCOUNTROLL& operator=(const ACCOUNTROLL &inst);

  
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
//char* tdate = Unit[-]:日期.Limit:[-,-]
char*  tdate() const
{
   return ((char*)c_tdate);
}

void  set_tdate (const char* arg)
{
   strncpy((char*)c_tdate, arg, sizeof(c_tdate));
    c_tdate[sizeof(c_tdate)-1] = '\0';
   s_tdateZi = 0;
   return;
}

short   tdateZi() const
{
   return (s_tdateZi);
}

void  set_tdateZi(short arg)
{
   s_tdateZi= arg;
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

//short shiftno = Unit[-]:班次.Limit:[-,-]
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

//short standno = Unit[-]:机架号.Limit:[-,-]
short  standno() const
{
   return (s_standno);
}

void  set_standno (short arg)
{
   s_standno= arg;
   return;
}

//shortk_standno = Unit[-]:机架号.Limit:[-,-]
short  k_standno() const
{
   return (s_k_standno);
}

void  set_k_standno (short arg)
{
   s_k_standno= arg;
    return;
}

//long recid = Unit[-]:记录号.Limit:[-,-]
long  recid() const
{
   return (l_recid);
}

void  set_recid (long arg)
{
   l_recid= arg;
   s_recidZi = 0;
   return;
}

short   recidZi() const
{
   return (s_recidZi);
}

void  set_recidZi(short arg)
{
   s_recidZi= arg;
    return;
}

//char* rollidup = Unit[-]:上工作辊ID.Limit:[-,-]
char*  rollidup() const
{
   return ((char*)c_rollidup);
}

void  set_rollidup (const char* arg)
{
   strncpy((char*)c_rollidup, arg, sizeof(c_rollidup));
    c_rollidup[sizeof(c_rollidup)-1] = '\0';
   return;
}

//char*k_rollidup = Unit[-]:上工作辊ID.Limit:[-,-]
char*  k_rollidup() const
{
   return ((char*)c_k_rollidup);
}

void  set_k_rollidup (const char* arg)
{
   strncpy((char*)c_k_rollidup, arg, sizeof(c_k_rollidup));
    c_k_rollidup[sizeof(c_k_rollidup)-1] = '\0';
    return;
}

//char* rolliddw = Unit[-]:下工作辊ID.Limit:[-,-]
char*  rolliddw() const
{
   return ((char*)c_rolliddw);
}

void  set_rolliddw (const char* arg)
{
   strncpy((char*)c_rolliddw, arg, sizeof(c_rolliddw));
    c_rolliddw[sizeof(c_rolliddw)-1] = '\0';
   return;
}

//char*k_rolliddw = Unit[-]:下工作辊ID.Limit:[-,-]
char*  k_rolliddw() const
{
   return ((char*)c_k_rolliddw);
}

void  set_k_rolliddw (const char* arg)
{
   strncpy((char*)c_k_rolliddw, arg, sizeof(c_k_rolliddw));
    c_k_rolliddw[sizeof(c_k_rolliddw)-1] = '\0';
    return;
}

//long rollweightup = Unit[-]:上工作辊轧制重量.Limit:[-,-]
long  rollweightup() const
{
   return (l_rollweightup);
}

void  set_rollweightup (long arg)
{
   l_rollweightup= arg;
   s_rollweightupZi = 0;
   return;
}

short   rollweightupZi() const
{
   return (s_rollweightupZi);
}

void  set_rollweightupZi(short arg)
{
   s_rollweightupZi= arg;
    return;
}

//long rollweightdw = Unit[-]:上工作辊轧制重量.Limit:[-,-]
long  rollweightdw() const
{
   return (l_rollweightdw);
}

void  set_rollweightdw (long arg)
{
   l_rollweightdw= arg;
   s_rollweightdwZi = 0;
   return;
}

short   rollweightdwZi() const
{
   return (s_rollweightdwZi);
}

void  set_rollweightdwZi(short arg)
{
   s_rollweightdwZi= arg;
    return;
}

//short rollchgreason = Unit[-]:换辊原因.Limit:[-,-]
short  rollchgreason() const
{
   return (s_rollchgreason);
}

void  set_rollchgreason (short arg)
{
   s_rollchgreason= arg;
   s_rollchgreasonZi = 0;
   return;
}

short   rollchgreasonZi() const
{
   return (s_rollchgreasonZi);
}

void  set_rollchgreasonZi(short arg)
{
   s_rollchgreasonZi= arg;
    return;
}

//short rollcheck = Unit[-]:辊面检查结果.Limit:[-,-]
short  rollcheck() const
{
   return (s_rollcheck);
}

void  set_rollcheck (short arg)
{
   s_rollcheck= arg;
   s_rollcheckZi = 0;
   return;
}

short   rollcheckZi() const
{
   return (s_rollcheckZi);
}

void  set_rollcheckZi(short arg)
{
   s_rollcheckZi= arg;
    return;
}

//char* recman = Unit[-]:记录人.Limit:[-,-]
char*  recman() const
{
   return ((char*)c_recman);
}

void  set_recman (const char* arg)
{
   strncpy((char*)c_recman, arg, sizeof(c_recman));
    c_recman[sizeof(c_recman)-1] = '\0';
   s_recmanZi = 0;
   return;
}

short   recmanZi() const
{
   return (s_recmanZi);
}

void  set_recmanZi(short arg)
{
   s_recmanZi= arg;
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
#endif //ACCOUNTROLL_H

