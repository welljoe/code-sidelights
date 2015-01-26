/* ********************************************************************/
/* *   File               :    DATASTARULE.h
                             
/* *   Short Description  :    Database Class ,DATA STATIC RULE
                             
/* *   Author             :    DB CODE Generator
                             
/* *   Created Date       :    13.06.2013
                             
/* *   Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
                             
/* ********************************************************************/
/* *   Copyright (c)  SGAI AI 2009   All Rights Reserved
/* ********************************************************************/
#ifndef         DATASTARULE_H 
#define      DATASTARULE_H 

#include	<stdio.h>        
#include	<string.h>        
#include	<stdlib.h>        
#include    "CatchDbaxError.h"           
class DATASTARULE
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
//char     rulename = Unit[-]:规则名称.Limit:[-,-]
char     c_rulename[17];
//short    ruleusing = Unit[-]:当前规则是否使用,1使用，0不使用.Limit:[-,-]
short    s_ruleusing;
short    s_ruleusingZi;
//float    headlen = Unit[-]:头部长度定义.Limit:[-,-]
float    f_headlen;
short    s_headlenZi;
//char     taillen = Unit[-]:尾部长度定义.Limit:[-,-]
char     c_taillen[5];
short    s_taillenZi;
//short    hruletype = Unit[-]:厚度规则类型1＝绝对；0＝相对.Limit:[-,-]
short    s_hruletype;
short    s_hruletypeZi;
//float    huptol = Unit[-]:厚度偏差上限.Limit:[-,-]
float    f_huptol;
short    s_huptolZi;
//float    hlowtol = Unit[-]:厚度偏差下限.Limit:[-,-]
float    f_hlowtol;
short    s_hlowtolZi;
//float    hclass1from = Unit[-]:厚度等级1起始值.Limit:[-,-]
float    f_hclass1from;
short    s_hclass1fromZi;
//float    hclass1to = Unit[-]:厚度等级1终止值.Limit:[-,-]
float    f_hclass1to;
short    s_hclass1toZi;
//float    hclass2from = Unit[-]:厚度等级2起始值.Limit:[-,-]
float    f_hclass2from;
short    s_hclass2fromZi;
//float    hclass2to = Unit[-]:厚度等级2终止值.Limit:[-,-]
float    f_hclass2to;
short    s_hclass2toZi;
//float    hclass3from = Unit[-]:厚度等级3起始值.Limit:[-,-]
float    f_hclass3from;
short    s_hclass3fromZi;
//float    hclass3to = Unit[-]:厚度等级3终止值.Limit:[-,-]
float    f_hclass3to;
short    s_hclass3toZi;
//float    hclass4from = Unit[-]:厚度等级4起始值.Limit:[-,-]
float    f_hclass4from;
short    s_hclass4fromZi;
//float    hclass4to = Unit[-]:厚度等级4终止值.Limit:[-,-]
float    f_hclass4to;
short    s_hclass4toZi;
//float    hclass5from = Unit[-]:厚度等级5起始值.Limit:[-,-]
float    f_hclass5from;
short    s_hclass5fromZi;
//float    hclass5to = Unit[-]:厚度等级5终止值.Limit:[-,-]
float    f_hclass5to;
short    s_hclass5toZi;
//float    hclass6from = Unit[-]:厚度等级6起始值.Limit:[-,-]
float    f_hclass6from;
short    s_hclass6fromZi;
//float    hclass6to = Unit[-]:厚度等级6终止值.Limit:[-,-]
float    f_hclass6to;
short    s_hclass6toZi;
//float    hclass7from = Unit[-]:厚度等级7起始值.Limit:[-,-]
float    f_hclass7from;
short    s_hclass7fromZi;
//float    hclass7to = Unit[-]:厚度等级7终止值.Limit:[-,-]
float    f_hclass7to;
short    s_hclass7toZi;
//short    fruletype = Unit[-]:板形规则类型1＝绝对；0＝相对.Limit:[-,-]
short    s_fruletype;
short    s_fruletypeZi;
//float    fuptol = Unit[-]:板形偏差上限.Limit:[-,-]
float    f_fuptol;
short    s_fuptolZi;
//float    flowtol = Unit[-]:板形偏差下限.Limit:[-,-]
float    f_flowtol;
short    s_flowtolZi;
//float    fclass1from = Unit[-]:板形等级1起始值.Limit:[-,-]
float    f_fclass1from;
short    s_fclass1fromZi;
//float    fclass1to = Unit[-]:板形等级1终止值.Limit:[-,-]
float    f_fclass1to;
short    s_fclass1toZi;
//float    fclass2from = Unit[-]:板形等级2起始值.Limit:[-,-]
float    f_fclass2from;
short    s_fclass2fromZi;
//float    fclass2to = Unit[-]:板形等级2终止值.Limit:[-,-]
float    f_fclass2to;
short    s_fclass2toZi;
//float    fclass3from = Unit[-]:板形等级3起始值.Limit:[-,-]
float    f_fclass3from;
short    s_fclass3fromZi;
//float    fclass3to = Unit[-]:板形等级3终止值.Limit:[-,-]
float    f_fclass3to;
short    s_fclass3toZi;
//float    fclass4from = Unit[-]:板形等级4起始值.Limit:[-,-]
float    f_fclass4from;
short    s_fclass4fromZi;
//float    fclass4to = Unit[-]:板形等级4终止值.Limit:[-,-]
float    f_fclass4to;
short    s_fclass4toZi;
//float    fclass5from = Unit[-]:板形等级5起始值.Limit:[-,-]
float    f_fclass5from;
short    s_fclass5fromZi;
//float    fclass5to = Unit[-]:板形等级5终止值.Limit:[-,-]
float    f_fclass5to;
short    s_fclass5toZi;
//float    fclass6from = Unit[-]:板形等级6起始值.Limit:[-,-]
float    f_fclass6from;
short    s_fclass6fromZi;
//float    fclass6to = Unit[-]:板形等级6终止值.Limit:[-,-]
float    f_fclass6to;
short    s_fclass6toZi;
//float    fclass7from = Unit[-]:板形等级7起始值.Limit:[-,-]
float    f_fclass7from;
short    s_fclass7fromZi;
//float    fclass7to = Unit[-]:板形等级7终止值.Limit:[-,-]
float    f_fclass7to;
short    s_fclass7toZi;
//short    edropruletype = Unit[-]:边降规则类型1＝绝对；0＝相对.Limit:[-,-]
short    s_edropruletype;
short    s_edropruletypeZi;
//float    edropuptol = Unit[-]:边降偏差上限.Limit:[-,-]
float    f_edropuptol;
short    s_edropuptolZi;
//float    edroplowtol = Unit[-]:边降偏差下限.Limit:[-,-]
float    f_edroplowtol;
short    s_edroplowtolZi;
//float    edropclass1from = Unit[-]:边降等级1起始值.Limit:[-,-]
float    f_edropclass1from;
short    s_edropclass1fromZi;
//float    edropclass1to = Unit[-]:边降等级1终止值.Limit:[-,-]
float    f_edropclass1to;
short    s_edropclass1toZi;
//float    edropclass2from = Unit[-]:边降等级2起始值.Limit:[-,-]
float    f_edropclass2from;
short    s_edropclass2fromZi;
//float    edropclass2to = Unit[-]:边降等级2终止值.Limit:[-,-]
float    f_edropclass2to;
short    s_edropclass2toZi;
//float    edropclass3from = Unit[-]:边降等级3起始值.Limit:[-,-]
float    f_edropclass3from;
short    s_edropclass3fromZi;
//float    edropclass3to = Unit[-]:边降等级3终止值.Limit:[-,-]
float    f_edropclass3to;
short    s_edropclass3toZi;
//float    edropclass4from = Unit[-]:边降等级4起始值.Limit:[-,-]
float    f_edropclass4from;
short    s_edropclass4fromZi;
//float    edropclass4to = Unit[-]:边降等级4终止值.Limit:[-,-]
float    f_edropclass4to;
short    s_edropclass4toZi;
//float    edropclass5from = Unit[-]:边降等级5起始值.Limit:[-,-]
float    f_edropclass5from;
short    s_edropclass5fromZi;
//float    edropclass5to = Unit[-]:边降等级5终止值.Limit:[-,-]
float    f_edropclass5to;
short    s_edropclass5toZi;
//float    edropclass6from = Unit[-]:边降等级6起始值.Limit:[-,-]
float    f_edropclass6from;
short    s_edropclass6fromZi;
//float    edropclass6to = Unit[-]:边降等级6终止值.Limit:[-,-]
float    f_edropclass6to;
short    s_edropclass6toZi;
//float    edropclass7from = Unit[-]:边降等级7起始值.Limit:[-,-]
float    f_edropclass7from;
short    s_edropclass7fromZi;
//float    edropclass7to = Unit[-]:边降等级7终止值.Limit:[-,-]
float    f_edropclass7to;
short    s_edropclass7toZi;
//short    hdifruletype = Unit[-]:同板差规则类型1＝绝对；0＝相对.Limit:[-,-]
short    s_hdifruletype;
short    s_hdifruletypeZi;
//float    hdifstd1uptol = Unit[-]:同板差偏差Std1上限.Limit:[-,-]
float    f_hdifstd1uptol;
short    s_hdifstd1uptolZi;
//float    hdifstd1lowtol = Unit[-]:同板差偏差Std1下限.Limit:[-,-]
float    f_hdifstd1lowtol;
short    s_hdifstd1lowtolZi;
//float    hdifstd2uptol = Unit[-]:同板差偏差Std2上限.Limit:[-,-]
float    f_hdifstd2uptol;
short    s_hdifstd2uptolZi;
//float    hdifstd2lowtol = Unit[-]:同板差偏差Std2下限.Limit:[-,-]
float    f_hdifstd2lowtol;
short    s_hdifstd2lowtolZi;
//float    hdifstd3uptol = Unit[-]:同板差偏差Std3上限.Limit:[-,-]
float    f_hdifstd3uptol;
short    s_hdifstd3uptolZi;
//float    hdifstd3lowtol = Unit[-]:同板差偏差Std3下限.Limit:[-,-]
float    f_hdifstd3lowtol;
short    s_hdifstd3lowtolZi;
//float    hdifclass1from = Unit[-]:同板差等级1起始值.Limit:[-,-]
float    f_hdifclass1from;
short    s_hdifclass1fromZi;
//float    hdifclass1to = Unit[-]:同板差等级1终止值.Limit:[-,-]
float    f_hdifclass1to;
short    s_hdifclass1toZi;
//float    hdifclass2from = Unit[-]:同板差等级2起始值.Limit:[-,-]
float    f_hdifclass2from;
short    s_hdifclass2fromZi;
//float    hdifclass2to = Unit[-]:同板差等级2终止值.Limit:[-,-]
float    f_hdifclass2to;
short    s_hdifclass2toZi;
//float    hdifclass3from = Unit[-]:同板差等级3起始值.Limit:[-,-]
float    f_hdifclass3from;
short    s_hdifclass3fromZi;
//float    hdifclass3to = Unit[-]:同板差等级3终止值.Limit:[-,-]
float    f_hdifclass3to;
short    s_hdifclass3toZi;
//float    hdifclass4from = Unit[-]:同板差等级4起始值.Limit:[-,-]
float    f_hdifclass4from;
short    s_hdifclass4fromZi;
//float    hdifclass4to = Unit[-]:同板差等级4终止值.Limit:[-,-]
float    f_hdifclass4to;
short    s_hdifclass4toZi;
//float    hdifclass5from = Unit[-]:同板差等级5起始值.Limit:[-,-]
float    f_hdifclass5from;
short    s_hdifclass5fromZi;
//float    hdifclass5to = Unit[-]:同板差等级5终止值.Limit:[-,-]
float    f_hdifclass5to;
short    s_hdifclass5toZi;
//float    hdifclass6from = Unit[-]:同板差等级6起始值.Limit:[-,-]
float    f_hdifclass6from;
short    s_hdifclass6fromZi;
//float    hdifclass6to = Unit[-]:同板差等级6终止值.Limit:[-,-]
float    f_hdifclass6to;
short    s_hdifclass6toZi;
//float    hdifclass7from = Unit[-]:同板差等级7起始值.Limit:[-,-]
float    f_hdifclass7from;
short    s_hdifclass7fromZi;
//float    hdifclass7to = Unit[-]:同板差等级7终止值.Limit:[-,-]
float    f_hdifclass7to;
short    s_hdifclass7toZi;
//float    mwlimit = Unit[-]:中浪阈值.Limit:[-,-]
float    f_mwlimit;
short    s_mwlimitZi;
//float    ewlimit = Unit[-]:边浪阈值.Limit:[-,-]
float    f_ewlimit;
short    s_ewlimitZi;
//float    qwlimit = Unit[-]:1/4浪阈值.Limit:[-,-]
float    f_qwlimit;
short    s_qwlimitZi;
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
char     c_k_rulename[17];   // Unit[-]:规则名称.Limit:[-,-]

