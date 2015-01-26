REM*******************************************************************
REM    File               :    COILRECDEAL.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table COILRECDEAL;
REM CREATE TABLE ...

  
             
Create Table COILRECDEAL(
	pcoil               VARCHAR2(16)        NOT NULL ,
	hcoil               VARCHAR2(16)        NOT NULL ,
	ceq                 NUMBER(10)          CONSTRAINT cCOILRECDEAL_2 CHECK (ceq BETWEEN -2147483648 AND +2147483647),
	hentry              NUMBER(10)          CONSTRAINT cCOILRECDEAL_3 CHECK (hentry BETWEEN -2147483648 AND +2147483647),
	hexit               NUMBER(10)          CONSTRAINT cCOILRECDEAL_4 CHECK (hexit BETWEEN -2147483648 AND +2147483647),
	width               NUMBER(10)          CONSTRAINT cCOILRECDEAL_5 CHECK (width BETWEEN -2147483648 AND +2147483647),
	alloycode           VARCHAR2(5)         ,
	prodstart           VARCHAR2(16)        ,
	prodend             VARCHAR2(16)        ,
	shiftno             NUMBER(5)           CONSTRAINT cCOILRECDEAL_9 CHECK (shiftno BETWEEN -32768 AND +32767),
	crewno              VARCHAR2(2)         ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_COILRECDEAL PRIMARY KEY (pcoil,hcoil)
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

COMMENT ON Table COILRECDEAL IS ' COIL MANAGE TABLE ';
COMMENT ON COLUMN COILRECDEAL.pcoil IS ' Unit[-]:Product coil number.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.hcoil IS ' Unit[-]:Hot coil number.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.ceq IS ' Unit[-]:钢种材料碳当量.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.hentry IS ' Unit[-]:原料带钢厚度.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.hexit IS ' Unit[-]:产品带钢厚度.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.width IS ' Unit[-]:产品带钢宽度.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.alloycode IS ' Unit[-]:钢种材料.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.prodstart IS ' Unit[-]:生产开始时间.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.prodend IS ' Unit[-]:生产结束时间.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.shiftno IS ' Unit[-]:Shift No.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.crewno IS ' Unit[-]:Crew No.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.toc IS ' Unit[-]:创建时间.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.tom IS ' Unit[-]:最后修改时间.Limit:[-,-] ';
COMMENT ON COLUMN COILRECDEAL.mop IS ' Unit[-]:创建或者修改者.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	COILRECDEAL
REM*************************************

DROP TRIGGER ins_b_COILRECDEAL;
CREATE OR REPLACE TRIGGER ins_b_COILRECDEAL
BEFORE INSERT ON COILRECDEAL FOR EACH ROW
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
REM	COILRECDEAL
REM*************************************

DROP TRIGGER upd_b_COILRECDEAL;
CREATE OR REPLACE TRIGGER upd_b_COILRECDEAL
BEFORE UPDATE ON COILRECDEAL FOR EACH ROW
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
