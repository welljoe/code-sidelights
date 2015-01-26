#ifndef DBSTDACCESS_H
#define DBSTDACCESS_H

#include "CatchDbaxError.h"

class DbStdAccess
{
public:
//
//A T T R I B U T E S
//===================
//
	long     oracleSqlCode; // sqlcode of last operation
	long     oracleRowsProcessed; // number of executed rows
	CatchDbaxError*  pCatch; // pointer for Oracle Error handling
	int     print_ora_error();

//
// constructor
//
public: 
DbStdAccess();

//
// methods 
//
public:
//
// connect to DB
//
char* dbLogin( char* ); 
//
//	disconnect from DB 
//
char* dbLogout();

public:
//
// commit transaktion 
// 
char* dbCommit(); 

public:
//
// transaktion rollback 

char* dbRollback(); 

//
// get Oracle system date & time
//
char* getOracleDateTime( char* dateTime );

};  // end of class 
#endif  //DBSTDACCESS_H
