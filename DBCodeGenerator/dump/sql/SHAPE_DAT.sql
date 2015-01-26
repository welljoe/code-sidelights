REM*******************************************************************
REM    File               :    SHAPE_DAT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table SHAPE_DAT;
REM CREATE TABLE ...

      
             
Create Table SHAPE_DAT(
	hcoil               VARCHAR2(16)        NOT NULL ,
	shpdtno             NUMBER(5)           NOT NULL CONSTRAINT cSHAPE_DAT_1 CHECK (shpdtno BETWEEN -32768 AND +32767),
	mespos              NUMBER(5)           CONSTRAINT cSHAPE_DAT_2 CHECK (mespos BETWEEN -32768 AND +32767),
	mestim              VARCHAR2(16)        ,
	low                 NUMBER(5)           CONSTRAINT cSHAPE_DAT_4 CHECK (low BETWEEN -32768 AND +32767),
	high                NUMBER(5)           CONSTRAINT cSHAPE_DAT_5 CHECK (high BETWEEN -32768 AND +32767),
	shpdt1              NUMBER(5)           CONSTRAINT cSHAPE_DAT_6 CHECK (shpdt1 BETWEEN -32768 AND +32767),
	shpdt2              NUMBER(5)           CONSTRAINT cSHAPE_DAT_7 CHECK (shpdt2 BETWEEN -32768 AND +32767),
	shpdt3              NUMBER(5)           CONSTRAINT cSHAPE_DAT_8 CHECK (shpdt3 BETWEEN -32768 AND +32767),
	shpdt4              NUMBER(5)           CONSTRAINT cSHAPE_DAT_9 CHECK (shpdt4 BETWEEN -32768 AND +32767),
	shpdt5              NUMBER(5)           CONSTRAINT cSHAPE_DAT_10 CHECK (shpdt5 BETWEEN -32768 AND +32767),
	shpdt6              NUMBER(5)           CONSTRAINT cSHAPE_DAT_11 CHECK (shpdt6 BETWEEN -32768 AND +32767),
	shpdt7              NUMBER(5)           CONSTRAINT cSHAPE_DAT_12 CHECK (shpdt7 BETWEEN -32768 AND +32767),
	shpdt8              NUMBER(5)           CONSTRAINT cSHAPE_DAT_13 CHECK (shpdt8 BETWEEN -32768 AND +32767),
	shpdt9              NUMBER(5)           CONSTRAINT cSHAPE_DAT_14 CHECK (shpdt9 BETWEEN -32768 AND +32767),
	shpdt10             NUMBER(5)           CONSTRAINT cSHAPE_DAT_15 CHECK (shpdt10 BETWEEN -32768 AND +32767),
	shpdt11             NUMBER(5)           CONSTRAINT cSHAPE_DAT_16 CHECK (shpdt11 BETWEEN -32768 AND +32767),
	shpdt12             NUMBER(5)           CONSTRAINT cSHAPE_DAT_17 CHECK (shpdt12 BETWEEN -32768 AND +32767),
	shpdt13             NUMBER(5)           CONSTRAINT cSHAPE_DAT_18 CHECK (shpdt13 BETWEEN -32768 AND +32767),
	shpdt14             NUMBER(5)           CONSTRAINT cSHAPE_DAT_19 CHECK (shpdt14 BETWEEN -32768 AND +32767),
	shpdt15             NUMBER(5)           CONSTRAINT cSHAPE_DAT_20 CHECK (shpdt15 BETWEEN -32768 AND +32767),
	shpdt16             NUMBER(5)           CONSTRAINT cSHAPE_DAT_21 CHECK (shpdt16 BETWEEN -32768 AND +32767),
	shpdt17             NUMBER(5)           CONSTRAINT cSHAPE_DAT_22 CHECK (shpdt17 BETWEEN -32768 AND +32767),
	shpdt18             NUMBER(5)           CONSTRAINT cSHAPE_DAT_23 CHECK (shpdt18 BETWEEN -32768 AND +32767),
	shpdt19             NUMBER(5)           CONSTRAINT cSHAPE_DAT_24 CHECK (shpdt19 BETWEEN -32768 AND +32767),
	shpdt20             NUMBER(5)           CONSTRAINT cSHAPE_DAT_25 CHECK (shpdt20 BETWEEN -32768 AND +32767),
	shpdt21             NUMBER(5)           CONSTRAINT cSHAPE_DAT_26 CHECK (shpdt21 BETWEEN -32768 AND +32767),
	shpdt22             NUMBER(5)           CONSTRAINT cSHAPE_DAT_27 CHECK (shpdt22 BETWEEN -32768 AND +32767),
	shpdt23             NUMBER(5)           CONSTRAINT cSHAPE_DAT_28 CHECK (shpdt23 BETWEEN -32768 AND +32767),
	shpdt24             NUMBER(5)           CONSTRAINT cSHAPE_DAT_29 CHECK (shpdt24 BETWEEN -32768 AND +32767),
	shpdt25             NUMBER(5)           CONSTRAINT cSHAPE_DAT_30 CHECK (shpdt25 BETWEEN -32768 AND +32767),
	shpdt26             NUMBER(5)           CONSTRAINT cSHAPE_DAT_31 CHECK (shpdt26 BETWEEN -32768 AND +32767),
	shpdt27             NUMBER(5)           CONSTRAINT cSHAPE_DAT_32 CHECK (shpdt27 BETWEEN -32768 AND +32767),
	shpdt28             NUMBER(5)           CONSTRAINT cSHAPE_DAT_33 CHECK (shpdt28 BETWEEN -32768 AND +32767),
	shpdt29             NUMBER(5)           CONSTRAINT cSHAPE_DAT_34 CHECK (shpdt29 BETWEEN -32768 AND +32767),
	shpdt30             NUMBER(5)           CONSTRAINT cSHAPE_DAT_35 CHECK (shpdt30 BETWEEN -32768 AND +32767),
	shpdt31             NUMBER(5)           CONSTRAINT cSHAPE_DAT_36 CHECK (shpdt31 BETWEEN -32768 AND +32767),
	shpdt32             NUMBER(5)           CONSTRAINT cSHAPE_DAT_37 CHECK (shpdt32 BETWEEN -32768 AND +32767),
	shpdt33             NUMBER(5)           CONSTRAINT cSHAPE_DAT_38 CHECK (shpdt33 BETWEEN -32768 AND +32767),
	shpdt34             NUMBER(5)           CONSTRAINT cSHAPE_DAT_39 CHECK (shpdt34 BETWEEN -32768 AND +32767),
	shpdt35             NUMBER(5)           CONSTRAINT cSHAPE_DAT_40 CHECK (shpdt35 BETWEEN -32768 AND +32767),
	shpdt36             NUMBER(5)           CONSTRAINT cSHAPE_DAT_41 CHECK (shpdt36 BETWEEN -32768 AND +32767),
	shpdt37             NUMBER(5)           CONSTRAINT cSHAPE_DAT_42 CHECK (shpdt37 BETWEEN -32768 AND +32767),
	shpdt38             NUMBER(5)           CONSTRAINT cSHAPE_DAT_43 CHECK (shpdt38 BETWEEN -32768 AND +32767),
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_SHAPE_DAT PRIMARY KEY (hcoil,shpdtno)
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

COMMENT ON Table SHAPE_DAT IS ' SHAPE TREND DATA TABLE(After cut) ';
COMMENT ON COLUMN SHAPE_DAT.hcoil IS ' Unit[-]:Hot coil number.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdtno IS ' Unit[-]:Shape trend Data NO.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.mespos IS ' Unit[-]:MeasPosition.Limit:[-,1] ';
COMMENT ON COLUMN SHAPE_DAT.mestim IS ' Unit[-]:MeasTime.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.low IS ' Unit[-]:low.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.high IS ' Unit[I]:hight.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt1 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt2 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt3 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt4 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt5 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt6 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt7 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt8 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt9 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt10 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt11 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt12 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt13 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt14 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt15 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt16 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt17 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt18 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt19 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt20 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt21 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt22 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt23 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt24 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt25 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt26 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt27 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt28 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt29 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt30 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt31 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt32 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt33 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt34 IS ' Unit[I]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt35 IS ' Unit[-]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt36 IS ' Unit[-]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt37 IS ' Unit[-]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.shpdt38 IS ' Unit[-]:Shape trend Data.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.toc IS ' Unit[-]:create time.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.tom IS ' Unit[-]:modify time.Limit:[-,-] ';
COMMENT ON COLUMN SHAPE_DAT.mop IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	SHAPE_DAT
REM*************************************

DROP TRIGGER ins_b_SHAPE_DAT;
CREATE OR REPLACE TRIGGER ins_b_SHAPE_DAT
BEFORE INSERT ON SHAPE_DAT FOR EACH ROW
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
REM	SHAPE_DAT
REM*************************************

DROP TRIGGER upd_b_SHAPE_DAT;
CREATE OR REPLACE TRIGGER upd_b_SHAPE_DAT
BEFORE UPDATE ON SHAPE_DAT FOR EACH ROW
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
