/* ********************************************************************/
/* *   File               :    OILB.h
                             
/* *   Short Description  :    Database Class ,ACCOUNT OILB TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         OILB_H        
#define      OILB_H        

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class OILB
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
//char     oildate = Unit[-]:日期.Limit:[-,-]
char     c_oildate[33];
//char     crewno = Unit[-]:班组.Limit:[-,-]
char     c_crewno[9];
short    s_crewnoZi;
//char     shiftno = Unit[-]:班次.Limit:[-,-]
char     c_shiftno[9];
short    s_shiftnoZi;
//float    s1oil = Unit[L]:S1箱加油L.Limit:[-,-]
float    f_s1oil;
short    s_s1oilZi;
//float    s1water = Unit[m3]:S1箱加水m3.Limit:[-,-]
float    f_s1water;
short    s_s1waterZi;
//float    s1tmp = Unit[-]:S1箱温度.Limit:[-,-]
float    f_s1tmp;
short    s_s1tmpZi;
//float    s2oil = Unit[L]:S2箱加油L.Limit:[-,-]
float    f_s2oil;
short    s_s2oilZi;
//float    s2water = Unit[m3]:S2箱加水m3.Limit:[-,-]
float    f_s2water;
short    s_s2waterZi;
//float    s2tmp = Unit[-]:S2箱温度.Limit:[-,-]
float    f_s2tmp;
short    s_s2tmpZi;
//float    mixoil = Unit[L]:mix箱加油L.Limit:[-,-]
float    f_mixoil;
short    s_mixoilZi;
//float    mixwater = Unit[m3]:mix箱加水m3.Limit:[-,-]
float    f_mixwater;
short    s_mixwaterZi;
//float    mixtmp = Unit[-]:mix箱温度.Limit:[-,-]
float    f_mixtmp;
short    s_mixtmpZi;
//float    rolloila = Unit[m3]:向下一班次交班时，原油箱液位.Limit:[-,-]
float    f_rolloila;
short    s_rolloilaZi;
//float    rolloilb = Unit[-]:当班原油箱加油桶数.Limit:[-,-]
float    f_rolloilb;
short    s_rolloilbZi;
//float    rolloilc = Unit[-]:当班预热桶数.Limit:[-,-]
float    f_rolloilc;
short    s_rolloilcZi;
//float    rolloild = Unit[-]:现场轧制油桶余数.Limit:[-,-]
float    f_rolloild;
short    s_rolloildZi;
//float    shifttotal = Unit[t]:班产量.Limit:[-,-]
float    f_shifttotal;
short    s_shifttotalZi;
//char     instruct = Unit[-]:备注.Limit:[-,-]
char     c_instruct[33];
short    s_instructZi;
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
struct STR_OILB
{
	char      oildate[33];
	char      crewno[9];
	short     crewnoZi;
	char      shiftno[9];
	short     shiftnoZi;
	float     s1oil;
	short     s1oilZi;
	float     s1water;
	short     s1waterZi;
	float     s1tmp;
	short     s1tmpZi;
	float     s2oil;
	short     s2oilZi;
	float     s2water;
	short     s2waterZi;
	float     s2tmp;
	short     s2tmpZi;
	float     mixoil;
	short     mixoilZi;
	float     mixwater;
	short     mixwaterZi;
	float     mixtmp;
	short     mixtmpZi;
	float     rolloila;
	short     rolloilaZi;
	float     rolloilb;
	short     rolloilbZi;
	float     rolloilc;
	short     rolloilcZi;
	float     rolloild;
	short     rolloildZi;
	float     shifttotal;
	short     shifttotalZi;
	char      instruct[33];
	short     instructZi;
	char      codeman[9];
	short     codemanZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structOILB;
     
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
OILB();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~OILB();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
OILB(const OILB &inst);
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
	strncpy (structOILB.oildate, oildate(), sizeof( structOILB.oildate));
	strncpy (structOILB.crewno, crewno(), sizeof( structOILB.crewno));
	structOILB.crewnoZi = crewnoZi();
	strncpy (structOILB.shiftno, shiftno(), sizeof( structOILB.shiftno));
	structOILB.shiftnoZi = shiftnoZi();
	structOILB.s1oil = s1oil();
	structOILB.s1oilZi = s1oilZi();
	structOILB.s1water = s1water();
	structOILB.s1waterZi = s1waterZi();
	structOILB.s1tmp = s1tmp();
	structOILB.s1tmpZi = s1tmpZi();
	structOILB.s2oil = s2oil();
	structOILB.s2oilZi = s2oilZi();
	structOILB.s2water = s2water();
	structOILB.s2waterZi = s2waterZi();
	structOILB.s2tmp = s2tmp();
	structOILB.s2tmpZi = s2tmpZi();
	structOILB.mixoil = mixoil();
	structOILB.mixoilZi = mixoilZi();
	structOILB.mixwater = mixwater();
	structOILB.mixwaterZi = mixwaterZi();
	structOILB.mixtmp = mixtmp();
	structOILB.mixtmpZi = mixtmpZi();
	structOILB.rolloila = rolloila();
	structOILB.rolloilaZi = rolloilaZi();
	structOILB.rolloilb = rolloilb();
	structOILB.rolloilbZi = rolloilbZi();
	structOILB.rolloilc = rolloilc();
	structOILB.rolloilcZi = rolloilcZi();
	structOILB.rolloild = rolloild();
	structOILB.rolloildZi = rolloildZi();
	structOILB.shifttotal = shifttotal();
	structOILB.shifttotalZi = shifttotalZi();
	strncpy (structOILB.instruct, instruct(), sizeof( structOILB.instruct));
	structOILB.instructZi = instructZi();
	strncpy (structOILB.codeman, codeman(), sizeof( structOILB.codeman));
	structOILB.codemanZi = codemanZi();
	strncpy (structOILB.toc, toc(), sizeof( structOILB.toc));
	structOILB.tocZi = tocZi();
	strncpy (structOILB.tom, tom(), sizeof( structOILB.tom));
	structOILB.tomZi = tomZi();
	strncpy (structOILB.mop, mop(), sizeof( structOILB.mop));
	structOILB.mopZi = mopZi();
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
OILB operator+(const OILB &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const OILB& operator=(const OILB &inst);

          
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
//char* oildate = Unit[-]:日期.Limit:[-,-]
char*  oildate() const
{
   return ((char*)c_oildate);
}

void  set_oildate (const char* arg)
{
   strncpy((char*)c_oildate, arg, sizeof(c_oildate));
    c_oildate[sizeof(c_oildate)-1] = '\0';
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

//char* shiftno = Unit[-]:班次.Limit:[-,-]
char*  shiftno() const
{
   return ((char*)c_shiftno);
}

void  set_shiftno (const char* arg)
{
   strncpy((char*)c_shiftno, arg, sizeof(c_shiftno));
    c_shiftno[sizeof(c_shiftno)-1] = '\0';
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

//float s1oil = Unit[L]:S1箱加油L.Limit:[-,-]
float  s1oil() const
{
   return (f_s1oil);
}

void  set_s1oil (float arg)
{
   f_s1oil= arg;
   s_s1oilZi = 0;
   return;
}

short   s1oilZi() const
{
   return (s_s1oilZi);
}

void  set_s1oilZi(short arg)
{
   s_s1oilZi= arg;
    return;
}

//float s1water = Unit[m3]:S1箱加水m3.Limit:[-,-]
float  s1water() const
{
   return (f_s1water);
}

void  set_s1water (float arg)
{
   f_s1water= arg;
   s_s1waterZi = 0;
   return;
}

short   s1waterZi() const
{
   return (s_s1waterZi);
}

void  set_s1waterZi(short arg)
{
   s_s1waterZi= arg;
    return;
}

//float s1tmp = Unit[-]:S1箱温度.Limit:[-,-]
float  s1tmp() const
{
   return (f_s1tmp);
}

void  set_s1tmp (float arg)
{
   f_s1tmp= arg;
   s_s1tmpZi = 0;
   return;
}

short   s1tmpZi() const
{
   return (s_s1tmpZi);
}

void  set_s1tmpZi(short arg)
{
   s_s1tmpZi= arg;
    return;
}

//float s2oil = Unit[L]:S2箱加油L.Limit:[-,-]
float  s2oil() const
{
   return (f_s2oil);
}

void  set_s2oil (float arg)
{
   f_s2oil= arg;
   s_s2oilZi = 0;
   return;
}

short   s2oilZi() const
{
   return (s_s2oilZi);
}

void  set_s2oilZi(short arg)
{
   s_s2oilZi= arg;
    return;
}

//float s2water = Unit[m3]:S2箱加水m3.Limit:[-,-]
float  s2water() const
{
   return (f_s2water);
}

void  set_s2water (float arg)
{
   f_s2water= arg;
   s_s2waterZi = 0;
   return;
}

short   s2waterZi() const
{
   return (s_s2waterZi);
}

void  set_s2waterZi(short arg)
{
   s_s2waterZi= arg;
    return;
}

//float s2tmp = Unit[-]:S2箱温度.Limit:[-,-]
float  s2tmp() const
{
   return (f_s2tmp);
}

void  set_s2tmp (float arg)
{
   f_s2tmp= arg;
   s_s2tmpZi = 0;
   return;
}

short   s2tmpZi() const
{
   return (s_s2tmpZi);
}

void  set_s2tmpZi(short arg)
{
   s_s2tmpZi= arg;
    return;
}

//float mixoil = Unit[L]:mix箱加油L.Limit:[-,-]
float  mixoil() const
{
   return (f_mixoil);
}

void  set_mixoil (float arg)
{
   f_mixoil= arg;
   s_mixoilZi = 0;
   return;
}

short   mixoilZi() const
{
   return (s_mixoilZi);
}

void  set_mixoilZi(short arg)
{
   s_mixoilZi= arg;
    return;
}

//float mixwater = Unit[m3]:mix箱加水m3.Limit:[-,-]
float  mixwater() const
{
   return (f_mixwater);
}

void  set_mixwater (float arg)
{
   f_mixwater= arg;
   s_mixwaterZi = 0;
   return;
}

short   mixwaterZi() const
{
   return (s_mixwaterZi);
}

void  set_mixwaterZi(short arg)
{
   s_mixwaterZi= arg;
    return;
}

//float mixtmp = Unit[-]:mix箱温度.Limit:[-,-]
float  mixtmp() const
{
   return (f_mixtmp);
}

void  set_mixtmp (float arg)
{
   f_mixtmp= arg;
   s_mixtmpZi = 0;
   return;
}

short   mixtmpZi() const
{
   return (s_mixtmpZi);
}

void  set_mixtmpZi(short arg)
{
   s_mixtmpZi= arg;
    return;
}

//float rolloila = Unit[m3]:向下一班次交班时，原油箱液位.Limit:[-,-]
float  rolloila() const
{
   return (f_rolloila);
}

void  set_rolloila (float arg)
{
   f_rolloila= arg;
   s_rolloilaZi = 0;
   return;
}

short   rolloilaZi() const
{
   return (s_rolloilaZi);
}

void  set_rolloilaZi(short arg)
{
   s_rolloilaZi= arg;
    return;
}

//float rolloilb = Unit[-]:当班原油箱加油桶数.Limit:[-,-]
float  rolloilb() const
{
   return (f_rolloilb);
}

void  set_rolloilb (float arg)
{
   f_rolloilb= arg;
   s_rolloilbZi = 0;
   return;
}

short   rolloilbZi() const
{
   return (s_rolloilbZi);
}

void  set_rolloilbZi(short arg)
{
   s_rolloilbZi= arg;
    return;
}

//float rolloilc = Unit[-]:当班预热桶数.Limit:[-,-]
float  rolloilc() const
{
   return (f_rolloilc);
}

void  set_rolloilc (float arg)
{
   f_rolloilc= arg;
   s_rolloilcZi = 0;
   return;
}

short   rolloilcZi() const
{
   return (s_rolloilcZi);
}

void  set_rolloilcZi(short arg)
{
   s_rolloilcZi= arg;
    return;
}

//float rolloild = Unit[-]:现场轧制油桶余数.Limit:[-,-]
float  rolloild() const
{
   return (f_rolloild);
}

void  set_rolloild (float arg)
{
   f_rolloild= arg;
   s_rolloildZi = 0;
   return;
}

short   rolloildZi() const
{
   return (s_rolloildZi);
}

void  set_rolloildZi(short arg)
{
   s_rolloildZi= arg;
    return;
}

//float shifttotal = Unit[t]:班产量.Limit:[-,-]
float  shifttotal() const
{
   return (f_shifttotal);
}

void  set_shifttotal (float arg)
{
   f_shifttotal= arg;
   s_shifttotalZi = 0;
   return;
}

short   shifttotalZi() const
{
   return (s_shifttotalZi);
}

void  set_shifttotalZi(short arg)
{
   s_shifttotalZi= arg;
    return;
}

//char* instruct = Unit[-]:备注.Limit:[-,-]
char*  instruct() const
{
   return ((char*)c_instruct);
}

void  set_instruct (const char* arg)
{
   strncpy((char*)c_instruct, arg, sizeof(c_instruct));
    c_instruct[sizeof(c_instruct)-1] = '\0';
   s_instructZi = 0;
   return;
}

short   instructZi() const
{
   return (s_instructZi);
}

void  set_instructZi(short arg)
{
   s_instructZi= arg;
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
#endif //OILB_H

