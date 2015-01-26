/* ********************************************************************/
/* *   File               :    OFFCHECKB.h
                             
/* *   Short Description  :    Database Class ,ACCOUNT OFFCHECKB TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         OFFCHECKB_H   
#define      OFFCHECKB_H   

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class OFFCHECKB
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
//char     coilno = Unit[-]:冷硬卷号.Limit:[-,-]
char     c_coilno[23];
short    s_coilnoZi;
//char     alloycode = Unit[-]:钢种.Limit:[-,-]
char     c_alloycode[33];
short    s_alloycodeZi;
//char     gettime = Unit[-]:取样时间.Limit:[-,-]
char     c_gettime[17];
short    s_gettimeZi;
//char     sendtime = Unit[-]:送样时间.Limit:[-,-]
char     c_sendtime[17];
short    s_sendtimeZi;
//char     oil = Unit[mg/m2]:残油.Limit:[-,-]
char     c_oil[9];
short    s_oilZi;
//char     fe = Unit[mg/m2]:残铁.Limit:[-,-]
char     c_fe[9];
short    s_feZi;
//char     total = Unit[mg/m2]:总量.Limit:[-,-]
char     c_total[9];
short    s_totalZi;
//char     rough_hor = Unit[-]:横向粗糙度.Limit:[-,-]
char     c_rough_hor[9];
short    s_rough_horZi;
//char     rough_ver = Unit[-]:纵向粗糙度.Limit:[-,-]
char     c_rough_ver[9];
short    s_rough_verZi;
//char     codeman = Unit[-]:记录人.Limit:[-,-]
char     c_codeman[9];
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
struct STR_OFFCHECKB
{
	char      coildate[33];
	char      coilno[23];
	short     coilnoZi;
	char      alloycode[33];
	short     alloycodeZi;
	char      gettime[17];
	short     gettimeZi;
	char      sendtime[17];
	short     sendtimeZi;
	char      oil[9];
	short     oilZi;
	char      fe[9];
	short     feZi;
	char      total[9];
	short     totalZi;
	char      rough_hor[9];
	short     rough_horZi;
	char      rough_ver[9];
	short     rough_verZi;
	char      codeman[9];
	short     codemanZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structOFFCHECKB;
              
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
OFFCHECKB();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~OFFCHECKB();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
OFFCHECKB(const OFFCHECKB &inst);
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
	strncpy (structOFFCHECKB.coildate, coildate(), sizeof( structOFFCHECKB.coildate));
	strncpy (structOFFCHECKB.coilno, coilno(), sizeof( structOFFCHECKB.coilno));
	structOFFCHECKB.coilnoZi = coilnoZi();
	strncpy (structOFFCHECKB.alloycode, alloycode(), sizeof( structOFFCHECKB.alloycode));
	structOFFCHECKB.alloycodeZi = alloycodeZi();
	strncpy (structOFFCHECKB.gettime, gettime(), sizeof( structOFFCHECKB.gettime));
	structOFFCHECKB.gettimeZi = gettimeZi();
	strncpy (structOFFCHECKB.sendtime, sendtime(), sizeof( structOFFCHECKB.sendtime));
	structOFFCHECKB.sendtimeZi = sendtimeZi();
	strncpy (structOFFCHECKB.oil, oil(), sizeof( structOFFCHECKB.oil));
	structOFFCHECKB.oilZi = oilZi();
	strncpy (structOFFCHECKB.fe, fe(), sizeof( structOFFCHECKB.fe));
	structOFFCHECKB.feZi = feZi();
	strncpy (structOFFCHECKB.total, total(), sizeof( structOFFCHECKB.total));
	structOFFCHECKB.totalZi = totalZi();
	strncpy (structOFFCHECKB.rough_hor, rough_hor(), sizeof( structOFFCHECKB.rough_hor));
	structOFFCHECKB.rough_horZi = rough_horZi();
	strncpy (structOFFCHECKB.rough_ver, rough_ver(), sizeof( structOFFCHECKB.rough_ver));
	structOFFCHECKB.rough_verZi = rough_verZi();
	strncpy (structOFFCHECKB.codeman, codeman(), sizeof( structOFFCHECKB.codeman));
	structOFFCHECKB.codemanZi = codemanZi();
	strncpy (structOFFCHECKB.toc, toc(), sizeof( structOFFCHECKB.toc));
	structOFFCHECKB.tocZi = tocZi();
	strncpy (structOFFCHECKB.tom, tom(), sizeof( structOFFCHECKB.tom));
	structOFFCHECKB.tomZi = tomZi();
	strncpy (structOFFCHECKB.mop, mop(), sizeof( structOFFCHECKB.mop));
	structOFFCHECKB.mopZi = mopZi();
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
OFFCHECKB operator+(const OFFCHECKB &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const OFFCHECKB& operator=(const OFFCHECKB &inst);

 
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

//char* coilno = Unit[-]:冷硬卷号.Limit:[-,-]
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

//char* gettime = Unit[-]:取样时间.Limit:[-,-]
char*  gettime() const
{
   return ((char*)c_gettime);
}

void  set_gettime (const char* arg)
{
   strncpy((char*)c_gettime, arg, sizeof(c_gettime));
    c_gettime[sizeof(c_gettime)-1] = '\0';
   s_gettimeZi = 0;
   return;
}

short   gettimeZi() const
{
   return (s_gettimeZi);
}

void  set_gettimeZi(short arg)
{
   s_gettimeZi= arg;
    return;
}

//char* sendtime = Unit[-]:送样时间.Limit:[-,-]
char*  sendtime() const
{
   return ((char*)c_sendtime);
}

void  set_sendtime (const char* arg)
{
   strncpy((char*)c_sendtime, arg, sizeof(c_sendtime));
    c_sendtime[sizeof(c_sendtime)-1] = '\0';
   s_sendtimeZi = 0;
   return;
}

short   sendtimeZi() const
{
   return (s_sendtimeZi);
}

void  set_sendtimeZi(short arg)
{
   s_sendtimeZi= arg;
    return;
}

//char* oil = Unit[mg/m2]:残油.Limit:[-,-]
char*  oil() const
{
   return ((char*)c_oil);
}

void  set_oil (const char* arg)
{
   strncpy((char*)c_oil, arg, sizeof(c_oil));
    c_oil[sizeof(c_oil)-1] = '\0';
   s_oilZi = 0;
   return;
}

short   oilZi() const
{
   return (s_oilZi);
}

void  set_oilZi(short arg)
{
   s_oilZi= arg;
    return;
}

//char* fe = Unit[mg/m2]:残铁.Limit:[-,-]
char*  fe() const
{
   return ((char*)c_fe);
}

void  set_fe (const char* arg)
{
   strncpy((char*)c_fe, arg, sizeof(c_fe));
    c_fe[sizeof(c_fe)-1] = '\0';
   s_feZi = 0;
   return;
}

short   feZi() const
{
   return (s_feZi);
}

void  set_feZi(short arg)
{
   s_feZi= arg;
    return;
}

//char* total = Unit[mg/m2]:总量.Limit:[-,-]
char*  total() const
{
   return ((char*)c_total);
}

void  set_total (const char* arg)
{
   strncpy((char*)c_total, arg, sizeof(c_total));
    c_total[sizeof(c_total)-1] = '\0';
   s_totalZi = 0;
   return;
}

short   totalZi() const
{
   return (s_totalZi);
}

void  set_totalZi(short arg)
{
   s_totalZi= arg;
    return;
}

//char* rough_hor = Unit[-]:横向粗糙度.Limit:[-,-]
char*  rough_hor() const
{
   return ((char*)c_rough_hor);
}

void  set_rough_hor (const char* arg)
{
   strncpy((char*)c_rough_hor, arg, sizeof(c_rough_hor));
    c_rough_hor[sizeof(c_rough_hor)-1] = '\0';
   s_rough_horZi = 0;
   return;
}

short   rough_horZi() const
{
   return (s_rough_horZi);
}

void  set_rough_horZi(short arg)
{
   s_rough_horZi= arg;
    return;
}

//char* rough_ver = Unit[-]:纵向粗糙度.Limit:[-,-]
char*  rough_ver() const
{
   return ((char*)c_rough_ver);
}

void  set_rough_ver (const char* arg)
{
   strncpy((char*)c_rough_ver, arg, sizeof(c_rough_ver));
    c_rough_ver[sizeof(c_rough_ver)-1] = '\0';
   s_rough_verZi = 0;
   return;
}

short   rough_verZi() const
{
   return (s_rough_verZi);
}

void  set_rough_verZi(short arg)
{
   s_rough_verZi= arg;
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
#endif //OFFCHECKB_H

