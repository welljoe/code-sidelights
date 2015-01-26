REM*******************************************************************
REM    File               :    OILB.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table OILB;
REM CREATE TABLE ...

  
             
Create Table OILB(
	oildate             VARCHAR2(32)        NOT NULL ,
	crewno              VARCHAR2(8)         ,
	shiftno             VARCHAR2(8)         ,
	s1oil               FLOAT(126)          ,
	s1water             FLOAT(126)          ,
	s1tmp               FLOAT(126)          ,
	s2oil               FLOAT(126)          ,
	s2water             FLOAT(126)          ,
	s2tmp               FLOAT(126)          ,
	mixoil              FLOAT(126)          ,
	mixwater            FLOAT(126)          ,
	mixtmp              FLOAT(126)          ,
	rolloila            FLOAT(126)          ,
	rolloilb            FLOAT(126)          ,
	rolloilc            FLOAT(126)          ,
	rolloild            FLOAT(126)          ,
	shifttotal          FLOAT(126)          ,
	instruct            VARCHAR2(32)        ,
	codeman             VARCHAR2(8)         ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_OILB PRIMARY KEY )
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

COMMENT ON Table OILB IS ' ACCOUNT OILB TABLE ';
COMMENT ON COLUMN OILB.oildate IS ' Unit[-]:日期.Limit:[-,-] ';
COMMENT ON COLUMN OILB.crewno IS ' Unit[-]:班组.Limit:[-,-] ';
COMMENT ON COLUMN OILB.shiftno IS ' Unit[-]:班次.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s1oil IS ' Unit[L]:S1箱加油L.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s1water IS ' Unit[m3]:S1箱加水m3.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s1tmp IS ' Unit[-]:S1箱温度.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s2oil IS ' Unit[L]:S2箱加油L.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s2water IS ' Unit[m3]:S2箱加水m3.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s2tmp IS ' Unit[-]:S2箱温度.Limit:[-,-] ';
COMMENT ON COLUMN OILB.mixoil IS ' Unit[L]:mix箱加油L.Limit:[-,-] ';
COMMENT ON COLUMN OILB.mixwater IS ' Unit[m3]:mix箱加水m3.Limit:[-,-] ';
COMMENT ON COLUMN OILB.mixtmp IS ' Unit[-]:mix箱温度.Limit:[-,-] ';
COMMENT ON COLUMN OILB.rolloila IS ' Unit[m3]:向下一班次交班时，原油箱液位.Limit:[-,-] ';
COMMENT ON COLUMN OILB.rolloilb IS ' Unit[-]:当班原油箱加油桶数.Limit:[-,-] ';
COMMENT ON COLUMN OILB.rolloilc IS ' Unit[-]:当班预热桶数.Limit:[-,-] ';
COMMENT ON COLUMN OILB.rolloild IS ' Unit[-]:现场轧制油桶余数.Limit:[-,-] ';
COMMENT ON COLUMN OILB.shifttotal IS ' Unit[t]:班产量.Limit:[-,-] ';
COMMENT ON COLUMN OILB.instruct IS ' Unit[-]:备注.Limit:[-,-] ';
COMMENT ON COLUMN OILB.codeman IS ' Unit[-]:记录人.Limit:[-,-] ';
COMMENT ON COLUMN OILB.toc IS ' Unit[-]:创建时间.Limit:[-,-] ';
COMMENT ON COLUMN OILB.tom IS ' Unit[-]:最后修改时间.Limit:[-,-] ';
COMMENT ON COLUMN OILB.mop IS ' Unit[-]:创建或者修改者.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	OILB
REM*************************************

DROP TRIGGER ins_b_OILB;
CREATE OR REPLACE TRIGGER ins_b_OILB
BEFORE INSERT ON OILB FOR EACH ROW
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
REM	OILB
REM*************************************

DROP TRIGGER upd_b_OILB;
CREATE OR REPLACE TRIGGER upd_b_OILB
BEFORE UPDATE ON OILB FOR EACH ROW
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
