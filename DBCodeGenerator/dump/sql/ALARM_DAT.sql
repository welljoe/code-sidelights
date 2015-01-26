REM*******************************************************************
REM    File               :    ALARM_DAT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table ALARM_DAT;
REM CREATE TABLE ...

      
             
Create Table ALARM_DAT(
	alarmNo             NUMBER(10)          NOT NULL CONSTRAINT cALARM_DAT_0 CHECK (alarmNo BETWEEN -2147483648 AND +2147483647),
	parmNo              NUMBER(5)           CONSTRAINT cALARM_DAT_1 CHECK (parmNo BETWEEN -32768 AND +32767),
	grade               NUMBER(5)           CONSTRAINT cALARM_DAT_2 CHECK (grade BETWEEN -32768 AND +32767),
	alarmTime           DATE                ,
	curVal              FLOAT(126)          ,
	curPos              NUMBER(10)          CONSTRAINT cALARM_DAT_5 CHECK (curPos BETWEEN -2147483648 AND +2147483647),
	alarmMsg            VARCHAR2(256)       ,
	sp2                 NUMBER(10)          CONSTRAINT cALARM_DAT_7 CHECK (sp2 BETWEEN -2147483648 AND +2147483647),
	sp3                 NUMBER(5)           CONSTRAINT cALARM_DAT_8 CHECK (sp3 BETWEEN -32768 AND +32767),
	sp4                 NUMBER(5)           CONSTRAINT cALARM_DAT_9 CHECK (sp4 BETWEEN -32768 AND +32767),
	sp5                 FLOAT(126)          ,
	sp6                 FLOAT(126)          ,
	sp7                 VARCHAR2(50)        ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(50)        ,
	CONSTRAINT pk_ALARM_DAT PRIMARY KEY (alarmNo)
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

COMMENT ON Table ALARM_DAT IS ' ALARM  DATA FOR PARMENTERS ';
COMMENT ON COLUMN ALARM_DAT.alarmNo IS ' Unit[-]:alarm no (key).Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.parmNo IS ' Unit[-]:parmenter no.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.grade IS ' Unit[-]:alarm grade(0-L,1-M,2-H).Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.alarmTime IS ' Unit[-]:alarm date time.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.curVal IS ' Unit[-]:current value for alarm.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.curPos IS ' Unit[-]:current postion of value.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.alarmMsg IS ' Unit[-]:alarm message.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.sp2 IS ' Unit[-]:sp2.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.sp3 IS ' Unit[-]:sp3.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.sp4 IS ' Unit[-]:sp4.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.sp5 IS ' Unit[-]:sp5.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.sp6 IS ' Unit[-]:sp6.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.sp7 IS ' Unit[-]:sp7.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.toc IS ' Unit[-]:create time.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.tom IS ' Unit[-]:modify time.Limit:[-,-] ';
COMMENT ON COLUMN ALARM_DAT.mop IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	ALARM_DAT
REM*************************************

DROP TRIGGER ins_b_ALARM_DAT;
CREATE OR REPLACE TRIGGER ins_b_ALARM_DAT
BEFORE INSERT ON ALARM_DAT FOR EACH ROW
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
REM	ALARM_DAT
REM*************************************

DROP TRIGGER upd_b_ALARM_DAT;
CREATE OR REPLACE TRIGGER upd_b_ALARM_DAT
BEFORE UPDATE ON ALARM_DAT FOR EACH ROW
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
