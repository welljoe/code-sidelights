REM*******************************************************************
REM    File               :    MLDTC_DAT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table MLDTC_DAT;
REM CREATE TABLE ...

      
             
Create Table MLDTC_DAT(
	pcoil               VARCHAR2(16)        NOT NULL ,
	hcoil               VARCHAR2(16)        NOT NULL ,
	rno                 NUMBER(5)           CONSTRAINT cMLDTC_DAT_2 CHECK (rno BETWEEN -32768 AND +32767),
	rectime             NUMBER(5)           CONSTRAINT cMLDTC_DAT_3 CHECK (rectime BETWEEN -32768 AND +32767),
	value               VARCHAR2(100000)    ,
	CONSTRAINT pk_MLDTC_DAT PRIMARY KEY (pcoil,hcoil)
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

COMMENT ON Table MLDTC_DAT IS ' PRODUCTION COIL DATA ';
COMMENT ON COLUMN MLDTC_DAT.pcoil IS ' Unit[-]:Product coil number.Limit:[-,-] ';
COMMENT ON COLUMN MLDTC_DAT.hcoil IS ' Unit[-]:Hot coil number.Limit:[-,-] ';
COMMENT ON COLUMN MLDTC_DAT.rno IS ' Unit[-]:record number.Limit:[-,1] ';
COMMENT ON COLUMN MLDTC_DAT.rectime IS ' Unit[-]:recevice time.Limit:[-,-] ';
COMMENT ON COLUMN MLDTC_DAT.value IS ' Unit[-]:MLDTC data.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	MLDTC_DAT
REM*************************************

DROP TRIGGER ins_b_MLDTC_DAT;
CREATE OR REPLACE TRIGGER ins_b_MLDTC_DAT
BEFORE INSERT ON MLDTC_DAT FOR EACH ROW
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
REM	MLDTC_DAT
REM*************************************

DROP TRIGGER upd_b_MLDTC_DAT;
CREATE OR REPLACE TRIGGER upd_b_MLDTC_DAT
BEFORE UPDATE ON MLDTC_DAT FOR EACH ROW
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
