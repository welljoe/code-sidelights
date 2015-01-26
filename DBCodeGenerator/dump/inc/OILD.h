/* ********************************************************************/
/* *   File               :    OILD.h
                             
/* *   Short Description  :    Database Class ,ACCOUNT OILD TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         OILD_H        
#define      OILD_H        

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class OILD
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
//char     time = Unit[-]:时间.Limit:[-,-]
char     c_time[33];
short    s_timeZi;
//float    oroila = Unit[m3]:原油箱液位m3.Limit:[-,-]
float    f_oroila;
short    s_oroilaZi;
//float    oroilb = Unit[-]:原油箱温度.Limit:[-,-]
float    f_oroilb;
short    s_oroilbZi;
//char     oroilc = Unit[-]:原油箱搅拌器.Limit:[-,-]
char     c_oroilc[9];
short    s_oroilcZi;
//float    s1cleana = Unit[-]:S1清洁箱液位%.Limit:[-,-]
float    f_s1cleana;
short    s_s1cleanaZi;
//float    s1cleanb = Unit[-]:S1清洁箱温度.Limit:[-,-]
float    f_s1cleanb;
short    s_s1cleanbZi;
//char     s1cleanc = Unit[-]:S1清洁箱搅拌器.Limit:[-,-]
char     c_s1cleanc[9];
short    s_s1cleancZi;
//char     s1cleand = Unit[-]:S1清洁箱撇油器.Limit:[-,-]
char     c_s1cleand[9];
short    s_s1cleandZi;
//float    s1reoila = Unit[-]:S1回油箱液位.Limit:[-,-]
float    f_s1reoila;
short    s_s1reoilaZi;
//float    s1reoilb = Unit[-]:S1回油箱温度.Limit:[-,-]
float    f_s1reoilb;
short    s_s1reoilbZi;
//char     s1reoilc = Unit[-]:S1回油箱搅拌器.Limit:[-,-]
char     c_s1reoilc[9];
short    s_s1reoilcZi;
//float    s2cleana = Unit[-]:S2清洁箱液位%.Limit:[-,-]
float    f_s2cleana;
short    s_s2cleanaZi;
//float    s2cleanb = Unit[-]:S2清洁箱温度.Limit:[-,-]
float    f_s2cleanb;
short    s_s2cleanbZi;
//char     s2cleanc = Unit[-]:S2清洁箱搅拌器.Limit:[-,-]
char     c_s2cleanc[9];
short    s_s2cleancZi;
//char     s2cleand = Unit[-]:S2清洁箱磁分离器.Limit:[-,-]
char     c_s2cleand[9];
short    s_s2cleandZi;
//float    s2reoila = Unit[-]:S2回油箱液位.Limit:[-,-]
float    f_s2reoila;
short    s_s2reoilaZi;
//float    s2reoilb = Unit[-]:S2回油箱温度.Limit:[-,-]
float    f_s2reoilb;
short    s_s2reoilbZi;
//char     s2reoilc = Unit[-]:S2回油箱搅拌器.Limit:[-,-]
char     c_s2reoilc[9];
short    s_s2reoilcZi;
//float    mixa = Unit[-]:混合箱液位.Limit:[-,-]
float    f_mixa;
short    s_mixaZi;
//float    mixb = Unit[-]:混合箱温度.Limit:[-,-]
float    f_mixb;
short    s_mixbZi;
//char     mixc = Unit[-]:混合箱搅拌器.Limit:[-,-]
char     c_mixc[9];
short    s_mixcZi;
//char     s1 = Unit[-]:真空过滤器是否溢流S1.Limit:[-,-]
char     c_s1[9];
short    s_s1Zi;
//char     s2 = Unit[-]:真空过滤器是否溢流S2.Limit:[-,-]
char     c_s2[9];
short    s_s2Zi;
//char     elec = Unit[-]:电磁过滤器.Limit:[-,-]
char     c_elec[9];
short    s_elecZi;
//char     pollute = Unit[-]:污泥箱液位.Limit:[-,-]
char     c_pollute[9];
short    s_polluteZi;
//char     stand = Unit[-]:轧机冲洗手动阀.Limit:[-,-]
char     c_stand[9];
short    s_standZi;
//char     dirtybud = Unit[-]:污泥箱磁分离器.Limit:[-,-]
char     c_dirtybud[9];
short    s_dirtybudZi;
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
struct STR_OILD
{
	char      oildate[33];
	char      crewno[9];
	short     crewnoZi;
	char      shiftno[9];
	short     shiftnoZi;
	char      time[33];
	short     timeZi;
	float     oroila;
	short     oroilaZi;
	float     oroilb;
	short     oroilbZi;
	char      oroilc[9];
	short     oroilcZi;
	float     s1cleana;
	short     s1cleanaZi;
	float     s1cleanb;
	short     s1cleanbZi;
	char      s1cleanc[9];
	short     s1cleancZi;
	char      s1cleand[9];
	short     s1cleandZi;
	float     s1reoila;
	short     s1reoilaZi;
	float     s1reoilb;
	short     s1reoilbZi;
	char      s1reoilc[9];
	short     s1reoilcZi;
	float     s2cleana;
	short     s2cleanaZi;
	float     s2cleanb;
	short     s2cleanbZi;
	char      s2cleanc[9];
	short     s2cleancZi;
	char      s2cleand[9];
	short     s2cleandZi;
	float     s2reoila;
	short     s2reoilaZi;
	float     s2reoilb;
	short     s2reoilbZi;
	char      s2reoilc[9];
	short     s2reoilcZi;
	float     mixa;
	short     mixaZi;
	float     mixb;
	short     mixbZi;
	char      mixc[9];
	short     mixcZi;
	char      s1[9];
	short     s1Zi;
	char      s2[9];
	short     s2Zi;
	char      elec[9];
	short     elecZi;
	char      pollute[9];
	short     polluteZi;
	char      stand[9];
	short     standZi;
	char      dirtybud[9];
	short     dirtybudZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structOILD;
            
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
OILD();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~OILD();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
OILD(const OILD &inst);
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
	strncpy (structOILD.oildate, oildate(), sizeof( structOILD.oildate));
	strncpy (structOILD.crewno, crewno(), sizeof( structOILD.crewno));
	structOILD.crewnoZi = crewnoZi();
	strncpy (structOILD.shiftno, shiftno(), sizeof( structOILD.shiftno));
	structOILD.shiftnoZi = shiftnoZi();
	strncpy (structOILD.time, time(), sizeof( structOILD.time));
	structOILD.timeZi = timeZi();
	structOILD.oroila = oroila();
	structOILD.oroilaZi = oroilaZi();
	structOILD.oroilb = oroilb();
	structOILD.oroilbZi = oroilbZi();
	strncpy (structOILD.oroilc, oroilc(), sizeof( structOILD.oroilc));
	structOILD.oroilcZi = oroilcZi();
	structOILD.s1cleana = s1cleana();
	structOILD.s1cleanaZi = s1cleanaZi();
	structOILD.s1cleanb = s1cleanb();
	structOILD.s1cleanbZi = s1cleanbZi();
	strncpy (structOILD.s1cleanc, s1cleanc(), sizeof( structOILD.s1cleanc));
	structOILD.s1cleancZi = s1cleancZi();
	strncpy (structOILD.s1cleand, s1cleand(), sizeof( structOILD.s1cleand));
	structOILD.s1cleandZi = s1cleandZi();
	structOILD.s1reoila = s1reoila();
	structOILD.s1reoilaZi = s1reoilaZi();
	structOILD.s1reoilb = s1reoilb();
	structOILD.s1reoilbZi = s1reoilbZi();
	strncpy (structOILD.s1reoilc, s1reoilc(), sizeof( structOILD.s1reoilc));
	structOILD.s1reoilcZi = s1reoilcZi();
	structOILD.s2cleana = s2cleana();
	structOILD.s2cleanaZi = s2cleanaZi();
	structOILD.s2cleanb = s2cleanb();
	structOILD.s2cleanbZi = s2cleanbZi();
	strncpy (structOILD.s2cleanc, s2cleanc(), sizeof( structOILD.s2cleanc));
	structOILD.s2cleancZi = s2cleancZi();
	strncpy (structOILD.s2cleand, s2cleand(), sizeof( structOILD.s2cleand));
	structOILD.s2cleandZi = s2cleandZi();
	structOILD.s2reoila = s2reoila();
	structOILD.s2reoilaZi = s2reoilaZi();
	structOILD.s2reoilb = s2reoilb();
	structOILD.s2reoilbZi = s2reoilbZi();
	strncpy (structOILD.s2reoilc, s2reoilc(), sizeof( structOILD.s2reoilc));
	structOILD.s2reoilcZi = s2reoilcZi();
	structOILD.mixa = mixa();
	structOILD.mixaZi = mixaZi();
	structOILD.mixb = mixb();
	structOILD.mixbZi = mixbZi();
	strncpy (structOILD.mixc, mixc(), sizeof( structOILD.mixc));
	structOILD.mixcZi = mixcZi();
	strncpy (structOILD.s1, s1(), sizeof( structOILD.s1));
	structOILD.s1Zi = s1Zi();
	strncpy (structOILD.s2, s2(), sizeof( structOILD.s2));
	structOILD.s2Zi = s2Zi();
	strncpy (structOILD.elec, elec(), sizeof( structOILD.elec));
	structOILD.elecZi = elecZi();
	strncpy (structOILD.pollute, pollute(), sizeof( structOILD.pollute));
	structOILD.polluteZi = polluteZi();
	strncpy (structOILD.stand, stand(), sizeof( structOILD.stand));
	structOILD.standZi = standZi();
	strncpy (structOILD.dirtybud, dirtybud(), sizeof( structOILD.dirtybud));
	structOILD.dirtybudZi = dirtybudZi();
	strncpy (structOILD.toc, toc(), sizeof( structOILD.toc));
	structOILD.tocZi = tocZi();
	strncpy (structOILD.tom, tom(), sizeof( structOILD.tom));
	structOILD.tomZi = tomZi();
	strncpy (structOILD.mop, mop(), sizeof( structOILD.mop));
	structOILD.mopZi = mopZi();
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
OILD operator+(const OILD &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const OILD& operator=(const OILD &inst);

              
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

//char* time = Unit[-]:时间.Limit:[-,-]
char*  time() const
{
   return ((char*)c_time);
}

void  set_time (const char* arg)
{
   strncpy((char*)c_time, arg, sizeof(c_time));
    c_time[sizeof(c_time)-1] = '\0';
   s_timeZi = 0;
   return;
}

short   timeZi() const
{
   return (s_timeZi);
}

void  set_timeZi(short arg)
{
   s_timeZi= arg;
    return;
}

//float oroila = Unit[m3]:原油箱液位m3.Limit:[-,-]
float  oroila() const
{
   return (f_oroila);
}

void  set_oroila (float arg)
{
   f_oroila= arg;
   s_oroilaZi = 0;
   return;
}

short   oroilaZi() const
{
   return (s_oroilaZi);
}

void  set_oroilaZi(short arg)
{
   s_oroilaZi= arg;
    return;
}

//float oroilb = Unit[-]:原油箱温度.Limit:[-,-]
float  oroilb() const
{
   return (f_oroilb);
}

void  set_oroilb (float arg)
{
   f_oroilb= arg;
   s_oroilbZi = 0;
   return;
}

short   oroilbZi() const
{
   return (s_oroilbZi);
}

void  set_oroilbZi(short arg)
{
   s_oroilbZi= arg;
    return;
}

//char* oroilc = Unit[-]:原油箱搅拌器.Limit:[-,-]
char*  oroilc() const
{
   return ((char*)c_oroilc);
}

void  set_oroilc (const char* arg)
{
   strncpy((char*)c_oroilc, arg, sizeof(c_oroilc));
    c_oroilc[sizeof(c_oroilc)-1] = '\0';
   s_oroilcZi = 0;
   return;
}

short   oroilcZi() const
{
   return (s_oroilcZi);
}

void  set_oroilcZi(short arg)
{
   s_oroilcZi= arg;
    return;
}

//float s1cleana = Unit[-]:S1清洁箱液位%.Limit:[-,-]
float  s1cleana() const
{
   return (f_s1cleana);
}

void  set_s1cleana (float arg)
{
   f_s1cleana= arg;
   s_s1cleanaZi = 0;
   return;
}

short   s1cleanaZi() const
{
   return (s_s1cleanaZi);
}

void  set_s1cleanaZi(short arg)
{
   s_s1cleanaZi= arg;
    return;
}

//float s1cleanb = Unit[-]:S1清洁箱温度.Limit:[-,-]
float  s1cleanb() const
{
   return (f_s1cleanb);
}

void  set_s1cleanb (float arg)
{
   f_s1cleanb= arg;
   s_s1cleanbZi = 0;
   return;
}

short   s1cleanbZi() const
{
   return (s_s1cleanbZi);
}

void  set_s1cleanbZi(short arg)
{
   s_s1cleanbZi= arg;
    return;
}

//char* s1cleanc = Unit[-]:S1清洁箱搅拌器.Limit:[-,-]
char*  s1cleanc() const
{
   return ((char*)c_s1cleanc);
}

void  set_s1cleanc (const char* arg)
{
   strncpy((char*)c_s1cleanc, arg, sizeof(c_s1cleanc));
    c_s1cleanc[sizeof(c_s1cleanc)-1] = '\0';
   s_s1cleancZi = 0;
   return;
}

short   s1cleancZi() const
{
   return (s_s1cleancZi);
}

void  set_s1cleancZi(short arg)
{
   s_s1cleancZi= arg;
    return;
}

//char* s1cleand = Unit[-]:S1清洁箱撇油器.Limit:[-,-]
char*  s1cleand() const
{
   return ((char*)c_s1cleand);
}

void  set_s1cleand (const char* arg)
{
   strncpy((char*)c_s1cleand, arg, sizeof(c_s1cleand));
    c_s1cleand[sizeof(c_s1cleand)-1] = '\0';
   s_s1cleandZi = 0;
   return;
}

short   s1cleandZi() const
{
   return (s_s1cleandZi);
}

void  set_s1cleandZi(short arg)
{
   s_s1cleandZi= arg;
    return;
}

//float s1reoila = Unit[-]:S1回油箱液位.Limit:[-,-]
float  s1reoila() const
{
   return (f_s1reoila);
}

void  set_s1reoila (float arg)
{
   f_s1reoila= arg;
   s_s1reoilaZi = 0;
   return;
}

short   s1reoilaZi() const
{
   return (s_s1reoilaZi);
}

void  set_s1reoilaZi(short arg)
{
   s_s1reoilaZi= arg;
    return;
}

//float s1reoilb = Unit[-]:S1回油箱温度.Limit:[-,-]
float  s1reoilb() const
{
   return (f_s1reoilb);
}

void  set_s1reoilb (float arg)
{
   f_s1reoilb= arg;
   s_s1reoilbZi = 0;
   return;
}

short   s1reoilbZi() const
{
   return (s_s1reoilbZi);
}

void  set_s1reoilbZi(short arg)
{
   s_s1reoilbZi= arg;
    return;
}

//char* s1reoilc = Unit[-]:S1回油箱搅拌器.Limit:[-,-]
char*  s1reoilc() const
{
   return ((char*)c_s1reoilc);
}

void  set_s1reoilc (const char* arg)
{
   strncpy((char*)c_s1reoilc, arg, sizeof(c_s1reoilc));
    c_s1reoilc[sizeof(c_s1reoilc)-1] = '\0';
   s_s1reoilcZi = 0;
   return;
}

short   s1reoilcZi() const
{
   return (s_s1reoilcZi);
}

void  set_s1reoilcZi(short arg)
{
   s_s1reoilcZi= arg;
    return;
}

//float s2cleana = Unit[-]:S2清洁箱液位%.Limit:[-,-]
float  s2cleana() const
{
   return (f_s2cleana);
}

void  set_s2cleana (float arg)
{
   f_s2cleana= arg;
   s_s2cleanaZi = 0;
   return;
}

short   s2cleanaZi() const
{
   return (s_s2cleanaZi);
}

void  set_s2cleanaZi(short arg)
{
   s_s2cleanaZi= arg;
    return;
}

//float s2cleanb = Unit[-]:S2清洁箱温度.Limit:[-,-]
float  s2cleanb() const
{
   return (f_s2cleanb);
}

void  set_s2cleanb (float arg)
{
   f_s2cleanb= arg;
   s_s2cleanbZi = 0;
   return;
}

short   s2cleanbZi() const
{
   return (s_s2cleanbZi);
}

void  set_s2cleanbZi(short arg)
{
   s_s2cleanbZi= arg;
    return;
}

//char* s2cleanc = Unit[-]:S2清洁箱搅拌器.Limit:[-,-]
char*  s2cleanc() const
{
   return ((char*)c_s2cleanc);
}

void  set_s2cleanc (const char* arg)
{
   strncpy((char*)c_s2cleanc, arg, sizeof(c_s2cleanc));
    c_s2cleanc[sizeof(c_s2cleanc)-1] = '\0';
   s_s2cleancZi = 0;
   return;
}

short   s2cleancZi() const
{
   return (s_s2cleancZi);
}

void  set_s2cleancZi(short arg)
{
   s_s2cleancZi= arg;
    return;
}

//char* s2cleand = Unit[-]:S2清洁箱磁分离器.Limit:[-,-]
char*  s2cleand() const
{
   return ((char*)c_s2cleand);
}

void  set_s2cleand (const char* arg)
{
   strncpy((char*)c_s2cleand, arg, sizeof(c_s2cleand));
    c_s2cleand[sizeof(c_s2cleand)-1] = '\0';
   s_s2cleandZi = 0;
   return;
}

short   s2cleandZi() const
{
   return (s_s2cleandZi);
}

void  set_s2cleandZi(short arg)
{
   s_s2cleandZi= arg;
    return;
}

//float s2reoila = Unit[-]:S2回油箱液位.Limit:[-,-]
float  s2reoila() const
{
   return (f_s2reoila);
}

void  set_s2reoila (float arg)
{
   f_s2reoila= arg;
   s_s2reoilaZi = 0;
   return;
}

short   s2reoilaZi() const
{
   return (s_s2reoilaZi);
}

void  set_s2reoilaZi(short arg)
{
   s_s2reoilaZi= arg;
    return;
}

//float s2reoilb = Unit[-]:S2回油箱温度.Limit:[-,-]
float  s2reoilb() const
{
   return (f_s2reoilb);
}

void  set_s2reoilb (float arg)
{
   f_s2reoilb= arg;
   s_s2reoilbZi = 0;
   return;
}

short   s2reoilbZi() const
{
   return (s_s2reoilbZi);
}

void  set_s2reoilbZi(short arg)
{
   s_s2reoilbZi= arg;
    return;
}

//char* s2reoilc = Unit[-]:S2回油箱搅拌器.Limit:[-,-]
char*  s2reoilc() const
{
   return ((char*)c_s2reoilc);
}

void  set_s2reoilc (const char* arg)
{
   strncpy((char*)c_s2reoilc, arg, sizeof(c_s2reoilc));
    c_s2reoilc[sizeof(c_s2reoilc)-1] = '\0';
   s_s2reoilcZi = 0;
   return;
}

short   s2reoilcZi() const
{
   return (s_s2reoilcZi);
}

void  set_s2reoilcZi(short arg)
{
   s_s2reoilcZi= arg;
    return;
}

//float mixa = Unit[-]:混合箱液位.Limit:[-,-]
float  mixa() const
{
   return (f_mixa);
}

void  set_mixa (float arg)
{
   f_mixa= arg;
   s_mixaZi = 0;
   return;
}

short   mixaZi() const
{
   return (s_mixaZi);
}

void  set_mixaZi(short arg)
{
   s_mixaZi= arg;
    return;
}

//float mixb = Unit[-]:混合箱温度.Limit:[-,-]
float  mixb() const
{
   return (f_mixb);
}

void  set_mixb (float arg)
{
   f_mixb= arg;
   s_mixbZi = 0;
   return;
}

short   mixbZi() const
{
   return (s_mixbZi);
}

void  set_mixbZi(short arg)
{
   s_mixbZi= arg;
    return;
}

//char* mixc = Unit[-]:混合箱搅拌器.Limit:[-,-]
char*  mixc() const
{
   return ((char*)c_mixc);
}

void  set_mixc (const char* arg)
{
   strncpy((char*)c_mixc, arg, sizeof(c_mixc));
    c_mixc[sizeof(c_mixc)-1] = '\0';
   s_mixcZi = 0;
   return;
}

short   mixcZi() const
{
   return (s_mixcZi);
}

void  set_mixcZi(short arg)
{
   s_mixcZi= arg;
    return;
}

//char* s1 = Unit[-]:真空过滤器是否溢流S1.Limit:[-,-]
char*  s1() const
{
   return ((char*)c_s1);
}

void  set_s1 (const char* arg)
{
   strncpy((char*)c_s1, arg, sizeof(c_s1));
    c_s1[sizeof(c_s1)-1] = '\0';
   s_s1Zi = 0;
   return;
}

short   s1Zi() const
{
   return (s_s1Zi);
}

void  set_s1Zi(short arg)
{
   s_s1Zi= arg;
    return;
}

//char* s2 = Unit[-]:真空过滤器是否溢流S2.Limit:[-,-]
char*  s2() const
{
   return ((char*)c_s2);
}

void  set_s2 (const char* arg)
{
   strncpy((char*)c_s2, arg, sizeof(c_s2));
    c_s2[sizeof(c_s2)-1] = '\0';
   s_s2Zi = 0;
   return;
}

short   s2Zi() const
{
   return (s_s2Zi);
}

void  set_s2Zi(short arg)
{
   s_s2Zi= arg;
    return;
}

//char* elec = Unit[-]:电磁过滤器.Limit:[-,-]
char*  elec() const
{
   return ((char*)c_elec);
}

void  set_elec (const char* arg)
{
   strncpy((char*)c_elec, arg, sizeof(c_elec));
    c_elec[sizeof(c_elec)-1] = '\0';
   s_elecZi = 0;
   return;
}

short   elecZi() const
{
   return (s_elecZi);
}

void  set_elecZi(short arg)
{
   s_elecZi= arg;
    return;
}

//char* pollute = Unit[-]:污泥箱液位.Limit:[-,-]
char*  pollute() const
{
   return ((char*)c_pollute);
}

void  set_pollute (const char* arg)
{
   strncpy((char*)c_pollute, arg, sizeof(c_pollute));
    c_pollute[sizeof(c_pollute)-1] = '\0';
   s_polluteZi = 0;
   return;
}

short   polluteZi() const
{
   return (s_polluteZi);
}

void  set_polluteZi(short arg)
{
   s_polluteZi= arg;
    return;
}

//char* stand = Unit[-]:轧机冲洗手动阀.Limit:[-,-]
char*  stand() const
{
   return ((char*)c_stand);
}

void  set_stand (const char* arg)
{
   strncpy((char*)c_stand, arg, sizeof(c_stand));
    c_stand[sizeof(c_stand)-1] = '\0';
   s_standZi = 0;
   return;
}

short   standZi() const
{
   return (s_standZi);
}

void  set_standZi(short arg)
{
   s_standZi= arg;
    return;
}

//char* dirtybud = Unit[-]:污泥箱磁分离器.Limit:[-,-]
char*  dirtybud() const
{
   return ((char*)c_dirtybud);
}

void  set_dirtybud (const char* arg)
{
   strncpy((char*)c_dirtybud, arg, sizeof(c_dirtybud));
    c_dirtybud[sizeof(c_dirtybud)-1] = '\0';
   s_dirtybudZi = 0;
   return;
}

short   dirtybudZi() const
{
   return (s_dirtybudZi);
}

void  set_dirtybudZi(short arg)
{
   s_dirtybudZi= arg;
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
#endif //OILD_H

