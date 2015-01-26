REM*******************************************************************
REM    File               :    EDROPC_DAT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table EDROPC_DAT;
REM CREATE TABLE ...

    
             
Create Table EDROPC_DAT(
	hcoil               VARCHAR2(16)        NOT NULL ,
	edtno               NUMBER(5)           NOT NULL CONSTRAINT cEDROPC_DAT_1 CHECK (edtno BETWEEN -32768 AND +32767),
	len                 NUMBER(5)           CONSTRAINT cEDROPC_DAT_2 CHECK (len BETWEEN -32768 AND +32767),
	mestim              VARCHAR2(16)        ,
	ws_dt1              NUMBER(5)           CONSTRAINT cEDROPC_DAT_4 CHECK (ws_dt1 BETWEEN -32768 AND +32767),
	ws_dt2              NUMBER(5)           CONSTRAINT cEDROPC_DAT_5 CHECK (ws_dt2 BETWEEN -32768 AND +32767),
	ws_dt3              NUMBER(5)           CONSTRAINT cEDROPC_DAT_6 CHECK (ws_dt3 BETWEEN -32768 AND +32767),
	ws_dt4              NUMBER(5)           CONSTRAINT cEDROPC_DAT_7 CHECK (ws_dt4 BETWEEN -32768 AND +32767),
	ws_dt5              NUMBER(5)           CONSTRAINT cEDROPC_DAT_8 CHECK (ws_dt5 BETWEEN -32768 AND +32767),
	ws_dt6              NUMBER(5)           CONSTRAINT cEDROPC_DAT_9 CHECK (ws_dt6 BETWEEN -32768 AND +32767),
	ws_dt7              NUMBER(5)           CONSTRAINT cEDROPC_DAT_10 CHECK (ws_dt7 BETWEEN -32768 AND +32767),
	ws_dt8              NUMBER(5)           CONSTRAINT cEDROPC_DAT_11 CHECK (ws_dt8 BETWEEN -32768 AND +32767),
	ws_dt9              NUMBER(5)           CONSTRAINT cEDROPC_DAT_12 CHECK (ws_dt9 BETWEEN -32768 AND +32767),
	ws_dt10             NUMBER(5)           CONSTRAINT cEDROPC_DAT_13 CHECK (ws_dt10 BETWEEN -32768 AND +32767),
	ws_dt11             NUMBER(5)           CONSTRAINT cEDROPC_DAT_14 CHECK (ws_dt11 BETWEEN -32768 AND +32767),
	ws_dt12             NUMBER(5)           CONSTRAINT cEDROPC_DAT_15 CHECK (ws_dt12 BETWEEN -32768 AND +32767),
	ws_dt13             NUMBER(5)           CONSTRAINT cEDROPC_DAT_16 CHECK (ws_dt13 BETWEEN -32768 AND +32767),
	ws_dt14             NUMBER(5)           CONSTRAINT cEDROPC_DAT_17 CHECK (ws_dt14 BETWEEN -32768 AND +32767),
	ws_dt15             NUMBER(5)           CONSTRAINT cEDROPC_DAT_18 CHECK (ws_dt15 BETWEEN -32768 AND +32767),
	ws_dt16             NUMBER(5)           CONSTRAINT cEDROPC_DAT_19 CHECK (ws_dt16 BETWEEN -32768 AND +32767),
	ws_dt17             NUMBER(5)           CONSTRAINT cEDROPC_DAT_20 CHECK (ws_dt17 BETWEEN -32768 AND +32767),
	ws_dt18             NUMBER(5)           CONSTRAINT cEDROPC_DAT_21 CHECK (ws_dt18 BETWEEN -32768 AND +32767),
	ws_dt19             NUMBER(5)           CONSTRAINT cEDROPC_DAT_22 CHECK (ws_dt19 BETWEEN -32768 AND +32767),
	ws_dt20             NUMBER(5)           CONSTRAINT cEDROPC_DAT_23 CHECK (ws_dt20 BETWEEN -32768 AND +32767),
	ds_dt1              NUMBER(5)           CONSTRAINT cEDROPC_DAT_24 CHECK (ds_dt1 BETWEEN -32768 AND +32767),
	ds_dt2              NUMBER(5)           CONSTRAINT cEDROPC_DAT_25 CHECK (ds_dt2 BETWEEN -32768 AND +32767),
	ds_dt3              NUMBER(5)           CONSTRAINT cEDROPC_DAT_26 CHECK (ds_dt3 BETWEEN -32768 AND +32767),
	ds_dt4              NUMBER(5)           CONSTRAINT cEDROPC_DAT_27 CHECK (ds_dt4 BETWEEN -32768 AND +32767),
	ds_dt5              NUMBER(5)           CONSTRAINT cEDROPC_DAT_28 CHECK (ds_dt5 BETWEEN -32768 AND +32767),
	ds_dt6              NUMBER(5)           CONSTRAINT cEDROPC_DAT_29 CHECK (ds_dt6 BETWEEN -32768 AND +32767),
	ds_dt7              NUMBER(5)           CONSTRAINT cEDROPC_DAT_30 CHECK (ds_dt7 BETWEEN -32768 AND +32767),
	ds_dt8              NUMBER(5)           CONSTRAINT cEDROPC_DAT_31 CHECK (ds_dt8 BETWEEN -32768 AND +32767),
	ds_dt9              NUMBER(5)           CONSTRAINT cEDROPC_DAT_32 CHECK (ds_dt9 BETWEEN -32768 AND +32767),
	ds_dt10             NUMBER(5)           CONSTRAINT cEDROPC_DAT_33 CHECK (ds_dt10 BETWEEN -32768 AND +32767),
	ds_dt11             NUMBER(5)           CONSTRAINT cEDROPC_DAT_34 CHECK (ds_dt11 BETWEEN -32768 AND +32767),
	ds_dt12             NUMBER(5)           CONSTRAINT cEDROPC_DAT_35 CHECK (ds_dt12 BETWEEN -32768 AND +32767),
	ds_dt13             NUMBER(5)           CONSTRAINT cEDROPC_DAT_36 CHECK (ds_dt13 BETWEEN -32768 AND +32767),
	ds_dt14             NUMBER(5)           CONSTRAINT cEDROPC_DAT_37 CHECK (ds_dt14 BETWEEN -32768 AND +32767),
	ds_dt15             NUMBER(5)           CONSTRAINT cEDROPC_DAT_38 CHECK (ds_dt15 BETWEEN -32768 AND +32767),
	ds_dt16             NUMBER(5)           CONSTRAINT cEDROPC_DAT_39 CHECK (ds_dt16 BETWEEN -32768 AND +32767),
	ds_dt17             NUMBER(5)           CONSTRAINT cEDROPC_DAT_40 CHECK (ds_dt17 BETWEEN -32768 AND +32767),
	ds_dt18             NUMBER(5)           CONSTRAINT cEDROPC_DAT_41 CHECK (ds_dt18 BETWEEN -32768 AND +32767),
	ds_dt19             NUMBER(5)           CONSTRAINT cEDROPC_DAT_42 CHECK (ds_dt19 BETWEEN -32768 AND +32767),
	ds_dt20             NUMBER(5)           CONSTRAINT cEDROPC_DAT_43 CHECK (ds_dt20 BETWEEN -32768 AND +32767),
	toc                 DATE                ,
	tom                 VARCHAR2(120)       ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_EDROPC_DAT PRIMARY KEY (hcoil,edtno)
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

COMMENT ON Table EDROPC_DAT IS ' EDGE DROP DATA BULK   STORAGE TABLE ';
COMMENT ON COLUMN EDROPC_DAT.hcoil IS ' Unit[-]:Product coil number.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.edtno IS ' Unit[-]:Hot coil number.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.len IS ' Unit[-]:edge data no.Limit:[-,1] ';
COMMENT ON COLUMN EDROPC_DAT.mestim IS ' Unit[-]:Every Point length (m).Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt1 IS ' Unit[-]:MeasTime.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt2 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt3 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt4 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt5 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt6 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt7 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt8 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt9 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt10 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt11 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt12 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt13 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt14 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt15 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt16 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt17 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt18 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt19 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ws_dt20 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt1 IS ' Unit[I]:WS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt2 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt3 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt4 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt5 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt6 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt7 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt8 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt9 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt10 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt11 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt12 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt13 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt14 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt15 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt16 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt17 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt18 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt19 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.ds_dt20 IS ' Unit[I]:DS Edge drop data.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.toc IS ' Unit[-]:modify time.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.tom IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
COMMENT ON COLUMN EDROPC_DAT.mop IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	EDROPC_DAT
REM*************************************

DROP TRIGGER ins_b_EDROPC_DAT;
CREATE OR REPLACE TRIGGER ins_b_EDROPC_DAT
BEFORE INSERT ON EDROPC_DAT FOR EACH ROW
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
REM	EDROPC_DAT
REM*************************************

DROP TRIGGER upd_b_EDROPC_DAT;
CREATE OR REPLACE TRIGGER upd_b_EDROPC_DAT
BEFORE UPDATE ON EDROPC_DAT FOR EACH ROW
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
