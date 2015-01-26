REM*******************************************************************
REM    File               :    UTILITY_SHIFT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table UTILITY_SHIFT;
REM CREATE TABLE ...

            
             
Create Table UTILITY_SHIFT(
	datee               VARCHAR2(8)         ,
	timee               VARCHAR2(6)         ,
	sendtime            VARCHAR2(16)        NOT NULL ,
	sno                 VARCHAR2(2)         ,
	cno                 VARCHAR2(2)         ,
	demwat              NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_5 CHECK (demwat BETWEEN -32768 AND +32767),
	steam               NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_6 CHECK (steam BETWEEN -32768 AND +32767),
	recwat              NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_7 CHECK (recwat BETWEEN -32768 AND +32767),
	potwat              NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_8 CHECK (potwat BETWEEN -32768 AND +32767),
	compres             NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_9 CHECK (compres BETWEEN -32768 AND +32767),
	regacd              NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_10 CHECK (regacd BETWEEN -32768 AND +32767),
	wasacd1             NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_11 CHECK (wasacd1 BETWEEN -32768 AND +32767),
	wasacd2             NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_12 CHECK (wasacd2 BETWEEN -32768 AND +32767),
	waswat              NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_13 CHECK (waswat BETWEEN -32768 AND +32767),
	indwat              NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_14 CHECK (indwat BETWEEN -32768 AND +32767),
	weakacd             NUMBER(5)           CONSTRAINT cUTILITY_SHIFT_15 CHECK (weakacd BETWEEN -32768 AND +32767),
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_UTILITY_SHIFT PRIMARY KEY (sendtime)
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

COMMENT ON Table UTILITY_SHIFT IS ' UTILITY DATA BY SHIFT ';
COMMENT ON COLUMN UTILITY_SHIFT.datee IS ' Unit[-]:date.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.timee IS ' Unit[-]:time.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.sendtime IS ' Unit[-]:Record Time.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.sno IS ' Unit[-]:Shift code.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.cno IS ' Unit[-]:Crew code.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.demwat IS ' Unit[I]:Demineraized water flow sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.steam IS ' Unit[I]:Steam FLOW sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.recwat IS ' Unit[I]:RECIRCUL. Water  (supply) sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.potwat IS ' Unit[I]:POTABLE Water sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.compres IS ' Unit[I]:COMPRESSED Air  ( PL) sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.regacd IS ' Unit[I]:Regene Acid flow (PL) sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.wasacd1 IS ' Unit[I]:Waste Acid DISC. Flow (PL) sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.wasacd2 IS ' Unit[I]:Waste Acid flow (PL) sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.waswat IS ' Unit[I]:Wash Water (PL) sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.indwat IS ' Unit[-]:Industrial Water sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.weakacd IS ' Unit[-]:Weak Acid (PL) sum  for one shift.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.toc IS ' Unit[-]:create time.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.tom IS ' Unit[-]:modify time.Limit:[-,-] ';
COMMENT ON COLUMN UTILITY_SHIFT.mop IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	UTILITY_SHIFT
REM*************************************

DROP TRIGGER ins_b_UTILITY_SHIFT;
CREATE OR REPLACE TRIGGER ins_b_UTILITY_SHIFT
BEFORE INSERT ON UTILITY_SHIFT FOR EACH ROW
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
REM	UTILITY_SHIFT
REM*************************************

DROP TRIGGER upd_b_UTILITY_SHIFT;
CREATE OR REPLACE TRIGGER upd_b_UTILITY_SHIFT
BEFORE UPDATE ON UTILITY_SHIFT FOR EACH ROW
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
