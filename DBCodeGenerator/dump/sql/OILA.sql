REM*******************************************************************
REM    File               :    OILA.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table OILA;
REM CREATE TABLE ...

  
             
Create Table OILA(
	oildate             VARCHAR2(32)        NOT NULL ,
	crewno              VARCHAR2(8)         ,
	shiftno             VARCHAR2(8)         ,
	expno               VARCHAR2(16)        NOT NULL ,
	exptime             VARCHAR2(32)        ,
	boxlevel            FLOAT(126)          ,
	cycflag             VARCHAR2(8)         ,
	samplepos           VARCHAR2(8)         ,
	density             FLOAT(126)          ,
	ph                  FLOAT(126)          ,
	conductivity        FLOAT(126)          ,
	sapval              FLOAT(126)          ,
	iron                FLOAT(126)          ,
	ironsoap            FLOAT(126)          ,
	stabfactor          FLOAT(126)          ,
	cl                  FLOAT(126)          ,
	freeacid            FLOAT(126)          ,
	ash                 FLOAT(126)          ,
	particle            FLOAT(126)          ,
	eti                 FLOAT(126)          ,
	ocomment            VARCHAR2(32)        ,
	wsamplepos          VARCHAR2(8)         ,
	wph                 FLOAT(126)          ,
	wconductivity       FLOAT(126)          ,
	sampledegree        FLOAT(126)          ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_OILA PRIMARY KEY (oildate,expno)
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

COMMENT ON Table OILA IS ' ACCOUNT OILA TABLE ';
COMMENT ON COLUMN OILA.oildate IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OILA.crewno IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OILA.shiftno IS ' Unit[-]:���.Limit:[-,-] ';
COMMENT ON COLUMN OILA.expno IS ' Unit[-]:ʵ����.Limit:[-,-] ';
COMMENT ON COLUMN OILA.exptime IS ' Unit[-]:ʵ��ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OILA.boxlevel IS ' Unit[-]:ȡ��ʱ����Һλ.Limit:[-,-] ';
COMMENT ON COLUMN OILA.cycflag IS ' Unit[-]:ϵͳ�Ƿ�ѭ��.Limit:[-,-] ';
COMMENT ON COLUMN OILA.samplepos IS ' Unit[-]:ȡ��λ��.Limit:[-,-] ';
COMMENT ON COLUMN OILA.density IS ' Unit[-]:Ũ��.Limit:[-,-] ';
COMMENT ON COLUMN OILA.ph IS ' Unit[-]:PHֵ.Limit:[-,-] ';
COMMENT ON COLUMN OILA.conductivity IS ' Unit[��s/cm]:�絼��.Limit:[-,-] ';
COMMENT ON COLUMN OILA.sapval IS ' Unit[mg KOH/g]:��ֵ.Limit:[-,-] ';
COMMENT ON COLUMN OILA.iron IS ' Unit[mg /l]:����.Limit:[-,-] ';
COMMENT ON COLUMN OILA.ironsoap IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OILA.stabfactor IS ' Unit[%ESI]:�ȶ�ϵ��.Limit:[-,-] ';
COMMENT ON COLUMN OILA.cl IS ' Unit[ppm]:�����Ӻ���.Limit:[-,-] ';
COMMENT ON COLUMN OILA.freeacid IS ' Unit[mg KOH/g]:������.Limit:[-,-] ';
COMMENT ON COLUMN OILA.ash IS ' Unit[mg /Kg]:�ҷ�.Limit:[-,-] ';
COMMENT ON COLUMN OILA.particle IS ' Unit[mg/Kg]:������.Limit:[-,-] ';
COMMENT ON COLUMN OILA.eti IS ' Unit[-]:ETI.Limit:[-,-] ';
COMMENT ON COLUMN OILA.ocomment IS ' Unit[-]:��ע.Limit:[-,-] ';
COMMENT ON COLUMN OILA.wsamplepos IS ' Unit[-]:����ˮȡ��λ��.Limit:[-,-] ';
COMMENT ON COLUMN OILA.wph IS ' Unit[-]:����ˮPHֵ.Limit:[-,-] ';
COMMENT ON COLUMN OILA.wconductivity IS ' Unit[-]:����ˮ�絼��.Limit:[-,-] ';
COMMENT ON COLUMN OILA.sampledegree IS ' Unit[-]:ȡ���¶�.Limit:[-,-] ';
COMMENT ON COLUMN OILA.toc IS ' Unit[-]:����ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OILA.tom IS ' Unit[-]:����޸�ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OILA.mop IS ' Unit[-]:���������޸���.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	OILA
REM*************************************

DROP TRIGGER ins_b_OILA;
CREATE OR REPLACE TRIGGER ins_b_OILA
BEFORE INSERT ON OILA FOR EACH ROW
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
REM	OILA
REM*************************************

DROP TRIGGER upd_b_OILA;
CREATE OR REPLACE TRIGGER upd_b_OILA
BEFORE UPDATE ON OILA FOR EACH ROW
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
