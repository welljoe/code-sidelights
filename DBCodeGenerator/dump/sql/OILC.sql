REM*******************************************************************
REM    File               :    OILC.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table OILC;
REM CREATE TABLE ...

  
             
Create Table OILC(
	oildate             VARCHAR2(32)        NOT NULL ,
	crewno              VARCHAR2(8)         ,
	shiftno             VARCHAR2(8)         ,
	coilno              VARCHAR2(16)        ,
	reflectup           FLOAT(126)          ,
	reflectdown         FLOAT(126)          ,
	codeman             VARCHAR2(8)         ,
	rflectupws          FLOAT(126)          ,
	rflectupce          FLOAT(126)          ,
	rflectupds          FLOAT(126)          ,
	rflectdownws        FLOAT(126)          ,
	rflectdownds        FLOAT(126)          ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_OILC PRIMARY KEY )
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

COMMENT ON Table OILC IS ' ACCOUNT OILC TABLE ';
COMMENT ON COLUMN OILC.oildate IS ' Unit[-]:日期.Limit:[-,-] ';
COMMENT ON COLUMN OILC.crewno IS ' Unit[-]:班组.Limit:[-,-] ';
COMMENT ON COLUMN OILC.shiftno IS ' Unit[-]:班次.Limit:[-,-] ';
COMMENT ON COLUMN OILC.coilno IS ' Unit[-]:钢卷号.Limit:[-,-] ';
COMMENT ON COLUMN OILC.reflectup IS ' Unit[-]:反射率(上).Limit:[-,-] ';
COMMENT ON COLUMN OILC.reflectdown IS ' Unit[-]:反射率(下).Limit:[-,-] ';
COMMENT ON COLUMN OILC.codeman IS ' Unit[-]:记录人.Limit:[-,-] ';
COMMENT ON COLUMN OILC.rflectupws IS ' Unit[-]:反射率上WS.Limit:[-,-] ';
COMMENT ON COLUMN OILC.rflectupce IS ' Unit[-]:反射率上CE.Limit:[-,-] ';
COMMENT ON COLUMN OILC.rflectupds IS ' Unit[-]:反射率上DS.Limit:[-,-] ';
COMMENT ON COLUMN OILC.rflectdownws IS ' Unit[-]:反射率下WS.Limit:[-,-] ';
COMMENT ON COLUMN OILC.rflectdownds IS ' Unit[-]:反射率下DS.Limit:[-,-] ';
COMMENT ON COLUMN OILC.toc IS ' Unit[-]:创建时间.Limit:[-,-] ';
COMMENT ON COLUMN OILC.tom IS ' Unit[-]:最后修改时间.Limit:[-,-] ';
COMMENT ON COLUMN OILC.mop IS ' Unit[-]:创建或者修改者.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	OILC
REM*************************************

DROP TRIGGER ins_b_OILC;
CREATE OR REPLACE TRIGGER ins_b_OILC
BEFORE INSERT ON OILC FOR EACH ROW
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
REM	OILC
REM*************************************

DROP TRIGGER upd_b_OILC;
CREATE OR REPLACE TRIGGER upd_b_OILC
BEFORE UPDATE ON OILC FOR EACH ROW
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