public:
//
//Structure
//
struct STR_DATASTARULE
{
	char      rulename[17];
	short     ruleusing;
	short     ruleusingZi;
	float     headlen;
	short     headlenZi;
	char      taillen[5];
	short     taillenZi;
	short     hruletype;
	short     hruletypeZi;
	float     huptol;
	short     huptolZi;
	float     hlowtol;
	short     hlowtolZi;
	float     hclass1from;
	short     hclass1fromZi;
	float     hclass1to;
	short     hclass1toZi;
	float     hclass2from;
	short     hclass2fromZi;
	float     hclass2to;
	short     hclass2toZi;
	float     hclass3from;
	short     hclass3fromZi;
	float     hclass3to;
	short     hclass3toZi;
	float     hclass4from;
	short     hclass4fromZi;
	float     hclass4to;
	short     hclass4toZi;
	float     hclass5from;
	short     hclass5fromZi;
	float     hclass5to;
	short     hclass5toZi;
	float     hclass6from;
	short     hclass6fromZi;
	float     hclass6to;
	short     hclass6toZi;
	float     hclass7from;
	short     hclass7fromZi;
	float     hclass7to;
	short     hclass7toZi;
	short     fruletype;
	short     fruletypeZi;
	float     fuptol;
	short     fuptolZi;
	float     flowtol;
	short     flowtolZi;
	float     fclass1from;
	short     fclass1fromZi;
	float     fclass1to;
	short     fclass1toZi;
	float     fclass2from;
	short     fclass2fromZi;
	float     fclass2to;
	short     fclass2toZi;
	float     fclass3from;
	short     fclass3fromZi;
	float     fclass3to;
	short     fclass3toZi;
	float     fclass4from;
	short     fclass4fromZi;
	float     fclass4to;
	short     fclass4toZi;
	float     fclass5from;
	short     fclass5fromZi;
	float     fclass5to;
	short     fclass5toZi;
	float     fclass6from;
	short     fclass6fromZi;
	float     fclass6to;
	short     fclass6toZi;
	float     fclass7from;
	short     fclass7fromZi;
	float     fclass7to;
	short     fclass7toZi;
	short     edropruletype;
	short     edropruletypeZi;
	float     edropuptol;
	short     edropuptolZi;
	float     edroplowtol;
	short     edroplowtolZi;
	float     edropclass1from;
	short     edropclass1fromZi;
	float     edropclass1to;
	short     edropclass1toZi;
	float     edropclass2from;
	short     edropclass2fromZi;
	float     edropclass2to;
	short     edropclass2toZi;
	float     edropclass3from;
	short     edropclass3fromZi;
	float     edropclass3to;
	short     edropclass3toZi;
	float     edropclass4from;
	short     edropclass4fromZi;
	float     edropclass4to;
	short     edropclass4toZi;
	float     edropclass5from;
	short     edropclass5fromZi;
	float     edropclass5to;
	short     edropclass5toZi;
	float     edropclass6from;
	short     edropclass6fromZi;
	float     edropclass6to;
	short     edropclass6toZi;
	float     edropclass7from;
	short     edropclass7fromZi;
	float     edropclass7to;
	short     edropclass7toZi;
	short     hdifruletype;
	short     hdifruletypeZi;
	float     hdifstd1uptol;
	short     hdifstd1uptolZi;
	float     hdifstd1lowtol;
	short     hdifstd1lowtolZi;
	float     hdifstd2uptol;
	short     hdifstd2uptolZi;
	float     hdifstd2lowtol;
	short     hdifstd2lowtolZi;
	float     hdifstd3uptol;
	short     hdifstd3uptolZi;
	float     hdifstd3lowtol;
	short     hdifstd3lowtolZi;
	float     hdifclass1from;
	short     hdifclass1fromZi;
	float     hdifclass1to;
	short     hdifclass1toZi;
	float     hdifclass2from;
	short     hdifclass2fromZi;
	float     hdifclass2to;
	short     hdifclass2toZi;
	float     hdifclass3from;
	short     hdifclass3fromZi;
	float     hdifclass3to;
	short     hdifclass3toZi;
	float     hdifclass4from;
	short     hdifclass4fromZi;
	float     hdifclass4to;
	short     hdifclass4toZi;
	float     hdifclass5from;
	short     hdifclass5fromZi;
	float     hdifclass5to;
	short     hdifclass5toZi;
	float     hdifclass6from;
	short     hdifclass6fromZi;
	float     hdifclass6to;
	short     hdifclass6toZi;
	float     hdifclass7from;
	short     hdifclass7fromZi;
	float     hdifclass7to;
	short     hdifclass7toZi;
	float     mwlimit;
	short     mwlimitZi;
	float     ewlimit;
	short     ewlimitZi;
	float     qwlimit;
	short     qwlimitZi;
	char      toc[15];
	short     tocZi;
	char      tom[15];
	short     tomZi;
	char      mop[121];
	short     mopZi;
}structDATASTARULE;
       
             
// 				
//C O N S T R U C T O R S    
//=======================    
//                           
public:  
DATASTARULE();
//D E S T R U C T O R S  
//=======================
//                       
virtual ~DATASTARULE();
//					
//C O P Y  -  C O N S T R U C T O R 
//==================================
DATASTARULE(const DATASTARULE &inst);
//					
//C O N S T R U C T O R -W I T H P A R A M E T E R S
//===================================================
//					
//char*	rulename[17]= Unit[-]:规则名称.Limit:[-,-]
DATASTARULE( char* arg1);

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
	strncpy (structDATASTARULE.rulename, rulename(), sizeof( structDATASTARULE.rulename));
	structDATASTARULE.ruleusing = ruleusing();
	structDATASTARULE.ruleusingZi = ruleusingZi();
	structDATASTARULE.headlen = headlen();
	structDATASTARULE.headlenZi = headlenZi();
	strncpy (structDATASTARULE.taillen, taillen(), sizeof( structDATASTARULE.taillen));
	structDATASTARULE.taillenZi = taillenZi();
	structDATASTARULE.hruletype = hruletype();
	structDATASTARULE.hruletypeZi = hruletypeZi();
	structDATASTARULE.huptol = huptol();
	structDATASTARULE.huptolZi = huptolZi();
	structDATASTARULE.hlowtol = hlowtol();
	structDATASTARULE.hlowtolZi = hlowtolZi();
	structDATASTARULE.hclass1from = hclass1from();
	structDATASTARULE.hclass1fromZi = hclass1fromZi();
	structDATASTARULE.hclass1to = hclass1to();
	structDATASTARULE.hclass1toZi = hclass1toZi();
	structDATASTARULE.hclass2from = hclass2from();
	structDATASTARULE.hclass2fromZi = hclass2fromZi();
	structDATASTARULE.hclass2to = hclass2to();
	structDATASTARULE.hclass2toZi = hclass2toZi();
	structDATASTARULE.hclass3from = hclass3from();
	structDATASTARULE.hclass3fromZi = hclass3fromZi();
	structDATASTARULE.hclass3to = hclass3to();
	structDATASTARULE.hclass3toZi = hclass3toZi();
	structDATASTARULE.hclass4from = hclass4from();
	structDATASTARULE.hclass4fromZi = hclass4fromZi();
	structDATASTARULE.hclass4to = hclass4to();
	structDATASTARULE.hclass4toZi = hclass4toZi();
	structDATASTARULE.hclass5from = hclass5from();
	structDATASTARULE.hclass5fromZi = hclass5fromZi();
	structDATASTARULE.hclass5to = hclass5to();
	structDATASTARULE.hclass5toZi = hclass5toZi();
	structDATASTARULE.hclass6from = hclass6from();
	structDATASTARULE.hclass6fromZi = hclass6fromZi();
	structDATASTARULE.hclass6to = hclass6to();
	structDATASTARULE.hclass6toZi = hclass6toZi();
	structDATASTARULE.hclass7from = hclass7from();
	structDATASTARULE.hclass7fromZi = hclass7fromZi();
	structDATASTARULE.hclass7to = hclass7to();
	structDATASTARULE.hclass7toZi = hclass7toZi();
	structDATASTARULE.fruletype = fruletype();
	structDATASTARULE.fruletypeZi = fruletypeZi();
	structDATASTARULE.fuptol = fuptol();
	structDATASTARULE.fuptolZi = fuptolZi();
	structDATASTARULE.flowtol = flowtol();
	structDATASTARULE.flowtolZi = flowtolZi();
	structDATASTARULE.fclass1from = fclass1from();
	structDATASTARULE.fclass1fromZi = fclass1fromZi();
	structDATASTARULE.fclass1to = fclass1to();
	structDATASTARULE.fclass1toZi = fclass1toZi();
	structDATASTARULE.fclass2from = fclass2from();
	structDATASTARULE.fclass2fromZi = fclass2fromZi();
	structDATASTARULE.fclass2to = fclass2to();
	structDATASTARULE.fclass2toZi = fclass2toZi();
	structDATASTARULE.fclass3from = fclass3from();
	structDATASTARULE.fclass3fromZi = fclass3fromZi();
	structDATASTARULE.fclass3to = fclass3to();
	structDATASTARULE.fclass3toZi = fclass3toZi();
	structDATASTARULE.fclass4from = fclass4from();
	structDATASTARULE.fclass4fromZi = fclass4fromZi();
	structDATASTARULE.fclass4to = fclass4to();
	structDATASTARULE.fclass4toZi = fclass4toZi();
	structDATASTARULE.fclass5from = fclass5from();
	structDATASTARULE.fclass5fromZi = fclass5fromZi();
	structDATASTARULE.fclass5to = fclass5to();
	structDATASTARULE.fclass5toZi = fclass5toZi();
	structDATASTARULE.fclass6from = fclass6from();
	structDATASTARULE.fclass6fromZi = fclass6fromZi();
	structDATASTARULE.fclass6to = fclass6to();
	structDATASTARULE.fclass6toZi = fclass6toZi();
	structDATASTARULE.fclass7from = fclass7from();
	structDATASTARULE.fclass7fromZi = fclass7fromZi();
	structDATASTARULE.fclass7to = fclass7to();
	structDATASTARULE.fclass7toZi = fclass7toZi();
	structDATASTARULE.edropruletype = edropruletype();
	structDATASTARULE.edropruletypeZi = edropruletypeZi();
	structDATASTARULE.edropuptol = edropuptol();
	structDATASTARULE.edropuptolZi = edropuptolZi();
	structDATASTARULE.edroplowtol = edroplowtol();
	structDATASTARULE.edroplowtolZi = edroplowtolZi();
	structDATASTARULE.edropclass1from = edropclass1from();
	structDATASTARULE.edropclass1fromZi = edropclass1fromZi();
	structDATASTARULE.edropclass1to = edropclass1to();
	structDATASTARULE.edropclass1toZi = edropclass1toZi();
	structDATASTARULE.edropclass2from = edropclass2from();
	structDATASTARULE.edropclass2fromZi = edropclass2fromZi();
	structDATASTARULE.edropclass2to = edropclass2to();
	structDATASTARULE.edropclass2toZi = edropclass2toZi();
	structDATASTARULE.edropclass3from = edropclass3from();
	structDATASTARULE.edropclass3fromZi = edropclass3fromZi();
	structDATASTARULE.edropclass3to = edropclass3to();
	structDATASTARULE.edropclass3toZi = edropclass3toZi();
	structDATASTARULE.edropclass4from = edropclass4from();
	structDATASTARULE.edropclass4fromZi = edropclass4fromZi();
	structDATASTARULE.edropclass4to = edropclass4to();
	structDATASTARULE.edropclass4toZi = edropclass4toZi();
	structDATASTARULE.edropclass5from = edropclass5from();
	structDATASTARULE.edropclass5fromZi = edropclass5fromZi();
	structDATASTARULE.edropclass5to = edropclass5to();
	structDATASTARULE.edropclass5toZi = edropclass5toZi();
	structDATASTARULE.edropclass6from = edropclass6from();
	structDATASTARULE.edropclass6fromZi = edropclass6fromZi();
	structDATASTARULE.edropclass6to = edropclass6to();
	structDATASTARULE.edropclass6toZi = edropclass6toZi();
	structDATASTARULE.edropclass7from = edropclass7from();
	structDATASTARULE.edropclass7fromZi = edropclass7fromZi();
	structDATASTARULE.edropclass7to = edropclass7to();
	structDATASTARULE.edropclass7toZi = edropclass7toZi();
	structDATASTARULE.hdifruletype = hdifruletype();
	structDATASTARULE.hdifruletypeZi = hdifruletypeZi();
	structDATASTARULE.hdifstd1uptol = hdifstd1uptol();
	structDATASTARULE.hdifstd1uptolZi = hdifstd1uptolZi();
	structDATASTARULE.hdifstd1lowtol = hdifstd1lowtol();
	structDATASTARULE.hdifstd1lowtolZi = hdifstd1lowtolZi();
	structDATASTARULE.hdifstd2uptol = hdifstd2uptol();
	structDATASTARULE.hdifstd2uptolZi = hdifstd2uptolZi();
	structDATASTARULE.hdifstd2lowtol = hdifstd2lowtol();
	structDATASTARULE.hdifstd2lowtolZi = hdifstd2lowtolZi();
	structDATASTARULE.hdifstd3uptol = hdifstd3uptol();
	structDATASTARULE.hdifstd3uptolZi = hdifstd3uptolZi();
	structDATASTARULE.hdifstd3lowtol = hdifstd3lowtol();
	structDATASTARULE.hdifstd3lowtolZi = hdifstd3lowtolZi();
	structDATASTARULE.hdifclass1from = hdifclass1from();
	structDATASTARULE.hdifclass1fromZi = hdifclass1fromZi();
	structDATASTARULE.hdifclass1to = hdifclass1to();
	structDATASTARULE.hdifclass1toZi = hdifclass1toZi();
	structDATASTARULE.hdifclass2from = hdifclass2from();
	structDATASTARULE.hdifclass2fromZi = hdifclass2fromZi();
	structDATASTARULE.hdifclass2to = hdifclass2to();
	structDATASTARULE.hdifclass2toZi = hdifclass2toZi();
	structDATASTARULE.hdifclass3from = hdifclass3from();
	structDATASTARULE.hdifclass3fromZi = hdifclass3fromZi();
	structDATASTARULE.hdifclass3to = hdifclass3to();
	structDATASTARULE.hdifclass3toZi = hdifclass3toZi();
	structDATASTARULE.hdifclass4from = hdifclass4from();
	structDATASTARULE.hdifclass4fromZi = hdifclass4fromZi();
	structDATASTARULE.hdifclass4to = hdifclass4to();
	structDATASTARULE.hdifclass4toZi = hdifclass4toZi();
	structDATASTARULE.hdifclass5from = hdifclass5from();
	structDATASTARULE.hdifclass5fromZi = hdifclass5fromZi();
	structDATASTARULE.hdifclass5to = hdifclass5to();
	structDATASTARULE.hdifclass5toZi = hdifclass5toZi();
	structDATASTARULE.hdifclass6from = hdifclass6from();
	structDATASTARULE.hdifclass6fromZi = hdifclass6fromZi();
	structDATASTARULE.hdifclass6to = hdifclass6to();
	structDATASTARULE.hdifclass6toZi = hdifclass6toZi();
	structDATASTARULE.hdifclass7from = hdifclass7from();
	structDATASTARULE.hdifclass7fromZi = hdifclass7fromZi();
	structDATASTARULE.hdifclass7to = hdifclass7to();
	structDATASTARULE.hdifclass7toZi = hdifclass7toZi();
	structDATASTARULE.mwlimit = mwlimit();
	structDATASTARULE.mwlimitZi = mwlimitZi();
	structDATASTARULE.ewlimit = ewlimit();
	structDATASTARULE.ewlimitZi = ewlimitZi();
	structDATASTARULE.qwlimit = qwlimit();
	structDATASTARULE.qwlimitZi = qwlimitZi();
	strncpy (structDATASTARULE.toc, toc(), sizeof( structDATASTARULE.toc));
	structDATASTARULE.tocZi = tocZi();
	strncpy (structDATASTARULE.tom, tom(), sizeof( structDATASTARULE.tom));
	structDATASTARULE.tomZi = tomZi();
	strncpy (structDATASTARULE.mop, mop(), sizeof( structDATASTARULE.mop));
	structDATASTARULE.mopZi = mopZi();
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
DATASTARULE operator+(const DATASTARULE &inst) const;

