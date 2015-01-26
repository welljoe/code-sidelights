REM*******************************************************************
REM    File               :    UTILITY_COIL.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table UTILITY_COIL;
REM CREATE TABLE ...

              
             
Create Table UTILITY_COIL(
	pcoil               VARCHAR2(16)        NOT NULL ,
	hcoil               VARCHAR2(1)         NOT NULL ,
	demwat              NUMBER(5)           NOT NULL CONSTRAINT cUTILITY_COIL_2 CHECK (demwat BETWEEN -32768 AND +32767),
	steam               NUMBER(5)           CONSTRAINT cUTILITY_COIL_3 CHECK (steam BETWEEN -32768 AND +32767),
	recwat              NUMBER(5)           CONSTRAINT cUTILITY_COIL_4 CHECK (recwat BETWEEN -32768 AND +32767),
	potwat              NUMBER(5)           CONSTRAINT cUTILITY_COIL_5 CHECK (potwat BETWEEN -32768 AND +32767),
	compres             NUMBER(5)           CONSTRAINT cUTILITY_COIL_6 CHECK (compres BETWEEN -32768 AND +32767),
	regacd              NUMBER(5)           CONSTRAINT cUTILITY_COIL_7 CHECK (regacd BETWEEN -32768 AND +32767),
	wasacd1             NUMBER(5)           CONSTRAINT cUTILITY_COIL_8 CHECK (wasacd1 BETWEEN -32768 AND +32767),
	wasacd2             NUMBER(5)           CONSTRAINT cUTILITY_COIL_9 CHECK (wasacd2 BETWEEN -32768 AND +32767),
	waswat              NUMBER(5)           CONSTRAINT cUTILITY_COIL_10 CHECK (waswat BETWEEN -32768 AND +32767),
	indwat              NUMBER(5)           CONSTRAINT cUTILITY_COIL_11 CHECK (indwat BETWEEN -32768 AND +32767),
	weakacd             NUMBER(5)           CONSTRAINT cUTILITY_COIL_12 CHECK (weakacd BETWEEN -32768 AND +32767),
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_UTILITY_COIL PRIMARY KEY (pcoil)
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

COMMENT ON Table UTILITY_COIL IS ' UTILITY DATA BY COILS ';
COMMENT ON COLUMN UTILITY_COIL.pcoil IS ' Unit[-]:Product coil number.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.hcoil IS ' Unit[-]:Hot coil number.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.demwat IS ' Unit[-]:Demineraized water flow sum  for one coil.Limit:[-,1] ';
COMMENT ON COLUMN UTILITY_COIL.steam IS ' Unit[-]:Steam flow sum  for one coil.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.recwat IS ' Unit[-]:RECIRCUL. Water (supply) flow sum  for one coil.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.potwat IS ' Unit[I]:POTABLE Water flow sum  for one coil.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.compres IS ' Unit[I]:COMPRESSED Air  ( PL) flow sum  for one coil.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.regacd IS ' Unit[I]:Regene Acid flow (PL) flow sum  for one coil.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.wasacd1 IS ' Unit[I]:Waste Acid DISC. Flow (PL) flow sum  for one coil.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.wasacd2 IS ' Unit[I]:Waste Acid flow (PL) flow sum  for one coil.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.waswat IS ' Unit[I]:Wash Water (PL) flow sum  for one coil.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.indwat IS ' Unit[I]:Industrial Water flow sum  for one coil.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.weakacd IS ' Unit[I]:Weak Acid (PL) flow sum  for one coil.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.toc IS ' Unit[-]:create time.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.tom IS ' Unit[-]:modify time.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_COIL.mop IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	UTILITY_COIL
REM*************************************

DROP TRIGGER ins_b_UTILITY_COIL;
CREATE OR REPLACE TRIGGER ins_b_UTILITY_COIL
BEFORE INSERT ON UTILITY_COIL FOR EACH ROW
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
REM	UTILITY_COIL
REM*************************************

DROP TRIGGER upd_b_UTILITY_COIL;
CREATE OR REPLACE TRIGGER upd_b_UTILITY_COIL
BEFORE UPDATE ON UTILITY_COIL FOR EACH ROW
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
