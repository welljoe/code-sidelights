REM*******************************************************************
REM    File               :    DATASTARULE.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table DATASTARULE;
REM CREATE TABLE ...

  
             
Create Table DATASTARULE(
	rulename            VARCHAR2(16)        NOT NULL ,
	ruleusing           NUMBER(5)           CONSTRAINT cDATASTARULE_1 CHECK (ruleusing BETWEEN -32768 AND +32767),
	headlen             FLOAT(126)          ,
	taillen             VARCHAR2(4)         ,
	hruletype           NUMBER(5)           CONSTRAINT cDATASTARULE_4 CHECK (hruletype BETWEEN -32768 AND +32767),
	huptol              FLOAT(126)          ,
	hlowtol             FLOAT(126)          ,
	hclass1from         FLOAT(126)          ,
	hclass1to           FLOAT(126)          ,
	hclass2from         FLOAT(126)          ,
	hclass2to           FLOAT(126)          ,
	hclass3from         FLOAT(126)          ,
	hclass3to           FLOAT(126)          ,
	hclass4from         FLOAT(126)          ,
	hclass4to           FLOAT(126)          ,
	hclass5from         FLOAT(126)          ,
	hclass5to           FLOAT(126)          ,
	hclass6from         FLOAT(126)          ,
	hclass6to           FLOAT(126)          ,
	hclass7from         FLOAT(126)          ,
	hclass7to           FLOAT(126)          ,
	fruletype           NUMBER(5)           CONSTRAINT cDATASTARULE_21 CHECK (fruletype BETWEEN -32768 AND +32767),
	fuptol              FLOAT(126)          ,
	flowtol             FLOAT(126)          ,
	fclass1from         FLOAT(126)          ,
	fclass1to           FLOAT(126)          ,
	fclass2from         FLOAT(126)          ,
	fclass2to           FLOAT(126)          ,
	fclass3from         FLOAT(126)          ,
	fclass3to           FLOAT(126)          ,
	fclass4from         FLOAT(126)          ,
	fclass4to           FLOAT(126)          ,
	fclass5from         FLOAT(126)          ,
	fclass5to           FLOAT(126)          ,
	fclass6from         FLOAT(126)          ,
	fclass6to           FLOAT(126)          ,
	fclass7from         FLOAT(126)          ,
	fclass7to           FLOAT(126)          ,
	edropruletype       NUMBER(5)           CONSTRAINT cDATASTARULE_38 CHECK (edropruletype BETWEEN -32768 AND +32767),
	edropuptol          FLOAT(126)          ,
	edroplowtol         FLOAT(126)          ,
	edropclass1from     FLOAT(126)          ,
	edropclass1to       FLOAT(126)          ,
	edropclass2from     FLOAT(126)          ,
	edropclass2to       FLOAT(126)          ,
	edropclass3from     FLOAT(126)          ,
	edropclass3to       FLOAT(126)          ,
	edropclass4from     FLOAT(126)          ,
	edropclass4to       FLOAT(126)          ,
	edropclass5from     FLOAT(126)          ,
	edropclass5to       FLOAT(126)          ,
	edropclass6from     FLOAT(126)          ,
	edropclass6to       FLOAT(126)          ,
	edropclass7from     FLOAT(126)          ,
	edropclass7to       FLOAT(126)          ,
	hdifruletype        NUMBER(5)           CONSTRAINT cDATASTARULE_55 CHECK (hdifruletype BETWEEN -32768 AND +32767),
	hdifstd1uptol       FLOAT(126)          ,
	hdifstd1lowtol      FLOAT(126)          ,
	hdifstd2uptol       FLOAT(126)          ,
	hdifstd2lowtol      FLOAT(126)          ,
	hdifstd3uptol       FLOAT(126)          ,
	hdifstd3lowtol      FLOAT(126)          ,
	hdifclass1from      FLOAT(126)          ,
	hdifclass1to        FLOAT(126)          ,
	hdifclass2from      FLOAT(126)          ,
	hdifclass2to        FLOAT(126)          ,
	hdifclass3from      FLOAT(126)          ,
	hdifclass3to        FLOAT(126)          ,
	hdifclass4from      FLOAT(126)          ,
	hdifclass4to        FLOAT(126)          ,
	hdifclass5from      FLOAT(126)          ,
	hdifclass5to        FLOAT(126)          ,
	hdifclass6from      FLOAT(126)          ,
	hdifclass6to        FLOAT(126)          ,
	hdifclass7from      FLOAT(126)          ,
	hdifclass7to        FLOAT(126)          ,
	mwlimit             FLOAT(126)          ,
	ewlimit             FLOAT(126)          ,
	qwlimit             FLOAT(126)          ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_DATASTARULE PRIMARY KEY (rulename)
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

COMMENT ON Table DATASTARULE IS ' DATA STATIC RULE ';
COMMENT ON COLUMN DATASTARULE.rulename IS ' Unit[-]:��������.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.ruleusing IS ' Unit[-]:��ǰ�����Ƿ�ʹ��,1ʹ�ã�0��ʹ��.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.headlen IS ' Unit[-]:ͷ�����ȶ���.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.taillen IS ' Unit[-]:β�����ȶ���.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hruletype IS ' Unit[-]:��ȹ�������1�����ԣ�0�����.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.huptol IS ' Unit[-]:���ƫ������.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hlowtol IS ' Unit[-]:���ƫ������.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass1from IS ' Unit[-]:��ȵȼ�1��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass1to IS ' Unit[-]:��ȵȼ�1��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass2from IS ' Unit[-]:��ȵȼ�2��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass2to IS ' Unit[-]:��ȵȼ�2��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass3from IS ' Unit[-]:��ȵȼ�3��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass3to IS ' Unit[-]:��ȵȼ�3��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass4from IS ' Unit[-]:��ȵȼ�4��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass4to IS ' Unit[-]:��ȵȼ�4��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass5from IS ' Unit[-]:��ȵȼ�5��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass5to IS ' Unit[-]:��ȵȼ�5��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass6from IS ' Unit[-]:��ȵȼ�6��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass6to IS ' Unit[-]:��ȵȼ�6��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass7from IS ' Unit[-]:��ȵȼ�7��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hclass7to IS ' Unit[-]:��ȵȼ�7��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fruletype IS ' Unit[-]:���ι�������1�����ԣ�0�����.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fuptol IS ' Unit[-]:����ƫ������.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.flowtol IS ' Unit[-]:����ƫ������.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass1from IS ' Unit[-]:���εȼ�1��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass1to IS ' Unit[-]:���εȼ�1��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass2from IS ' Unit[-]:���εȼ�2��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass2to IS ' Unit[-]:���εȼ�2��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass3from IS ' Unit[-]:���εȼ�3��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass3to IS ' Unit[-]:���εȼ�3��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass4from IS ' Unit[-]:���εȼ�4��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass4to IS ' Unit[-]:���εȼ�4��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass5from IS ' Unit[-]:���εȼ�5��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass5to IS ' Unit[-]:���εȼ�5��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass6from IS ' Unit[-]:���εȼ�6��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass6to IS ' Unit[-]:���εȼ�6��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass7from IS ' Unit[-]:���εȼ�7��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.fclass7to IS ' Unit[-]:���εȼ�7��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropruletype IS ' Unit[-]:�߽���������1�����ԣ�0�����.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropuptol IS ' Unit[-]:�߽�ƫ������.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edroplowtol IS ' Unit[-]:�߽�ƫ������.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass1from IS ' Unit[-]:�߽��ȼ�1��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass1to IS ' Unit[-]:�߽��ȼ�1��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass2from IS ' Unit[-]:�߽��ȼ�2��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass2to IS ' Unit[-]:�߽��ȼ�2��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass3from IS ' Unit[-]:�߽��ȼ�3��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass3to IS ' Unit[-]:�߽��ȼ�3��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass4from IS ' Unit[-]:�߽��ȼ�4��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass4to IS ' Unit[-]:�߽��ȼ�4��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass5from IS ' Unit[-]:�߽��ȼ�5��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass5to IS ' Unit[-]:�߽��ȼ�5��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass6from IS ' Unit[-]:�߽��ȼ�6��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass6to IS ' Unit[-]:�߽��ȼ�6��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass7from IS ' Unit[-]:�߽��ȼ�7��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.edropclass7to IS ' Unit[-]:�߽��ȼ�7��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifruletype IS ' Unit[-]:ͬ����������1�����ԣ�0�����.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifstd1uptol IS ' Unit[-]:ͬ���ƫ��Std1����.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifstd1lowtol IS ' Unit[-]:ͬ���ƫ��Std1����.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifstd2uptol IS ' Unit[-]:ͬ���ƫ��Std2����.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifstd2lowtol IS ' Unit[-]:ͬ���ƫ��Std2����.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifstd3uptol IS ' Unit[-]:ͬ���ƫ��Std3����.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifstd3lowtol IS ' Unit[-]:ͬ���ƫ��Std3����.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass1from IS ' Unit[-]:ͬ���ȼ�1��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass1to IS ' Unit[-]:ͬ���ȼ�1��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass2from IS ' Unit[-]:ͬ���ȼ�2��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass2to IS ' Unit[-]:ͬ���ȼ�2��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass3from IS ' Unit[-]:ͬ���ȼ�3��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass3to IS ' Unit[-]:ͬ���ȼ�3��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass4from IS ' Unit[-]:ͬ���ȼ�4��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass4to IS ' Unit[-]:ͬ���ȼ�4��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass5from IS ' Unit[-]:ͬ���ȼ�5��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass5to IS ' Unit[-]:ͬ���ȼ�5��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass6from IS ' Unit[-]:ͬ���ȼ�6��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass6to IS ' Unit[-]:ͬ���ȼ�6��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass7from IS ' Unit[-]:ͬ���ȼ�7��ʼֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.hdifclass7to IS ' Unit[-]:ͬ���ȼ�7��ֵֹ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.mwlimit IS ' Unit[-]:������ֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.ewlimit IS ' Unit[-]:������ֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.qwlimit IS ' Unit[-]:1/4����ֵ.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.toc IS ' Unit[-]:����ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.tom IS ' Unit[-]:����޸�ʱ��.Limit:[-,-] ';
COMMENT ON COLUMN DATASTARULE.mop IS ' Unit[-]:���������޸���.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	DATASTARULE
REM*************************************

DROP TRIGGER ins_b_DATASTARULE;
CREATE OR REPLACE TRIGGER ins_b_DATASTARULE
BEFORE INSERT ON DATASTARULE FOR EACH ROW
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
REM	DATASTARULE
REM*************************************

DROP TRIGGER upd_b_DATASTARULE;
CREATE OR REPLACE TRIGGER upd_b_DATASTARULE
BEFORE UPDATE ON DATASTARULE FOR EACH ROW
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
