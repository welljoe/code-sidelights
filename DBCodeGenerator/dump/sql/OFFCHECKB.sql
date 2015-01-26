REM*******************************************************************
REM    File               :    OFFCHECKB.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table OFFCHECKB;
REM CREATE TABLE ...

      
             
Create Table OFFCHECKB(
	coildate            VARCHAR2(32)        NOT NULL ,
	coilno              VARCHAR2(22)        ,
	alloycode           VARCHAR2(32)        ,
	gettime             VARCHAR2(16)        ,
	sendtime            VARCHAR2(16)        ,
	oil                 VARCHAR2(8)         ,
	fe                  VARCHAR2(8)         ,
	total               VARCHAR2(8)         ,
	rough_hor           VARCHAR2(8)         ,
	rough_ver           VARCHAR2(8)         ,
	codeman             VARCHAR2(8)         ,
	toc                 VARCHAR2(14)        ,
	tom                 VARCHAR2(14)        ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_OFFCHECKB PRIMARY KEY )
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

COMMENT ON Table OFFCHECKB IS ' ACCOUNT OFFCHECKB TABLE ';
COMMENT ON COLUMN OFFCHECKB.coildate IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.coilno IS ' Unit[-]:��Ӳ���.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.alloycode IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.gettime IS ' Unit[-]:ȡ��ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.sendtime IS ' Unit[-]:����ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.oil IS ' Unit[mg/m2]:����.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.fe IS ' Unit[mg/m2]:����.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.total IS ' Unit[mg/m2]:����.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.rough_hor IS ' Unit[-]:����ֲڶ�.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.rough_ver IS ' Unit[-]:����ֲڶ�.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.codeman IS ' Unit[-]:��¼��.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.toc IS ' Unit[-]:����ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.tom IS ' Unit[-]:����޸�ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKB.mop IS ' Unit[-]:���������޸���.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	OFFCHECKB
REM*************************************

DROP TRIGGER ins_b_OFFCHECKB;
CREATE OR REPLACE TRIGGER ins_b_OFFCHECKB
BEFORE INSERT ON OFFCHECKB FOR EACH ROW
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
REM	OFFCHECKB
REM*************************************

DROP TRIGGER upd_b_OFFCHECKB;
CREATE OR REPLACE TRIGGER upd_b_OFFCHECKB
BEFORE UPDATE ON OFFCHECKB FOR EACH ROW
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
