REM*******************************************************************
REM    File               :    ACCOUNTTHICK.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table ACCOUNTTHICK;
REM CREATE TABLE ...

              
             
Create Table ACCOUNTTHICK(
	tdate               VARCHAR2(32)        ,
	crewno              VARCHAR2(8)         ,
	shiftno             NUMBER(5)           CONSTRAINT cACCOUNTTHICK_2 CHECK (shiftno BETWEEN -32768 AND +32767),
	coilno              VARCHAR2(16)        NOT NULL ,
	recid               NUMBER(10)          NOT NULL CONSTRAINT cACCOUNTTHICK_4 CHECK (recid BETWEEN -2147483648 AND +2147483647),
	thickchgno          NUMBER(5)           CONSTRAINT cACCOUNTTHICK_5 CHECK (thickchgno BETWEEN -32768 AND +32767),
	thickchgpos         NUMBER(10)          CONSTRAINT cACCOUNTTHICK_6 CHECK (thickchgpos BETWEEN -2147483648 AND +2147483647),
	thickchgval         NUMBER(10)          CONSTRAINT cACCOUNTTHICK_7 CHECK (thickchgval BETWEEN -2147483648 AND +2147483647),
	thickchgrea         VARCHAR2(32)        ,
	minplspeed          NUMBER(10)          CONSTRAINT cACCOUNTTHICK_9 CHECK (minplspeed BETWEEN -2147483648 AND +2147483647),
	recman              VARCHAR2(32)        ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_ACCOUNTTHICK PRIMARY KEY (coilno,recid)
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

COMMENT ON Table ACCOUNTTHICK IS ' ACCOUNT THICK TABLE ';
COMMENT ON COLUMN ACCOUNTTHICK.tdate IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.crewno IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.shiftno IS ' Unit[-]:���.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.coilno IS ' Unit[-]:���.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.recid IS ' Unit[-]:��Ȳ�����¼ID.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.thickchgno IS ' Unit[-]:��Ȳ�������.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.thickchgpos IS ' Unit[-]:��Ȳ���λ��.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.thickchgval IS ' Unit[-]:��Ȳ���ֵ.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.thickchgrea IS ' Unit[-]:��Ȳ���ԭ��.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.minplspeed IS ' Unit[-]:�����ϴ�ٶ�.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.recman IS ' Unit[-]:��Ȳ�����¼��.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.toc IS ' Unit[-]:����ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.tom IS ' Unit[-]:����޸�ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN ACCOUNTTHICK.mop IS ' Unit[-]:���������޸���.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	ACCOUNTTHICK
REM*************************************

DROP TRIGGER ins_b_ACCOUNTTHICK;
CREATE OR REPLACE TRIGGER ins_b_ACCOUNTTHICK
BEFORE INSERT ON ACCOUNTTHICK FOR EACH ROW
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
REM	ACCOUNTTHICK
REM*************************************

DROP TRIGGER upd_b_ACCOUNTTHICK;
CREATE OR REPLACE TRIGGER upd_b_ACCOUNTTHICK
BEFORE UPDATE ON ACCOUNTTHICK FOR EACH ROW
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
