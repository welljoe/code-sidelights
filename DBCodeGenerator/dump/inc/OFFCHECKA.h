/* ********************************************************************/
/* *   File               :    OFFCHECKA.h
                             
/* *   Short Description  :    Database Class ,ACCOUNT OFFCHECKBA TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         OFFCHECKA_H   
#define      OFFCHECKA_H   

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class OFFCHECKA
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
//char     coilno = Unit[-]:冷轧卷号.Limit:[-,-]
char     c_coilno[23];
short    s_coilnoZi;
//char     alloycode = Unit[-]:钢种.Limit:[-,-]
char     c_alloycode[33];
short    s_alloycodeZi;
//char     crewno = Unit[-]:班组.Limit:[-,-]
char     c_crewno[17];
short    s_crewnoZi;
//char     shiftno = Unit[-]:班次.Limit:[-,-]
char     c_shiftno[17];
short    s_shiftnoZi;
//char     defectname1 = Unit[-]:缺陷名称1.Limit:[-,-]
char     c_defectname1[33];
short    s_defectname1Zi;
//char     updownsurface1 = Unit[-]:上/下表面1.Limit:[-,-]
char     c_updownsurface1[17];
short    s_updownsurface1Zi;
//char     side_distance1 = Unit[mm]:距WS/DS侧距离1.Limit:[-,-]
char     c_side_distance1[33];
short    s_side_distance1Zi;
//char     distance1 = Unit[m]:距带头/带尾距离1.Limit:[-,-]
char     c_distance1[33];
short    s_distance1Zi;
//char     instruction1 = Unit[-]:备注1.Limit:[-,-]
char     c_instruction1[33];
short    s_instruction1Zi;
//char     circle1 = Unit[mm]:周期长度1.Limit:[-,-]
char     c_circle1[33];
short    s_circle1Zi;
//char     checkresult1 = Unit[-]:一检判定结果(合格/封闭/废品).Limit:[-,-]
char     c_checkresult1[33];
short    s_checkresult1Zi;
//char     codeman1 = Unit[-]:记录人.Limit:[-,-]
char     c_codeman1[33];
short    s_codeman1Zi;
//char     defectname2 = Unit[-]:缺陷名称2.Limit:[-,-]
char     c_defectname2[33];
short    s_defectname2Zi;
//char     updownsurface2 = Unit[-]:上/下表面2.Limit:[-,-]
char     c_updownsurface2[17];
short    s_updownsurface2Zi;
//char     side_distance2 = Unit[mm]:距WS/DS侧距离2.Limit:[-,-]
char     c_side_distance2[33];
short    s_side_distance2Zi;
//char     distance2 = Unit[m]:距带头/带尾距离2.Limit:[-,-]
char     c_distance2[33];
short    s_distance2Zi;
//char     instruction2 = Unit[-]:备注2.Limit:[-,-]
char     c_instruction2[33];
short    s_instruction2Zi;
//char     circle2 = Unit[mm]:周期长度2.Limit:[-,-]
char     c_circle2[33];
short    s_circle2Zi;
//char     defectname3 = Unit[-]:缺陷名称3.Limit:[-,-]
char     c_defectname3[33];
short    s_defectname3Zi;
//char     updownsurface3 = Unit[-]:上/下表面3.Limit:[-,-]
char     c_updownsurface3[17];
short    s_updownsurface3Zi;
//char     side_distance3 = Unit[mm]:距WS/DS侧距离3.Limit:[-,-]
char     c_side_distance3[33];
short    s_side_distance3Zi;
//char     distance3 = Unit[m]:距带头/带尾距离3.Limit:[-,-]
char     c_distance3[33];
short    s_distance3Zi;
//char     instruction3 = Unit[-]:备注3.Limit:[-,-]
char     c_instruction3[33];
short    s_instruction3Zi;
//char     circle3 = Unit[mm]:周期长度3.Limit:[-,-]
char     c_circle3[33];
short    s_circle3Zi;
//char     defectname4 = Unit[-]:缺陷名称4.Limit:[-,-]
char     c_defectname4[33];
short    s_defectname4Zi;
//char     updownsurface4 = Unit[-]:上/下表面4.Limit:[-,-]
char     c_updownsurface4[17];
short    s_updownsurface4Zi;
//char     side_distance4 = Unit[mm]:距WS/DS侧距离4.Limit:[-,-]
char     c_side_distance4[33];
short    s_side_distance4Zi;
//char     distance4 = Unit[m]:距带头/带尾距离4.Limit:[-,-]
char     c_distance4[33];
short    s_distance4Zi;
//char     instruction4 = Unit[-]:备注4.Limit:[-,-]
char     c_instruction4[33];
short    s_instruction4Zi;
//char     circle4 = Unit[mm]:周期长度4.Limit:[-,-]
char     c_circle4[33];
short    s_circle4Zi;
//char     defectname5 = Unit[-]:缺陷名称5.Limit:[-,-]
char     c_defectname5[33];
short    s_defectname5Zi;
//char     updownsurface5 = Unit[-]:上/下表面5.Limit:[-,-]
char     c_updownsurface5[17];
short    s_updownsurface5Zi;
//char     side_distance5 = Unit[mm]:距WS/DS侧距离5.Limit:[-,-]
char     c_side_distance5[33];
short    s_side_distance5Zi;
//char     distance5 = Unit[m]:距带头/带尾距离5.Limit:[-,-]
char     c_distance5[33];
short    s_distance5Zi;
//char     instruction5 = Unit[-]:备注5.Limit:[-,-]
char     c_instruction5[33];
short    s_instruction5Zi;
//char     circle5 = Unit[mm]:周期长度5.Limit:[-,-]
char     c_circle5[33];
short    s_circle5Zi;
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
struct STR_OFFCHECKA
{
	char      coildate[33];
	char      coilno[23];
	short     coilnoZi;
	char      alloycode[33];
	short     alloycodeZi;
	char      crewno[17];
	short     crewnoZi;
	char      shiftno[17];
	short     shiftnoZi;
	char      defectname1[33];
	short     defectname1Zi;
	char      updownsurface1[17];
	short     updownsurface1Zi;
	char      side_distance1[33];
	short     side_distance1Zi;
	char      distance1[33];
	short     distance1Zi;
	char      instruction1[33];
	short     instruction1Zi;
	char      circle1[33];
	short     circle1Zi;
	char      checkresult1[33];
	short     checkresult1Zi;
	char      codeman1[33];
	short     codeman1Zi;
	char      defectname2[33];
	short     defectname2Zi;
	char      updownsurface2[17];
	short     updownsurface2Zi;
	char      side_distance2[33];
	short     side_distance2Zi;
	char      distance2[33];
	short     distance2Zi;
	char      instruction2[33];
	short     instruction2Zi;
	char      circle2[33];
	short     circle2Zi;
	char      defectname3[33];
	short     defectname3Zi;
	char      updownsurface3[17];
	short     updownsurface3Zi;
	char      side_distance3[33];
	short     side_distance3Zi;
	char      distance3[33];
	short     distance3Zi;
	char      instruction3[33];
	short     instruction3Zi;
	char      circle3[33];
	short     circle3Zi;
	char      defectname4[33];
	short     defectname4Zi;
	char      updownsurface4[17];
	short     updownsurface4Zi;
	char      side_distance4[33];
	short     side_distance4Zi;
	char      distance4[33];
	short     distance4Zi;
	char      instruction4[33];
	short     instruction4Zi;
	char      circle4[33];
	short     circle4Zi;
	char      defectname5[33];
	short     defectname5Zi;
	char      updownsurface5[17];
	short     updownsurface5Zi;
	char      side_distance5[33];
	short     side_distance5Zi;
	char      distance5[33];
	short     distance5Zi;
	char      instruction5[33];
	short     instruction5Zi;
	char      circle5[33];
	short     circle5Zi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structOFFCHECKA;
    
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
OFFCHECKA();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~OFFCHECKA();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
OFFCHECKA(const OFFCHECKA &inst);
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
	strncpy (structOFFCHECKA.coildate, coildate(), sizeof( structOFFCHECKA.coildate));
	strncpy (structOFFCHECKA.coilno, coilno(), sizeof( structOFFCHECKA.coilno));
	structOFFCHECKA.coilnoZi = coilnoZi();
	strncpy (structOFFCHECKA.alloycode, alloycode(), sizeof( structOFFCHECKA.alloycode));
	structOFFCHECKA.alloycodeZi = alloycodeZi();
	strncpy (structOFFCHECKA.crewno, crewno(), sizeof( structOFFCHECKA.crewno));
	structOFFCHECKA.crewnoZi = crewnoZi();
	strncpy (structOFFCHECKA.shiftno, shiftno(), sizeof( structOFFCHECKA.shiftno));
	structOFFCHECKA.shiftnoZi = shiftnoZi();
	strncpy (structOFFCHECKA.defectname1, defectname1(), sizeof( structOFFCHECKA.defectname1));
	structOFFCHECKA.defectname1Zi = defectname1Zi();
	strncpy (structOFFCHECKA.updownsurface1, updownsurface1(), sizeof( structOFFCHECKA.updownsurface1));
	structOFFCHECKA.updownsurface1Zi = updownsurface1Zi();
	strncpy (structOFFCHECKA.side_distance1, side_distance1(), sizeof( structOFFCHECKA.side_distance1));
	structOFFCHECKA.side_distance1Zi = side_distance1Zi();
	strncpy (structOFFCHECKA.distance1, distance1(), sizeof( structOFFCHECKA.distance1));
	structOFFCHECKA.distance1Zi = distance1Zi();
	strncpy (structOFFCHECKA.instruction1, instruction1(), sizeof( structOFFCHECKA.instruction1));
	structOFFCHECKA.instruction1Zi = instruction1Zi();
	strncpy (structOFFCHECKA.circle1, circle1(), sizeof( structOFFCHECKA.circle1));
	structOFFCHECKA.circle1Zi = circle1Zi();
	strncpy (structOFFCHECKA.checkresult1, checkresult1(), sizeof( structOFFCHECKA.checkresult1));
	structOFFCHECKA.checkresult1Zi = checkresult1Zi();
	strncpy (structOFFCHECKA.codeman1, codeman1(), sizeof( structOFFCHECKA.codeman1));
	structOFFCHECKA.codeman1Zi = codeman1Zi();
	strncpy (structOFFCHECKA.defectname2, defectname2(), sizeof( structOFFCHECKA.defectname2));
	structOFFCHECKA.defectname2Zi = defectname2Zi();
	strncpy (structOFFCHECKA.updownsurface2, updownsurface2(), sizeof( structOFFCHECKA.updownsurface2));
	structOFFCHECKA.updownsurface2Zi = updownsurface2Zi();
	strncpy (structOFFCHECKA.side_distance2, side_distance2(), sizeof( structOFFCHECKA.side_distance2));
	structOFFCHECKA.side_distance2Zi = side_distance2Zi();
	strncpy (structOFFCHECKA.distance2, distance2(), sizeof( structOFFCHECKA.distance2));
	structOFFCHECKA.distance2Zi = distance2Zi();
	strncpy (structOFFCHECKA.instruction2, instruction2(), sizeof( structOFFCHECKA.instruction2));
	structOFFCHECKA.instruction2Zi = instruction2Zi();
	strncpy (structOFFCHECKA.circle2, circle2(), sizeof( structOFFCHECKA.circle2));
	structOFFCHECKA.circle2Zi = circle2Zi();
	strncpy (structOFFCHECKA.defectname3, defectname3(), sizeof( structOFFCHECKA.defectname3));
	structOFFCHECKA.defectname3Zi = defectname3Zi();
	strncpy (structOFFCHECKA.updownsurface3, updownsurface3(), sizeof( structOFFCHECKA.updownsurface3));
	structOFFCHECKA.updownsurface3Zi = updownsurface3Zi();
	strncpy (structOFFCHECKA.side_distance3, side_distance3(), sizeof( structOFFCHECKA.side_distance3));
	structOFFCHECKA.side_distance3Zi = side_distance3Zi();
	strncpy (structOFFCHECKA.distance3, distance3(), sizeof( structOFFCHECKA.distance3));
	structOFFCHECKA.distance3Zi = distance3Zi();
	strncpy (structOFFCHECKA.instruction3, instruction3(), sizeof( structOFFCHECKA.instruction3));
	structOFFCHECKA.instruction3Zi = instruction3Zi();
	strncpy (structOFFCHECKA.circle3, circle3(), sizeof( structOFFCHECKA.circle3));
	structOFFCHECKA.circle3Zi = circle3Zi();
	strncpy (structOFFCHECKA.defectname4, defectname4(), sizeof( structOFFCHECKA.defectname4));
	structOFFCHECKA.defectname4Zi = defectname4Zi();
	strncpy (structOFFCHECKA.updownsurface4, updownsurface4(), sizeof( structOFFCHECKA.updownsurface4));
	structOFFCHECKA.updownsurface4Zi = updownsurface4Zi();
	strncpy (structOFFCHECKA.side_distance4, side_distance4(), sizeof( structOFFCHECKA.side_distance4));
	structOFFCHECKA.side_distance4Zi = side_distance4Zi();
	strncpy (structOFFCHECKA.distance4, distance4(), sizeof( structOFFCHECKA.distance4));
	structOFFCHECKA.distance4Zi = distance4Zi();
	strncpy (structOFFCHECKA.instruction4, instruction4(), sizeof( structOFFCHECKA.instruction4));
	structOFFCHECKA.instruction4Zi = instruction4Zi();
	strncpy (structOFFCHECKA.circle4, circle4(), sizeof( structOFFCHECKA.circle4));
	structOFFCHECKA.circle4Zi = circle4Zi();
	strncpy (structOFFCHECKA.defectname5, defectname5(), sizeof( structOFFCHECKA.defectname5));
	structOFFCHECKA.defectname5Zi = defectname5Zi();
	strncpy (structOFFCHECKA.updownsurface5, updownsurface5(), sizeof( structOFFCHECKA.updownsurface5));
	structOFFCHECKA.updownsurface5Zi = updownsurface5Zi();
	strncpy (structOFFCHECKA.side_distance5, side_distance5(), sizeof( structOFFCHECKA.side_distance5));
	structOFFCHECKA.side_distance5Zi = side_distance5Zi();
	strncpy (structOFFCHECKA.distance5, distance5(), sizeof( structOFFCHECKA.distance5));
	structOFFCHECKA.distance5Zi = distance5Zi();
	strncpy (structOFFCHECKA.instruction5, instruction5(), sizeof( structOFFCHECKA.instruction5));
	structOFFCHECKA.instruction5Zi = instruction5Zi();
	strncpy (structOFFCHECKA.circle5, circle5(), sizeof( structOFFCHECKA.circle5));
	structOFFCHECKA.circle5Zi = circle5Zi();
	strncpy (structOFFCHECKA.toc, toc(), sizeof( structOFFCHECKA.toc));
	structOFFCHECKA.tocZi = tocZi();
	strncpy (structOFFCHECKA.tom, tom(), sizeof( structOFFCHECKA.tom));
	structOFFCHECKA.tomZi = tomZi();
	strncpy (structOFFCHECKA.mop, mop(), sizeof( structOFFCHECKA.mop));
	structOFFCHECKA.mopZi = mopZi();
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
OFFCHECKA operator+(const OFFCHECKA &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const OFFCHECKA& operator=(const OFFCHECKA &inst);

     
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

//char* coilno = Unit[-]:冷轧卷号.Limit:[-,-]
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

//char* defectname1 = Unit[-]:缺陷名称1.Limit:[-,-]
char*  defectname1() const
{
   return ((char*)c_defectname1);
}

void  set_defectname1 (const char* arg)
{
   strncpy((char*)c_defectname1, arg, sizeof(c_defectname1));
    c_defectname1[sizeof(c_defectname1)-1] = '\0';
   s_defectname1Zi = 0;
   return;
}

short   defectname1Zi() const
{
   return (s_defectname1Zi);
}

void  set_defectname1Zi(short arg)
{
   s_defectname1Zi= arg;
    return;
}

//char* updownsurface1 = Unit[-]:上/下表面1.Limit:[-,-]
char*  updownsurface1() const
{
   return ((char*)c_updownsurface1);
}

void  set_updownsurface1 (const char* arg)
{
   strncpy((char*)c_updownsurface1, arg, sizeof(c_updownsurface1));
    c_updownsurface1[sizeof(c_updownsurface1)-1] = '\0';
   s_updownsurface1Zi = 0;
   return;
}

short   updownsurface1Zi() const
{
   return (s_updownsurface1Zi);
}

void  set_updownsurface1Zi(short arg)
{
   s_updownsurface1Zi= arg;
    return;
}

//char* side_distance1 = Unit[mm]:距WS/DS侧距离1.Limit:[-,-]
char*  side_distance1() const
{
   return ((char*)c_side_distance1);
}

void  set_side_distance1 (const char* arg)
{
   strncpy((char*)c_side_distance1, arg, sizeof(c_side_distance1));
    c_side_distance1[sizeof(c_side_distance1)-1] = '\0';
   s_side_distance1Zi = 0;
   return;
}

short   side_distance1Zi() const
{
   return (s_side_distance1Zi);
}

void  set_side_distance1Zi(short arg)
{
   s_side_distance1Zi= arg;
    return;
}

//char* distance1 = Unit[m]:距带头/带尾距离1.Limit:[-,-]
char*  distance1() const
{
   return ((char*)c_distance1);
}

void  set_distance1 (const char* arg)
{
   strncpy((char*)c_distance1, arg, sizeof(c_distance1));
    c_distance1[sizeof(c_distance1)-1] = '\0';
   s_distance1Zi = 0;
   return;
}

short   distance1Zi() const
{
   return (s_distance1Zi);
}

void  set_distance1Zi(short arg)
{
   s_distance1Zi= arg;
    return;
}

//char* instruction1 = Unit[-]:备注1.Limit:[-,-]
char*  instruction1() const
{
   return ((char*)c_instruction1);
}

void  set_instruction1 (const char* arg)
{
   strncpy((char*)c_instruction1, arg, sizeof(c_instruction1));
    c_instruction1[sizeof(c_instruction1)-1] = '\0';
   s_instruction1Zi = 0;
   return;
}

short   instruction1Zi() const
{
   return (s_instruction1Zi);
}

void  set_instruction1Zi(short arg)
{
   s_instruction1Zi= arg;
    return;
}

//char* circle1 = Unit[mm]:周期长度1.Limit:[-,-]
char*  circle1() const
{
   return ((char*)c_circle1);
}

void  set_circle1 (const char* arg)
{
   strncpy((char*)c_circle1, arg, sizeof(c_circle1));
    c_circle1[sizeof(c_circle1)-1] = '\0';
   s_circle1Zi = 0;
   return;
}

short   circle1Zi() const
{
   return (s_circle1Zi);
}

void  set_circle1Zi(short arg)
{
   s_circle1Zi= arg;
    return;
}

//char* checkresult1 = Unit[-]:一检判定结果(合格/封闭/废品).Limit:[-,-]
char*  checkresult1() const
{
   return ((char*)c_checkresult1);
}

void  set_checkresult1 (const char* arg)
{
   strncpy((char*)c_checkresult1, arg, sizeof(c_checkresult1));
    c_checkresult1[sizeof(c_checkresult1)-1] = '\0';
   s_checkresult1Zi = 0;
   return;
}

short   checkresult1Zi() const
{
   return (s_checkresult1Zi);
}

void  set_checkresult1Zi(short arg)
{
   s_checkresult1Zi= arg;
    return;
}

//char* codeman1 = Unit[-]:记录人.Limit:[-,-]
char*  codeman1() const
{
   return ((char*)c_codeman1);
}

void  set_codeman1 (const char* arg)
{
   strncpy((char*)c_codeman1, arg, sizeof(c_codeman1));
    c_codeman1[sizeof(c_codeman1)-1] = '\0';
   s_codeman1Zi = 0;
   return;
}

short   codeman1Zi() const
{
   return (s_codeman1Zi);
}

void  set_codeman1Zi(short arg)
{
   s_codeman1Zi= arg;
    return;
}

//char* defectname2 = Unit[-]:缺陷名称2.Limit:[-,-]
char*  defectname2() const
{
   return ((char*)c_defectname2);
}

void  set_defectname2 (const char* arg)
{
   strncpy((char*)c_defectname2, arg, sizeof(c_defectname2));
    c_defectname2[sizeof(c_defectname2)-1] = '\0';
   s_defectname2Zi = 0;
   return;
}

short   defectname2Zi() const
{
   return (s_defectname2Zi);
}

void  set_defectname2Zi(short arg)
{
   s_defectname2Zi= arg;
    return;
}

//char* updownsurface2 = Unit[-]:上/下表面2.Limit:[-,-]
char*  updownsurface2() const
{
   return ((char*)c_updownsurface2);
}

void  set_updownsurface2 (const char* arg)
{
   strncpy((char*)c_updownsurface2, arg, sizeof(c_updownsurface2));
    c_updownsurface2[sizeof(c_updownsurface2)-1] = '\0';
   s_updownsurface2Zi = 0;
   return;
}

short   updownsurface2Zi() const
{
   return (s_updownsurface2Zi);
}

void  set_updownsurface2Zi(short arg)
{
   s_updownsurface2Zi= arg;
    return;
}

//char* side_distance2 = Unit[mm]:距WS/DS侧距离2.Limit:[-,-]
char*  side_distance2() const
{
   return ((char*)c_side_distance2);
}

void  set_side_distance2 (const char* arg)
{
   strncpy((char*)c_side_distance2, arg, sizeof(c_side_distance2));
    c_side_distance2[sizeof(c_side_distance2)-1] = '\0';
   s_side_distance2Zi = 0;
   return;
}

short   side_distance2Zi() const
{
   return (s_side_distance2Zi);
}

void  set_side_distance2Zi(short arg)
{
   s_side_distance2Zi= arg;
    return;
}

//char* distance2 = Unit[m]:距带头/带尾距离2.Limit:[-,-]
char*  distance2() const
{
   return ((char*)c_distance2);
}

void  set_distance2 (const char* arg)
{
   strncpy((char*)c_distance2, arg, sizeof(c_distance2));
    c_distance2[sizeof(c_distance2)-1] = '\0';
   s_distance2Zi = 0;
   return;
}

short   distance2Zi() const
{
   return (s_distance2Zi);
}

void  set_distance2Zi(short arg)
{
   s_distance2Zi= arg;
    return;
}

//char* instruction2 = Unit[-]:备注2.Limit:[-,-]
char*  instruction2() const
{
   return ((char*)c_instruction2);
}

void  set_instruction2 (const char* arg)
{
   strncpy((char*)c_instruction2, arg, sizeof(c_instruction2));
    c_instruction2[sizeof(c_instruction2)-1] = '\0';
   s_instruction2Zi = 0;
   return;
}

short   instruction2Zi() const
{
   return (s_instruction2Zi);
}

void  set_instruction2Zi(short arg)
{
   s_instruction2Zi= arg;
    return;
}

//char* circle2 = Unit[mm]:周期长度2.Limit:[-,-]
char*  circle2() const
{
   return ((char*)c_circle2);
}

void  set_circle2 (const char* arg)
{
   strncpy((char*)c_circle2, arg, sizeof(c_circle2));
    c_circle2[sizeof(c_circle2)-1] = '\0';
   s_circle2Zi = 0;
   return;
}

short   circle2Zi() const
{
   return (s_circle2Zi);
}

void  set_circle2Zi(short arg)
{
   s_circle2Zi= arg;
    return;
}

//char* defectname3 = Unit[-]:缺陷名称3.Limit:[-,-]
char*  defectname3() const
{
   return ((char*)c_defectname3);
}

void  set_defectname3 (const char* arg)
{
   strncpy((char*)c_defectname3, arg, sizeof(c_defectname3));
    c_defectname3[sizeof(c_defectname3)-1] = '\0';
   s_defectname3Zi = 0;
   return;
}

short   defectname3Zi() const
{
   return (s_defectname3Zi);
}

void  set_defectname3Zi(short arg)
{
   s_defectname3Zi= arg;
    return;
}

//char* updownsurface3 = Unit[-]:上/下表面3.Limit:[-,-]
char*  updownsurface3() const
{
   return ((char*)c_updownsurface3);
}

void  set_updownsurface3 (const char* arg)
{
   strncpy((char*)c_updownsurface3, arg, sizeof(c_updownsurface3));
    c_updownsurface3[sizeof(c_updownsurface3)-1] = '\0';
   s_updownsurface3Zi = 0;
   return;
}

short   updownsurface3Zi() const
{
   return (s_updownsurface3Zi);
}

void  set_updownsurface3Zi(short arg)
{
   s_updownsurface3Zi= arg;
    return;
}

//char* side_distance3 = Unit[mm]:距WS/DS侧距离3.Limit:[-,-]
char*  side_distance3() const
{
   return ((char*)c_side_distance3);
}

void  set_side_distance3 (const char* arg)
{
   strncpy((char*)c_side_distance3, arg, sizeof(c_side_distance3));
    c_side_distance3[sizeof(c_side_distance3)-1] = '\0';
   s_side_distance3Zi = 0;
   return;
}

short   side_distance3Zi() const
{
   return (s_side_distance3Zi);
}

void  set_side_distance3Zi(short arg)
{
   s_side_distance3Zi= arg;
    return;
}

//char* distance3 = Unit[m]:距带头/带尾距离3.Limit:[-,-]
char*  distance3() const
{
   return ((char*)c_distance3);
}

void  set_distance3 (const char* arg)
{
   strncpy((char*)c_distance3, arg, sizeof(c_distance3));
    c_distance3[sizeof(c_distance3)-1] = '\0';
   s_distance3Zi = 0;
   return;
}

short   distance3Zi() const
{
   return (s_distance3Zi);
}

void  set_distance3Zi(short arg)
{
   s_distance3Zi= arg;
    return;
}

//char* instruction3 = Unit[-]:备注3.Limit:[-,-]
char*  instruction3() const
{
   return ((char*)c_instruction3);
}

void  set_instruction3 (const char* arg)
{
   strncpy((char*)c_instruction3, arg, sizeof(c_instruction3));
    c_instruction3[sizeof(c_instruction3)-1] = '\0';
   s_instruction3Zi = 0;
   return;
}

short   instruction3Zi() const
{
   return (s_instruction3Zi);
}

void  set_instruction3Zi(short arg)
{
   s_instruction3Zi= arg;
    return;
}

//char* circle3 = Unit[mm]:周期长度3.Limit:[-,-]
char*  circle3() const
{
   return ((char*)c_circle3);
}

void  set_circle3 (const char* arg)
{
   strncpy((char*)c_circle3, arg, sizeof(c_circle3));
    c_circle3[sizeof(c_circle3)-1] = '\0';
   s_circle3Zi = 0;
   return;
}

short   circle3Zi() const
{
   return (s_circle3Zi);
}

void  set_circle3Zi(short arg)
{
   s_circle3Zi= arg;
    return;
}

//char* defectname4 = Unit[-]:缺陷名称4.Limit:[-,-]
char*  defectname4() const
{
   return ((char*)c_defectname4);
}

void  set_defectname4 (const char* arg)
{
   strncpy((char*)c_defectname4, arg, sizeof(c_defectname4));
    c_defectname4[sizeof(c_defectname4)-1] = '\0';
   s_defectname4Zi = 0;
   return;
}

short   defectname4Zi() const
{
   return (s_defectname4Zi);
}

void  set_defectname4Zi(short arg)
{
   s_defectname4Zi= arg;
    return;
}

//char* updownsurface4 = Unit[-]:上/下表面4.Limit:[-,-]
char*  updownsurface4() const
{
   return ((char*)c_updownsurface4);
}

void  set_updownsurface4 (const char* arg)
{
   strncpy((char*)c_updownsurface4, arg, sizeof(c_updownsurface4));
    c_updownsurface4[sizeof(c_updownsurface4)-1] = '\0';
   s_updownsurface4Zi = 0;
   return;
}

short   updownsurface4Zi() const
{
   return (s_updownsurface4Zi);
}

void  set_updownsurface4Zi(short arg)
{
   s_updownsurface4Zi= arg;
    return;
}

//char* side_distance4 = Unit[mm]:距WS/DS侧距离4.Limit:[-,-]
char*  side_distance4() const
{
   return ((char*)c_side_distance4);
}

void  set_side_distance4 (const char* arg)
{
   strncpy((char*)c_side_distance4, arg, sizeof(c_side_distance4));
    c_side_distance4[sizeof(c_side_distance4)-1] = '\0';
   s_side_distance4Zi = 0;
   return;
}

short   side_distance4Zi() const
{
   return (s_side_distance4Zi);
}

void  set_side_distance4Zi(short arg)
{
   s_side_distance4Zi= arg;
    return;
}

//char* distance4 = Unit[m]:距带头/带尾距离4.Limit:[-,-]
char*  distance4() const
{
   return ((char*)c_distance4);
}

void  set_distance4 (const char* arg)
{
   strncpy((char*)c_distance4, arg, sizeof(c_distance4));
    c_distance4[sizeof(c_distance4)-1] = '\0';
   s_distance4Zi = 0;
   return;
}

short   distance4Zi() const
{
   return (s_distance4Zi);
}

void  set_distance4Zi(short arg)
{
   s_distance4Zi= arg;
    return;
}

//char* instruction4 = Unit[-]:备注4.Limit:[-,-]
char*  instruction4() const
{
   return ((char*)c_instruction4);
}

void  set_instruction4 (const char* arg)
{
   strncpy((char*)c_instruction4, arg, sizeof(c_instruction4));
    c_instruction4[sizeof(c_instruction4)-1] = '\0';
   s_instruction4Zi = 0;
   return;
}

short   instruction4Zi() const
{
   return (s_instruction4Zi);
}

void  set_instruction4Zi(short arg)
{
   s_instruction4Zi= arg;
    return;
}

//char* circle4 = Unit[mm]:周期长度4.Limit:[-,-]
char*  circle4() const
{
   return ((char*)c_circle4);
}

void  set_circle4 (const char* arg)
{
   strncpy((char*)c_circle4, arg, sizeof(c_circle4));
    c_circle4[sizeof(c_circle4)-1] = '\0';
   s_circle4Zi = 0;
   return;
}

short   circle4Zi() const
{
   return (s_circle4Zi);
}

void  set_circle4Zi(short arg)
{
   s_circle4Zi= arg;
    return;
}

//char* defectname5 = Unit[-]:缺陷名称5.Limit:[-,-]
char*  defectname5() const
{
   return ((char*)c_defectname5);
}

void  set_defectname5 (const char* arg)
{
   strncpy((char*)c_defectname5, arg, sizeof(c_defectname5));
    c_defectname5[sizeof(c_defectname5)-1] = '\0';
   s_defectname5Zi = 0;
   return;
}

short   defectname5Zi() const
{
   return (s_defectname5Zi);
}

void  set_defectname5Zi(short arg)
{
   s_defectname5Zi= arg;
    return;
}

//char* updownsurface5 = Unit[-]:上/下表面5.Limit:[-,-]
char*  updownsurface5() const
{
   return ((char*)c_updownsurface5);
}

void  set_updownsurface5 (const char* arg)
{
   strncpy((char*)c_updownsurface5, arg, sizeof(c_updownsurface5));
    c_updownsurface5[sizeof(c_updownsurface5)-1] = '\0';
   s_updownsurface5Zi = 0;
   return;
}

short   updownsurface5Zi() const
{
   return (s_updownsurface5Zi);
}

void  set_updownsurface5Zi(short arg)
{
   s_updownsurface5Zi= arg;
    return;
}

//char* side_distance5 = Unit[mm]:距WS/DS侧距离5.Limit:[-,-]
char*  side_distance5() const
{
   return ((char*)c_side_distance5);
}

void  set_side_distance5 (const char* arg)
{
   strncpy((char*)c_side_distance5, arg, sizeof(c_side_distance5));
    c_side_distance5[sizeof(c_side_distance5)-1] = '\0';
   s_side_distance5Zi = 0;
   return;
}

short   side_distance5Zi() const
{
   return (s_side_distance5Zi);
}

void  set_side_distance5Zi(short arg)
{
   s_side_distance5Zi= arg;
    return;
}

//char* distance5 = Unit[m]:距带头/带尾距离5.Limit:[-,-]
char*  distance5() const
{
   return ((char*)c_distance5);
}

void  set_distance5 (const char* arg)
{
   strncpy((char*)c_distance5, arg, sizeof(c_distance5));
    c_distance5[sizeof(c_distance5)-1] = '\0';
   s_distance5Zi = 0;
   return;
}

short   distance5Zi() const
{
   return (s_distance5Zi);
}

void  set_distance5Zi(short arg)
{
   s_distance5Zi= arg;
    return;
}

//char* instruction5 = Unit[-]:备注5.Limit:[-,-]
char*  instruction5() const
{
   return ((char*)c_instruction5);
}

void  set_instruction5 (const char* arg)
{
   strncpy((char*)c_instruction5, arg, sizeof(c_instruction5));
    c_instruction5[sizeof(c_instruction5)-1] = '\0';
   s_instruction5Zi = 0;
   return;
}

short   instruction5Zi() const
{
   return (s_instruction5Zi);
}

void  set_instruction5Zi(short arg)
{
   s_instruction5Zi= arg;
    return;
}

//char* circle5 = Unit[mm]:周期长度5.Limit:[-,-]
char*  circle5() const
{
   return ((char*)c_circle5);
}

void  set_circle5 (const char* arg)
{
   strncpy((char*)c_circle5, arg, sizeof(c_circle5));
    c_circle5[sizeof(c_circle5)-1] = '\0';
   s_circle5Zi = 0;
   return;
}

short   circle5Zi() const
{
   return (s_circle5Zi);
}

void  set_circle5Zi(short arg)
{
   s_circle5Zi= arg;
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
#endif //OFFCHECKA_H