//		            
//O P E R A T O R  = 
//===================
//                   
//methods
public:
//
const DATASTARULE& operator=(const DATASTARULE &inst);

  
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
//char* rulename = Unit[-]:规则名称.Limit:[-,-]
char*  rulename() const
{
   return ((char*)c_rulename);
}

void  set_rulename (const char* arg)
{
   strncpy((char*)c_rulename, arg, sizeof(c_rulename));
    c_rulename[sizeof(c_rulename)-1] = '\0';
   return;
}

//char*k_rulename = Unit[-]:规则名称.Limit:[-,-]
char*  k_rulename() const
{
   return ((char*)c_k_rulename);
}

void  set_k_rulename (const char* arg)
{
   strncpy((char*)c_k_rulename, arg, sizeof(c_k_rulename));
    c_k_rulename[sizeof(c_k_rulename)-1] = '\0';
    return;
}

//short ruleusing = Unit[-]:当前规则是否使用,1使用，0不使用.Limit:[-,-]
short  ruleusing() const
{
   return (s_ruleusing);
}

void  set_ruleusing (short arg)
{
   s_ruleusing= arg;
   s_ruleusingZi = 0;
   return;
}

short   ruleusingZi() const
{
   return (s_ruleusingZi);
}

void  set_ruleusingZi(short arg)
{
   s_ruleusingZi= arg;
    return;
}

