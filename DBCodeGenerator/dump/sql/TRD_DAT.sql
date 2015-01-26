REM*******************************************************************
REM    File               :    TRD_DAT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table TRD_DAT;
REM CREATE TABLE ...

          
             
Create Table TRD_DAT(
	hcoil               VARCHAR2(16)        NOT NULL ,
	trdtno              NUMBER(5)           NOT NULL CONSTRAINT cTRD_DAT_1 CHECK (trdtno BETWEEN -32768 AND +32767),
	s1pos               NUMBER(5)           CONSTRAINT cTRD_DAT_2 CHECK (s1pos BETWEEN -32768 AND +32767),
	s2pos               NUMBER(5)           CONSTRAINT cTRD_DAT_3 CHECK (s2pos BETWEEN -32768 AND +32767),
	s3pos               NUMBER(5)           CONSTRAINT cTRD_DAT_4 CHECK (s3pos BETWEEN -32768 AND +32767),
	s4pos               NUMBER(5)           CONSTRAINT cTRD_DAT_5 CHECK (s4pos BETWEEN -32768 AND +32767),
	s5pos               NUMBER(5)           CONSTRAINT cTRD_DAT_6 CHECK (s5pos BETWEEN -32768 AND +32767),
	stime               VARCHAR2(16)        ,
	trdt_rf1            NUMBER(5)           CONSTRAINT cTRD_DAT_8 CHECK (trdt_rf1 BETWEEN -32768 AND +32767),
	trdt_rf2            NUMBER(5)           CONSTRAINT cTRD_DAT_9 CHECK (trdt_rf2 BETWEEN -32768 AND +32767),
	trdt_rf3            NUMBER(5)           CONSTRAINT cTRD_DAT_10 CHECK (trdt_rf3 BETWEEN -32768 AND +32767),
	trdt_rf4            NUMBER(5)           CONSTRAINT cTRD_DAT_11 CHECK (trdt_rf4 BETWEEN -32768 AND +32767),
	trdt_rf5            NUMBER(5)           CONSTRAINT cTRD_DAT_12 CHECK (trdt_rf5 BETWEEN -32768 AND +32767),
	trdt_ten1           NUMBER(5)           CONSTRAINT cTRD_DAT_13 CHECK (trdt_ten1 BETWEEN -32768 AND +32767),
	trdt_ten2           NUMBER(5)           CONSTRAINT cTRD_DAT_14 CHECK (trdt_ten2 BETWEEN -32768 AND +32767),
	trdt_ten3           NUMBER(5)           CONSTRAINT cTRD_DAT_15 CHECK (trdt_ten3 BETWEEN -32768 AND +32767),
	trdt_ten4           NUMBER(5)           CONSTRAINT cTRD_DAT_16 CHECK (trdt_ten4 BETWEEN -32768 AND +32767),
	trdt_ten5           NUMBER(5)           CONSTRAINT cTRD_DAT_17 CHECK (trdt_ten5 BETWEEN -32768 AND +32767),
	trdt_ten6           NUMBER(5)           CONSTRAINT cTRD_DAT_18 CHECK (trdt_ten6 BETWEEN -32768 AND +32767),
	trdt_h1             NUMBER(5)           CONSTRAINT cTRD_DAT_19 CHECK (trdt_h1 BETWEEN -32768 AND +32767),
	trdt_h2             NUMBER(5)           CONSTRAINT cTRD_DAT_20 CHECK (trdt_h2 BETWEEN -32768 AND +32767),
	trdt_h3             NUMBER(5)           CONSTRAINT cTRD_DAT_21 CHECK (trdt_h3 BETWEEN -32768 AND +32767),
	trdt_h4             NUMBER(5)           CONSTRAINT cTRD_DAT_22 CHECK (trdt_h4 BETWEEN -32768 AND +32767),
	trdt_vs1            NUMBER(5)           CONSTRAINT cTRD_DAT_23 CHECK (trdt_vs1 BETWEEN -32768 AND +32767),
	trdt_vs2            NUMBER(5)           CONSTRAINT cTRD_DAT_24 CHECK (trdt_vs2 BETWEEN -32768 AND +32767),
	trdt_vs3            NUMBER(5)           CONSTRAINT cTRD_DAT_25 CHECK (trdt_vs3 BETWEEN -32768 AND +32767),
	trdt_vs4            NUMBER(5)           CONSTRAINT cTRD_DAT_26 CHECK (trdt_vs4 BETWEEN -32768 AND +32767),
	trdt_vs5            NUMBER(5)           CONSTRAINT cTRD_DAT_27 CHECK (trdt_vs5 BETWEEN -32768 AND +32767),
	trdt_cur1           NUMBER(5)           CONSTRAINT cTRD_DAT_28 CHECK (trdt_cur1 BETWEEN -32768 AND +32767),
	trdt_cur2           NUMBER(5)           CONSTRAINT cTRD_DAT_29 CHECK (trdt_cur2 BETWEEN -32768 AND +32767),
	trdt_cur3           NUMBER(5)           CONSTRAINT cTRD_DAT_30 CHECK (trdt_cur3 BETWEEN -32768 AND +32767),
	trdt_cur4           NUMBER(5)           CONSTRAINT cTRD_DAT_31 CHECK (trdt_cur4 BETWEEN -32768 AND +32767),
	trdt_cur5           NUMBER(5)           CONSTRAINT cTRD_DAT_32 CHECK (trdt_cur5 BETWEEN -32768 AND +32767),
	trdt_wsben1         NUMBER(5)           CONSTRAINT cTRD_DAT_33 CHECK (trdt_wsben1 BETWEEN -32768 AND +32767),
	trdt_wsben2         NUMBER(5)           CONSTRAINT cTRD_DAT_34 CHECK (trdt_wsben2 BETWEEN -32768 AND +32767),
	trdt_wsben3         NUMBER(5)           CONSTRAINT cTRD_DAT_35 CHECK (trdt_wsben3 BETWEEN -32768 AND +32767),
	trdt_wsben4         NUMBER(5)           CONSTRAINT cTRD_DAT_36 CHECK (trdt_wsben4 BETWEEN -32768 AND +32767),
	trdt_wsben5         NUMBER(5)           CONSTRAINT cTRD_DAT_37 CHECK (trdt_wsben5 BETWEEN -32768 AND +32767),
	trdt_imrben1        NUMBER(5)           CONSTRAINT cTRD_DAT_38 CHECK (trdt_imrben1 BETWEEN -32768 AND +32767),
	trdt_imrben2        NUMBER(5)           CONSTRAINT cTRD_DAT_39 CHECK (trdt_imrben2 BETWEEN -32768 AND +32767),
	trdt_imrben3        NUMBER(5)           CONSTRAINT cTRD_DAT_40 CHECK (trdt_imrben3 BETWEEN -32768 AND +32767),
	trdt_imrben4        NUMBER(5)           CONSTRAINT cTRD_DAT_41 CHECK (trdt_imrben4 BETWEEN -32768 AND +32767),
	trdt_imrben5        NUMBER(5)           CONSTRAINT cTRD_DAT_42 CHECK (trdt_imrben5 BETWEEN -32768 AND +32767),
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_TRD_DAT PRIMARY KEY (hcoil,trdtno)
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

COMMENT ON Table TRD_DAT IS ' TREND DATA(Before Cut Buffer) ';
COMMENT ON COLUMN TRD_DAT.hcoil IS ' Unit[-]:Hot coil number.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdtno IS ' Unit[-]:Trend Data NO.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.s1pos IS ' Unit[-]:Stand1MesPos.Limit:[-,1] ';
COMMENT ON COLUMN TRD_DAT.s2pos IS ' Unit[-]:Stand2MesPos.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.s3pos IS ' Unit[-]:Stand3MesPos.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.s4pos IS ' Unit[I]:Stand4MesPos.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.s5pos IS ' Unit[I]:Stand5MesPos.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.stime IS ' Unit[I]:Stand1MesTim.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_rf1 IS ' Unit[I]:Roll Force #1.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_rf2 IS ' Unit[I]:Roll Force #2.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_rf3 IS ' Unit[I]:Roll Force #3.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_rf4 IS ' Unit[I]:Roll Force #4.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_rf5 IS ' Unit[I]:Roll Force #5.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_ten1 IS ' Unit[I]:Tension #1E.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_ten2 IS ' Unit[I]:Tension #1-#2.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_ten3 IS ' Unit[I]:Tension #2-#3.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_ten4 IS ' Unit[I]:Tension #3-#4.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_ten5 IS ' Unit[I]:Tension #4-#5.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_ten6 IS ' Unit[I]:Tension #5D.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_h1 IS ' Unit[I]:X-ray Thickness #1E.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_h2 IS ' Unit[I]:X-ray Thickness  #1-#2.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_h3 IS ' Unit[I]:X-ray Thickness  #4-#5.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_h4 IS ' Unit[I]:X-ray Thickness  #5D.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_vs1 IS ' Unit[I]:Strip Speed #1D.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_vs2 IS ' Unit[I]:Strip Speed #2D.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_vs3 IS ' Unit[I]:Strip Speed #3D.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_vs4 IS ' Unit[I]:Strip Speed #4D.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_vs5 IS ' Unit[I]:Strip Speed #5D.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_cur1 IS ' Unit[I]:Motor Current #1.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_cur2 IS ' Unit[I]:Motor Current #2.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_cur3 IS ' Unit[I]:Motor Current #3.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_cur4 IS ' Unit[I]:Motor Current #4.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_cur5 IS ' Unit[I]:Motor Current #5.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_wsben1 IS ' Unit[I]:WR Bender #1.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_wsben2 IS ' Unit[I]:WR Bender #2.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_wsben3 IS ' Unit[I]:WR Bender #3.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_wsben4 IS ' Unit[I]:WR Bender #4.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_wsben5 IS ' Unit[I]:WR Bender #5.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_imrben1 IS ' Unit[I]:IMR Bender #1.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_imrben2 IS ' Unit[I]:IMR Bender #2.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_imrben3 IS ' Unit[I]:IMR Bender #3.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_imrben4 IS ' Unit[I]:IMR Bender #4.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.trdt_imrben5 IS ' Unit[I]:IMR Bender #5.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.toc IS ' Unit[-]:create time.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.tom IS ' Unit[-]:modify time.Limit:[-,-] ';
COMMENT ON COLUMN TRD_DAT.mop IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	TRD_DAT
REM*************************************

DROP TRIGGER ins_b_TRD_DAT;
CREATE OR REPLACE TRIGGER ins_b_TRD_DAT
BEFORE INSERT ON TRD_DAT FOR EACH ROW
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
REM	TRD_DAT
REM*************************************

DROP TRIGGER upd_b_TRD_DAT;
CREATE OR REPLACE TRIGGER upd_b_TRD_DAT
BEFORE UPDATE ON TRD_DAT FOR EACH ROW
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
