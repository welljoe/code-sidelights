/* ********************************************************************/
/* *   File               :    DRP_STATDATA.h
                             
/* *   Short Description  :    Database Class ,DROP STATIC  DATA
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         DRP_STATDATA_H              
#define      DRP_STATDATA_H              

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class DRP_STATDATA
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
//short    parmNo = Unit[-]:paramenter no.Limit:[-,-]
short    s_parmNo;
//char     parmName = Unit[-]:paramenter name.Limit:[-,-]
char     c_parmName[65];
//short    parmGrade = Unit[-]:paramenter grade (by steel grade ,width,thinckness etc.).Limit:[-,-]
short    s_parmGrade;
//float    pSetVal = Unit[-]:paramenter set value.Limit:[-,-]
float    f_pSetVal;
short    s_pSetValZi;
//float    pMaxVal = Unit[-]:paramenter max. value.Limit:[-,-]
float    f_pMaxVal;
short    s_pMaxValZi;
//float    pMinVal = Unit[-]:paramenter min. value.Limit:[-,-]
float    f_pMinVal;
short    s_pMinValZi;
//float    pAvgVal = Unit[-]:paramenter avg. value.Limit:[-,-]
float    f_pAvgVal;
short    s_pAvgValZi;
//float    pClMaxVal = Unit[-]:paramenter control set max. value.Limit:[-,-]
float    f_pClMaxVal;
short    s_pClMaxValZi;
//float    pClMinVal = Unit[-]:paramenter control set min.  value.Limit:[-,-]
float    f_pClMinVal;
short    s_pClMinValZi;
//short    bShow = Unit[-]:paramenter alarm be show.Limit:[-,-]
short    s_bShow;
short    s_bShowZi;
//short    bSave = Unit[-]:paramenter alarm be save.Limit:[-,-]
short    s_bSave;
short    s_bSaveZi;
//char     sp2 = Unit[-]:sp2.Limit:[-,-]
char     c_sp2[65];
short    s_sp2Zi;
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
short    s_k_parmNo;   // Unit[-]:paramenter no.Limit:[-,-]
char     c_k_parmName[65];   // Unit[-]:paramenter name.Limit:[-,-]
short    s_k_parmGrade;   // Unit[-]:paramenter grade (by steel grade ,width,thinckness etc.).Limit:[-,-]

public:
//
//Structure
//
struct STR_DRP_STATDATA
{
	short     parmNo;
	char      parmName[65];
	short     parmGrade;
	float     pSetVal;
	short     pSetValZi;
	float     pMaxVal;
	short     pMaxValZi;
	float     pMinVal;
	short     pMinValZi;
	float     pAvgVal;
	short     pAvgValZi;
	float     pClMaxVal;
	short     pClMaxValZi;
	float     pClMinVal;
	short     pClMinValZi;
	short     bShow;
	short     bShowZi;
	short     bSave;
	short     bSaveZi;
	char      sp2[65];
	short     sp2Zi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[51];
	short     mopZi;
}structDRP_STATDATA;
              
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
DRP_STATDATA();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~DRP_STATDATA();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
DRP_STATDATA(const DRP_STATDATA &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//short	parmNo= Unit[-]:paramenter no.Limit:[-,-]
//char*	parmName[65]= Unit[-]:paramenter name.Limit:[-,-]
//short	parmGrade= Unit[-]:paramenter grade (by steel grade ,width,thinckness etc.).Limit:[-,-]
DRP_STATDATA( short arg1,char* arg2,short arg3);

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
	structDRP_STATDATA.parmNo = parmNo();
	strncpy (structDRP_STATDATA.parmName, parmName(), sizeof( structDRP_STATDATA.parmName));
	structDRP_STATDATA.parmGrade = parmGrade();
	structDRP_STATDATA.pSetVal = pSetVal();
	structDRP_STATDATA.pSetValZi = pSetValZi();
	structDRP_STATDATA.pMaxVal = pMaxVal();
	structDRP_STATDATA.pMaxValZi = pMaxValZi();
	structDRP_STATDATA.pMinVal = pMinVal();
	structDRP_STATDATA.pMinValZi = pMinValZi();
	structDRP_STATDATA.pAvgVal = pAvgVal();
	structDRP_STATDATA.pAvgValZi = pAvgValZi();
	structDRP_STATDATA.pClMaxVal = pClMaxVal();
	structDRP_STATDATA.pClMaxValZi = pClMaxValZi();
	structDRP_STATDATA.pClMinVal = pClMinVal();
	structDRP_STATDATA.pClMinValZi = pClMinValZi();
	structDRP_STATDATA.bShow = bShow();
	structDRP_STATDATA.bShowZi = bShowZi();
	structDRP_STATDATA.bSave = bSave();
	structDRP_STATDATA.bSaveZi = bSaveZi();
	strncpy (structDRP_STATDATA.sp2, sp2(), sizeof( structDRP_STATDATA.sp2));
	structDRP_STATDATA.sp2Zi = sp2Zi();
	strncpy (structDRP_STATDATA.toc, toc(), sizeof( structDRP_STATDATA.toc));
	structDRP_STATDATA.tocZi = tocZi();
	strncpy (structDRP_STATDATA.tom, tom(), sizeof( structDRP_STATDATA.tom));
	structDRP_STATDATA.tomZi = tomZi();
	strncpy (structDRP_STATDATA.mop, mop(), sizeof( structDRP_STATDATA.mop));
	structDRP_STATDATA.mopZi = mopZi();
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
void setPrimKey(short arg1,char* arg2,short arg3);

//methods
public:
//this methode stores the unique key attributes
void initInsertKeys(short arg1,char* arg2,short arg3);

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
DRP_STATDATA operator+(const DRP_STATDATA &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const DRP_STATDATA& operator=(const DRP_STATDATA &inst);

            
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
//short parmNo = Unit[-]:paramenter no.Limit:[-,-]
short  parmNo() const
{
   return (s_parmNo);
}

void  set_parmNo (short arg)
{
   s_parmNo= arg;
   return;
}

//shortk_parmNo = Unit[-]:paramenter no.Limit:[-,-]
short  k_parmNo() const
{
   return (s_k_parmNo);
}

void  set_k_parmNo (short arg)
{
   s_k_parmNo= arg;
    return;
}

//char* parmName = Unit[-]:paramenter name.Limit:[-,-]
char*  parmName() const
{
   return ((char*)c_parmName);
}

void  set_parmName (const char* arg)
{
   strncpy((char*)c_parmName, arg, sizeof(c_parmName));
    c_parmName[sizeof(c_parmName)-1] = '\0';
   return;
}

//char*k_parmName = Unit[-]:paramenter name.Limit:[-,-]
char*  k_parmName() const
{
   return ((char*)c_k_parmName);
}

void  set_k_parmName (const char* arg)
{
   strncpy((char*)c_k_parmName, arg, sizeof(c_k_parmName));
    c_k_parmName[sizeof(c_k_parmName)-1] = '\0';
    return;
}

//short parmGrade = Unit[-]:paramenter grade (by steel grade ,width,thinckness etc.).Limit:[-,-]
short  parmGrade() const
{
   return (s_parmGrade);
}

void  set_parmGrade (short arg)
{
   s_parmGrade= arg;
   return;
}

//shortk_parmGrade = Unit[-]:paramenter grade (by steel grade ,width,thinckness etc.).Limit:[-,-]
short  k_parmGrade() const
{
   return (s_k_parmGrade);
}

void  set_k_parmGrade (short arg)
{
   s_k_parmGrade= arg;
    return;
}

//float pSetVal = Unit[-]:paramenter set value.Limit:[-,-]
float  pSetVal() const
{
   return (f_pSetVal);
}

void  set_pSetVal (float arg)
{
   f_pSetVal= arg;
   s_pSetValZi = 0;
   return;
}

short   pSetValZi() const
{
   return (s_pSetValZi);
}

void  set_pSetValZi(short arg)
{
   s_pSetValZi= arg;
    return;
}

//float pMaxVal = Unit[-]:paramenter max. value.Limit:[-,-]
float  pMaxVal() const
{
   return (f_pMaxVal);
}

void  set_pMaxVal (float arg)
{
   f_pMaxVal= arg;
   s_pMaxValZi = 0;
   return;
}

short   pMaxValZi() const
{
   return (s_pMaxValZi);
}

void  set_pMaxValZi(short arg)
{
   s_pMaxValZi= arg;
    return;
}

//float pMinVal = Unit[-]:paramenter min. value.Limit:[-,-]
float  pMinVal() const
{
   return (f_pMinVal);
}

void  set_pMinVal (float arg)
{
   f_pMinVal= arg;
   s_pMinValZi = 0;
   return;
}

short   pMinValZi() const
{
   return (s_pMinValZi);
}

void  set_pMinValZi(short arg)
{
   s_pMinValZi= arg;
    return;
}

//float pAvgVal = Unit[-]:paramenter avg. value.Limit:[-,-]
float  pAvgVal() const
{
   return (f_pAvgVal);
}

void  set_pAvgVal (float arg)
{
   f_pAvgVal= arg;
   s_pAvgValZi = 0;
   return;
}

short   pAvgValZi() const
{
   return (s_pAvgValZi);
}

void  set_pAvgValZi(short arg)
{
   s_pAvgValZi= arg;
    return;
}

//float pClMaxVal = Unit[-]:paramenter control set max. value.Limit:[-,-]
float  pClMaxVal() const
{
   return (f_pClMaxVal);
}

void  set_pClMaxVal (float arg)
{
   f_pClMaxVal= arg;
   s_pClMaxValZi = 0;
   return;
}

short   pClMaxValZi() const
{
   return (s_pClMaxValZi);
}

void  set_pClMaxValZi(short arg)
{
   s_pClMaxValZi= arg;
    return;
}

//float pClMinVal = Unit[-]:paramenter control set min.  value.Limit:[-,-]
float  pClMinVal() const
{
   return (f_pClMinVal);
}

void  set_pClMinVal (float arg)
{
   f_pClMinVal= arg;
   s_pClMinValZi = 0;
   return;
}

short   pClMinValZi() const
{
   return (s_pClMinValZi);
}

void  set_pClMinValZi(short arg)
{
   s_pClMinValZi= arg;
    return;
}

//short bShow = Unit[-]:paramenter alarm be show.Limit:[-,-]
short  bShow() const
{
   return (s_bShow);
}

void  set_bShow (short arg)
{
   s_bShow= arg;
   s_bShowZi = 0;
   return;
}

short   bShowZi() const
{
   return (s_bShowZi);
}

void  set_bShowZi(short arg)
{
   s_bShowZi= arg;
    return;
}

//short bSave = Unit[-]:paramenter alarm be save.Limit:[-,-]
short  bSave() const
{
   return (s_bSave);
}

void  set_bSave (short arg)
{
   s_bSave= arg;
   s_bSaveZi = 0;
   return;
}

short   bSaveZi() const
{
   return (s_bSaveZi);
}

void  set_bSaveZi(short arg)
{
   s_bSaveZi= arg;
    return;
}

//char* sp2 = Unit[-]:sp2.Limit:[-,-]
char*  sp2() const
{
   return ((char*)c_sp2);
}

void  set_sp2 (const char* arg)
{
   strncpy((char*)c_sp2, arg, sizeof(c_sp2));
    c_sp2[sizeof(c_sp2)-1] = '\0';
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
#endif //DRP_STATDATA_H

