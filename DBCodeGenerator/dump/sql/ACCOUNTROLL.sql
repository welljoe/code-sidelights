REM*******************************************************************
REM    File               :    ACCOUNTROLL.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table ACCOUNTROLL;
REM CREATE TABLE ...

  
             
Create Table ACCOUNTROLL(
	tdate               VARCHAR2(32)        ,
	crewno              VARCHAR2(8)         ,
	shiftno             NUMBER(5)           CONSTRAINT cACCOUNTROLL_2 CHECK (shiftno BETWEEN -32768 AND +32767),
	standno             NUMBER(5)           NOT NULL CONSTRAINT cACCOUNTROLL_3 CHECK (standno BETWEEN -32768 AND +32767),
	recid               NUMBER(10)          CONSTRAINT cACCOUNTROLL_4 CHECK (recid BETWEEN -2147483648 AND +2147483647),
	rollidup            VARCHAR2(32)        NOT NULL ,
	rolliddw            VARCHAR2(32)        NOT NULL ,
	rollweightup        NUMBER(10)          CONSTRAINT cACCOUNTROLL_7 CHECK (rollweightup BETWEEN -2147483648 AND +2147483647),
	rollweightdw        NUMBER(10)          CONSTRAINT cACCOUNTROLL_8 CHECK (rollweightdw BETWEEN -2147483648 AND +2147483647),
	rollchgreason       NUMBER(5)           CONSTRAINT cACCOUNTROLL_9 CHECK (rollchgreason BETWEEN -32768 AND +32767),
	rollcheck           NUMBER(5)           CONSTRAINT cACCOUNTROLL_10 CHECK (rollcheck BETWEEN -32768 AND +32767),
	recman              VARCHAR2(32)        ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_ACCOUNTROLL PRIMARY KEY (standno,rollidup,rolliddw)
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

COMMENT ON Table ACCOUNTROLL IS ' ACCOUNT ROLL TABLE ';
COMMENT ON COLUMN ACCOUNTROLL.tdate IS ' Unit[-]:日期.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.crewno IS ' Unit[-]:班组.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.shiftno IS ' Unit[-]:班次.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.standno IS ' Unit[-]:机架号.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.recid IS ' Unit[-]:记录号.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.rollidup IS ' Unit[-]:上工作辊ID.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.rolliddw IS ' Unit[-]:下工作辊ID.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.rollweightup IS ' Unit[-]:上工作辊轧制重量.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.rollweightdw IS ' Unit[-]:上工作辊轧制重量.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.rollchgreason IS ' Unit[-]:换辊原因.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.rollcheck IS ' Unit[-]:辊面检查结果.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.recman IS ' Unit[-]:记录人.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.toc IS ' Unit[-]:创建时间.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.tom IS ' Unit[-]:最后修改时间.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTROLL.mop IS ' Unit[-]:创建或者修改者.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	ACCOUNTROLL
REM*************************************

DROP TRIGGER ins_b_ACCOUNTROLL;
CREATE OR REPLACE TRIGGER ins_b_ACCOUNTROLL
BEFORE INSERT ON ACCOUNTROLL FOR EACH ROW
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
REM	ACCOUNTROLL
REM*************************************

DROP TRIGGER upd_b_ACCOUNTROLL;
CREATE OR REPLACE TRIGGER upd_b_ACCOUNTROLL
BEFORE UPDATE ON ACCOUNTROLL FOR EACH ROW
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
