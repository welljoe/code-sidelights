REM*******************************************************************
REM    File               :    OFFCHECKC.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table OFFCHECKC;
REM CREATE TABLE ...

      
             
Create Table OFFCHECKC(
	coildate            VARCHAR2(32)        NOT NULL ,
	coilno              VARCHAR2(22)        ,
	alloycode           VARCHAR2(32)        ,
	flat                VARCHAR2(32)        ,
	bend                VARCHAR2(32)        ,
	codeman             VARCHAR2(32)        ,
	toc                 VARCHAR2(14)        ,
	tom                 VARCHAR2(14)        ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_OFFCHECKC PRIMARY KEY )
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

COMMENT ON Table OFFCHECKC IS ' ACCOUNT OFFCHECKC TABLE ';
COMMENT ON COLUMN OFFCHECKC.coildate IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKC.coilno IS ' Unit[-]:�������.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKC.alloycode IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKC.flat IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKC.bend IS ' Unit[-]:������.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKC.codeman IS ' Unit[-]:��¼��.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKC.toc IS ' Unit[-]:����ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKC.tom IS ' Unit[-]:����޸�ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKC.mop IS ' Unit[-]:���������޸���.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	OFFCHECKC
REM*************************************

DROP TRIGGER ins_b_OFFCHECKC;
CREATE OR REPLACE TRIGGER ins_b_OFFCHECKC
BEFORE INSERT ON OFFCHECKC FOR EACH ROW
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
REM	OFFCHECKC
REM*************************************

DROP TRIGGER upd_b_OFFCHECKC;
CREATE OR REPLACE TRIGGER upd_b_OFFCHECKC
BEFORE UPDATE ON OFFCHECKC FOR EACH ROW
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