//float headlen = Unit[-]:头部长度定义.Limit:[-,-]
float  headlen() const
{
   return (f_headlen);
}

void  set_headlen (float arg)
{
   f_headlen= arg;
   s_headlenZi = 0;
   return;
}

short   headlenZi() const
{
   return (s_headlenZi);
}

void  set_headlenZi(short arg)
{
   s_headlenZi= arg;
    return;
}

//char* taillen = Unit[-]:尾部长度定义.Limit:[-,-]
char*  taillen() const
{
   return ((char*)c_taillen);
}

void  set_taillen (const char* arg)
{
   strncpy((char*)c_taillen, arg, sizeof(c_taillen));
    c_taillen[sizeof(c_taillen)-1] = '\0';
   s_taillenZi = 0;
   return;
}

short   taillenZi() const
{
   return (s_taillenZi);
}

void  set_taillenZi(short arg)
{
   s_taillenZi= arg;
    return;
}

//short hruletype = Unit[-]:厚度规则类型1＝绝对；0＝相对.Limit:[-,-]
short  hruletype() const
{
   return (s_hruletype);
}

void  set_hruletype (short arg)
{
   s_hruletype= arg;
   s_hruletypeZi = 0;
   return;
}

short   hruletypeZi() const
{
   return (s_hruletypeZi);
}

void  set_hruletypeZi(short arg)
{
   s_hruletypeZi= arg;
    return;
}

//float huptol = Unit[-]:厚度偏差上限.Limit:[-,-]
float  huptol() const
{
   return (f_huptol);
}

void  set_huptol (float arg)
{
   f_huptol= arg;
   s_huptolZi = 0;
   return;
}

short   huptolZi() const
{
   return (s_huptolZi);
}

void  set_huptolZi(short arg)
{
   s_huptolZi= arg;
    return;
}

//float hlowtol = Unit[-]:厚度偏差下限.Limit:[-,-]
float  hlowtol() const
{
   return (f_hlowtol);
}

void  set_hlowtol (float arg)
{
   f_hlowtol= arg;
   s_hlowtolZi = 0;
   return;
}

short   hlowtolZi() const
{
   return (s_hlowtolZi);
}

void  set_hlowtolZi(short arg)
{
   s_hlowtolZi= arg;
    return;
}

//float hclass1from = Unit[-]:厚度等级1起始值.Limit:[-,-]
float  hclass1from() const
{
   return (f_hclass1from);
}

void  set_hclass1from (float arg)
{
   f_hclass1from= arg;
   s_hclass1fromZi = 0;
   return;
}

short   hclass1fromZi() const
{
   return (s_hclass1fromZi);
}

void  set_hclass1fromZi(short arg)
{
   s_hclass1fromZi= arg;
    return;
}

//float hclass1to = Unit[-]:厚度等级1终止值.Limit:[-,-]
float  hclass1to() const
{
   return (f_hclass1to);
}

void  set_hclass1to (float arg)
{
   f_hclass1to= arg;
   s_hclass1toZi = 0;
   return;
}

