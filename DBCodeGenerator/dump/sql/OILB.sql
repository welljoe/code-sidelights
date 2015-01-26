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
COMMENT ON COLUMN OILB.oildate IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OILB.crewno IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OILB.shiftno IS ' Unit[-]:���.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s1oil IS ' Unit[L]:S1�����L.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s1water IS ' Unit[m3]:S1���ˮm3.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s1tmp IS ' Unit[-]:S1���¶�.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s2oil IS ' Unit[L]:S2�����L.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s2water IS ' Unit[m3]:S2���ˮm3.Limit:[-,-] ';
COMMENT ON COLUMN OILB.s2tmp IS ' Unit[-]:S2���¶�.Limit:[-,-] ';
COMMENT ON COLUMN OILB.mixoil IS ' Unit[L]:mix�����L.Limit:[-,-] ';
COMMENT ON COLUMN OILB.mixwater IS ' Unit[m3]:mix���ˮm3.Limit:[-,-] ';
COMMENT ON COLUMN OILB.mixtmp IS ' Unit[-]:mix���¶�.Limit:[-,-] ';
COMMENT ON COLUMN OILB.rolloila IS ' Unit[m3]:����һ��ν���ʱ��ԭ����Һλ.Limit:[-,-] ';
COMMENT ON COLUMN OILB.rolloilb IS ' Unit[-]:����ԭ�������Ͱ��.Limit:[-,-] ';
COMMENT ON COLUMN OILB.rolloilc IS ' Unit[-]:����Ԥ��Ͱ��.Limit:[-,-] ';
COMMENT ON COLUMN OILB.rolloild IS ' Unit[-]:�ֳ�������Ͱ����.Limit:[-,-] ';
COMMENT ON COLUMN OILB.shifttotal IS ' Unit[t]:�����.Limit:[-,-] ';
COMMENT ON COLUMN OILB.instruct IS ' Unit[-]:��ע.Limit:[-,-] ';
COMMENT ON COLUMN OILB.codeman IS ' Unit[-]:��¼��.Limit:[-,-] ';
COMMENT ON COLUMN OILB.toc IS ' Unit[-]:����ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OILB.tom IS ' Unit[-]:����޸�ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OILB.mop IS ' Unit[-]:���������޸���.Limit:[-,-] ';
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
