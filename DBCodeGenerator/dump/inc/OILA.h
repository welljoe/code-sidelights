/* ********************************************************************/
/* *   File               :    OILA.h
                             
/* *   Short Description  :    Database Class ,ACCOUNT OILA TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         OILA_H        
#define      OILA_H        

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class OILA
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
//char     expno = Unit[-]:实验编号.Limit:[-,-]
char     c_expno[17];
//char     exptime = Unit[-]:实验时间.Limit:[-,-]
char     c_exptime[33];
short    s_exptimeZi;
//float    boxlevel = Unit[-]:取样时箱体液位.Limit:[-,-]
float    f_boxlevel;
short    s_boxlevelZi;
//char     cycflag = Unit[-]:系统是否循环.Limit:[-,-]
char     c_cycflag[9];
short    s_cycflagZi;
//char     samplepos = Unit[-]:取样位置.Limit:[-,-]
char     c_samplepos[9];
short    s_sampleposZi;
//float    density = Unit[-]:浓度.Limit:[-,-]
float    f_density;
short    s_densityZi;
//float    ph = Unit[-]:PH值.Limit:[-,-]
float    f_ph;
short    s_phZi;
//float    conductivity = Unit[μs/cm]:电导率.Limit:[-,-]
float    f_conductivity;
short    s_conductivityZi;
//float    sapval = Unit[mg KOH/g]:皂化值.Limit:[-,-]
float    f_sapval;
short    s_sapvalZi;
//float    iron = Unit[mg /l]:铁粉.Limit:[-,-]
float    f_iron;
short    s_ironZi;
//float    ironsoap = Unit[-]:铁皂.Limit:[-,-]
float    f_ironsoap;
short    s_ironsoapZi;
//float    stabfactor = Unit[%ESI]:稳定系数.Limit:[-,-]
float    f_stabfactor;
short    s_stabfactorZi;
//float    cl = Unit[ppm]:氯离子含量.Limit:[-,-]
float    f_cl;
short    s_clZi;
//float    freeacid = Unit[mg KOH/g]:游离酸.Limit:[-,-]
float    f_freeacid;
short    s_freeacidZi;
//float    ash = Unit[mg /Kg]:灰分.Limit:[-,-]
float    f_ash;
short    s_ashZi;
//float    particle = Unit[mg/Kg]:颗粒度.Limit:[-,-]
float    f_particle;
short    s_particleZi;
//float    eti = Unit[-]:ETI.Limit:[-,-]
float    f_eti;
short    s_etiZi;
//char     ocomment = Unit[-]:备注.Limit:[-,-]
char     c_ocomment[33];
short    s_ocommentZi;
//char     wsamplepos = Unit[-]:脱盐水取样位置.Limit:[-,-]
char     c_wsamplepos[9];
short    s_wsampleposZi;
//float    wph = Unit[-]:脱盐水PH值.Limit:[-,-]
float    f_wph;
short    s_wphZi;
//float    wconductivity = Unit[-]:脱盐水电导率.Limit:[-,-]
float    f_wconductivity;
short    s_wconductivityZi;
//float    sampledegree = Unit[-]:取样温度.Limit:[-,-]
float    f_sampledegree;
short    s_sampledegreeZi;
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
char     c_k_oildate[33];   // Unit[-]:日期.Limit:[-,-]
char     c_k_expno[17];   // Unit[-]:实验编号.Limit:[-,-]

public:
//
//Structure
//
struct STR_OILA
{
	char      oildate[33];
	char      crewno[9];
	short     crewnoZi;
	char      shiftno[9];
	short     shiftnoZi;
	char      expno[17];
	char      exptime[33];
	short     exptimeZi;
	float     boxlevel;
	short     boxlevelZi;
	char      cycflag[9];
	short     cycflagZi;
	char      samplepos[9];
	short     sampleposZi;
	float     density;
	short     densityZi;
	float     ph;
	short     phZi;
	float     conductivity;
	short     conductivityZi;
	float     sapval;
	short     sapvalZi;
	float     iron;
	short     ironZi;
	float     ironsoap;
	short     ironsoapZi;
	float     stabfactor;
	short     stabfactorZi;
	float     cl;
	short     clZi;
	float     freeacid;
	short     freeacidZi;
	float     ash;
	short     ashZi;
	float     particle;
	short     particleZi;
	float     eti;
	short     etiZi;
	char      ocomment[33];
	short     ocommentZi;
	char      wsamplepos[9];
	short     wsampleposZi;
	float     wph;
	short     wphZi;
	float     wconductivity;
	short     wconductivityZi;
	float     sampledegree;
	short     sampledegreeZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structOILA;
        
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
OILA();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~OILA();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
OILA(const OILA &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	oildate[33]= Unit[-]:日期.Limit:[-,-]
//char*	expno[17]= Unit[-]:实验编号.Limit:[-,-]
OILA( char* arg1,char* arg2);

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
	strncpy (structOILA.oildate, oildate(), sizeof( structOILA.oildate));
	strncpy (structOILA.crewno, crewno(), sizeof( structOILA.crewno));
	structOILA.crewnoZi = crewnoZi();
	strncpy (structOILA.shiftno, shiftno(), sizeof( structOILA.shiftno));
	structOILA.shiftnoZi = shiftnoZi();
	strncpy (structOILA.expno, expno(), sizeof( structOILA.expno));
	strncpy (structOILA.exptime, exptime(), sizeof( structOILA.exptime));
	structOILA.exptimeZi = exptimeZi();
	structOILA.boxlevel = boxlevel();
	structOILA.boxlevelZi = boxlevelZi();
	strncpy (structOILA.cycflag, cycflag(), sizeof( structOILA.cycflag));
	structOILA.cycflagZi = cycflagZi();
	strncpy (structOILA.samplepos, samplepos(), sizeof( structOILA.samplepos));
	structOILA.sampleposZi = sampleposZi();
	structOILA.density = density();
	structOILA.densityZi = densityZi();
	structOILA.ph = ph();
	structOILA.phZi = phZi();
	structOILA.conductivity = conductivity();
	structOILA.conductivityZi = conductivityZi();
	structOILA.sapval = sapval();
	structOILA.sapvalZi = sapvalZi();
	structOILA.iron = iron();
	structOILA.ironZi = ironZi();
	structOILA.ironsoap = ironsoap();
	structOILA.ironsoapZi = ironsoapZi();
	structOILA.stabfactor = stabfactor();
	structOILA.stabfactorZi = stabfactorZi();
	structOILA.cl = cl();
	structOILA.clZi = clZi();
	structOILA.freeacid = freeacid();
	structOILA.freeacidZi = freeacidZi();
	structOILA.ash = ash();
	structOILA.ashZi = ashZi();
	structOILA.particle = particle();
	structOILA.particleZi = particleZi();
	structOILA.eti = eti();
	structOILA.etiZi = etiZi();
	strncpy (structOILA.ocomment, ocomment(), sizeof( structOILA.ocomment));
	structOILA.ocommentZi = ocommentZi();
	strncpy (structOILA.wsamplepos, wsamplepos(), sizeof( structOILA.wsamplepos));
	structOILA.wsampleposZi = wsampleposZi();
	structOILA.wph = wph();
	structOILA.wphZi = wphZi();
	structOILA.wconductivity = wconductivity();
	structOILA.wconductivityZi = wconductivityZi();
	structOILA.sampledegree = sampledegree();
	structOILA.sampledegreeZi = sampledegreeZi();
	strncpy (structOILA.toc, toc(), sizeof( structOILA.toc));
	structOILA.tocZi = tocZi();
	strncpy (structOILA.tom, tom(), sizeof( structOILA.tom));
	structOILA.tomZi = tomZi();
	strncpy (structOILA.mop, mop(), sizeof( structOILA.mop));
	structOILA.mopZi = mopZi();
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
OILA operator+(const OILA &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const OILA& operator=(const OILA &inst);

            
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

//char*k_oildate = Unit[-]:日期.Limit:[-,-]
char*  k_oildate() const
{
   return ((char*)c_k_oildate);
}

void  set_k_oildate (const char* arg)
{
   strncpy((char*)c_k_oildate, arg, sizeof(c_k_oildate));
    c_k_oildate[sizeof(c_k_oildate)-1] = '\0';
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

//char* expno = Unit[-]:实验编号.Limit:[-,-]
char*  expno() const
{
   return ((char*)c_expno);
}

void  set_expno (const char* arg)
{
   strncpy((char*)c_expno, arg, sizeof(c_expno));
    c_expno[sizeof(c_expno)-1] = '\0';
   return;
}

//char*k_expno = Unit[-]:实验编号.Limit:[-,-]
char*  k_expno() const
{
   return ((char*)c_k_expno);
}

void  set_k_expno (const char* arg)
{
   strncpy((char*)c_k_expno, arg, sizeof(c_k_expno));
    c_k_expno[sizeof(c_k_expno)-1] = '\0';
    return;
}

//char* exptime = Unit[-]:实验时间.Limit:[-,-]
char*  exptime() const
{
   return ((char*)c_exptime);
}

void  set_exptime (const char* arg)
{
   strncpy((char*)c_exptime, arg, sizeof(c_exptime));
    c_exptime[sizeof(c_exptime)-1] = '\0';
   s_exptimeZi = 0;
   return;
}

short   exptimeZi() const
{
   return (s_exptimeZi);
}

void  set_exptimeZi(short arg)
{
   s_exptimeZi= arg;
    return;
}

//float boxlevel = Unit[-]:取样时箱体液位.Limit:[-,-]
float  boxlevel() const
{
   return (f_boxlevel);
}

void  set_boxlevel (float arg)
{
   f_boxlevel= arg;
   s_boxlevelZi = 0;
   return;
}

short   boxlevelZi() const
{
   return (s_boxlevelZi);
}

void  set_boxlevelZi(short arg)
{
   s_boxlevelZi= arg;
    return;
}

//char* cycflag = Unit[-]:系统是否循环.Limit:[-,-]
char*  cycflag() const
{
   return ((char*)c_cycflag);
}

void  set_cycflag (const char* arg)
{
   strncpy((char*)c_cycflag, arg, sizeof(c_cycflag));
    c_cycflag[sizeof(c_cycflag)-1] = '\0';
   s_cycflagZi = 0;
   return;
}

short   cycflagZi() const
{
   return (s_cycflagZi);
}

void  set_cycflagZi(short arg)
{
   s_cycflagZi= arg;
    return;
}

//char* samplepos = Unit[-]:取样位置.Limit:[-,-]
char*  samplepos() const
{
   return ((char*)c_samplepos);
}

void  set_samplepos (const char* arg)
{
   strncpy((char*)c_samplepos, arg, sizeof(c_samplepos));
    c_samplepos[sizeof(c_samplepos)-1] = '\0';
   s_sampleposZi = 0;
   return;
}

short   sampleposZi() const
{
   return (s_sampleposZi);
}

void  set_sampleposZi(short arg)
{
   s_sampleposZi= arg;
    return;
}

//float density = Unit[-]:浓度.Limit:[-,-]
float  density() const
{
   return (f_density);
}

void  set_density (float arg)
{
   f_density= arg;
   s_densityZi = 0;
   return;
}

short   densityZi() const
{
   return (s_densityZi);
}

void  set_densityZi(short arg)
{
   s_densityZi= arg;
    return;
}

//float ph = Unit[-]:PH值.Limit:[-,-]
float  ph() const
{
   return (f_ph);
}

void  set_ph (float arg)
{
   f_ph= arg;
   s_phZi = 0;
   return;
}

short   phZi() const
{
   return (s_phZi);
}

void  set_phZi(short arg)
{
   s_phZi= arg;
    return;
}

//float conductivity = Unit[μs/cm]:电导率.Limit:[-,-]
float  conductivity() const
{
   return (f_conductivity);
}

void  set_conductivity (float arg)
{
   f_conductivity= arg;
   s_conductivityZi = 0;
   return;
}

short   conductivityZi() const
{
   return (s_conductivityZi);
}

void  set_conductivityZi(short arg)
{
   s_conductivityZi= arg;
    return;
}

//float sapval = Unit[mg KOH/g]:皂化值.Limit:[-,-]
float  sapval() const
{
   return (f_sapval);
}

void  set_sapval (float arg)
{
   f_sapval= arg;
   s_sapvalZi = 0;
   return;
}

short   sapvalZi() const
{
   return (s_sapvalZi);
}

void  set_sapvalZi(short arg)
{
   s_sapvalZi= arg;
    return;
}

//float iron = Unit[mg /l]:铁粉.Limit:[-,-]
float  iron() const
{
   return (f_iron);
}

void  set_iron (float arg)
{
   f_iron= arg;
   s_ironZi = 0;
   return;
}

short   ironZi() const
{
   return (s_ironZi);
}

void  set_ironZi(short arg)
{
   s_ironZi= arg;
    return;
}

//float ironsoap = Unit[-]:铁皂.Limit:[-,-]
float  ironsoap() const
{
   return (f_ironsoap);
}

void  set_ironsoap (float arg)
{
   f_ironsoap= arg;
   s_ironsoapZi = 0;
   return;
}

short   ironsoapZi() const
{
   return (s_ironsoapZi);
}

void  set_ironsoapZi(short arg)
{
   s_ironsoapZi= arg;
    return;
}

//float stabfactor = Unit[%ESI]:稳定系数.Limit:[-,-]
float  stabfactor() const
{
   return (f_stabfactor);
}

void  set_stabfactor (float arg)
{
   f_stabfactor= arg;
   s_stabfactorZi = 0;
   return;
}

short   stabfactorZi() const
{
   return (s_stabfactorZi);
}

void  set_stabfactorZi(short arg)
{
   s_stabfactorZi= arg;
    return;
}

//float cl = Unit[ppm]:氯离子含量.Limit:[-,-]
float  cl() const
{
   return (f_cl);
}

void  set_cl (float arg)
{
   f_cl= arg;
   s_clZi = 0;
   return;
}

short   clZi() const
{
   return (s_clZi);
}

void  set_clZi(short arg)
{
   s_clZi= arg;
    return;
}

//float freeacid = Unit[mg KOH/g]:游离酸.Limit:[-,-]
float  freeacid() const
{
   return (f_freeacid);
}

void  set_freeacid (float arg)
{
   f_freeacid= arg;
   s_freeacidZi = 0;
   return;
}

short   freeacidZi() const
{
   return (s_freeacidZi);
}

void  set_freeacidZi(short arg)
{
   s_freeacidZi= arg;
    return;
}

//float ash = Unit[mg /Kg]:灰分.Limit:[-,-]
float  ash() const
{
   return (f_ash);
}

void  set_ash (float arg)
{
   f_ash= arg;
   s_ashZi = 0;
   return;
}

short   ashZi() const
{
   return (s_ashZi);
}

void  set_ashZi(short arg)
{
   s_ashZi= arg;
    return;
}

//float particle = Unit[mg/Kg]:颗粒度.Limit:[-,-]
float  particle() const
{
   return (f_particle);
}

void  set_particle (float arg)
{
   f_particle= arg;
   s_particleZi = 0;
   return;
}

short   particleZi() const
{
   return (s_particleZi);
}

void  set_particleZi(short arg)
{
   s_particleZi= arg;
    return;
}

//float eti = Unit[-]:ETI.Limit:[-,-]
float  eti() const
{
   return (f_eti);
}

void  set_eti (float arg)
{
   f_eti= arg;
   s_etiZi = 0;
   return;
}

short   etiZi() const
{
   return (s_etiZi);
}

void  set_etiZi(short arg)
{
   s_etiZi= arg;
    return;
}

//char* ocomment = Unit[-]:备注.Limit:[-,-]
char*  ocomment() const
{
   return ((char*)c_ocomment);
}

void  set_ocomment (const char* arg)
{
   strncpy((char*)c_ocomment, arg, sizeof(c_ocomment));
    c_ocomment[sizeof(c_ocomment)-1] = '\0';
   s_ocommentZi = 0;
   return;
}

short   ocommentZi() const
{
   return (s_ocommentZi);
}

void  set_ocommentZi(short arg)
{
   s_ocommentZi= arg;
    return;
}

//char* wsamplepos = Unit[-]:脱盐水取样位置.Limit:[-,-]
char*  wsamplepos() const
{
   return ((char*)c_wsamplepos);
}

void  set_wsamplepos (const char* arg)
{
   strncpy((char*)c_wsamplepos, arg, sizeof(c_wsamplepos));
    c_wsamplepos[sizeof(c_wsamplepos)-1] = '\0';
   s_wsampleposZi = 0;
   return;
}

short   wsampleposZi() const
{
   return (s_wsampleposZi);
}

void  set_wsampleposZi(short arg)
{
   s_wsampleposZi= arg;
    return;
}

//float wph = Unit[-]:脱盐水PH值.Limit:[-,-]
float  wph() const
{
   return (f_wph);
}

void  set_wph (float arg)
{
   f_wph= arg;
   s_wphZi = 0;
   return;
}

short   wphZi() const
{
   return (s_wphZi);
}

void  set_wphZi(short arg)
{
   s_wphZi= arg;
    return;
}

//float wconductivity = Unit[-]:脱盐水电导率.Limit:[-,-]
float  wconductivity() const
{
   return (f_wconductivity);
}

void  set_wconductivity (float arg)
{
   f_wconductivity= arg;
   s_wconductivityZi = 0;
   return;
}

short   wconductivityZi() const
{
   return (s_wconductivityZi);
}

void  set_wconductivityZi(short arg)
{
   s_wconductivityZi= arg;
    return;
}

//float sampledegree = Unit[-]:取样温度.Limit:[-,-]
float  sampledegree() const
{
   return (f_sampledegree);
}

void  set_sampledegree (float arg)
{
   f_sampledegree= arg;
   s_sampledegreeZi = 0;
   return;
}

short   sampledegreeZi() const
{
   return (s_sampledegreeZi);
}

void  set_sampledegreeZi(short arg)
{
   s_sampledegreeZi= arg;
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
#endif //OILA_H