short   hclass1toZi() const
{
   return (s_hclass1toZi);
}

void  set_hclass1toZi(short arg)
{
   s_hclass1toZi= arg;
    return;
}

//float hclass2from = Unit[-]:厚度等级2起始值.Limit:[-,-]
float  hclass2from() const
{
   return (f_hclass2from);
}

void  set_hclass2from (float arg)
{
   f_hclass2from= arg;
   s_hclass2fromZi = 0;
   return;
}

short   hclass2fromZi() const
{
   return (s_hclass2fromZi);
}

void  set_hclass2fromZi(short arg)
{
   s_hclass2fromZi= arg;
    return;
}

//float hclass2to = Unit[-]:厚度等级2终止值.Limit:[-,-]
float  hclass2to() const
{
   return (f_hclass2to);
}

void  set_hclass2to (float arg)
{
   f_hclass2to= arg;
   s_hclass2toZi = 0;
   return;
}

short   hclass2toZi() const
{
   return (s_hclass2toZi);
}

void  set_hclass2toZi(short arg)
{
   s_hclass2toZi= arg;
    return;
}

//float hclass3from = Unit[-]:厚度等级3起始值.Limit:[-,-]
float  hclass3from() const
{
   return (f_hclass3from);
}

void  set_hclass3from (float arg)
{
   f_hclass3from= arg;
   s_hclass3fromZi = 0;
   return;
}

short   hclass3fromZi() const
{
   return (s_hclass3fromZi);
}

void  set_hclass3fromZi(short arg)
{
   s_hclass3fromZi= arg;
    return;
}

//float hclass3to = Unit[-]:厚度等级3终止值.Limit:[-,-]
float  hclass3to() const
{
   return (f_hclass3to);
}

void  set_hclass3to (float arg)
{
   f_hclass3to= arg;
   s_hclass3toZi = 0;
   return;
}

short   hclass3toZi() const
{
   return (s_hclass3toZi);
}

void  set_hclass3toZi(short arg)
{
   s_hclass3toZi= arg;
    return;
}

//float hclass4from = Unit[-]:厚度等级4起始值.Limit:[-,-]
float  hclass4from() const
{
   return (f_hclass4from);
}

void  set_hclass4from (float arg)
{
   f_hclass4from= arg;
   s_hclass4fromZi = 0;
   return;
}

short   hclass4fromZi() const
{
   return (s_hclass4fromZi);
}

void  set_hclass4fromZi(short arg)
{
   s_hclass4fromZi= arg;
    return;
}

//float hclass4to = Unit[-]:厚度等级4终止值.Limit:[-,-]
float  hclass4to() const
{
   return (f_hclass4to);
}

void  set_hclass4to (float arg)
{
   f_hclass4to= arg;
   s_hclass4toZi = 0;
   return;
}

short   hclass4toZi() const
{
   return (s_hclass4toZi);
}

void  set_hclass4toZi(short arg)
{
   s_hclass4toZi= arg;
    return;
}

//float hclass5from = Unit[-]:厚度等级5起始值.Limit:[-,-]
float  hclass5from() const
{
   return (f_hclass5from);
}

void  set_hclass5from (float arg)
{
   f_hclass5from= arg;
   s_hclass5fromZi = 0;
   return;
}

short   hclass5fromZi() const
{
   return (s_hclass5fromZi);
}

void  set_hclass5fromZi(short arg)
{
   s_hclass5fromZi= arg;
    return;
}

//float hclass5to = Unit[-]:厚度等级5终止值.Limit:[-,-]
float  hclass5to() const
{
   return (f_hclass5to);
}

void  set_hclass5to (float arg)
{
   f_hclass5to= arg;
   s_hclass5toZi = 0;
   return;
}

short   hclass5toZi() const
{
   return (s_hclass5toZi);
}

void  set_hclass5toZi(short arg)
{
   s_hclass5toZi= arg;
    return;
}

//float hclass6from = Unit[-]:厚度等级6起始值.Limit:[-,-]
float  hclass6from() const
{
   return (f_hclass6from);
}

void  set_hclass6from (float arg)
{
   f_hclass6from= arg;
   s_hclass6fromZi = 0;
   return;
}

short   hclass6fromZi() const
{
   return (s_hclass6fromZi);
}

void  set_hclass6fromZi(short arg)
{
   s_hclass6fromZi= arg;
    return;
}

//float hclass6to = Unit[-]:厚度等级6终止值.Limit:[-,-]
float  hclass6to() const
{
   return (f_hclass6to);
}

void  set_hclass6to (float arg)
{
   f_hclass6to= arg;
   s_hclass6toZi = 0;
   return;
}

short   hclass6toZi() const
{
   return (s_hclass6toZi);
}

void  set_hclass6toZi(short arg)
{
   s_hclass6toZi= arg;
    return;
}

//float hclass7from = Unit[-]:厚度等级7起始值.Limit:[-,-]
float  hclass7from() const
{
   return (f_hclass7from);
}

void  set_hclass7from (float arg)
{
   f_hclass7from= arg;
   s_hclass7fromZi = 0;
   return;
}

short   hclass7fromZi() const
{
   return (s_hclass7fromZi);
}

void  set_hclass7fromZi(short arg)
{
   s_hclass7fromZi= arg;
    return;
}

//float hclass7to = Unit[-]:厚度等级7终止值.Limit:[-,-]
float  hclass7to() const
{
   return (f_hclass7to);
}

void  set_hclass7to (float arg)
{
   f_hclass7to= arg;
   s_hclass7toZi = 0;
   return;
}

short   hclass7toZi() const
{
   return (s_hclass7toZi);
}

void  set_hclass7toZi(short arg)
{
   s_hclass7toZi= arg;
    return;
}

//short fruletype = Unit[-]:板形规则类型1＝绝对；0＝相对.Limit:[-,-]
short  fruletype() const
{
   return (s_fruletype);
}

void  set_fruletype (short arg)
{
   s_fruletype= arg;
   s_fruletypeZi = 0;
   return;
}

short   fruletypeZi() const
{
   return (s_fruletypeZi);
}

void  set_fruletypeZi(short arg)
{
   s_fruletypeZi= arg;
    return;
}

//float fuptol = Unit[-]:板形偏差上限.Limit:[-,-]
float  fuptol() const
{
   return (f_fuptol);
}

void  set_fuptol (float arg)
{
   f_fuptol= arg;
   s_fuptolZi = 0;
   return;
}

short   fuptolZi() const
{
   return (s_fuptolZi);
}

void  set_fuptolZi(short arg)
{
   s_fuptolZi= arg;
    return;
}

//float flowtol = Unit[-]:板形偏差下限.Limit:[-,-]
float  flowtol() const
{
   return (f_flowtol);
}

void  set_flowtol (float arg)
{
   f_flowtol= arg;
   s_flowtolZi = 0;
   return;
}

short   flowtolZi() const
{
   return (s_flowtolZi);
}

void  set_flowtolZi(short arg)
{
   s_flowtolZi= arg;
    return;
}

//float fclass1from = Unit[-]:板形等级1起始值.Limit:[-,-]
float  fclass1from() const
{
   return (f_fclass1from);
}

void  set_fclass1from (float arg)
{
   f_fclass1from= arg;
   s_fclass1fromZi = 0;
   return;
}

short   fclass1fromZi() const
{
   return (s_fclass1fromZi);
}

void  set_fclass1fromZi(short arg)
{
   s_fclass1fromZi= arg;
    return;
}

//float fclass1to = Unit[-]:板形等级1终止值.Limit:[-,-]
float  fclass1to() const
{
   return (f_fclass1to);
}

void  set_fclass1to (float arg)
{
   f_fclass1to= arg;
   s_fclass1toZi = 0;
   return;
}

short   fclass1toZi() const
{
   return (s_fclass1toZi);
}

void  set_fclass1toZi(short arg)
{
   s_fclass1toZi= arg;
    return;
}

//float fclass2from = Unit[-]:板形等级2起始值.Limit:[-,-]
float  fclass2from() const
{
   return (f_fclass2from);
}

void  set_fclass2from (float arg)
{
   f_fclass2from= arg;
   s_fclass2fromZi = 0;
   return;
}

short   fclass2fromZi() const
{
   return (s_fclass2fromZi);
}

void  set_fclass2fromZi(short arg)
{
   s_fclass2fromZi= arg;
    return;
}

//float fclass2to = Unit[-]:板形等级2终止值.Limit:[-,-]
float  fclass2to() const
{
   return (f_fclass2to);
}

