REM*******************************************************************
REM    File               :    TBTRD_DAT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table TBTRD_DAT;
REM CREATE TABLE ...

      
             
Create Table TBTRD_DAT(
	pcoil               VARCHAR2(16)        NOT NULL ,
	hcoil               VARCHAR2(16)        NOT NULL ,
	rno                 NUMBER(5)           CONSTRAINT cTBTRD_DAT_2 CHECK (rno BETWEEN -32768 AND +32767),
	rectime             VARCHAR2(16)        ,
	value               VARCHAR2(30000)     ,
	flg                 NUMBER(5)           CONSTRAINT cTBTRD_DAT_5 CHECK (flg BETWEEN -32768 AND +32767),
	CONSTRAINT pk_TBTRD_DAT PRIMARY KEY (pcoil,hcoil)
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

COMMENT ON Table TBTRD_DAT IS ' TOP/BOTTOM TREND DATA ';
COMMENT ON COLUMN TBTRD_DAT.pcoil IS ' Unit[-]:Product coil number.Limit:[-,-] ';
COMMENT ON COLUMN TBTRD_DAT.hcoil IS ' Unit[-]:Hot coil number.Limit:[-,-] ';
COMMENT ON COLUMN TBTRD_DAT.rno IS ' Unit[-]:record number.Limit:[-,1] ';
COMMENT ON COLUMN TBTRD_DAT.rectime IS ' Unit[-]:recevice time.Limit:[-,-] ';
COMMENT ON COLUMN TBTRD_DAT.value IS ' Unit[-]:TBTRD data.Limit:[-,-] ';
COMMENT ON COLUMN TBTRD_DAT.flg IS ' Unit[-]:read/write flag.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	TBTRD_DAT
REM*************************************

DROP TRIGGER ins_b_TBTRD_DAT;
CREATE OR REPLACE TRIGGER ins_b_TBTRD_DAT
BEFORE INSERT ON TBTRD_DAT FOR EACH ROW
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
REM	TBTRD_DAT
REM*************************************

DROP TRIGGER upd_b_TBTRD_DAT;
CREATE OR REPLACE TRIGGER upd_b_TBTRD_DAT
BEFORE UPDATE ON TBTRD_DAT FOR EACH ROW
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
