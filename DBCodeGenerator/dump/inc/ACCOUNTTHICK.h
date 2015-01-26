/* ********************************************************************/
/* *   File               :    ACCOUNTTHICK.h
                             
/* *   Short Description  :    Database Class ,ACCOUNT THICK TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         ACCOUNTTHICK_H              
#define      ACCOUNTTHICK_H              

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class ACCOUNTTHICK
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
//char     coilno = Unit[-]:卷号.Limit:[-,-]
char     c_coilno[17];
//long     recid = Unit[-]:厚度波动记录ID.Limit:[-,-]
long     l_recid;
//short    thickchgno = Unit[-]:厚度波动次数.Limit:[-,-]
short    s_thickchgno;
short    s_thickchgnoZi;
//long     thickchgpos = Unit[-]:厚度波动位置.Limit:[-,-]
long     l_thickchgpos;
short    s_thickchgposZi;
//long     thickchgval = Unit[-]:厚度波动值.Limit:[-,-]
long     l_thickchgval;
short    s_thickchgvalZi;
//char     thickchgrea = Unit[-]:厚度波动原因.Limit:[-,-]
char     c_thickchgrea[33];
short    s_thickchgreaZi;
//long     minplspeed = Unit[-]:最低酸洗速度.Limit:[-,-]
long     l_minplspeed;
short    s_minplspeedZi;
//char     recman = Unit[-]:厚度波动记录人.Limit:[-,-]
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
char     c_k_coilno[17];   // Unit[-]:卷号.Limit:[-,-]
long     l_k_recid;   // Unit[-]:厚度波动记录ID.Limit:[-,-]

public:
//
//Structure
//
struct STR_ACCOUNTTHICK
{
	char      tdate[33];
	short     tdateZi;
	char      crewno[9];
	short     crewnoZi;
	short     shiftno;
	short     shiftnoZi;
	char      coilno[17];
	long      recid;
	short     thickchgno;
	short     thickchgnoZi;
	long      thickchgpos;
	short     thickchgposZi;
	long      thickchgval;
	short     thickchgvalZi;
	char      thickchgrea[33];
	short     thickchgreaZi;
	long      minplspeed;
	short     minplspeedZi;
	char      recman[33];
	short     recmanZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structACCOUNTTHICK;
       
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
ACCOUNTTHICK();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~ACCOUNTTHICK();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
ACCOUNTTHICK(const ACCOUNTTHICK &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	coilno[17]= Unit[-]:卷号.Limit:[-,-]
//long	recid= Unit[-]:厚度波动记录ID.Limit:[-,-]
ACCOUNTTHICK( char* arg1,long arg2);

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
	strncpy (structACCOUNTTHICK.tdate, tdate(), sizeof( structACCOUNTTHICK.tdate));
	structACCOUNTTHICK.tdateZi = tdateZi();
	strncpy (structACCOUNTTHICK.crewno, crewno(), sizeof( structACCOUNTTHICK.crewno));
	structACCOUNTTHICK.crewnoZi = crewnoZi();
	structACCOUNTTHICK.shiftno = shiftno();
	structACCOUNTTHICK.shiftnoZi = shiftnoZi();
	strncpy (structACCOUNTTHICK.coilno, coilno(), sizeof( structACCOUNTTHICK.coilno));
	structACCOUNTTHICK.recid = recid();
	structACCOUNTTHICK.thickchgno = thickchgno();
	structACCOUNTTHICK.thickchgnoZi = thickchgnoZi();
	structACCOUNTTHICK.thickchgpos = thickchgpos();
	structACCOUNTTHICK.thickchgposZi = thickchgposZi();
	structACCOUNTTHICK.thickchgval = thickchgval();
	structACCOUNTTHICK.thickchgvalZi = thickchgvalZi();
	strncpy (structACCOUNTTHICK.thickchgrea, thickchgrea(), sizeof( structACCOUNTTHICK.thickchgrea));
	structACCOUNTTHICK.thickchgreaZi = thickchgreaZi();
	structACCOUNTTHICK.minplspeed = minplspeed();
	structACCOUNTTHICK.minplspeedZi = minplspeedZi();
	strncpy (structACCOUNTTHICK.recman, recman(), sizeof( structACCOUNTTHICK.recman));
	structACCOUNTTHICK.recmanZi = recmanZi();
	strncpy (structACCOUNTTHICK.toc, toc(), sizeof( structACCOUNTTHICK.toc));
	structACCOUNTTHICK.tocZi = tocZi();
	strncpy (structACCOUNTTHICK.tom, tom(), sizeof( structACCOUNTTHICK.tom));
	structACCOUNTTHICK.tomZi = tomZi();
	strncpy (structACCOUNTTHICK.mop, mop(), sizeof( structACCOUNTTHICK.mop));
	structACCOUNTTHICK.mopZi = mopZi();
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
void setPrimKey(char* arg1,long arg2);

//methods
public:
//this methode stores the unique key attributes
void initInsertKeys(char* arg1,long arg2);

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
ACCOUNTTHICK operator+(const ACCOUNTTHICK &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const ACCOUNTTHICK& operator=(const ACCOUNTTHICK &inst);

       
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

//char* coilno = Unit[-]:卷号.Limit:[-,-]
char*  coilno() const
{
   return ((char*)c_coilno);
}

void  set_coilno (const char* arg)
{
   strncpy((char*)c_coilno, arg, sizeof(c_coilno));
    c_coilno[sizeof(c_coilno)-1] = '\0';
   return;
}

//char*k_coilno = Unit[-]:卷号.Limit:[-,-]
char*  k_coilno() const
{
   return ((char*)c_k_coilno);
}

void  set_k_coilno (const char* arg)
{
   strncpy((char*)c_k_coilno, arg, sizeof(c_k_coilno));
    c_k_coilno[sizeof(c_k_coilno)-1] = '\0';
    return;
}

//long recid = Unit[-]:厚度波动记录ID.Limit:[-,-]
long  recid() const
{
   return (l_recid);
}

void  set_recid (long arg)
{
   l_recid= arg;
   return;
}

//longk_recid = Unit[-]:厚度波动记录ID.Limit:[-,-]
long  k_recid() const
{
   return (l_k_recid);
}

void  set_k_recid (long arg)
{
   l_k_recid= arg;
    return;
}

//short thickchgno = Unit[-]:厚度波动次数.Limit:[-,-]
short  thickchgno() const
{
   return (s_thickchgno);
}

void  set_thickchgno (short arg)
{
   s_thickchgno= arg;
   s_thickchgnoZi = 0;
   return;
}

short   thickchgnoZi() const
{
   return (s_thickchgnoZi);
}

void  set_thickchgnoZi(short arg)
{
   s_thickchgnoZi= arg;
    return;
}

//long thickchgpos = Unit[-]:厚度波动位置.Limit:[-,-]
long  thickchgpos() const
{
   return (l_thickchgpos);
}

void  set_thickchgpos (long arg)
{
   l_thickchgpos= arg;
   s_thickchgposZi = 0;
   return;
}

short   thickchgposZi() const
{
   return (s_thickchgposZi);
}

void  set_thickchgposZi(short arg)
{
   s_thickchgposZi= arg;
    return;
}

//long thickchgval = Unit[-]:厚度波动值.Limit:[-,-]
long  thickchgval() const
{
   return (l_thickchgval);
}

void  set_thickchgval (long arg)
{
   l_thickchgval= arg;
   s_thickchgvalZi = 0;
   return;
}

short   thickchgvalZi() const
{
   return (s_thickchgvalZi);
}

void  set_thickchgvalZi(short arg)
{
   s_thickchgvalZi= arg;
    return;
}

//char* thickchgrea = Unit[-]:厚度波动原因.Limit:[-,-]
char*  thickchgrea() const
{
   return ((char*)c_thickchgrea);
}

void  set_thickchgrea (const char* arg)
{
   strncpy((char*)c_thickchgrea, arg, sizeof(c_thickchgrea));
    c_thickchgrea[sizeof(c_thickchgrea)-1] = '\0';
   s_thickchgreaZi = 0;
   return;
}

short   thickchgreaZi() const
{
   return (s_thickchgreaZi);
}

void  set_thickchgreaZi(short arg)
{
   s_thickchgreaZi= arg;
    return;
}

//long minplspeed = Unit[-]:最低酸洗速度.Limit:[-,-]
long  minplspeed() const
{
   return (l_minplspeed);
}

void  set_minplspeed (long arg)
{
   l_minplspeed= arg;
   s_minplspeedZi = 0;
   return;
}

short   minplspeedZi() const
{
   return (s_minplspeedZi);
}

void  set_minplspeedZi(short arg)
{
   s_minplspeedZi= arg;
    return;
}

//char* recman = Unit[-]:厚度波动记录人.Limit:[-,-]
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
#endif //ACCOUNTTHICK_H

