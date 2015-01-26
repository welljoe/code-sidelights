REM*******************************************************************
REM    File               :    COILREC.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table COILREC;
REM CREATE TABLE ...

          
             
Create Table COILREC(
	pcoil               VARCHAR2(16)        NOT NULL ,
	hcoil               VARCHAR2(16)        NOT NULL ,
	actflag             NUMBER(5)           CONSTRAINT cCOILREC_2 CHECK (actflag BETWEEN -32768 AND +32767),
	septflag            NUMBER(5)           CONSTRAINT cCOILREC_3 CHECK (septflag BETWEEN -32768 AND +32767),
	shapflag            NUMBER(5)           CONSTRAINT cCOILREC_4 CHECK (shapflag BETWEEN -32768 AND +32767),
	edropflag           NUMBER(5)           CONSTRAINT cCOILREC_5 CHECK (edropflag BETWEEN -32768 AND +32767),
	stadataflag         NUMBER(5)           CONSTRAINT cCOILREC_6 CHECK (stadataflag BETWEEN -32768 AND +32767),
	techdataflag        NUMBER(5)           CONSTRAINT cCOILREC_7 CHECK (techdataflag BETWEEN -32768 AND +32767),
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_COILREC PRIMARY KEY (pcoil,hcoil)
	USING INDEX TABLESPACE INDTBS STORAGE  ( FREELIST GROUPS 2 ) 
)
TABLESPACE DATATBS
PCTFREE	20
STORAGE (     INITIAL	500K
              NEXT	    500K
              MINEXTENTS	1
              MAXEXTENTS	UNLIMITED
              PCTINCREASE	0
       FREELIST GROUPS 2 );

COMMENT ON Table COILREC IS ' COIL MANAGE TABLE ';
COMMENT ON COLUMN COILREC.pcoil IS ' Unit[-]:Product coil number.Limit:[-,-] ';
COMMENT ON COLUMN COILREC.hcoil IS ' Unit[-]:Hot coil number.Limit:[-,-] ';
COMMENT ON COLUMN COILREC.actflag IS ' Unit[-]:Act Value Flag.Limit:[-,-] ';
COMMENT ON COLUMN COILREC.septflag IS ' Unit[-]:Setup Value Flag.Limit:[-,-] ';
COMMENT ON COLUMN COILREC.shapflag IS ' Unit[-]:Shape Value Flag.Limit:[-,-] ';
COMMENT ON COLUMN COILREC.edropflag IS ' Unit[-]:Edrop Value Flag.Limit:[-,-] ';
COMMENT ON COLUMN COILREC.stadataflag IS ' Unit[-]:Static Value Flag.Limit:[-,-] ';
COMMENT ON COLUMN COILREC.techdataflag IS ' Unit[-]:Tech Value Flag.Limit:[-,-] ';
COMMENT ON COLUMN COILREC.toc IS ' Unit[-]: -,-] ';
COMMENT ON COLUMN COILREC.tom IS ' Unit[-]: -,-] ';
COMMENT ON COLUMN COILREC.mop IS ' Unit[-]: -,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	COILREC
REM*************************************

DROP TRIGGER ins_b_COILREC;
CREATE OR REPLACE TRIGGER ins_b_COILREC
BEFORE INSERT ON COILREC FOR EACH ROW
DECLARE
	programm 		VARCHAR(120);
	user     		VARCHAR(30); 
	session_id 		NUMBER;      
BEGIN
	SELECT userenv('SESSIONID') INTO session_id FROM dual;
		BEGIN
		SELECT program,username INTO programm,user FROM V$SESSION
		WHERE audsid = session_id;
		EXCEPTION
		WHEN NO_DATA_FOUND THEN
				programm := 'UNKNOWN';
				user := 'UNKNOWN';
		WHEN OTHERS THEN
				IF (session_id = 0) THEN
				programm := 'JOB';
			ELSE
				programm := 'UNKNOWN';
		END IF;
		END;
		:new.toc := sysdate;
		:new.tom := sysdate;
		:new.mop := substr( programm ,1 ,60);
END;
/

REM*************************************
REM UPDATE TRIGGER FOR TABLE
REM	COILREC
REM*************************************

DROP TRIGGER upd_b_COILREC;
CREATE OR REPLACE TRIGGER upd_b_COILREC
BEFORE UPDATE ON COILREC FOR EACH ROW
DECLARE
	programm 		VARCHAR(120);
	user     		VARCHAR(30); 
	session_id 		NUMBER;      
BEGIN
	SELECT userenv('SESSIONID') INTO session_id FROM dual;
		BEGIN
		SELECT program,username INTO programm,user FROM V$SESSION
		WHERE audsid = session_id;
		EXCEPTION
		WHEN NO_DATA_FOUND THEN
				programm := 'UNKNOWN';
				user := 'UNKNOWN';
		WHEN OTHERS THEN
				IF (session_id = 0) THEN
				programm := 'JOB';
			ELSE
				programm := 'UNKNOWN';
		END IF;
		END;
		:new.tom := sysdate;
		:new.mop := substr( programm ,1 ,60);
END;
/


REM*******************************************************************
REM             		End of Scripts
REM             Copyright (c)  SGAI AI 2009. All Rights Reserved
REM*******************************************************************
