/* ********************************************************************/
/* *   File               :    MATDAT.h
                             
/* *   Short Description  :    Database Class ,ACCOUNT MATDAT TABLE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         MATDAT_H      
#define      MATDAT_H      

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class MATDAT
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
//char     alloycode = Unit[-]:Unit[[-]]:alloy name.Limit:[-,-]
char     c_alloycode[33];
//float    alper = Unit[-]:铝含量.Limit:[-,1]
float    f_alper;
short    s_alperZi;
//float    asper = Unit[-]:砷含量.Limit:[-,1]
float    f_asper;
short    s_asperZi;
//float    bper = Unit[-]:硼含量.Limit:[-,1]
float    f_bper;
short    s_bperZi;
//float    cper = Unit[-]:碳含量.Limit:[-,1]
float    f_cper;
short    s_cperZi;
//float    caper = Unit[-]:钙含量.Limit:[-,1]
float    f_caper;
short    s_caperZi;
//float    coper = Unit[-]:钴含量.Limit:[-,1]
float    f_coper;
short    s_coperZi;
//float    crper = Unit[-]:铬含量.Limit:[-,1]
float    f_crper;
short    s_crperZi;
//float    cuper = Unit[-]:铜含量.Limit:[-,1]
float    f_cuper;
short    s_cuperZi;
//float    mnper = Unit[-]:锰含量.Limit:[-,1]
float    f_mnper;
short    s_mnperZi;
//float    moper = Unit[-]:钼含量.Limit:[-,1]
float    f_moper;
short    s_moperZi;
//float    nbper = Unit[-]:铌含量.Limit:[-,1]
float    f_nbper;
short    s_nbperZi;
//float    niper = Unit[-]:镍含量.Limit:[-,1]
float    f_niper;
short    s_niperZi;
//float    nper = Unit[-]:氮含量.Limit:[-,1]
float    f_nper;
short    s_nperZi;
//float    pbper = Unit[-]:铅含量.Limit:[-,1]
float    f_pbper;
short    s_pbperZi;
//float    pper = Unit[-]:磷含量.Limit:[-,1]
float    f_pper;
short    s_pperZi;
//float    sper = Unit[-]:硫含量.Limit:[-,1]
float    f_sper;
short    s_sperZi;
//float    siper = Unit[-]:硅含量.Limit:[-,1]
float    f_siper;
short    s_siperZi;
//float    snper = Unit[-]:锡含量.Limit:[-,1]
float    f_snper;
short    s_snperZi;
//float    tiper = Unit[-]:钛含量.Limit:[-,1]
float    f_tiper;
short    s_tiperZi;
//float    vper = Unit[-]:钒含量.Limit:[-,1]
float    f_vper;
short    s_vperZi;
//float    wper = Unit[-]:钨含量.Limit:[-,1]
float    f_wper;
short    s_wperZi;
//float    x1per = Unit[-]:预留元素含量.Limit:[-,1]
float    f_x1per;
short    s_x1perZi;
//float    x2per = Unit[-]:预留元素含量.Limit:[-,1]
float    f_x2per;
short    s_x2perZi;
//float    x3per = Unit[-]:预留元素含量.Limit:[-,1]
float    f_x3per;
short    s_x3perZi;
//float    x4per = Unit[-]:预留元素含量.Limit:[-,1]
float    f_x4per;
short    s_x4perZi;
//float    x5per = Unit[-]:预留元素含量.Limit:[-,1]
float    f_x5per;
short    s_x5perZi;
//float    msinitp_ind0 = Unit[Mpa]:第1机架初始材料强度(MSINITP_IND0).Limit:[-,-]
float    f_msinitp_ind0;
short    s_msinitp_ind0Zi;
//float    msinitp_ind1 = Unit[Mpa]:第2机架初始材料强度(MSINITP_IND1).Limit:[-,-]
float    f_msinitp_ind1;
short    s_msinitp_ind1Zi;
//float    msinitp_ind2 = Unit[Mpa]:第3机架初始材料强度(MSINITP_IND2).Limit:[-,-]
float    f_msinitp_ind2;
short    s_msinitp_ind2Zi;
//float    msinitp_ind3 = Unit[Mpa]:第4机架初始材料强度(MSINITP_IND3).Limit:[-,-]
float    f_msinitp_ind3;
short    s_msinitp_ind3Zi;
//float    msinitp_ind4 = Unit[Mpa]:第5机架初始材料强度(MSINITP_IND4).Limit:[-,-]
float    f_msinitp_ind4;
short    s_msinitp_ind4Zi;
//float    msp_ind0 = Unit[Mpa]:第1机架自学习后的材料强度(MSP_IND0).Limit:[-,-]
float    f_msp_ind0;
short    s_msp_ind0Zi;
//float    msp_ind1 = Unit[Mpa]:第2机架自学习后的材料强度(MSP_IND1).Limit:[-,-]
float    f_msp_ind1;
short    s_msp_ind1Zi;
//float    msp_ind2 = Unit[Mpa]:第3机架自学习后的材料强度(MSP_IND2).Limit:[-,-]
float    f_msp_ind2;
short    s_msp_ind2Zi;
//float    msp_ind3 = Unit[Mpa]:第4机架自学习后的材料强度(MSP_IND3).Limit:[-,-]
float    f_msp_ind3;
short    s_msp_ind3Zi;
//float    msp_ind4 = Unit[Mpa]:第5机架自学习后的材料强度(MSP_IND4).Limit:[-,-]
float    f_msp_ind4;
short    s_msp_ind4Zi;
//float    epsp_ind0 = Unit[-]:第1机架假设压下量(EPSP_IND0).Limit:[-,1]
float    f_epsp_ind0;
short    s_epsp_ind0Zi;
//float    epsp_ind1 = Unit[-]:第2机架假设压下量(EPSP_IND1).Limit:[-,1]
float    f_epsp_ind1;
short    s_epsp_ind1Zi;
//float    epsp_ind2 = Unit[-]:第3机架假设压下量(EPSP_IND2).Limit:[-,1]
float    f_epsp_ind2;
short    s_epsp_ind2Zi;
//float    epsp_ind3 = Unit[-]:第4机架假设压下量(EPSP_IND3).Limit:[-,1]
float    f_epsp_ind3;
short    s_epsp_ind3Zi;
//float    epsp_ind4 = Unit[-]:第5机架假设压下量(EPSP_IND4).Limit:[-,1]
float    f_epsp_ind4;
short    s_epsp_ind4Zi;
//float    msi = Unit[Mpa]:指数方程初始材料强度(MSI).Limit:[-,-]
float    f_msi;
short    s_msiZi;
//float    mse = Unit[Mpa]:指数方程初始材料强度增量(MSE).Limit:[-,-]
float    f_mse;
short    s_mseZi;
//float    msiinit = Unit[Mpa]:指数方程自学习后的材料强度(MSIINIT).Limit:[-,-]
float    f_msiinit;
short    s_msiinitZi;
//float    mseinit = Unit[Mpa]:指数方程自学习后的材料强度增量(MSEINIT).Limit:[-,-]
float    f_mseinit;
short    s_mseinitZi;
//float    counter = Unit[-]:该材料自学习次数(COUNTER).Limit:[-,-]
float    f_counter;
short    s_counterZi;
//char     gmt = Unit[-]:该材料最后一次自学习时间(GMT).Limit:[-,-]
char     c_gmt[15];
short    s_gmtZi;
//float    density = Unit[kg/m3]:材料密度(DENSITY).Limit:[-,-]
float    f_density;
short    s_densityZi;
//float    emod = Unit[N/m2]:材料弹性模量(EMOD).Limit:[-,-]
float    f_emod;
short    s_emodZi;
//float    cw = Unit[J/°Ckg]:材料热容量(CW).Limit:[-,-]
float    f_cw;
short    s_cwZi;
//float    lambda = Unit[W/m degC]:材料热传导率(LAMBDA).Limit:[-,-]
float    f_lambda;
short    s_lambdaZi;
//float    mstcor = Unit[-]:temperature drop factor(MSTCOR).Limit:[-,-]
float    f_mstcor;
short    s_mstcorZi;
//float    mstgradient = Unit[grdC]:temperature gradient(MSTGRADIENT).Limit:[-,-]
float    f_mstgradient;
short    s_mstgradientZi;
//float    mstinflectionx = Unit[grdC]:temperature at inflection point(MSTINFLECTIONX).Limit:[-,-]
float    f_mstinflectionx;
short    s_mstinflectionxZi;
//float    lpara = Unit[Mpa]:变形抗力的L参数.Limit:[-,1000]
float    f_lpara;
short    s_lparaZi;
//float    mpara = Unit[-]:变形抗力的M参数.Limit:[-,1000]
float    f_mpara;
short    s_mparaZi;
//float    npara = Unit[-]:变形抗力的N参数.Limit:[-,1000]
float    f_npara;
short    s_nparaZi;
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
char     c_k_alloycode[33];   // Unit[-]:Unit[[-]]:alloy name.Limit:[-,-]

public:
//
//Structure
//
struct STR_MATDAT
{
	char      alloycode[33];
	float     alper;
	short     alperZi;
	float     asper;
	short     asperZi;
	float     bper;
	short     bperZi;
	float     cper;
	short     cperZi;
	float     caper;
	short     caperZi;
	float     coper;
	short     coperZi;
	float     crper;
	short     crperZi;
	float     cuper;
	short     cuperZi;
	float     mnper;
	short     mnperZi;
	float     moper;
	short     moperZi;
	float     nbper;
	short     nbperZi;
	float     niper;
	short     niperZi;
	float     nper;
	short     nperZi;
	float     pbper;
	short     pbperZi;
	float     pper;
	short     pperZi;
	float     sper;
	short     sperZi;
	float     siper;
	short     siperZi;
	float     snper;
	short     snperZi;
	float     tiper;
	short     tiperZi;
	float     vper;
	short     vperZi;
	float     wper;
	short     wperZi;
	float     x1per;
	short     x1perZi;
	float     x2per;
	short     x2perZi;
	float     x3per;
	short     x3perZi;
	float     x4per;
	short     x4perZi;
	float     x5per;
	short     x5perZi;
	float     msinitp_ind0;
	short     msinitp_ind0Zi;
	float     msinitp_ind1;
	short     msinitp_ind1Zi;
	float     msinitp_ind2;
	short     msinitp_ind2Zi;
	float     msinitp_ind3;
	short     msinitp_ind3Zi;
	float     msinitp_ind4;
	short     msinitp_ind4Zi;
	float     msp_ind0;
	short     msp_ind0Zi;
	float     msp_ind1;
	short     msp_ind1Zi;
	float     msp_ind2;
	short     msp_ind2Zi;
	float     msp_ind3;
	short     msp_ind3Zi;
	float     msp_ind4;
	short     msp_ind4Zi;
	float     epsp_ind0;
	short     epsp_ind0Zi;
	float     epsp_ind1;
	short     epsp_ind1Zi;
	float     epsp_ind2;
	short     epsp_ind2Zi;
	float     epsp_ind3;
	short     epsp_ind3Zi;
	float     epsp_ind4;
	short     epsp_ind4Zi;
	float     msi;
	short     msiZi;
	float     mse;
	short     mseZi;
	float     msiinit;
	short     msiinitZi;
	float     mseinit;
	short     mseinitZi;
	float     counter;
	short     counterZi;
	char      gmt[15];
	short     gmtZi;
	float     density;
	short     densityZi;
	float     emod;
	short     emodZi;
	float     cw;
	short     cwZi;
	float     lambda;
	short     lambdaZi;
	float     mstcor;
	short     mstcorZi;
	float     mstgradient;
	short     mstgradientZi;
	float     mstinflectionx;
	short     mstinflectionxZi;
	float     lpara;
	short     lparaZi;
	float     mpara;
	short     mparaZi;
	float     npara;
	short     nparaZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structMATDAT;
  
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
MATDAT();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~MATDAT();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
MATDAT(const MATDAT &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	alloycode[33]= Unit[-]:Unit[[-]]:alloy name.Limit:[-,-]
MATDAT( char* arg1);

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
	strncpy (structMATDAT.alloycode, alloycode(), sizeof( structMATDAT.alloycode));
	structMATDAT.alper = alper();
	structMATDAT.alperZi = alperZi();
	structMATDAT.asper = asper();
	structMATDAT.asperZi = asperZi();
	structMATDAT.bper = bper();
	structMATDAT.bperZi = bperZi();
	structMATDAT.cper = cper();
	structMATDAT.cperZi = cperZi();
	structMATDAT.caper = caper();
	structMATDAT.caperZi = caperZi();
	structMATDAT.coper = coper();
	structMATDAT.coperZi = coperZi();
	structMATDAT.crper = crper();
	structMATDAT.crperZi = crperZi();
	structMATDAT.cuper = cuper();
	structMATDAT.cuperZi = cuperZi();
	structMATDAT.mnper = mnper();
	structMATDAT.mnperZi = mnperZi();
	structMATDAT.moper = moper();
	structMATDAT.moperZi = moperZi();
	structMATDAT.nbper = nbper();
	structMATDAT.nbperZi = nbperZi();
	structMATDAT.niper = niper();
	structMATDAT.niperZi = niperZi();
	structMATDAT.nper = nper();
	structMATDAT.nperZi = nperZi();
	structMATDAT.pbper = pbper();
	structMATDAT.pbperZi = pbperZi();
	structMATDAT.pper = pper();
	structMATDAT.pperZi = pperZi();
	structMATDAT.sper = sper();
	structMATDAT.sperZi = sperZi();
	structMATDAT.siper = siper();
	structMATDAT.siperZi = siperZi();
	structMATDAT.snper = snper();
	structMATDAT.snperZi = snperZi();
	structMATDAT.tiper = tiper();
	structMATDAT.tiperZi = tiperZi();
	structMATDAT.vper = vper();
	structMATDAT.vperZi = vperZi();
	structMATDAT.wper = wper();
	structMATDAT.wperZi = wperZi();
	structMATDAT.x1per = x1per();
	structMATDAT.x1perZi = x1perZi();
	structMATDAT.x2per = x2per();
	structMATDAT.x2perZi = x2perZi();
	structMATDAT.x3per = x3per();
	structMATDAT.x3perZi = x3perZi();
	structMATDAT.x4per = x4per();
	structMATDAT.x4perZi = x4perZi();
	structMATDAT.x5per = x5per();
	structMATDAT.x5perZi = x5perZi();
	structMATDAT.msinitp_ind0 = msinitp_ind0();
	structMATDAT.msinitp_ind0Zi = msinitp_ind0Zi();
	structMATDAT.msinitp_ind1 = msinitp_ind1();
	structMATDAT.msinitp_ind1Zi = msinitp_ind1Zi();
	structMATDAT.msinitp_ind2 = msinitp_ind2();
	structMATDAT.msinitp_ind2Zi = msinitp_ind2Zi();
	structMATDAT.msinitp_ind3 = msinitp_ind3();
	structMATDAT.msinitp_ind3Zi = msinitp_ind3Zi();
	structMATDAT.msinitp_ind4 = msinitp_ind4();
	structMATDAT.msinitp_ind4Zi = msinitp_ind4Zi();
	structMATDAT.msp_ind0 = msp_ind0();
	structMATDAT.msp_ind0Zi = msp_ind0Zi();
	structMATDAT.msp_ind1 = msp_ind1();
	structMATDAT.msp_ind1Zi = msp_ind1Zi();
	structMATDAT.msp_ind2 = msp_ind2();
	structMATDAT.msp_ind2Zi = msp_ind2Zi();
	structMATDAT.msp_ind3 = msp_ind3();
	structMATDAT.msp_ind3Zi = msp_ind3Zi();
	structMATDAT.msp_ind4 = msp_ind4();
	structMATDAT.msp_ind4Zi = msp_ind4Zi();
	structMATDAT.epsp_ind0 = epsp_ind0();
	structMATDAT.epsp_ind0Zi = epsp_ind0Zi();
	structMATDAT.epsp_ind1 = epsp_ind1();
	structMATDAT.epsp_ind1Zi = epsp_ind1Zi();
	structMATDAT.epsp_ind2 = epsp_ind2();
	structMATDAT.epsp_ind2Zi = epsp_ind2Zi();
	structMATDAT.epsp_ind3 = epsp_ind3();
	structMATDAT.epsp_ind3Zi = epsp_ind3Zi();
	structMATDAT.epsp_ind4 = epsp_ind4();
	structMATDAT.epsp_ind4Zi = epsp_ind4Zi();
	structMATDAT.msi = msi();
	structMATDAT.msiZi = msiZi();
	structMATDAT.mse = mse();
	structMATDAT.mseZi = mseZi();
	structMATDAT.msiinit = msiinit();
	structMATDAT.msiinitZi = msiinitZi();
	structMATDAT.mseinit = mseinit();
	structMATDAT.mseinitZi = mseinitZi();
	structMATDAT.counter = counter();
	structMATDAT.counterZi = counterZi();
	strncpy (structMATDAT.gmt, gmt(), sizeof( structMATDAT.gmt));
	structMATDAT.gmtZi = gmtZi();
	structMATDAT.density = density();
	structMATDAT.densityZi = densityZi();
	structMATDAT.emod = emod();
	structMATDAT.emodZi = emodZi();
	structMATDAT.cw = cw();
	structMATDAT.cwZi = cwZi();
	structMATDAT.lambda = lambda();
	structMATDAT.lambdaZi = lambdaZi();
	structMATDAT.mstcor = mstcor();
	structMATDAT.mstcorZi = mstcorZi();
	structMATDAT.mstgradient = mstgradient();
	structMATDAT.mstgradientZi = mstgradientZi();
	structMATDAT.mstinflectionx = mstinflectionx();
	structMATDAT.mstinflectionxZi = mstinflectionxZi();
	structMATDAT.lpara = lpara();
	structMATDAT.lparaZi = lparaZi();
	structMATDAT.mpara = mpara();
	structMATDAT.mparaZi = mparaZi();
	structMATDAT.npara = npara();
	structMATDAT.nparaZi = nparaZi();
	strncpy (structMATDAT.toc, toc(), sizeof( structMATDAT.toc));
	structMATDAT.tocZi = tocZi();
	strncpy (structMATDAT.tom, tom(), sizeof( structMATDAT.tom));
	structMATDAT.tomZi = tomZi();
	strncpy (structMATDAT.mop, mop(), sizeof( structMATDAT.mop));
	structMATDAT.mopZi = mopZi();
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
void setPrimKey(char* arg1);

//methods
public:
//this methode stores the unique key attributes
void initInsertKeys(char* arg1);

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
MATDAT operator+(const MATDAT &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const MATDAT& operator=(const MATDAT &inst);

             
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
//char* alloycode = Unit[-]:Unit[[-]]:alloy name.Limit:[-,-]
char*  alloycode() const
{
   return ((char*)c_alloycode);
}

void  set_alloycode (const char* arg)
{
   strncpy((char*)c_alloycode, arg, sizeof(c_alloycode));
    c_alloycode[sizeof(c_alloycode)-1] = '\0';
   return;
}

//char*k_alloycode = Unit[-]:Unit[[-]]:alloy name.Limit:[-,-]
char*  k_alloycode() const
{
   return ((char*)c_k_alloycode);
}

void  set_k_alloycode (const char* arg)
{
   strncpy((char*)c_k_alloycode, arg, sizeof(c_k_alloycode));
    c_k_alloycode[sizeof(c_k_alloycode)-1] = '\0';
    return;
}

//float alper = Unit[-]:铝含量.Limit:[-,1]
float  alper() const
{
   return (f_alper);
}

void  set_alper (float arg)
{
   f_alper= arg;
   s_alperZi = 0;
   return;
}

short   alperZi() const
{
   return (s_alperZi);
}

void  set_alperZi(short arg)
{
   s_alperZi= arg;
    return;
}

//float asper = Unit[-]:砷含量.Limit:[-,1]
float  asper() const
{
   return (f_asper);
}

void  set_asper (float arg)
{
   f_asper= arg;
   s_asperZi = 0;
   return;
}

short   asperZi() const
{
   return (s_asperZi);
}

void  set_asperZi(short arg)
{
   s_asperZi= arg;
    return;
}

//float bper = Unit[-]:硼含量.Limit:[-,1]
float  bper() const
{
   return (f_bper);
}

void  set_bper (float arg)
{
   f_bper= arg;
   s_bperZi = 0;
   return;
}

short   bperZi() const
{
   return (s_bperZi);
}

void  set_bperZi(short arg)
{
   s_bperZi= arg;
    return;
}

//float cper = Unit[-]:碳含量.Limit:[-,1]
float  cper() const
{
   return (f_cper);
}

void  set_cper (float arg)
{
   f_cper= arg;
   s_cperZi = 0;
   return;
}

short   cperZi() const
{
   return (s_cperZi);
}

void  set_cperZi(short arg)
{
   s_cperZi= arg;
    return;
}

//float caper = Unit[-]:钙含量.Limit:[-,1]
float  caper() const
{
   return (f_caper);
}

void  set_caper (float arg)
{
   f_caper= arg;
   s_caperZi = 0;
   return;
}

short   caperZi() const
{
   return (s_caperZi);
}

void  set_caperZi(short arg)
{
   s_caperZi= arg;
    return;
}

//float coper = Unit[-]:钴含量.Limit:[-,1]
float  coper() const
{
   return (f_coper);
}

void  set_coper (float arg)
{
   f_coper= arg;
   s_coperZi = 0;
   return;
}

short   coperZi() const
{
   return (s_coperZi);
}

void  set_coperZi(short arg)
{
   s_coperZi= arg;
    return;
}

//float crper = Unit[-]:铬含量.Limit:[-,1]
float  crper() const
{
   return (f_crper);
}

void  set_crper (float arg)
{
   f_crper= arg;
   s_crperZi = 0;
   return;
}

short   crperZi() const
{
   return (s_crperZi);
}

void  set_crperZi(short arg)
{
   s_crperZi= arg;
    return;
}

//float cuper = Unit[-]:铜含量.Limit:[-,1]
float  cuper() const
{
   return (f_cuper);
}

void  set_cuper (float arg)
{
   f_cuper= arg;
   s_cuperZi = 0;
   return;
}

short   cuperZi() const
{
   return (s_cuperZi);
}

void  set_cuperZi(short arg)
{
   s_cuperZi= arg;
    return;
}

//float mnper = Unit[-]:锰含量.Limit:[-,1]
float  mnper() const
{
   return (f_mnper);
}

void  set_mnper (float arg)
{
   f_mnper= arg;
   s_mnperZi = 0;
   return;
}

short   mnperZi() const
{
   return (s_mnperZi);
}

void  set_mnperZi(short arg)
{
   s_mnperZi= arg;
    return;
}

//float moper = Unit[-]:钼含量.Limit:[-,1]
float  moper() const
{
   return (f_moper);
}

void  set_moper (float arg)
{
   f_moper= arg;
   s_moperZi = 0;
   return;
}

short   moperZi() const
{
   return (s_moperZi);
}

void  set_moperZi(short arg)
{
   s_moperZi= arg;
    return;
}

//float nbper = Unit[-]:铌含量.Limit:[-,1]
float  nbper() const
{
   return (f_nbper);
}

void  set_nbper (float arg)
{
   f_nbper= arg;
   s_nbperZi = 0;
   return;
}

short   nbperZi() const
{
   return (s_nbperZi);
}

void  set_nbperZi(short arg)
{
   s_nbperZi= arg;
    return;
}

//float niper = Unit[-]:镍含量.Limit:[-,1]
float  niper() const
{
   return (f_niper);
}

void  set_niper (float arg)
{
   f_niper= arg;
   s_niperZi = 0;
   return;
}

short   niperZi() const
{
   return (s_niperZi);
}

void  set_niperZi(short arg)
{
   s_niperZi= arg;
    return;
}

//float nper = Unit[-]:氮含量.Limit:[-,1]
float  nper() const
{
   return (f_nper);
}

void  set_nper (float arg)
{
   f_nper= arg;
   s_nperZi = 0;
   return;
}

short   nperZi() const
{
   return (s_nperZi);
}

void  set_nperZi(short arg)
{
   s_nperZi= arg;
    return;
}

//float pbper = Unit[-]:铅含量.Limit:[-,1]
float  pbper() const
{
   return (f_pbper);
}

void  set_pbper (float arg)
{
   f_pbper= arg;
   s_pbperZi = 0;
   return;
}

short   pbperZi() const
{
   return (s_pbperZi);
}

void  set_pbperZi(short arg)
{
   s_pbperZi= arg;
    return;
}

//float pper = Unit[-]:磷含量.Limit:[-,1]
float  pper() const
{
   return (f_pper);
}

void  set_pper (float arg)
{
   f_pper= arg;
   s_pperZi = 0;
   return;
}

short   pperZi() const
{
   return (s_pperZi);
}

void  set_pperZi(short arg)
{
   s_pperZi= arg;
    return;
}

//float sper = Unit[-]:硫含量.Limit:[-,1]
float  sper() const
{
   return (f_sper);
}

void  set_sper (float arg)
{
   f_sper= arg;
   s_sperZi = 0;
   return;
}

short   sperZi() const
{
   return (s_sperZi);
}

void  set_sperZi(short arg)
{
   s_sperZi= arg;
    return;
}

//float siper = Unit[-]:硅含量.Limit:[-,1]
float  siper() const
{
   return (f_siper);
}

void  set_siper (float arg)
{
   f_siper= arg;
   s_siperZi = 0;
   return;
}

short   siperZi() const
{
   return (s_siperZi);
}

void  set_siperZi(short arg)
{
   s_siperZi= arg;
    return;
}

//float snper = Unit[-]:锡含量.Limit:[-,1]
float  snper() const
{
   return (f_snper);
}

void  set_snper (float arg)
{
   f_snper= arg;
   s_snperZi = 0;
   return;
}

short   snperZi() const
{
   return (s_snperZi);
}

void  set_snperZi(short arg)
{
   s_snperZi= arg;
    return;
}

//float tiper = Unit[-]:钛含量.Limit:[-,1]
float  tiper() const
{
   return (f_tiper);
}

void  set_tiper (float arg)
{
   f_tiper= arg;
   s_tiperZi = 0;
   return;
}

short   tiperZi() const
{
   return (s_tiperZi);
}

void  set_tiperZi(short arg)
{
   s_tiperZi= arg;
    return;
}

//float vper = Unit[-]:钒含量.Limit:[-,1]
float  vper() const
{
   return (f_vper);
}

void  set_vper (float arg)
{
   f_vper= arg;
   s_vperZi = 0;
   return;
}

short   vperZi() const
{
   return (s_vperZi);
}

void  set_vperZi(short arg)
{
   s_vperZi= arg;
    return;
}

//float wper = Unit[-]:钨含量.Limit:[-,1]
float  wper() const
{
   return (f_wper);
}

void  set_wper (float arg)
{
   f_wper= arg;
   s_wperZi = 0;
   return;
}

short   wperZi() const
{
   return (s_wperZi);
}

void  set_wperZi(short arg)
{
   s_wperZi= arg;
    return;
}

//float x1per = Unit[-]:预留元素含量.Limit:[-,1]
float  x1per() const
{
   return (f_x1per);
}

void  set_x1per (float arg)
{
   f_x1per= arg;
   s_x1perZi = 0;
   return;
}

short   x1perZi() const
{
   return (s_x1perZi);
}

void  set_x1perZi(short arg)
{
   s_x1perZi= arg;
    return;
}

//float x2per = Unit[-]:预留元素含量.Limit:[-,1]
float  x2per() const
{
   return (f_x2per);
}

void  set_x2per (float arg)
{
   f_x2per= arg;
   s_x2perZi = 0;
   return;
}

short   x2perZi() const
{
   return (s_x2perZi);
}

void  set_x2perZi(short arg)
{
   s_x2perZi= arg;
    return;
}

//float x3per = Unit[-]:预留元素含量.Limit:[-,1]
float  x3per() const
{
   return (f_x3per);
}

void  set_x3per (float arg)
{
   f_x3per= arg;
   s_x3perZi = 0;
   return;
}

short   x3perZi() const
{
   return (s_x3perZi);
}

void  set_x3perZi(short arg)
{
   s_x3perZi= arg;
    return;
}

//float x4per = Unit[-]:预留元素含量.Limit:[-,1]
float  x4per() const
{
   return (f_x4per);
}

void  set_x4per (float arg)
{
   f_x4per= arg;
   s_x4perZi = 0;
   return;
}

short   x4perZi() const
{
   return (s_x4perZi);
}

void  set_x4perZi(short arg)
{
   s_x4perZi= arg;
    return;
}

//float x5per = Unit[-]:预留元素含量.Limit:[-,1]
float  x5per() const
{
   return (f_x5per);
}

void  set_x5per (float arg)
{
   f_x5per= arg;
   s_x5perZi = 0;
   return;
}

short   x5perZi() const
{
   return (s_x5perZi);
}

void  set_x5perZi(short arg)
{
   s_x5perZi= arg;
    return;
}

//float msinitp_ind0 = Unit[Mpa]:第1机架初始材料强度(MSINITP_IND0).Limit:[-,-]
float  msinitp_ind0() const
{
   return (f_msinitp_ind0);
}

void  set_msinitp_ind0 (float arg)
{
   f_msinitp_ind0= arg;
   s_msinitp_ind0Zi = 0;
   return;
}

short   msinitp_ind0Zi() const
{
   return (s_msinitp_ind0Zi);
}

void  set_msinitp_ind0Zi(short arg)
{
   s_msinitp_ind0Zi= arg;
    return;
}

//float msinitp_ind1 = Unit[Mpa]:第2机架初始材料强度(MSINITP_IND1).Limit:[-,-]
float  msinitp_ind1() const
{
   return (f_msinitp_ind1);
}

void  set_msinitp_ind1 (float arg)
{
   f_msinitp_ind1= arg;
   s_msinitp_ind1Zi = 0;
   return;
}

short   msinitp_ind1Zi() const
{
   return (s_msinitp_ind1Zi);
}

void  set_msinitp_ind1Zi(short arg)
{
   s_msinitp_ind1Zi= arg;
    return;
}

//float msinitp_ind2 = Unit[Mpa]:第3机架初始材料强度(MSINITP_IND2).Limit:[-,-]
float  msinitp_ind2() const
{
   return (f_msinitp_ind2);
}

void  set_msinitp_ind2 (float arg)
{
   f_msinitp_ind2= arg;
   s_msinitp_ind2Zi = 0;
   return;
}

short   msinitp_ind2Zi() const
{
   return (s_msinitp_ind2Zi);
}

void  set_msinitp_ind2Zi(short arg)
{
   s_msinitp_ind2Zi= arg;
    return;
}

//float msinitp_ind3 = Unit[Mpa]:第4机架初始材料强度(MSINITP_IND3).Limit:[-,-]
float  msinitp_ind3() const
{
   return (f_msinitp_ind3);
}

void  set_msinitp_ind3 (float arg)
{
   f_msinitp_ind3= arg;
   s_msinitp_ind3Zi = 0;
   return;
}

short   msinitp_ind3Zi() const
{
   return (s_msinitp_ind3Zi);
}

void  set_msinitp_ind3Zi(short arg)
{
   s_msinitp_ind3Zi= arg;
    return;
}

//float msinitp_ind4 = Unit[Mpa]:第5机架初始材料强度(MSINITP_IND4).Limit:[-,-]
float  msinitp_ind4() const
{
   return (f_msinitp_ind4);
}

void  set_msinitp_ind4 (float arg)
{
   f_msinitp_ind4= arg;
   s_msinitp_ind4Zi = 0;
   return;
}

short   msinitp_ind4Zi() const
{
   return (s_msinitp_ind4Zi);
}

void  set_msinitp_ind4Zi(short arg)
{
   s_msinitp_ind4Zi= arg;
    return;
}

//float msp_ind0 = Unit[Mpa]:第1机架自学习后的材料强度(MSP_IND0).Limit:[-,-]
float  msp_ind0() const
{
   return (f_msp_ind0);
}

void  set_msp_ind0 (float arg)
{
   f_msp_ind0= arg;
   s_msp_ind0Zi = 0;
   return;
}

short   msp_ind0Zi() const
{
   return (s_msp_ind0Zi);
}

void  set_msp_ind0Zi(short arg)
{
   s_msp_ind0Zi= arg;
    return;
}

//float msp_ind1 = Unit[Mpa]:第2机架自学习后的材料强度(MSP_IND1).Limit:[-,-]
float  msp_ind1() const
{
   return (f_msp_ind1);
}

void  set_msp_ind1 (float arg)
{
   f_msp_ind1= arg;
   s_msp_ind1Zi = 0;
   return;
}

short   msp_ind1Zi() const
{
   return (s_msp_ind1Zi);
}

void  set_msp_ind1Zi(short arg)
{
   s_msp_ind1Zi= arg;
    return;
}

//float msp_ind2 = Unit[Mpa]:第3机架自学习后的材料强度(MSP_IND2).Limit:[-,-]
float  msp_ind2() const
{
   return (f_msp_ind2);
}

void  set_msp_ind2 (float arg)
{
   f_msp_ind2= arg;
   s_msp_ind2Zi = 0;
   return;
}

short   msp_ind2Zi() const
{
   return (s_msp_ind2Zi);
}

void  set_msp_ind2Zi(short arg)
{
   s_msp_ind2Zi= arg;
    return;
}

//float msp_ind3 = Unit[Mpa]:第4机架自学习后的材料强度(MSP_IND3).Limit:[-,-]
float  msp_ind3() const
{
   return (f_msp_ind3);
}

void  set_msp_ind3 (float arg)
{
   f_msp_ind3= arg;
   s_msp_ind3Zi = 0;
   return;
}

short   msp_ind3Zi() const
{
   return (s_msp_ind3Zi);
}

void  set_msp_ind3Zi(short arg)
{
   s_msp_ind3Zi= arg;
    return;
}

//float msp_ind4 = Unit[Mpa]:第5机架自学习后的材料强度(MSP_IND4).Limit:[-,-]
float  msp_ind4() const
{
   return (f_msp_ind4);
}

void  set_msp_ind4 (float arg)
{
   f_msp_ind4= arg;
   s_msp_ind4Zi = 0;
   return;
}

short   msp_ind4Zi() const
{
   return (s_msp_ind4Zi);
}

void  set_msp_ind4Zi(short arg)
{
   s_msp_ind4Zi= arg;
    return;
}

//float epsp_ind0 = Unit[-]:第1机架假设压下量(EPSP_IND0).Limit:[-,1]
float  epsp_ind0() const
{
   return (f_epsp_ind0);
}

void  set_epsp_ind0 (float arg)
{
   f_epsp_ind0= arg;
   s_epsp_ind0Zi = 0;
   return;
}

short   epsp_ind0Zi() const
{
   return (s_epsp_ind0Zi);
}

void  set_epsp_ind0Zi(short arg)
{
   s_epsp_ind0Zi= arg;
    return;
}

//float epsp_ind1 = Unit[-]:第2机架假设压下量(EPSP_IND1).Limit:[-,1]
float  epsp_ind1() const
{
   return (f_epsp_ind1);
}

void  set_epsp_ind1 (float arg)
{
   f_epsp_ind1= arg;
   s_epsp_ind1Zi = 0;
   return;
}

short   epsp_ind1Zi() const
{
   return (s_epsp_ind1Zi);
}

void  set_epsp_ind1Zi(short arg)
{
   s_epsp_ind1Zi= arg;
    return;
}

//float epsp_ind2 = Unit[-]:第3机架假设压下量(EPSP_IND2).Limit:[-,1]
float  epsp_ind2() const
{
   return (f_epsp_ind2);
}

void  set_epsp_ind2 (float arg)
{
   f_epsp_ind2= arg;
   s_epsp_ind2Zi = 0;
   return;
}

short   epsp_ind2Zi() const
{
   return (s_epsp_ind2Zi);
}

void  set_epsp_ind2Zi(short arg)
{
   s_epsp_ind2Zi= arg;
    return;
}

//float epsp_ind3 = Unit[-]:第4机架假设压下量(EPSP_IND3).Limit:[-,1]
float  epsp_ind3() const
{
   return (f_epsp_ind3);
}

void  set_epsp_ind3 (float arg)
{
   f_epsp_ind3= arg;
   s_epsp_ind3Zi = 0;
   return;
}

short   epsp_ind3Zi() const
{
   return (s_epsp_ind3Zi);
}

void  set_epsp_ind3Zi(short arg)
{
   s_epsp_ind3Zi= arg;
    return;
}

//float epsp_ind4 = Unit[-]:第5机架假设压下量(EPSP_IND4).Limit:[-,1]
float  epsp_ind4() const
{
   return (f_epsp_ind4);
}

void  set_epsp_ind4 (float arg)
{
   f_epsp_ind4= arg;
   s_epsp_ind4Zi = 0;
   return;
}

short   epsp_ind4Zi() const
{
   return (s_epsp_ind4Zi);
}

void  set_epsp_ind4Zi(short arg)
{
   s_epsp_ind4Zi= arg;
    return;
}

//float msi = Unit[Mpa]:指数方程初始材料强度(MSI).Limit:[-,-]
float  msi() const
{
   return (f_msi);
}

void  set_msi (float arg)
{
   f_msi= arg;
   s_msiZi = 0;
   return;
}

short   msiZi() const
{
   return (s_msiZi);
}

void  set_msiZi(short arg)
{
   s_msiZi= arg;
    return;
}

//float mse = Unit[Mpa]:指数方程初始材料强度增量(MSE).Limit:[-,-]
float  mse() const
{
   return (f_mse);
}

void  set_mse (float arg)
{
   f_mse= arg;
   s_mseZi = 0;
   return;
}

short   mseZi() const
{
   return (s_mseZi);
}

void  set_mseZi(short arg)
{
   s_mseZi= arg;
    return;
}

//float msiinit = Unit[Mpa]:指数方程自学习后的材料强度(MSIINIT).Limit:[-,-]
float  msiinit() const
{
   return (f_msiinit);
}

void  set_msiinit (float arg)
{
   f_msiinit= arg;
   s_msiinitZi = 0;
   return;
}

short   msiinitZi() const
{
   return (s_msiinitZi);
}

void  set_msiinitZi(short arg)
{
   s_msiinitZi= arg;
    return;
}

//float mseinit = Unit[Mpa]:指数方程自学习后的材料强度增量(MSEINIT).Limit:[-,-]
float  mseinit() const
{
   return (f_mseinit);
}

void  set_mseinit (float arg)
{
   f_mseinit= arg;
   s_mseinitZi = 0;
   return;
}

short   mseinitZi() const
{
   return (s_mseinitZi);
}

void  set_mseinitZi(short arg)
{
   s_mseinitZi= arg;
    return;
}

//float counter = Unit[-]:该材料自学习次数(COUNTER).Limit:[-,-]
float  counter() const
{
   return (f_counter);
}

void  set_counter (float arg)
{
   f_counter= arg;
   s_counterZi = 0;
   return;
}

short   counterZi() const
{
   return (s_counterZi);
}

void  set_counterZi(short arg)
{
   s_counterZi= arg;
    return;
}

//char* gmt = Unit[-]:该材料最后一次自学习时间(GMT).Limit:[-,-]
char*  gmt() const
{
   return ((char*)c_gmt);
}

void  set_gmt (const char* arg)
{
   strncpy((char*)c_gmt, arg, sizeof(c_gmt));
    c_gmt[sizeof(c_gmt)-1] = '\0';
   s_gmtZi = 0;
   return;
}

short   gmtZi() const
{
   return (s_gmtZi);
}

void  set_gmtZi(short arg)
{
   s_gmtZi= arg;
    return;
}

//float density = Unit[kg/m3]:材料密度(DENSITY).Limit:[-,-]
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

//float emod = Unit[N/m2]:材料弹性模量(EMOD).Limit:[-,-]
float  emod() const
{
   return (f_emod);
}

void  set_emod (float arg)
{
   f_emod= arg;
   s_emodZi = 0;
   return;
}

short   emodZi() const
{
   return (s_emodZi);
}

void  set_emodZi(short arg)
{
   s_emodZi= arg;
    return;
}

//float cw = Unit[J/°Ckg]:材料热容量(CW).Limit:[-,-]
float  cw() const
{
   return (f_cw);
}

void  set_cw (float arg)
{
   f_cw= arg;
   s_cwZi = 0;
   return;
}

short   cwZi() const
{
   return (s_cwZi);
}

void  set_cwZi(short arg)
{
   s_cwZi= arg;
    return;
}

//float lambda = Unit[W/m degC]:材料热传导率(LAMBDA).Limit:[-,-]
float  lambda() const
{
   return (f_lambda);
}

void  set_lambda (float arg)
{
   f_lambda= arg;
   s_lambdaZi = 0;
   return;
}

short   lambdaZi() const
{
   return (s_lambdaZi);
}

void  set_lambdaZi(short arg)
{
   s_lambdaZi= arg;
    return;
}

//float mstcor = Unit[-]:temperature drop factor(MSTCOR).Limit:[-,-]
float  mstcor() const
{
   return (f_mstcor);
}

void  set_mstcor (float arg)
{
   f_mstcor= arg;
   s_mstcorZi = 0;
   return;
}

short   mstcorZi() const
{
   return (s_mstcorZi);
}

void  set_mstcorZi(short arg)
{
   s_mstcorZi= arg;
    return;
}

//float mstgradient = Unit[grdC]:temperature gradient(MSTGRADIENT).Limit:[-,-]
float  mstgradient() const
{
   return (f_mstgradient);
}

void  set_mstgradient (float arg)
{
   f_mstgradient= arg;
   s_mstgradientZi = 0;
   return;
}

short   mstgradientZi() const
{
   return (s_mstgradientZi);
}

void  set_mstgradientZi(short arg)
{
   s_mstgradientZi= arg;
    return;
}

//float mstinflectionx = Unit[grdC]:temperature at inflection point(MSTINFLECTIONX).Limit:[-,-]
float  mstinflectionx() const
{
   return (f_mstinflectionx);
}

void  set_mstinflectionx (float arg)
{
   f_mstinflectionx= arg;
   s_mstinflectionxZi = 0;
   return;
}

short   mstinflectionxZi() const
{
   return (s_mstinflectionxZi);
}

void  set_mstinflectionxZi(short arg)
{
   s_mstinflectionxZi= arg;
    return;
}

//float lpara = Unit[Mpa]:变形抗力的L参数.Limit:[-,1000]
float  lpara() const
{
   return (f_lpara);
}

void  set_lpara (float arg)
{
   f_lpara= arg;
   s_lparaZi = 0;
   return;
}

short   lparaZi() const
{
   return (s_lparaZi);
}

void  set_lparaZi(short arg)
{
   s_lparaZi= arg;
    return;
}

//float mpara = Unit[-]:变形抗力的M参数.Limit:[-,1000]
float  mpara() const
{
   return (f_mpara);
}

void  set_mpara (float arg)
{
   f_mpara= arg;
   s_mparaZi = 0;
   return;
}

short   mparaZi() const
{
   return (s_mparaZi);
}

void  set_mparaZi(short arg)
{
   s_mparaZi= arg;
    return;
}

//float npara = Unit[-]:变形抗力的N参数.Limit:[-,1000]
float  npara() const
{
   return (f_npara);
}

void  set_npara (float arg)
{
   f_npara= arg;
   s_nparaZi = 0;
   return;
}

short   nparaZi() const
{
   return (s_nparaZi);
}

void  set_nparaZi(short arg)
{
   s_nparaZi= arg;
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
#endif //MATDAT_H

