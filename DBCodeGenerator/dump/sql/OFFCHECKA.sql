REM*******************************************************************
REM    File               :    OFFCHECKA.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table OFFCHECKA;
REM CREATE TABLE ...

      
             
Create Table OFFCHECKA(
	coildate            VARCHAR2(32)        NOT NULL ,
	coilno              VARCHAR2(22)        ,
	alloycode           VARCHAR2(32)        ,
	crewno              VARCHAR2(16)        ,
	shiftno             VARCHAR2(16)        ,
	defectname1         VARCHAR2(32)        ,
	updownsurface1      VARCHAR2(16)        ,
	side_distance1      VARCHAR2(32)        ,
	distance1           VARCHAR2(32)        ,
	instruction1        VARCHAR2(32)        ,
	circle1             VARCHAR2(32)        ,
	checkresult1        VARCHAR2(32)        ,
	codeman1            VARCHAR2(32)        ,
	defectname2         VARCHAR2(32)        ,
	updownsurface2      VARCHAR2(16)        ,
	side_distance2      VARCHAR2(32)        ,
	distance2           VARCHAR2(32)        ,
	instruction2        VARCHAR2(32)        ,
	circle2             VARCHAR2(32)        ,
	defectname3         VARCHAR2(32)        ,
	updownsurface3      VARCHAR2(16)        ,
	side_distance3      VARCHAR2(32)        ,
	distance3           VARCHAR2(32)        ,
	instruction3        VARCHAR2(32)        ,
	circle3             VARCHAR2(32)        ,
	defectname4         VARCHAR2(32)        ,
	updownsurface4      VARCHAR2(16)        ,
	side_distance4      VARCHAR2(32)        ,
	distance4           VARCHAR2(32)        ,
	instruction4        VARCHAR2(32)        ,
	circle4             VARCHAR2(32)        ,
	defectname5         VARCHAR2(32)        ,
	updownsurface5      VARCHAR2(16)        ,
	side_distance5      VARCHAR2(32)        ,
	distance5           VARCHAR2(32)        ,
	instruction5        VARCHAR2(32)        ,
	circle5             VARCHAR2(32)        ,
	toc                 VARCHAR2(14)        ,
	tom                 VARCHAR2(14)        ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_OFFCHECKA PRIMARY KEY )
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

COMMENT ON Table OFFCHECKA IS ' ACCOUNT OFFCHECKBA TABLE ';
COMMENT ON COLUMN OFFCHECKA.coildate IS ' Unit[-]:日期.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.coilno IS ' Unit[-]:冷轧卷号.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.alloycode IS ' Unit[-]:钢种.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.crewno IS ' Unit[-]:班组.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.shiftno IS ' Unit[-]:班次.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.defectname1 IS ' Unit[-]:缺陷名称1.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.updownsurface1 IS ' Unit[-]:上/下表面1.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.side_distance1 IS ' Unit[mm]:距WS/DS侧距离1.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.distance1 IS ' Unit[m]:距带头/带尾距离1.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.instruction1 IS ' Unit[-]:备注1.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.circle1 IS ' Unit[mm]:周期长度1.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.checkresult1 IS ' Unit[-]:一检判定结果(合格/封闭/废品).Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.codeman1 IS ' Unit[-]:记录人.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.defectname2 IS ' Unit[-]:缺陷名称2.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.updownsurface2 IS ' Unit[-]:上/下表面2.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.side_distance2 IS ' Unit[mm]:距WS/DS侧距离2.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.distance2 IS ' Unit[m]:距带头/带尾距离2.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.instruction2 IS ' Unit[-]:备注2.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.circle2 IS ' Unit[mm]:周期长度2.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.defectname3 IS ' Unit[-]:缺陷名称3.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.updownsurface3 IS ' Unit[-]:上/下表面3.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.side_distance3 IS ' Unit[mm]:距WS/DS侧距离3.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.distance3 IS ' Unit[m]:距带头/带尾距离3.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.instruction3 IS ' Unit[-]:备注3.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.circle3 IS ' Unit[mm]:周期长度3.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.defectname4 IS ' Unit[-]:缺陷名称4.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.updownsurface4 IS ' Unit[-]:上/下表面4.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.side_distance4 IS ' Unit[mm]:距WS/DS侧距离4.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.distance4 IS ' Unit[m]:距带头/带尾距离4.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.instruction4 IS ' Unit[-]:备注4.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.circle4 IS ' Unit[mm]:周期长度4.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.defectname5 IS ' Unit[-]:缺陷名称5.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.updownsurface5 IS ' Unit[-]:上/下表面5.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.side_distance5 IS ' Unit[mm]:距WS/DS侧距离5.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.distance5 IS ' Unit[m]:距带头/带尾距离5.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.instruction5 IS ' Unit[-]:备注5.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.circle5 IS ' Unit[mm]:周期长度5.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.toc IS ' Unit[-]:创建时间.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.tom IS ' Unit[-]:最后修改时间.Limit:[-,-] ';
COMMENT ON COLUMN OFFCHECKA.mop IS ' Unit[-]:创建或者修改者.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	OFFCHECKA
REM*************************************

DROP TRIGGER ins_b_OFFCHECKA;
CREATE OR REPLACE TRIGGER ins_b_OFFCHECKA
BEFORE INSERT ON OFFCHECKA FOR EACH ROW
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
REM	OFFCHECKA
REM*************************************

DROP TRIGGER upd_b_OFFCHECKA;
CREATE OR REPLACE TRIGGER upd_b_OFFCHECKA
BEFORE UPDATE ON OFFCHECKA FOR EACH ROW
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