void  set_fclass2to (float arg)
{
   f_fclass2to= arg;
   s_fclass2toZi = 0;
   return;
}

short   fclass2toZi() const
{
   return (s_fclass2toZi);
}

void  set_fclass2toZi(short arg)
{
   s_fclass2toZi= arg;
    return;
}

//float fclass3from = Unit[-]:板形等级3起始值.Limit:[-,-]
float  fclass3from() const
{
   return (f_fclass3from);
}

void  set_fclass3from (float arg)
{
   f_fclass3from= arg;
   s_fclass3fromZi = 0;
   return;
}

short   fclass3fromZi() const
{
   return (s_fclass3fromZi);
}

void  set_fclass3fromZi(short arg)
{
   s_fclass3fromZi= arg;
    return;
}

//float fclass3to = Unit[-]:板形等级3终止值.Limit:[-,-]
float  fclass3to() const
{
   return (f_fclass3to);
}

void  set_fclass3to (float arg)
{
   f_fclass3to= arg;
   s_fclass3toZi = 0;
   return;
}

short   fclass3toZi() const
{
   return (s_fclass3toZi);
}

void  set_fclass3toZi(short arg)
{
   s_fclass3toZi= arg;
    return;
}

//float fclass4from = Unit[-]:板形等级4起始值.Limit:[-,-]
float  fclass4from() const
{
   return (f_fclass4from);
}

void  set_fclass4from (float arg)
{
   f_fclass4from= arg;
   s_fclass4fromZi = 0;
   return;
}

short   fclass4fromZi() const
{
   return (s_fclass4fromZi);
}

void  set_fclass4fromZi(short arg)
{
   s_fclass4fromZi= arg;
    return;
}

//float fclass4to = Unit[-]:板形等级4终止值.Limit:[-,-]
float  fclass4to() const
{
   return (f_fclass4to);
}

void  set_fclass4to (float arg)
{
   f_fclass4to= arg;
   s_fclass4toZi = 0;
   return;
}

short   fclass4toZi() const
{
   return (s_fclass4toZi);
}

void  set_fclass4toZi(short arg)
{
   s_fclass4toZi= arg;
    return;
}

//float fclass5from = Unit[-]:板形等级5起始值.Limit:[-,-]
float  fclass5from() const
{
   return (f_fclass5from);
}

void  set_fclass5from (float arg)
{
   f_fclass5from= arg;
   s_fclass5fromZi = 0;
   return;
}

short   fclass5fromZi() const
{
   return (s_fclass5fromZi);
}

void  set_fclass5fromZi(short arg)
{
   s_fclass5fromZi= arg;
    return;
}

//float fclass5to = Unit[-]:板形等级5终止值.Limit:[-,-]
float  fclass5to() const
{
   return (f_fclass5to);
}

void  set_fclass5to (float arg)
{
   f_fclass5to= arg;
   s_fclass5toZi = 0;
   return;
}

short   fclass5toZi() const
{
   return (s_fclass5toZi);
}

void  set_fclass5toZi(short arg)
{
   s_fclass5toZi= arg;
    return;
}

//float fclass6from = Unit[-]:板形等级6起始值.Limit:[-,-]
float  fclass6from() const
{
   return (f_fclass6from);
}

void  set_fclass6from (float arg)
{
   f_fclass6from= arg;
   s_fclass6fromZi = 0;
   return;
}

short   fclass6fromZi() const
{
   return (s_fclass6fromZi);
}

void  set_fclass6fromZi(short arg)
{
   s_fclass6fromZi= arg;
    return;
}

//float fclass6to = Unit[-]:板形等级6终止值.Limit:[-,-]
float  fclass6to() const
{
   return (f_fclass6to);
}

void  set_fclass6to (float arg)
{
   f_fclass6to= arg;
   s_fclass6toZi = 0;
   return;
}

short   fclass6toZi() const
{
   return (s_fclass6toZi);
}

void  set_fclass6toZi(short arg)
{
   s_fclass6toZi= arg;
    return;
}

//float fclass7from = Unit[-]:板形等级7起始值.Limit:[-,-]
float  fclass7from() const
{
   return (f_fclass7from);
}

void  set_fclass7from (float arg)
{
   f_fclass7from= arg;
   s_fclass7fromZi = 0;
   return;
}

short   fclass7fromZi() const
{
   return (s_fclass7fromZi);
}

void  set_fclass7fromZi(short arg)
{
   s_fclass7fromZi= arg;
    return;
}

//float fclass7to = Unit[-]:板形等级7终止值.Limit:[-,-]
float  fclass7to() const
{
   return (f_fclass7to);
}

void  set_fclass7to (float arg)
{
   f_fclass7to= arg;
   s_fclass7toZi = 0;
   return;
}

short   fclass7toZi() const
{
   return (s_fclass7toZi);
}

void  set_fclass7toZi(short arg)
{
   s_fclass7toZi= arg;
    return;
}

//short edropruletype = Unit[-]:边降规则类型1＝绝对；0＝相对.Limit:[-,-]
short  edropruletype() const
{
   return (s_edropruletype);
}

void  set_edropruletype (short arg)
{
   s_edropruletype= arg;
   s_edropruletypeZi = 0;
   return;
}

short   edropruletypeZi() const
{
   return (s_edropruletypeZi);
}

void  set_edropruletypeZi(short arg)
{
   s_edropruletypeZi= arg;
    return;
}

//float edropuptol = Unit[-]:边降偏差上限.Limit:[-,-]
float  edropuptol() const
{
   return (f_edropuptol);
}

void  set_edropuptol (float arg)
{
   f_edropuptol= arg;
   s_edropuptolZi = 0;
   return;
}

short   edropuptolZi() const
{
   return (s_edropuptolZi);
}

void  set_edropuptolZi(short arg)
{
   s_edropuptolZi= arg;
    return;
}

//float edroplowtol = Unit[-]:边降偏差下限.Limit:[-,-]
float  edroplowtol() const
{
   return (f_edroplowtol);
}

void  set_edroplowtol (float arg)
{
   f_edroplowtol= arg;
   s_edroplowtolZi = 0;
   return;
}

short   edroplowtolZi() const
{
   return (s_edroplowtolZi);
}

void  set_edroplowtolZi(short arg)
{
   s_edroplowtolZi= arg;
    return;
}

//float edropclass1from = Unit[-]:边降等级1起始值.Limit:[-,-]
float  edropclass1from() const
{
   return (f_edropclass1from);
}

void  set_edropclass1from (float arg)
{
   f_edropclass1from= arg;
   s_edropclass1fromZi = 0;
   return;
}

short   edropclass1fromZi() const
{
   return (s_edropclass1fromZi);
}

void  set_edropclass1fromZi(short arg)
{
   s_edropclass1fromZi= arg;
    return;
}

//float edropclass1to = Unit[-]:边降等级1终止值.Limit:[-,-]
float  edropclass1to() const
{
   return (f_edropclass1to);
}

void  set_edropclass1to (float arg)
{
   f_edropclass1to= arg;
   s_edropclass1toZi = 0;
   return;
}

short   edropclass1toZi() const
{
   return (s_edropclass1toZi);
}

void  set_edropclass1toZi(short arg)
{
   s_edropclass1toZi= arg;
    return;
}

//float edropclass2from = Unit[-]:边降等级2起始值.Limit:[-,-]
float  edropclass2from() const
{
   return (f_edropclass2from);
}

void  set_edropclass2from (float arg)
{
   f_edropclass2from= arg;
   s_edropclass2fromZi = 0;
   return;
}

short   edropclass2fromZi() const
{
   return (s_edropclass2fromZi);
}

void  set_edropclass2fromZi(short arg)
{
   s_edropclass2fromZi= arg;
    return;
}

//float edropclass2to = Unit[-]:边降等级2终止值.Limit:[-,-]
float  edropclass2to() const
{
   return (f_edropclass2to);
}

void  set_edropclass2to (float arg)
{
   f_edropclass2to= arg;
   s_edropclass2toZi = 0;
   return;
}

short   edropclass2toZi() const
{
   return (s_edropclass2toZi);
}

void  set_edropclass2toZi(short arg)
{
   s_edropclass2toZi= arg;
    return;
}

//float edropclass3from = Unit[-]:边降等级3起始值.Limit:[-,-]
float  edropclass3from() const
{
   return (f_edropclass3from);
}

void  set_edropclass3from (float arg)
{
   f_edropclass3from= arg;
   s_edropclass3fromZi = 0;
   return;
}

