REM*******************************************************************
REM    File               :    DRP_STATDATA.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table DRP_STATDATA;
REM CREATE TABLE ...

              
             
Create Table DRP_STATDATA(
	parmNo              NUMBER(5)           NOT NULL CONSTRAINT cDRP_STATDATA_0 CHECK (parmNo BETWEEN -32768 AND +32767),
	parmName            VARCHAR2(64)        NOT NULL ,
	parmGrade           NUMBER(5)           NOT NULL CONSTRAINT cDRP_STATDATA_2 CHECK (parmGrade BETWEEN -32768 AND +32767),
	pSetVal             FLOAT(126)          ,
	pMaxVal             FLOAT(126)          ,
	pMinVal             FLOAT(126)          ,
	pAvgVal             FLOAT(126)          ,
	pClMaxVal           FLOAT(126)          ,
	pClMinVal           FLOAT(126)          ,
	bShow               NUMBER(5)           CONSTRAINT cDRP_STATDATA_9 CHECK (bShow BETWEEN -32768 AND +32767),
	bSave               NUMBER(5)           CONSTRAINT cDRP_STATDATA_10 CHECK (bSave BETWEEN -32768 AND +32767),
	sp2                 VARCHAR2(64)        ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(50)        ,
	CONSTRAINT pk_DRP_STATDATA PRIMARY KEY (parmNo,parmName,parmGrade)
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

COMMENT ON Table DRP_STATDATA IS ' DROP STATIC  DATA ';
COMMENT ON COLUMN DRP_STATDATA.parmNo IS ' Unit[-]:paramenter no.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.parmName IS ' Unit[-]:paramenter name.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.parmGrade IS ' Unit[-]:paramenter grade (by steel grade ,width,thinckness etc.).Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.pSetVal IS ' Unit[-]:paramenter set value.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.pMaxVal IS ' Unit[-]:paramenter max. value.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.pMinVal IS ' Unit[-]:paramenter min. value.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.pAvgVal IS ' Unit[-]:paramenter avg. value.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.pClMaxVal IS ' Unit[-]:paramenter control set max. value.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.pClMinVal IS ' Unit[-]:paramenter control set min.  value.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.bShow IS ' Unit[-]:paramenter alarm be show.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.bSave IS ' Unit[-]:paramenter alarm be save.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.sp2 IS ' Unit[-]:sp2.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.toc IS ' Unit[-]:create time.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.tom IS ' Unit[-]:modify time.Limit:[-,-] ';
COMMENT ON COLUMN DRP_STATDATA.mop IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	DRP_STATDATA
REM*************************************

DROP TRIGGER ins_b_DRP_STATDATA;
CREATE OR REPLACE TRIGGER ins_b_DRP_STATDATA
BEFORE INSERT ON DRP_STATDATA FOR EACH ROW
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
REM	DRP_STATDATA
REM*************************************

DROP TRIGGER upd_b_DRP_STATDATA;
CREATE OR REPLACE TRIGGER upd_b_DRP_STATDATA
BEFORE UPDATE ON DRP_STATDATA FOR EACH ROW
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
