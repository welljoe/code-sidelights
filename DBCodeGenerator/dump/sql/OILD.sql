REM*******************************************************************
REM    File               :    OILD.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table OILD;
REM CREATE TABLE ...

  
             
Create Table OILD(
	oildate             VARCHAR2(32)        NOT NULL ,
	crewno              VARCHAR2(8)         ,
	shiftno             VARCHAR2(8)         ,
	time                VARCHAR2(32)        ,
	oroila              FLOAT(126)          ,
	oroilb              FLOAT(126)          ,
	oroilc              VARCHAR2(8)         ,
	s1cleana            FLOAT(126)          ,
	s1cleanb            FLOAT(126)          ,
	s1cleanc            VARCHAR2(8)         ,
	s1cleand            VARCHAR2(8)         ,
	s1reoila            FLOAT(126)          ,
	s1reoilb            FLOAT(126)          ,
	s1reoilc            VARCHAR2(8)         ,
	s2cleana            FLOAT(126)          ,
	s2cleanb            FLOAT(126)          ,
	s2cleanc            VARCHAR2(8)         ,
	s2cleand            VARCHAR2(8)         ,
	s2reoila            FLOAT(126)          ,
	s2reoilb            FLOAT(126)          ,
	s2reoilc            VARCHAR2(8)         ,
	mixa                FLOAT(126)          ,
	mixb                FLOAT(126)          ,
	mixc                VARCHAR2(8)         ,
	s1                  VARCHAR2(8)         ,
	s2                  VARCHAR2(8)         ,
	elec                VARCHAR2(8)         ,
	pollute             VARCHAR2(8)         ,
	stand               VARCHAR2(8)         ,
	dirtybud            VARCHAR2(8)         ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_OILD PRIMARY KEY )
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

COMMENT ON Table OILD IS ' ACCOUNT OILD TABLE ';
COMMENT ON COLUMN OILD.oildate IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OILD.crewno IS ' Unit[-]:����.Limit:[-,-] ';
COMMENT ON COLUMN OILD.shiftno IS ' Unit[-]:���.Limit:[-,-] ';
COMMENT ON COLUMN OILD.time IS ' Unit[-]:ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OILD.oroila IS ' Unit[m3]:ԭ����Һλm3.Limit:[-,-] ';
COMMENT ON COLUMN OILD.oroilb IS ' Unit[-]:ԭ�����¶�.Limit:[-,-] ';
COMMENT ON COLUMN OILD.oroilc IS ' Unit[-]:ԭ���������.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s1cleana IS ' Unit[-]:S1�����Һλ%.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s1cleanb IS ' Unit[-]:S1������¶�.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s1cleanc IS ' Unit[-]:S1����������.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s1cleand IS ' Unit[-]:S1�����Ʋ����.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s1reoila IS ' Unit[-]:S1������Һλ.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s1reoilb IS ' Unit[-]:S1�������¶�.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s1reoilc IS ' Unit[-]:S1�����������.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s2cleana IS ' Unit[-]:S2�����Һλ%.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s2cleanb IS ' Unit[-]:S2������¶�.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s2cleanc IS ' Unit[-]:S2����������.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s2cleand IS ' Unit[-]:S2�����ŷ�����.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s2reoila IS ' Unit[-]:S2������Һλ.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s2reoilb IS ' Unit[-]:S2�������¶�.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s2reoilc IS ' Unit[-]:S2�����������.Limit:[-,-] ';
COMMENT ON COLUMN OILD.mixa IS ' Unit[-]:�����Һλ.Limit:[-,-] ';
COMMENT ON COLUMN OILD.mixb IS ' Unit[-]:������¶�.Limit:[-,-] ';
COMMENT ON COLUMN OILD.mixc IS ' Unit[-]:����������.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s1 IS ' Unit[-]:��չ������Ƿ�����S1.Limit:[-,-] ';
COMMENT ON COLUMN OILD.s2 IS ' Unit[-]:��չ������Ƿ�����S2.Limit:[-,-] ';
COMMENT ON COLUMN OILD.elec IS ' Unit[-]:��Ź�����.Limit:[-,-] ';
COMMENT ON COLUMN OILD.pollute IS ' Unit[-]:������Һλ.Limit:[-,-] ';
COMMENT ON COLUMN OILD.stand IS ' Unit[-]:������ϴ�ֶ���.Limit:[-,-] ';
COMMENT ON COLUMN OILD.dirtybud IS ' Unit[-]:������ŷ�����.Limit:[-,-] ';
COMMENT ON COLUMN OILD.toc IS ' Unit[-]:����ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OILD.tom IS ' Unit[-]:����޸�ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN OILD.mop IS ' Unit[-]:���������޸���.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	OILD
REM*************************************

DROP TRIGGER ins_b_OILD;
CREATE OR REPLACE TRIGGER ins_b_OILD
BEFORE INSERT ON OILD FOR EACH ROW
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
REM	OILD
REM*************************************

DROP TRIGGER upd_b_OILD;
CREATE OR REPLACE TRIGGER upd_b_OILD
BEFORE UPDATE ON OILD FOR EACH ROW
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
