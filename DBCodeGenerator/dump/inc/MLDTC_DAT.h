/* ********************************************************************/
/* *   File               :    MLDTC_DAT.h
                             
/* *   Short Description  :    Database Class ,PRODUCTION COIL DATA
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         MLDTC_DAT_H   
#define      MLDTC_DAT_H   

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class MLDTC_DAT
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
//short    rno = Unit[-]:record number.Limit:[-,1]
short    s_rno;
short    s_rnoZi;
//short    rectime = Unit[-]:recevice time.Limit:[-,-]
short    s_rectime;
short    s_rectimeZi;
//char     value = Unit[-]:MLDTC data.Limit:[-,-]
char     c_value[100001];
short    s_valueZi;
// arguments for Primary key
char     c_k_pcoil[17];   // Unit[-]:Product coil number.Limit:[-,-]
char     c_k_hcoil[17];   // Unit[-]:Hot coil number.Limit:[-,-]

public:
//
//Structure
//
struct STR_MLDTC_DAT
{
	char      pcoil[17];
	char      hcoil[17];
	short     rno;
	short     rnoZi;
	short     rectime;
	short     rectimeZi;
	char      value[100001];
	short     valueZi;
}structMLDTC_DAT;
       
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
MLDTC_DAT();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~MLDTC_DAT();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
MLDTC_DAT(const MLDTC_DAT &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	pcoil[17]= Unit[-]:Product coil number.Limit:[-,-]
//char*	hcoil[17]= Unit[-]:Hot coil number.Limit:[-,-]
MLDTC_DAT( char* arg1,char* arg2);

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
	strncpy (structMLDTC_DAT.pcoil, pcoil(), sizeof( structMLDTC_DAT.pcoil));
	strncpy (structMLDTC_DAT.hcoil, hcoil(), sizeof( structMLDTC_DAT.hcoil));
	structMLDTC_DAT.rno = rno();
	structMLDTC_DAT.rnoZi = rnoZi();
	structMLDTC_DAT.rectime = rectime();
	structMLDTC_DAT.rectimeZi = rectimeZi();
	strncpy (structMLDTC_DAT.value, value(), sizeof( structMLDTC_DAT.value));
	structMLDTC_DAT.valueZi = valueZi();
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
MLDTC_DAT operator+(const MLDTC_DAT &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const MLDTC_DAT& operator=(const MLDTC_DAT &inst);

       
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

//short rno = Unit[-]:record number.Limit:[-,1]
short  rno() const
{
   return (s_rno);
}

void  set_rno (short arg)
{
   s_rno= arg;
   s_rnoZi = 0;
   return;
}

short   rnoZi() const
{
   return (s_rnoZi);
}

void  set_rnoZi(short arg)
{
   s_rnoZi= arg;
    return;
}

//short rectime = Unit[-]:recevice time.Limit:[-,-]
short  rectime() const
{
   return (s_rectime);
}

void  set_rectime (short arg)
{
   s_rectime= arg;
   s_rectimeZi = 0;
   return;
}

short   rectimeZi() const
{
   return (s_rectimeZi);
}

void  set_rectimeZi(short arg)
{
   s_rectimeZi= arg;
    return;
}

//char* value = Unit[-]:MLDTC data.Limit:[-,-]
char*  value() const
{
   return ((char*)c_value);
}

void  set_value (const char* arg)
{
   strncpy((char*)c_value, arg, sizeof(c_value));
    c_value[sizeof(c_value)-1] = '\0';
   s_valueZi = 0;
   return;
}

short   valueZi() const
{
   return (s_valueZi);
}

void  set_valueZi(short arg)
{
   s_valueZi= arg;
    return;
}

};
#endif //MLDTC_DAT_H

