/* ********************************************************************/
/* *   File               :    ALARM_DAT.h
                             
/* *   Short Description  :    Database Class ,ALARM  DATA FOR PARMENTERS
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         ALARM_DAT_H   
#define      ALARM_DAT_H   

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class ALARM_DAT
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
//long     alarmNo = Unit[-]:alarm no (key).Limit:[-,-]
long     l_alarmNo;
//short    parmNo = Unit[-]:parmenter no.Limit:[-,-]
short    s_parmNo;
short    s_parmNoZi;
//short    grade = Unit[-]:alarm grade(0-L,1-M,2-H).Limit:[-,-]
short    s_grade;
short    s_gradeZi;
//char     alarmTime = Unit[-]:alarm date time.Limit:[-,-]
char     c_alarmTime[15];
short    s_alarmTimeZi;
//float    curVal = Unit[-]:current value for alarm.Limit:[-,-]
float    f_curVal;
short    s_curValZi;
//long     curPos = Unit[-]:current postion of value.Limit:[-,-]
long     l_curPos;
short    s_curPosZi;
//char     alarmMsg = Unit[-]:alarm message.Limit:[-,-]
char     c_alarmMsg[257];
short    s_alarmMsgZi;
//long     sp2 = Unit[-]:sp2.Limit:[-,-]
long     l_sp2;
short    s_sp2Zi;
//short    sp3 = Unit[-]:sp3.Limit:[-,-]
short    s_sp3;
short    s_sp3Zi;
//short    sp4 = Unit[-]:sp4.Limit:[-,-]
short    s_sp4;
short    s_sp4Zi;
//float    sp5 = Unit[-]:sp5.Limit:[-,-]
float    f_sp5;
short    s_sp5Zi;
//float    sp6 = Unit[-]:sp6.Limit:[-,-]
float    f_sp6;
short    s_sp6Zi;
//char     sp7 = Unit[-]:sp7.Limit:[-,-]
char     c_sp7[51];
short    s_sp7Zi;
//char     toc = Unit[-]:create time.Limit:[-,-]
char     c_toc[15];
short    s_tocZi;
//char     tom = Unit[-]:modify time.Limit:[-,-]
char     c_tom[15];
short    s_tomZi;
//char     mop = Unit[-]:creator or modifyer.Limit:[-,-]
char     c_mop[51];
short    s_mopZi;
// arguments for Primary key
long     l_k_alarmNo;   // Unit[-]:alarm no (key).Limit:[-,-]

public:
//
//Structure
//
struct STR_ALARM_DAT
{
	long      alarmNo;
	short     parmNo;
	short     parmNoZi;
	short     grade;
	short     gradeZi;
	char      alarmTime[15];
	short     alarmTimeZi;
	float     curVal;
	short     curValZi;
	long      curPos;
	short     curPosZi;
	char      alarmMsg[257];
	short     alarmMsgZi;
	long      sp2;
	short     sp2Zi;
	short     sp3;
	short     sp3Zi;
	short     sp4;
	short     sp4Zi;
	float     sp5;
	short     sp5Zi;
	float     sp6;
	short     sp6Zi;
	char      sp7[51];
	short     sp7Zi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[51];
	short     mopZi;
}structALARM_DAT;
         
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
ALARM_DAT();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~ALARM_DAT();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
ALARM_DAT(const ALARM_DAT &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//long	alarmNo= Unit[-]:alarm no (key).Limit:[-,-]
ALARM_DAT( long arg1);

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
	structALARM_DAT.alarmNo = alarmNo();
	structALARM_DAT.parmNo = parmNo();
	structALARM_DAT.parmNoZi = parmNoZi();
	structALARM_DAT.grade = grade();
	structALARM_DAT.gradeZi = gradeZi();
	strncpy (structALARM_DAT.alarmTime, alarmTime(), sizeof( structALARM_DAT.alarmTime));
	structALARM_DAT.alarmTimeZi = alarmTimeZi();
	structALARM_DAT.curVal = curVal();
	structALARM_DAT.curValZi = curValZi();
	structALARM_DAT.curPos = curPos();
	structALARM_DAT.curPosZi = curPosZi();
	strncpy (structALARM_DAT.alarmMsg, alarmMsg(), sizeof( structALARM_DAT.alarmMsg));
	structALARM_DAT.alarmMsgZi = alarmMsgZi();
	structALARM_DAT.sp2 = sp2();
	structALARM_DAT.sp2Zi = sp2Zi();
	structALARM_DAT.sp3 = sp3();
	structALARM_DAT.sp3Zi = sp3Zi();
	structALARM_DAT.sp4 = sp4();
	structALARM_DAT.sp4Zi = sp4Zi();
	structALARM_DAT.sp5 = sp5();
	structALARM_DAT.sp5Zi = sp5Zi();
	structALARM_DAT.sp6 = sp6();
	structALARM_DAT.sp6Zi = sp6Zi();
	strncpy (structALARM_DAT.sp7, sp7(), sizeof( structALARM_DAT.sp7));
	structALARM_DAT.sp7Zi = sp7Zi();
	strncpy (structALARM_DAT.toc, toc(), sizeof( structALARM_DAT.toc));
	structALARM_DAT.tocZi = tocZi();
	strncpy (structALARM_DAT.tom, tom(), sizeof( structALARM_DAT.tom));
	structALARM_DAT.tomZi = tomZi();
	strncpy (structALARM_DAT.mop, mop(), sizeof( structALARM_DAT.mop));
	structALARM_DAT.mopZi = mopZi();
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
void setPrimKey(long arg1);

//methods
public:
//this methode stores the unique key attributes
void initInsertKeys(long arg1);

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
ALARM_DAT operator+(const ALARM_DAT &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const ALARM_DAT& operator=(const ALARM_DAT &inst);

              
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
//long alarmNo = Unit[-]:alarm no (key).Limit:[-,-]
long  alarmNo() const
{
   return (l_alarmNo);
}

void  set_alarmNo (long arg)
{
   l_alarmNo= arg;
   return;
}

//longk_alarmNo = Unit[-]:alarm no (key).Limit:[-,-]
long  k_alarmNo() const
{
   return (l_k_alarmNo);
}

void  set_k_alarmNo (long arg)
{
   l_k_alarmNo= arg;
    return;
}

//short parmNo = Unit[-]:parmenter no.Limit:[-,-]
short  parmNo() const
{
   return (s_parmNo);
}

void  set_parmNo (short arg)
{
   s_parmNo= arg;
   s_parmNoZi = 0;
   return;
}

short   parmNoZi() const
{
   return (s_parmNoZi);
}

void  set_parmNoZi(short arg)
{
   s_parmNoZi= arg;
    return;
}

//short grade = Unit[-]:alarm grade(0-L,1-M,2-H).Limit:[-,-]
short  grade() const
{
   return (s_grade);
}

void  set_grade (short arg)
{
   s_grade= arg;
   s_gradeZi = 0;
   return;
}

short   gradeZi() const
{
   return (s_gradeZi);
}

void  set_gradeZi(short arg)
{
   s_gradeZi= arg;
    return;
}

//char* alarmTime = Unit[-]:alarm date time.Limit:[-,-]
char*  alarmTime() const
{
   return ((char*)c_alarmTime);
}

void  set_alarmTime (const char* arg)
{
   strncpy((char*)c_alarmTime, arg, sizeof(c_alarmTime));
    c_alarmTime[sizeof(c_alarmTime)-1] = '\0';
   s_alarmTimeZi = 0;
   return;
}

short   alarmTimeZi() const
{
   return (s_alarmTimeZi);
}

void  set_alarmTimeZi(short arg)
{
   s_alarmTimeZi= arg;
    return;
}

//float curVal = Unit[-]:current value for alarm.Limit:[-,-]
float  curVal() const
{
   return (f_curVal);
}

void  set_curVal (float arg)
{
   f_curVal= arg;
   s_curValZi = 0;
   return;
}

short   curValZi() const
{
   return (s_curValZi);
}

void  set_curValZi(short arg)
{
   s_curValZi= arg;
    return;
}

//long curPos = Unit[-]:current postion of value.Limit:[-,-]
long  curPos() const
{
   return (l_curPos);
}

void  set_curPos (long arg)
{
   l_curPos= arg;
   s_curPosZi = 0;
   return;
}

short   curPosZi() const
{
   return (s_curPosZi);
}

void  set_curPosZi(short arg)
{
   s_curPosZi= arg;
    return;
}

//char* alarmMsg = Unit[-]:alarm message.Limit:[-,-]
char*  alarmMsg() const
{
   return ((char*)c_alarmMsg);
}

void  set_alarmMsg (const char* arg)
{
   strncpy((char*)c_alarmMsg, arg, sizeof(c_alarmMsg));
    c_alarmMsg[sizeof(c_alarmMsg)-1] = '\0';
   s_alarmMsgZi = 0;
   return;
}

short   alarmMsgZi() const
{
   return (s_alarmMsgZi);
}

void  set_alarmMsgZi(short arg)
{
   s_alarmMsgZi= arg;
    return;
}

//long sp2 = Unit[-]:sp2.Limit:[-,-]
long  sp2() const
{
   return (l_sp2);
}

void  set_sp2 (long arg)
{
   l_sp2= arg;
   s_sp2Zi = 0;
   return;
}

short   sp2Zi() const
{
   return (s_sp2Zi);
}

void  set_sp2Zi(short arg)
{
   s_sp2Zi= arg;
    return;
}

//short sp3 = Unit[-]:sp3.Limit:[-,-]
short  sp3() const
{
   return (s_sp3);
}

void  set_sp3 (short arg)
{
   s_sp3= arg;
   s_sp3Zi = 0;
   return;
}

short   sp3Zi() const
{
   return (s_sp3Zi);
}

void  set_sp3Zi(short arg)
{
   s_sp3Zi= arg;
    return;
}

//short sp4 = Unit[-]:sp4.Limit:[-,-]
short  sp4() const
{
   return (s_sp4);
}

void  set_sp4 (short arg)
{
   s_sp4= arg;
   s_sp4Zi = 0;
   return;
}

short   sp4Zi() const
{
   return (s_sp4Zi);
}

void  set_sp4Zi(short arg)
{
   s_sp4Zi= arg;
    return;
}

//float sp5 = Unit[-]:sp5.Limit:[-,-]
float  sp5() const
{
   return (f_sp5);
}

void  set_sp5 (float arg)
{
   f_sp5= arg;
   s_sp5Zi = 0;
   return;
}

short   sp5Zi() const
{
   return (s_sp5Zi);
}

void  set_sp5Zi(short arg)
{
   s_sp5Zi= arg;
    return;
}

//float sp6 = Unit[-]:sp6.Limit:[-,-]
float  sp6() const
{
   return (f_sp6);
}

void  set_sp6 (float arg)
{
   f_sp6= arg;
   s_sp6Zi = 0;
   return;
}

short   sp6Zi() const
{
   return (s_sp6Zi);
}

void  set_sp6Zi(short arg)
{
   s_sp6Zi= arg;
    return;
}

//char* sp7 = Unit[-]:sp7.Limit:[-,-]
char*  sp7() const
{
   return ((char*)c_sp7);
}

void  set_sp7 (const char* arg)
{
   strncpy((char*)c_sp7, arg, sizeof(c_sp7));
    c_sp7[sizeof(c_sp7)-1] = '\0';
   s_sp7Zi = 0;
   return;
}

short   sp7Zi() const
{
   return (s_sp7Zi);
}

void  set_sp7Zi(short arg)
{
   s_sp7Zi= arg;
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
#endif //ALARM_DAT_H

