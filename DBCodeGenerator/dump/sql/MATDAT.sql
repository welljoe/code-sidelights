REM*******************************************************************
REM    File               :    MATDAT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table MATDAT;
REM CREATE TABLE ...

            
             
Create Table MATDAT(
	alloycode           VARCHAR2(32)        NOT NULL ,
	alper               FLOAT(126)          ,
	asper               FLOAT(126)          ,
	bper                FLOAT(126)          ,
	cper                FLOAT(126)          ,
	caper               FLOAT(126)          ,
	coper               FLOAT(126)          ,
	crper               FLOAT(126)          ,
	cuper               FLOAT(126)          ,
	mnper               FLOAT(126)          ,
	moper               FLOAT(126)          ,
	nbper               FLOAT(126)          ,
	niper               FLOAT(126)          ,
	nper                FLOAT(126)          ,
	pbper               FLOAT(126)          ,
	pper                FLOAT(126)          ,
	sper                FLOAT(126)          ,
	siper               FLOAT(126)          ,
	snper               FLOAT(126)          ,
	tiper               FLOAT(126)          ,
	vper                FLOAT(126)          ,
	wper                FLOAT(126)          ,
	x1per               FLOAT(126)          ,
	x2per               FLOAT(126)          ,
	x3per               FLOAT(126)          ,
	x4per               FLOAT(126)          ,
	x5per               FLOAT(126)          ,
	msinitp_ind0        FLOAT(126)          ,
	msinitp_ind1        FLOAT(126)          ,
	msinitp_ind2        FLOAT(126)          ,
	msinitp_ind3        FLOAT(126)          ,
	msinitp_ind4        FLOAT(126)          ,
	msp_ind0            FLOAT(126)          ,
	msp_ind1            FLOAT(126)          ,
	msp_ind2            FLOAT(126)          ,
	msp_ind3            FLOAT(126)          ,
	msp_ind4            FLOAT(126)          ,
	epsp_ind0           FLOAT(126)          ,
	epsp_ind1           FLOAT(126)          ,
	epsp_ind2           FLOAT(126)          ,
	epsp_ind3           FLOAT(126)          ,
	epsp_ind4           FLOAT(126)          ,
	msi                 FLOAT(126)          ,
	mse                 FLOAT(126)          ,
	msiinit             FLOAT(126)          ,
	mseinit             FLOAT(126)          ,
	counter             FLOAT(126)          ,
	gmt                 VARCHAR2(14)        ,
	density             FLOAT(126)          ,
	emod                FLOAT(126)          ,
	cw                  FLOAT(126)          ,
	lambda              FLOAT(126)          ,
	mstcor              FLOAT(126)          ,
	mstgradient         FLOAT(126)          ,
	mstinflectionx      FLOAT(126)          ,
	lpara               FLOAT(126)          ,
	mpara               FLOAT(126)          ,
	npara               FLOAT(126)          ,
	toc                 VARCHAR2(14)        ,
	tom                 VARCHAR2(14)        ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_MATDAT PRIMARY KEY (alloycode)
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

COMMENT ON Table MATDAT IS ' ACCOUNT MATDAT TABLE ';
COMMENT ON COLUMN MATDAT.alloycode IS ' Unit[-]:Unit[[-]]:alloy name.Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.alper IS ' Unit[-]:铝含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.asper IS ' Unit[-]:砷含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.bper IS ' Unit[-]:硼含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.cper IS ' Unit[-]:碳含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.caper IS ' Unit[-]:钙含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.coper IS ' Unit[-]:钴含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.crper IS ' Unit[-]:铬含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.cuper IS ' Unit[-]:铜含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.mnper IS ' Unit[-]:锰含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.moper IS ' Unit[-]:钼含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.nbper IS ' Unit[-]:铌含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.niper IS ' Unit[-]:镍含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.nper IS ' Unit[-]:氮含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.pbper IS ' Unit[-]:铅含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.pper IS ' Unit[-]:磷含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.sper IS ' Unit[-]:硫含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.siper IS ' Unit[-]:硅含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.snper IS ' Unit[-]:锡含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.tiper IS ' Unit[-]:钛含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.vper IS ' Unit[-]:钒含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.wper IS ' Unit[-]:钨含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.x1per IS ' Unit[-]:预留元素含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.x2per IS ' Unit[-]:预留元素含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.x3per IS ' Unit[-]:预留元素含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.x4per IS ' Unit[-]:预留元素含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.x5per IS ' Unit[-]:预留元素含量.Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.msinitp_ind0 IS ' Unit[Mpa]:第1机架初始材料强度(MSINITP_IND0).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.msinitp_ind1 IS ' Unit[Mpa]:第2机架初始材料强度(MSINITP_IND1).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.msinitp_ind2 IS ' Unit[Mpa]:第3机架初始材料强度(MSINITP_IND2).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.msinitp_ind3 IS ' Unit[Mpa]:第4机架初始材料强度(MSINITP_IND3).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.msinitp_ind4 IS ' Unit[Mpa]:第5机架初始材料强度(MSINITP_IND4).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.msp_ind0 IS ' Unit[Mpa]:第1机架自学习后的材料强度(MSP_IND0).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.msp_ind1 IS ' Unit[Mpa]:第2机架自学习后的材料强度(MSP_IND1).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.msp_ind2 IS ' Unit[Mpa]:第3机架自学习后的材料强度(MSP_IND2).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.msp_ind3 IS ' Unit[Mpa]:第4机架自学习后的材料强度(MSP_IND3).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.msp_ind4 IS ' Unit[Mpa]:第5机架自学习后的材料强度(MSP_IND4).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.epsp_ind0 IS ' Unit[-]:第1机架假设压下量(EPSP_IND0).Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.epsp_ind1 IS ' Unit[-]:第2机架假设压下量(EPSP_IND1).Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.epsp_ind2 IS ' Unit[-]:第3机架假设压下量(EPSP_IND2).Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.epsp_ind3 IS ' Unit[-]:第4机架假设压下量(EPSP_IND3).Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.epsp_ind4 IS ' Unit[-]:第5机架假设压下量(EPSP_IND4).Limit:[-,1] ';
COMMENT ON COLUMN MATDAT.msi IS ' Unit[Mpa]:指数方程初始材料强度(MSI).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.mse IS ' Unit[Mpa]:指数方程初始材料强度增量(MSE).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.msiinit IS ' Unit[Mpa]:指数方程自学习后的材料强度(MSIINIT).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.mseinit IS ' Unit[Mpa]:指数方程自学习后的材料强度增量(MSEINIT).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.counter IS ' Unit[-]:该材料自学习次数(COUNTER).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.gmt IS ' Unit[-]:该材料最后一次自学习时间(GMT).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.density IS ' Unit[kg/m3]:材料密度(DENSITY).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.emod IS ' Unit[N/m2]:材料弹性模量(EMOD).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.cw IS ' Unit[J/°Ckg]:材料热容量(CW).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.lambda IS ' Unit[W/m degC]:材料热传导率(LAMBDA).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.mstcor IS ' Unit[-]:temperature drop factor(MSTCOR).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.mstgradient IS ' Unit[grdC]:temperature gradient(MSTGRADIENT).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.mstinflectionx IS ' Unit[grdC]:temperature at inflection point(MSTINFLECTIONX).Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.lpara IS ' Unit[Mpa]:变形抗力的L参数.Limit:[-,1000] ';
COMMENT ON COLUMN MATDAT.mpara IS ' Unit[-]:变形抗力的M参数.Limit:[-,1000] ';
COMMENT ON COLUMN MATDAT.npara IS ' Unit[-]:变形抗力的N参数.Limit:[-,1000] ';
COMMENT ON COLUMN MATDAT.toc IS ' Unit[-]:创建时间.Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.tom IS ' Unit[-]:最后修改时间.Limit:[-,-] ';
COMMENT ON COLUMN MATDAT.mop IS ' Unit[-]:创建或者修改者.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	MATDAT
REM*************************************

DROP TRIGGER ins_b_MATDAT;
CREATE OR REPLACE TRIGGER ins_b_MATDAT
BEFORE INSERT ON MATDAT FOR EACH ROW
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
REM	MATDAT
REM*************************************

DROP TRIGGER upd_b_MATDAT;
CREATE OR REPLACE TRIGGER upd_b_MATDAT
BEFORE UPDATE ON MATDAT FOR EACH ROW
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