short   edropclass3fromZi() const
{
   return (s_edropclass3fromZi);
}

void  set_edropclass3fromZi(short arg)
{
   s_edropclass3fromZi= arg;
    return;
}

//float edropclass3to = Unit[-]:边降等级3终止值.Limit:[-,-]
float  edropclass3to() const
{
   return (f_edropclass3to);
}

void  set_edropclass3to (float arg)
{
   f_edropclass3to= arg;
   s_edropclass3toZi = 0;
   return;
}

short   edropclass3toZi() const
{
   return (s_edropclass3toZi);
}

void  set_edropclass3toZi(short arg)
{
   s_edropclass3toZi= arg;
    return;
}

//float edropclass4from = Unit[-]:边降等级4起始值.Limit:[-,-]
float  edropclass4from() const
{
   return (f_edropclass4from);
}

void  set_edropclass4from (float arg)
{
   f_edropclass4from= arg;
   s_edropclass4fromZi = 0;
   return;
}

short   edropclass4fromZi() const
{
   return (s_edropclass4fromZi);
}

void  set_edropclass4fromZi(short arg)
{
   s_edropclass4fromZi= arg;
    return;
}

//float edropclass4to = Unit[-]:边降等级4终止值.Limit:[-,-]
float  edropclass4to() const
{
   return (f_edropclass4to);
}

void  set_edropclass4to (float arg)
{
   f_edropclass4to= arg;
   s_edropclass4toZi = 0;
   return;
}

short   edropclass4toZi() const
{
   return (s_edropclass4toZi);
}

void  set_edropclass4toZi(short arg)
{
   s_edropclass4toZi= arg;
    return;
}

//float edropclass5from = Unit[-]:边降等级5起始值.Limit:[-,-]
float  edropclass5from() const
{
   return (f_edropclass5from);
}

void  set_edropclass5from (float arg)
{
   f_edropclass5from= arg;
   s_edropclass5fromZi = 0;
   return;
}

short   edropclass5fromZi() const
{
   return (s_edropclass5fromZi);
}

void  set_edropclass5fromZi(short arg)
{
   s_edropclass5fromZi= arg;
    return;
}

//float edropclass5to = Unit[-]:边降等级5终止值.Limit:[-,-]
float  edropclass5to() const
{
   return (f_edropclass5to);
}

void  set_edropclass5to (float arg)
{
   f_edropclass5to= arg;
   s_edropclass5toZi = 0;
   return;
}

short   edropclass5toZi() const
{
   return (s_edropclass5toZi);
}

void  set_edropclass5toZi(short arg)
{
   s_edropclass5toZi= arg;
    return;
}

//float edropclass6from = Unit[-]:边降等级6起始值.Limit:[-,-]
float  edropclass6from() const
{
   return (f_edropclass6from);
}

void  set_edropclass6from (float arg)
{
   f_edropclass6from= arg;
   s_edropclass6fromZi = 0;
   return;
}

short   edropclass6fromZi() const
{
   return (s_edropclass6fromZi);
}

void  set_edropclass6fromZi(short arg)
{
   s_edropclass6fromZi= arg;
    return;
}

//float edropclass6to = Unit[-]:边降等级6终止值.Limit:[-,-]
float  edropclass6to() const
{
   return (f_edropclass6to);
}

void  set_edropclass6to (float arg)
{
   f_edropclass6to= arg;
   s_edropclass6toZi = 0;
   return;
}

short   edropclass6toZi() const
{
   return (s_edropclass6toZi);
}

void  set_edropclass6toZi(short arg)
{
   s_edropclass6toZi= arg;
    return;
}

//float edropclass7from = Unit[-]:边降等级7起始值.Limit:[-,-]
float  edropclass7from() const
{
   return (f_edropclass7from);
}

void  set_edropclass7from (float arg)
{
   f_edropclass7from= arg;
   s_edropclass7fromZi = 0;
   return;
}

short   edropclass7fromZi() const
{
   return (s_edropclass7fromZi);
}

void  set_edropclass7fromZi(short arg)
{
   s_edropclass7fromZi= arg;
    return;
}

//float edropclass7to = Unit[-]:边降等级7终止值.Limit:[-,-]
float  edropclass7to() const
{
   return (f_edropclass7to);
}

void  set_edropclass7to (float arg)
{
   f_edropclass7to= arg;
   s_edropclass7toZi = 0;
   return;
}

short   edropclass7toZi() const
{
   return (s_edropclass7toZi);
}

void  set_edropclass7toZi(short arg)
{
   s_edropclass7toZi= arg;
    return;
}

//short hdifruletype = Unit[-]:同板差规则类型1＝绝对；0＝相对.Limit:[-,-]
short  hdifruletype() const
{
   return (s_hdifruletype);
}

void  set_hdifruletype (short arg)
{
   s_hdifruletype= arg;
   s_hdifruletypeZi = 0;
   return;
}

short   hdifruletypeZi() const
{
   return (s_hdifruletypeZi);
}

void  set_hdifruletypeZi(short arg)
{
   s_hdifruletypeZi= arg;
    return;
}

//float hdifstd1uptol = Unit[-]:同板差偏差Std1上限.Limit:[-,-]
float  hdifstd1uptol() const
{
   return (f_hdifstd1uptol);
}

void  set_hdifstd1uptol (float arg)
{
   f_hdifstd1uptol= arg;
   s_hdifstd1uptolZi = 0;
   return;
}

short   hdifstd1uptolZi() const
{
   return (s_hdifstd1uptolZi);
}

void  set_hdifstd1uptolZi(short arg)
{
   s_hdifstd1uptolZi= arg;
    return;
}

//float hdifstd1lowtol = Unit[-]:同板差偏差Std1下限.Limit:[-,-]
float  hdifstd1lowtol() const
{
   return (f_hdifstd1lowtol);
}

void  set_hdifstd1lowtol (float arg)
{
   f_hdifstd1lowtol= arg;
   s_hdifstd1lowtolZi = 0;
   return;
}

short   hdifstd1lowtolZi() const
{
   return (s_hdifstd1lowtolZi);
}

void  set_hdifstd1lowtolZi(short arg)
{
   s_hdifstd1lowtolZi= arg;
    return;
}

//float hdifstd2uptol = Unit[-]:同板差偏差Std2上限.Limit:[-,-]
float  hdifstd2uptol() const
{
   return (f_hdifstd2uptol);
}

void  set_hdifstd2uptol (float arg)
{
   f_hdifstd2uptol= arg;
   s_hdifstd2uptolZi = 0;
   return;
}

short   hdifstd2uptolZi() const
{
   return (s_hdifstd2uptolZi);
}

void  set_hdifstd2uptolZi(short arg)
{
   s_hdifstd2uptolZi= arg;
    return;
}

//float hdifstd2lowtol = Unit[-]:同板差偏差Std2下限.Limit:[-,-]
float  hdifstd2lowtol() const
{
   return (f_hdifstd2lowtol);
}

void  set_hdifstd2lowtol (float arg)
{
   f_hdifstd2lowtol= arg;
   s_hdifstd2lowtolZi = 0;
   return;
}

short   hdifstd2lowtolZi() const
{
   return (s_hdifstd2lowtolZi);
}

void  set_hdifstd2lowtolZi(short arg)
{
   s_hdifstd2lowtolZi= arg;
    return;
}

//float hdifstd3uptol = Unit[-]:同板差偏差Std3上限.Limit:[-,-]
float  hdifstd3uptol() const
{
   return (f_hdifstd3uptol);
}

void  set_hdifstd3uptol (float arg)
{
   f_hdifstd3uptol= arg;
   s_hdifstd3uptolZi = 0;
   return;
}

short   hdifstd3uptolZi() const
{
   return (s_hdifstd3uptolZi);
}

void  set_hdifstd3uptolZi(short arg)
{
   s_hdifstd3uptolZi= arg;
    return;
}

//float hdifstd3lowtol = Unit[-]:同板差偏差Std3下限.Limit:[-,-]
float  hdifstd3lowtol() const
{
   return (f_hdifstd3lowtol);
}

void  set_hdifstd3lowtol (float arg)
{
   f_hdifstd3lowtol= arg;
   s_hdifstd3lowtolZi = 0;
   return;
}

short   hdifstd3lowtolZi() const
{
   return (s_hdifstd3lowtolZi);
}

void  set_hdifstd3lowtolZi(short arg)
{
   s_hdifstd3lowtolZi= arg;
    return;
}

