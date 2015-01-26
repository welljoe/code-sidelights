REM*******************************************************************
REM    File               :    ACTDT_TRKDAT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table ACTDT_TRKDAT;
REM CREATE TABLE ...

              
             
Create Table ACTDT_TRKDAT(
	datee               VARCHAR2(8)         NOT NULL ,
	timee               VARCHAR2(6)         NOT NULL ,
	samp_no             NUMBER(5)           NOT NULL CONSTRAINT cACTDT_TRKDAT_2 CHECK (samp_no BETWEEN -32768 AND +32767),
	wpdx_1              NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_3 CHECK (wpdx_1 BETWEEN -2147483648 AND +2147483647),
	ti_1                NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_4 CHECK (ti_1 BETWEEN -2147483648 AND +2147483647),
	plength_1           NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_5 CHECK (plength_1 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_1          VARCHAR2(16)        ,
	wpdx_2              NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_7 CHECK (wpdx_2 BETWEEN -2147483648 AND +2147483647),
	ti_2                NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_8 CHECK (ti_2 BETWEEN -2147483648 AND +2147483647),
	plength_2           NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_9 CHECK (plength_2 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_2          VARCHAR2(16)        ,
	wpdx_3              NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_11 CHECK (wpdx_3 BETWEEN -2147483648 AND +2147483647),
	ti_3                NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_12 CHECK (ti_3 BETWEEN -2147483648 AND +2147483647),
	plength_3           NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_13 CHECK (plength_3 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_3          VARCHAR2(16)        ,
	wpdx_4              NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_15 CHECK (wpdx_4 BETWEEN -2147483648 AND +2147483647),
	ti_4                NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_16 CHECK (ti_4 BETWEEN -2147483648 AND +2147483647),
	plength_4           NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_17 CHECK (plength_4 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_4          VARCHAR2(16)        ,
	wpdx_5              NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_19 CHECK (wpdx_5 BETWEEN -2147483648 AND +2147483647),
	ti_5                NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_20 CHECK (ti_5 BETWEEN -2147483648 AND +2147483647),
	plength_5           NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_21 CHECK (plength_5 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_5          VARCHAR2(16)        ,
	wpdx_6              NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_23 CHECK (wpdx_6 BETWEEN -2147483648 AND +2147483647),
	ti_6                NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_24 CHECK (ti_6 BETWEEN -2147483648 AND +2147483647),
	plength_6           NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_25 CHECK (plength_6 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_6          VARCHAR2(16)        ,
	wpdx_7              NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_27 CHECK (wpdx_7 BETWEEN -2147483648 AND +2147483647),
	ti_7                NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_28 CHECK (ti_7 BETWEEN -2147483648 AND +2147483647),
	plength_7           NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_29 CHECK (plength_7 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_7          VARCHAR2(16)        ,
	wpdx_8              NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_31 CHECK (wpdx_8 BETWEEN -2147483648 AND +2147483647),
	ti_8                NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_32 CHECK (ti_8 BETWEEN -2147483648 AND +2147483647),
	plength_8           NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_33 CHECK (plength_8 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_8          VARCHAR2(16)        ,
	wpdx_9              NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_35 CHECK (wpdx_9 BETWEEN -2147483648 AND +2147483647),
	ti_9                NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_36 CHECK (ti_9 BETWEEN -2147483648 AND +2147483647),
	plength_9           NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_37 CHECK (plength_9 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_9          VARCHAR2(16)        ,
	wpdx_10             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_39 CHECK (wpdx_10 BETWEEN -2147483648 AND +2147483647),
	ti_10               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_40 CHECK (ti_10 BETWEEN -2147483648 AND +2147483647),
	plength_10          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_41 CHECK (plength_10 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_10         VARCHAR2(16)        ,
	wpdx_11             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_43 CHECK (wpdx_11 BETWEEN -2147483648 AND +2147483647),
	ti_11               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_44 CHECK (ti_11 BETWEEN -2147483648 AND +2147483647),
	plength_11          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_45 CHECK (plength_11 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_11         VARCHAR2(16)        ,
	wpdx_12             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_47 CHECK (wpdx_12 BETWEEN -2147483648 AND +2147483647),
	ti_12               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_48 CHECK (ti_12 BETWEEN -2147483648 AND +2147483647),
	plength_12          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_49 CHECK (plength_12 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_12         VARCHAR2(16)        ,
	wpdx_13             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_51 CHECK (wpdx_13 BETWEEN -2147483648 AND +2147483647),
	ti_13               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_52 CHECK (ti_13 BETWEEN -2147483648 AND +2147483647),
	plength_13          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_53 CHECK (plength_13 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_13         VARCHAR2(16)        ,
	wpdx_14             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_55 CHECK (wpdx_14 BETWEEN -2147483648 AND +2147483647),
	ti_14               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_56 CHECK (ti_14 BETWEEN -2147483648 AND +2147483647),
	plength_14          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_57 CHECK (plength_14 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_14         VARCHAR2(16)        ,
	wpdx_15             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_59 CHECK (wpdx_15 BETWEEN -2147483648 AND +2147483647),
	ti_15               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_60 CHECK (ti_15 BETWEEN -2147483648 AND +2147483647),
	plength_15          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_61 CHECK (plength_15 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_15         VARCHAR2(16)        ,
	wpdx_16             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_63 CHECK (wpdx_16 BETWEEN -2147483648 AND +2147483647),
	ti_16               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_64 CHECK (ti_16 BETWEEN -2147483648 AND +2147483647),
	plength_16          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_65 CHECK (plength_16 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_16         VARCHAR2(16)        ,
	wpdx_17             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_67 CHECK (wpdx_17 BETWEEN -2147483648 AND +2147483647),
	ti_17               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_68 CHECK (ti_17 BETWEEN -2147483648 AND +2147483647),
	plength_17          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_69 CHECK (plength_17 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_17         VARCHAR2(16)        ,
	wpdx_18             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_71 CHECK (wpdx_18 BETWEEN -2147483648 AND +2147483647),
	ti_18               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_72 CHECK (ti_18 BETWEEN -2147483648 AND +2147483647),
	plength_18          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_73 CHECK (plength_18 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_18         VARCHAR2(16)        ,
	wpdx_19             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_75 CHECK (wpdx_19 BETWEEN -2147483648 AND +2147483647),
	ti_19               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_76 CHECK (ti_19 BETWEEN -2147483648 AND +2147483647),
	plength_19          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_77 CHECK (plength_19 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_19         VARCHAR2(16)        ,
	wpdx_20             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_79 CHECK (wpdx_20 BETWEEN -2147483648 AND +2147483647),
	ti_20               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_80 CHECK (ti_20 BETWEEN -2147483648 AND +2147483647),
	plength_20          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_81 CHECK (plength_20 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_20         VARCHAR2(16)        ,
	wpdx_21             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_83 CHECK (wpdx_21 BETWEEN -2147483648 AND +2147483647),
	ti_21               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_84 CHECK (ti_21 BETWEEN -2147483648 AND +2147483647),
	plength_21          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_85 CHECK (plength_21 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_21         VARCHAR2(16)        ,
	wpdx_22             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_87 CHECK (wpdx_22 BETWEEN -2147483648 AND +2147483647),
	ti_22               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_88 CHECK (ti_22 BETWEEN -2147483648 AND +2147483647),
	plength_22          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_89 CHECK (plength_22 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_22         VARCHAR2(16)        ,
	wpdx_23             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_91 CHECK (wpdx_23 BETWEEN -2147483648 AND +2147483647),
	ti_23               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_92 CHECK (ti_23 BETWEEN -2147483648 AND +2147483647),
	plength_23          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_93 CHECK (plength_23 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_23         VARCHAR2(16)        ,
	wpdx_24             NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_95 CHECK (wpdx_24 BETWEEN -2147483648 AND +2147483647),
	ti_24               NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_96 CHECK (ti_24 BETWEEN -2147483648 AND +2147483647),
	plength_24          NUMBER(10)          CONSTRAINT cACTDT_TRKDAT_97 CHECK (plength_24 BETWEEN -2147483648 AND +2147483647),
	hcoil_id_24         VARCHAR2(16)        ,
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_ACTDT_TRKDAT PRIMARY KEY (samp_no)
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

COMMENT ON Table ACTDT_TRKDAT IS ' PL Tracking Data ';
COMMENT ON COLUMN ACTDT_TRKDAT.datee IS ' Unit[-]:Date.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.timee IS ' Unit[-]:Time.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.samp_no IS ' Unit[-]:Sampling no..Limit:[-,500000] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_1 IS ' Unit[-]:wpdx 1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_1 IS ' Unit[-]:ti1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_1 IS ' Unit[-]:Hot coil Id1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_1 IS ' Unit[-]:length1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_2 IS ' Unit[-]:wpdx 2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_2 IS ' Unit[-]:ti2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_2 IS ' Unit[-]:Hot coil Id2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_2 IS ' Unit[-]:length2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_3 IS ' Unit[-]:wpdx 3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_3 IS ' Unit[-]:ti3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_3 IS ' Unit[-]:Hot coil Id3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_3 IS ' Unit[-]:length3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_4 IS ' Unit[-]:wpdx 4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_4 IS ' Unit[-]:ti4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_4 IS ' Unit[-]:Hot coil Id4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_4 IS ' Unit[-]:length4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_5 IS ' Unit[-]:wpdx 5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_5 IS ' Unit[-]:ti5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_5 IS ' Unit[-]:Hot coil Id5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_5 IS ' Unit[-]:length5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_6 IS ' Unit[-]:wpdx 6.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_6 IS ' Unit[-]:ti6.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_6 IS ' Unit[-]:Hot coil Id6.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_6 IS ' Unit[-]:length6.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_7 IS ' Unit[-]:wpdx 7.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_7 IS ' Unit[-]:ti7.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_7 IS ' Unit[-]:Hot coil Id7.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_7 IS ' Unit[-]:length7.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_8 IS ' Unit[-]:wpdx 8.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_8 IS ' Unit[-]:ti8.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_8 IS ' Unit[-]:Hot coil Id8.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_8 IS ' Unit[-]:length8.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_9 IS ' Unit[-]:wpdx 9.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_9 IS ' Unit[-]:ti9.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_9 IS ' Unit[-]:Hot coil Id9.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_9 IS ' Unit[-]:length9.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_10 IS ' Unit[-]:wpdx 10.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_10 IS ' Unit[-]:ti10.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_10 IS ' Unit[-]:Hot coil Id10.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_10 IS ' Unit[-]:length10.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_11 IS ' Unit[-]:wpdx 11.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_11 IS ' Unit[-]:ti11.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_11 IS ' Unit[-]:Hot coil Id11.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_11 IS ' Unit[-]:length11.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_12 IS ' Unit[-]:wpdx 12.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_12 IS ' Unit[-]:ti12.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_12 IS ' Unit[-]:Hot coil Id12.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_12 IS ' Unit[-]:length12.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_13 IS ' Unit[-]:wpdx 13.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_13 IS ' Unit[-]:ti13.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_13 IS ' Unit[-]:Hot coil Id13.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_13 IS ' Unit[-]:length13.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_14 IS ' Unit[-]:wpdx 14.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_14 IS ' Unit[-]:ti14.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_14 IS ' Unit[-]:Hot coil Id14.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_14 IS ' Unit[-]:length14.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_15 IS ' Unit[-]:wpdx 15.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_15 IS ' Unit[-]:ti15.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_15 IS ' Unit[-]:Hot coil Id15.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_15 IS ' Unit[-]:length15.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_16 IS ' Unit[-]:wpdx 16.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_16 IS ' Unit[-]:ti16.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_16 IS ' Unit[-]:Hot coil Id16.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_16 IS ' Unit[-]:length16.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_17 IS ' Unit[-]:wpdx 17.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_17 IS ' Unit[-]:ti17.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_17 IS ' Unit[-]:Hot coil Id17.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_17 IS ' Unit[-]:length17.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_18 IS ' Unit[-]:wpdx 18.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_18 IS ' Unit[-]:ti18.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_18 IS ' Unit[-]:Hot coil Id18.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_18 IS ' Unit[-]:length18.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_19 IS ' Unit[-]:wpdx 19.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_19 IS ' Unit[-]:ti19.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_19 IS ' Unit[-]:Hot coil Id19.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_19 IS ' Unit[-]:length19.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_20 IS ' Unit[-]:wpdx 20.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_20 IS ' Unit[-]:ti20.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_20 IS ' Unit[-]:Hot coil Id20.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_20 IS ' Unit[-]:length20.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_21 IS ' Unit[-]:wpdx 21.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_21 IS ' Unit[-]:ti21.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_21 IS ' Unit[-]:Hot coil Id21.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_21 IS ' Unit[-]:length21.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_22 IS ' Unit[-]:wpdx 22.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_22 IS ' Unit[-]:ti22.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_22 IS ' Unit[-]:Hot coil Id22.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_22 IS ' Unit[-]:length22.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_23 IS ' Unit[-]:wpdx 23.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_23 IS ' Unit[-]:ti23.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_23 IS ' Unit[-]:Hot coil Id23.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_23 IS ' Unit[-]:length23.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.wpdx_24 IS ' Unit[-]:wpdx 24.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.ti_24 IS ' Unit[-]:ti24.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.plength_24 IS ' Unit[-]:Hot coil Id24.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.hcoil_id_24 IS ' Unit[-]:length24.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.toc IS ' Unit[-]:create time.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.tom IS ' Unit[-]:modify time.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TRKDAT.mop IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	ACTDT_TRKDAT
REM*************************************

DROP TRIGGER ins_b_ACTDT_TRKDAT;
CREATE OR REPLACE TRIGGER ins_b_ACTDT_TRKDAT
BEFORE INSERT ON ACTDT_TRKDAT FOR EACH ROW
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
REM	ACTDT_TRKDAT
REM*************************************

DROP TRIGGER upd_b_ACTDT_TRKDAT;
CREATE OR REPLACE TRIGGER upd_b_ACTDT_TRKDAT
BEFORE UPDATE ON ACTDT_TRKDAT FOR EACH ROW
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