//float hdifclass1from = Unit[-]:同板差等级1起始值.Limit:[-,-]
float  hdifclass1from() const
{
   return (f_hdifclass1from);
}

void  set_hdifclass1from (float arg)
{
   f_hdifclass1from= arg;
   s_hdifclass1fromZi = 0;
   return;
}

short   hdifclass1fromZi() const
{
   return (s_hdifclass1fromZi);
}

void  set_hdifclass1fromZi(short arg)
{
   s_hdifclass1fromZi= arg;
    return;
}

//float hdifclass1to = Unit[-]:同板差等级1终止值.Limit:[-,-]
float  hdifclass1to() const
{
   return (f_hdifclass1to);
}

void  set_hdifclass1to (float arg)
{
   f_hdifclass1to= arg;
   s_hdifclass1toZi = 0;
   return;
}

short   hdifclass1toZi() const
{
   return (s_hdifclass1toZi);
}

void  set_hdifclass1toZi(short arg)
{
   s_hdifclass1toZi= arg;
    return;
}

//float hdifclass2from = Unit[-]:同板差等级2起始值.Limit:[-,-]
float  hdifclass2from() const
{
   return (f_hdifclass2from);
}

void  set_hdifclass2from (float arg)
{
   f_hdifclass2from= arg;
   s_hdifclass2fromZi = 0;
   return;
}

short   hdifclass2fromZi() const
{
   return (s_hdifclass2fromZi);
}

void  set_hdifclass2fromZi(short arg)
{
   s_hdifclass2fromZi= arg;
    return;
}

//float hdifclass2to = Unit[-]:同板差等级2终止值.Limit:[-,-]
float  hdifclass2to() const
{
   return (f_hdifclass2to);
}

void  set_hdifclass2to (float arg)
{
   f_hdifclass2to= arg;
   s_hdifclass2toZi = 0;
   return;
}

short   hdifclass2toZi() const
{
   return (s_hdifclass2toZi);
}

void  set_hdifclass2toZi(short arg)
{
   s_hdifclass2toZi= arg;
    return;
}

//float hdifclass3from = Unit[-]:同板差等级3起始值.Limit:[-,-]
float  hdifclass3from() const
{
   return (f_hdifclass3from);
}

void  set_hdifclass3from (float arg)
{
   f_hdifclass3from= arg;
   s_hdifclass3fromZi = 0;
   return;
}

short   hdifclass3fromZi() const
{
   return (s_hdifclass3fromZi);
}

void  set_hdifclass3fromZi(short arg)
{
   s_hdifclass3fromZi= arg;
    return;
}

//float hdifclass3to = Unit[-]:同板差等级3终止值.Limit:[-,-]
float  hdifclass3to() const
{
   return (f_hdifclass3to);
}

void  set_hdifclass3to (float arg)
{
   f_hdifclass3to= arg;
   s_hdifclass3toZi = 0;
   return;
}

short   hdifclass3toZi() const
{
   return (s_hdifclass3toZi);
}

void  set_hdifclass3toZi(short arg)
{
   s_hdifclass3toZi= arg;
    return;
}

//float hdifclass4from = Unit[-]:同板差等级4起始值.Limit:[-,-]
float  hdifclass4from() const
{
   return (f_hdifclass4from);
}

void  set_hdifclass4from (float arg)
{
   f_hdifclass4from= arg;
   s_hdifclass4fromZi = 0;
   return;
}

short   hdifclass4fromZi() const
{
   return (s_hdifclass4fromZi);
}

void  set_hdifclass4fromZi(short arg)
{
   s_hdifclass4fromZi= arg;
    return;
}

//float hdifclass4to = Unit[-]:同板差等级4终止值.Limit:[-,-]
float  hdifclass4to() const
{
   return (f_hdifclass4to);
}

void  set_hdifclass4to (float arg)
{
   f_hdifclass4to= arg;
   s_hdifclass4toZi = 0;
   return;
}

short   hdifclass4toZi() const
{
   return (s_hdifclass4toZi);
}

void  set_hdifclass4toZi(short arg)
{
   s_hdifclass4toZi= arg;
    return;
}

//float hdifclass5from = Unit[-]:同板差等级5起始值.Limit:[-,-]
float  hdifclass5from() const
{
   return (f_hdifclass5from);
}

void  set_hdifclass5from (float arg)
{
   f_hdifclass5from= arg;
   s_hdifclass5fromZi = 0;
   return;
}

short   hdifclass5fromZi() const
{
   return (s_hdifclass5fromZi);
}

void  set_hdifclass5fromZi(short arg)
{
   s_hdifclass5fromZi= arg;
    return;
}

//float hdifclass5to = Unit[-]:同板差等级5终止值.Limit:[-,-]
float  hdifclass5to() const
{
   return (f_hdifclass5to);
}

void  set_hdifclass5to (float arg)
{
   f_hdifclass5to= arg;
   s_hdifclass5toZi = 0;
   return;
}

short   hdifclass5toZi() const
{
   return (s_hdifclass5toZi);
}

void  set_hdifclass5toZi(short arg)
{
   s_hdifclass5toZi= arg;
    return;
}

//float hdifclass6from = Unit[-]:同板差等级6起始值.Limit:[-,-]
float  hdifclass6from() const
{
   return (f_hdifclass6from);
}

void  set_hdifclass6from (float arg)
{
   f_hdifclass6from= arg;
   s_hdifclass6fromZi = 0;
   return;
}

short   hdifclass6fromZi() const
{
   return (s_hdifclass6fromZi);
}

void  set_hdifclass6fromZi(short arg)
{
   s_hdifclass6fromZi= arg;
    return;
}

//float hdifclass6to = Unit[-]:同板差等级6终止值.Limit:[-,-]
float  hdifclass6to() const
{
   return (f_hdifclass6to);
}

void  set_hdifclass6to (float arg)
{
   f_hdifclass6to= arg;
   s_hdifclass6toZi = 0;
   return;
}

short   hdifclass6toZi() const
{
   return (s_hdifclass6toZi);
}

void  set_hdifclass6toZi(short arg)
{
   s_hdifclass6toZi= arg;
    return;
}

//float hdifclass7from = Unit[-]:同板差等级7起始值.Limit:[-,-]
float  hdifclass7from() const
{
   return (f_hdifclass7from);
}

void  set_hdifclass7from (float arg)
{
   f_hdifclass7from= arg;
   s_hdifclass7fromZi = 0;
   return;
}

short   hdifclass7fromZi() const
{
   return (s_hdifclass7fromZi);
}

void  set_hdifclass7fromZi(short arg)
{
   s_hdifclass7fromZi= arg;
    return;
}

//float hdifclass7to = Unit[-]:同板差等级7终止值.Limit:[-,-]
float  hdifclass7to() const
{
   return (f_hdifclass7to);
}

void  set_hdifclass7to (float arg)
{
   f_hdifclass7to= arg;
   s_hdifclass7toZi = 0;
   return;
}

short   hdifclass7toZi() const
{
   return (s_hdifclass7toZi);
}

void  set_hdifclass7toZi(short arg)
{
   s_hdifclass7toZi= arg;
    return;
}

//float mwlimit = Unit[-]:中浪阈值.Limit:[-,-]
float  mwlimit() const
{
   return (f_mwlimit);
}

void  set_mwlimit (float arg)
{
   f_mwlimit= arg;
   s_mwlimitZi = 0;
   return;
}

short   mwlimitZi() const
{
   return (s_mwlimitZi);
}

void  set_mwlimitZi(short arg)
{
   s_mwlimitZi= arg;
    return;
}

//float ewlimit = Unit[-]:边浪阈值.Limit:[-,-]
float  ewlimit() const
{
   return (f_ewlimit);
}

void  set_ewlimit (float arg)
{
   f_ewlimit= arg;
   s_ewlimitZi = 0;
   return;
}

short   ewlimitZi() const
{
   return (s_ewlimitZi);
}

void  set_ewlimitZi(short arg)
{
   s_ewlimitZi= arg;
    return;
}

//float qwlimit = Unit[-]:1/4浪阈值.Limit:[-,-]
float  qwlimit() const
{
   return (f_qwlimit);
}

void  set_qwlimit (float arg)
{
   f_qwlimit= arg;
   s_qwlimitZi = 0;
   return;
}

short   qwlimitZi() const
{
   return (s_qwlimitZi);
}

void  set_qwlimitZi(short arg)
{
   s_qwlimitZi= arg;
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
#endif //DATASTARULE_H

