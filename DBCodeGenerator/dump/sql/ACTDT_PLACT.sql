REM*******************************************************************
REM    File               :    ACTDT_PLACT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table ACTDT_PLACT;
REM CREATE TABLE ...

  
             
Create Table ACTDT_PLACT(
	datee               VARCHAR2(8)         NOT NULL ,
	timee               VARCHAR2(6)         NOT NULL ,
	samp_no             NUMBER(5)           NOT NULL CONSTRAINT cACTDT_PLACT_2 CHECK (samp_no BETWEEN -32768 AND +32767),
	eshct_idx           NUMBER(5)           CONSTRAINT cACTDT_PLACT_3 CHECK (eshct_idx BETWEEN -32768 AND +32767),
	std1_idx            NUMBER(5)           CONSTRAINT cACTDT_PLACT_4 CHECK (std1_idx BETWEEN -32768 AND +32767),
	std2_idx            NUMBER(5)           CONSTRAINT cACTDT_PLACT_5 CHECK (std2_idx BETWEEN -32768 AND +32767),
	std3_idx            NUMBER(5)           CONSTRAINT cACTDT_PLACT_6 CHECK (std3_idx BETWEEN -32768 AND +32767),
	std4_idx            NUMBER(5)           CONSTRAINT cACTDT_PLACT_7 CHECK (std4_idx BETWEEN -32768 AND +32767),
	std5_idx            NUMBER(5)           CONSTRAINT cACTDT_PLACT_8 CHECK (std5_idx BETWEEN -32768 AND +32767),
	dshct_idx           NUMBER(5)           CONSTRAINT cACTDT_PLACT_9 CHECK (dshct_idx BETWEEN -32768 AND +32767),
	tr_idx              NUMBER(5)           CONSTRAINT cACTDT_PLACT_10 CHECK (tr_idx BETWEEN -32768 AND +32767),
	por_no              NUMBER(5)           CONSTRAINT cACTDT_PLACT_11 CHECK (por_no BETWEEN -32768 AND +32767),
	por_dia             NUMBER(5)           CONSTRAINT cACTDT_PLACT_12 CHECK (por_dia BETWEEN -32768 AND +32767),
	por_width           NUMBER(5)           CONSTRAINT cACTDT_PLACT_13 CHECK (por_width BETWEEN -32768 AND +32767),
	por_thick           NUMBER(5)           CONSTRAINT cACTDT_PLACT_14 CHECK (por_thick BETWEEN -32768 AND +32767),
	por_kind            NUMBER(5)           CONSTRAINT cACTDT_PLACT_15 CHECK (por_kind BETWEEN -32768 AND +32767),
	por_tens            NUMBER(5)           CONSTRAINT cACTDT_PLACT_16 CHECK (por_tens BETWEEN -32768 AND +32767),
	ent_maxsp           NUMBER(5)           CONSTRAINT cACTDT_PLACT_17 CHECK (ent_maxsp BETWEEN -32768 AND +32767),
	por_rest            NUMBER(5)           CONSTRAINT cACTDT_PLACT_18 CHECK (por_rest BETWEEN -32768 AND +32767),
	dist1               NUMBER(10)          CONSTRAINT cACTDT_PLACT_19 CHECK (dist1 BETWEEN -2147483648 AND +2147483647),
	dist2               NUMBER(10)          CONSTRAINT cACTDT_PLACT_20 CHECK (dist2 BETWEEN -2147483648 AND +2147483647),
	dist3               NUMBER(10)          CONSTRAINT cACTDT_PLACT_21 CHECK (dist3 BETWEEN -2147483648 AND +2147483647),
	dist4               NUMBER(10)          CONSTRAINT cACTDT_PLACT_22 CHECK (dist4 BETWEEN -2147483648 AND +2147483647),
	dist5               NUMBER(10)          CONSTRAINT cACTDT_PLACT_23 CHECK (dist5 BETWEEN -2147483648 AND +2147483647),
	dist6               NUMBER(10)          CONSTRAINT cACTDT_PLACT_24 CHECK (dist6 BETWEEN -2147483648 AND +2147483647),
	dist7               NUMBER(10)          CONSTRAINT cACTDT_PLACT_25 CHECK (dist7 BETWEEN -2147483648 AND +2147483647),
	dist8               NUMBER(10)          CONSTRAINT cACTDT_PLACT_26 CHECK (dist8 BETWEEN -2147483648 AND +2147483647),
	dist9               NUMBER(10)          CONSTRAINT cACTDT_PLACT_27 CHECK (dist9 BETWEEN -2147483648 AND +2147483647),
	dist10              NUMBER(10)          CONSTRAINT cACTDT_PLACT_28 CHECK (dist10 BETWEEN -2147483648 AND +2147483647),
	dist11              NUMBER(10)          CONSTRAINT cACTDT_PLACT_29 CHECK (dist11 BETWEEN -2147483648 AND +2147483647),
	dist12              NUMBER(10)          CONSTRAINT cACTDT_PLACT_30 CHECK (dist12 BETWEEN -2147483648 AND +2147483647),
	dist13              NUMBER(10)          CONSTRAINT cACTDT_PLACT_31 CHECK (dist13 BETWEEN -2147483648 AND +2147483647),
	dist14              NUMBER(10)          CONSTRAINT cACTDT_PLACT_32 CHECK (dist14 BETWEEN -2147483648 AND +2147483647),
	dist15              NUMBER(10)          CONSTRAINT cACTDT_PLACT_33 CHECK (dist15 BETWEEN -2147483648 AND +2147483647),
	dist16              NUMBER(10)          CONSTRAINT cACTDT_PLACT_34 CHECK (dist16 BETWEEN -2147483648 AND +2147483647),
	dist17              NUMBER(10)          CONSTRAINT cACTDT_PLACT_35 CHECK (dist17 BETWEEN -2147483648 AND +2147483647),
	dist18              NUMBER(10)          CONSTRAINT cACTDT_PLACT_36 CHECK (dist18 BETWEEN -2147483648 AND +2147483647),
	dist19              NUMBER(10)          CONSTRAINT cACTDT_PLACT_37 CHECK (dist19 BETWEEN -2147483648 AND +2147483647),
	dist20              NUMBER(10)          CONSTRAINT cACTDT_PLACT_38 CHECK (dist20 BETWEEN -2147483648 AND +2147483647),
	dist21              NUMBER(10)          CONSTRAINT cACTDT_PLACT_39 CHECK (dist21 BETWEEN -2147483648 AND +2147483647),
	dist22              NUMBER(10)          CONSTRAINT cACTDT_PLACT_40 CHECK (dist22 BETWEEN -2147483648 AND +2147483647),
	dist23              NUMBER(10)          CONSTRAINT cACTDT_PLACT_41 CHECK (dist23 BETWEEN -2147483648 AND +2147483647),
	dist24              NUMBER(10)          CONSTRAINT cACTDT_PLACT_42 CHECK (dist24 BETWEEN -2147483648 AND +2147483647),
	dist25              NUMBER(10)          CONSTRAINT cACTDT_PLACT_43 CHECK (dist25 BETWEEN -2147483648 AND +2147483647),
	dist26              NUMBER(10)          CONSTRAINT cACTDT_PLACT_44 CHECK (dist26 BETWEEN -2147483648 AND +2147483647),
	dist27              NUMBER(10)          CONSTRAINT cACTDT_PLACT_45 CHECK (dist27 BETWEEN -2147483648 AND +2147483647),
	dist28              NUMBER(10)          CONSTRAINT cACTDT_PLACT_46 CHECK (dist28 BETWEEN -2147483648 AND +2147483647),
	dist29              NUMBER(10)          CONSTRAINT cACTDT_PLACT_47 CHECK (dist29 BETWEEN -2147483648 AND +2147483647),
	dist30              NUMBER(10)          CONSTRAINT cACTDT_PLACT_48 CHECK (dist30 BETWEEN -2147483648 AND +2147483647),
	dist31              NUMBER(10)          CONSTRAINT cACTDT_PLACT_49 CHECK (dist31 BETWEEN -2147483648 AND +2147483647),
	dist32              NUMBER(10)          CONSTRAINT cACTDT_PLACT_50 CHECK (dist32 BETWEEN -2147483648 AND +2147483647),
	dist33              NUMBER(10)          CONSTRAINT cACTDT_PLACT_51 CHECK (dist33 BETWEEN -2147483648 AND +2147483647),
	dist34              NUMBER(10)          CONSTRAINT cACTDT_PLACT_52 CHECK (dist34 BETWEEN -2147483648 AND +2147483647),
	csmode              NUMBER(5)           CONSTRAINT cACTDT_PLACT_53 CHECK (csmode BETWEEN -32768 AND +32767),
	porno               NUMBER(5)           CONSTRAINT cACTDT_PLACT_54 CHECK (porno BETWEEN -32768 AND +32767),
	ttens               NUMBER(5)           CONSTRAINT cACTDT_PLACT_55 CHECK (ttens BETWEEN -32768 AND +32767),
	dia1                NUMBER(5)           CONSTRAINT cACTDT_PLACT_56 CHECK (dia1 BETWEEN -32768 AND +32767),
	dia2                NUMBER(5)           CONSTRAINT cACTDT_PLACT_57 CHECK (dia2 BETWEEN -32768 AND +32767),
	ten1                NUMBER(5)           CONSTRAINT cACTDT_PLACT_58 CHECK (ten1 BETWEEN -32768 AND +32767),
	ten2                NUMBER(5)           CONSTRAINT cACTDT_PLACT_59 CHECK (ten2 BETWEEN -32768 AND +32767),
	prrl1               NUMBER(5)           CONSTRAINT cACTDT_PLACT_60 CHECK (prrl1 BETWEEN -32768 AND +32767),
	prrl2               NUMBER(5)           CONSTRAINT cACTDT_PLACT_61 CHECK (prrl2 BETWEEN -32768 AND +32767),
	prrl3               NUMBER(5)           CONSTRAINT cACTDT_PLACT_62 CHECK (prrl3 BETWEEN -32768 AND +32767),
	prrl4               NUMBER(5)           CONSTRAINT cACTDT_PLACT_63 CHECK (prrl4 BETWEEN -32768 AND +32767),
	prrl5               NUMBER(5)           CONSTRAINT cACTDT_PLACT_64 CHECK (prrl5 BETWEEN -32768 AND +32767),
	prrl6               NUMBER(5)           CONSTRAINT cACTDT_PLACT_65 CHECK (prrl6 BETWEEN -32768 AND +32767),
	sspd                NUMBER(5)           CONSTRAINT cACTDT_PLACT_66 CHECK (sspd BETWEEN -32768 AND +32767),
	slop1_len           NUMBER(10)          CONSTRAINT cACTDT_PLACT_67 CHECK (slop1_len BETWEEN -2147483648 AND +2147483647),
	slop1_pos           NUMBER(5)           CONSTRAINT cACTDT_PLACT_68 CHECK (slop1_pos BETWEEN -32768 AND +32767),
	slop1_tens          NUMBER(5)           CONSTRAINT cACTDT_PLACT_69 CHECK (slop1_tens BETWEEN -32768 AND +32767),
	slop2_len           NUMBER(10)          CONSTRAINT cACTDT_PLACT_70 CHECK (slop2_len BETWEEN -2147483648 AND +2147483647),
	slop2_pos           NUMBER(5)           CONSTRAINT cACTDT_PLACT_71 CHECK (slop2_pos BETWEEN -32768 AND +32767),
	slop2_tens          NUMBER(5)           CONSTRAINT cACTDT_PLACT_72 CHECK (slop2_tens BETWEEN -32768 AND +32767),
	slop3_len           NUMBER(10)          CONSTRAINT cACTDT_PLACT_73 CHECK (slop3_len BETWEEN -2147483648 AND +2147483647),
	slop3_pos           NUMBER(5)           CONSTRAINT cACTDT_PLACT_74 CHECK (slop3_pos BETWEEN -32768 AND +32767),
	slop3_tens          NUMBER(5)           CONSTRAINT cACTDT_PLACT_75 CHECK (slop3_tens BETWEEN -32768 AND +32767),
	espd                NUMBER(5)           CONSTRAINT cACTDT_PLACT_76 CHECK (espd BETWEEN -32768 AND +32767),
	cspd                NUMBER(5)           CONSTRAINT cACTDT_PLACT_77 CHECK (cspd BETWEEN -32768 AND +32767),
	tens                NUMBER(5)           CONSTRAINT cACTDT_PLACT_78 CHECK (tens BETWEEN -32768 AND +32767),
	plbth1_1            NUMBER(5)           CONSTRAINT cACTDT_PLACT_79 CHECK (plbth1_1 BETWEEN -32768 AND +32767),
	plbth1_2            NUMBER(5)           CONSTRAINT cACTDT_PLACT_80 CHECK (plbth1_2 BETWEEN -32768 AND +32767),
	plbth1_3            NUMBER(5)           CONSTRAINT cACTDT_PLACT_81 CHECK (plbth1_3 BETWEEN -32768 AND +32767),
	plbth2_1            NUMBER(5)           CONSTRAINT cACTDT_PLACT_82 CHECK (plbth2_1 BETWEEN -32768 AND +32767),
	plbth2_2            NUMBER(5)           CONSTRAINT cACTDT_PLACT_83 CHECK (plbth2_2 BETWEEN -32768 AND +32767),
	plbth2_3            NUMBER(5)           CONSTRAINT cACTDT_PLACT_84 CHECK (plbth2_3 BETWEEN -32768 AND +32767),
	plbth3_1            NUMBER(5)           CONSTRAINT cACTDT_PLACT_85 CHECK (plbth3_1 BETWEEN -32768 AND +32767),
	plbth3_2            NUMBER(5)           CONSTRAINT cACTDT_PLACT_86 CHECK (plbth3_2 BETWEEN -32768 AND +32767),
	plbth3_3            NUMBER(5)           CONSTRAINT cACTDT_PLACT_87 CHECK (plbth3_3 BETWEEN -32768 AND +32767),
	tvl_use             NUMBER(5)           CONSTRAINT cACTDT_PLACT_88 CHECK (tvl_use BETWEEN -32768 AND +32767),
	tens1               NUMBER(10)          CONSTRAINT cACTDT_PLACT_89 CHECK (tens1 BETWEEN -2147483648 AND +2147483647),
	rims1               NUMBER(10)          CONSTRAINT cACTDT_PLACT_90 CHECK (rims1 BETWEEN -2147483648 AND +2147483647),
	rims2               NUMBER(10)          CONSTRAINT cACTDT_PLACT_91 CHECK (rims2 BETWEEN -2147483648 AND +2147483647),
	rims3               NUMBER(10)          CONSTRAINT cACTDT_PLACT_92 CHECK (rims3 BETWEEN -2147483648 AND +2147483647),
	elg                 NUMBER(10)          CONSTRAINT cACTDT_PLACT_93 CHECK (elg BETWEEN -2147483648 AND +2147483647),
	tvl_espd            NUMBER(10)          CONSTRAINT cACTDT_PLACT_94 CHECK (tvl_espd BETWEEN -2147483648 AND +2147483647),
	spd                 NUMBER(5)           CONSTRAINT cACTDT_PLACT_95 CHECK (spd BETWEEN -32768 AND +32767),
	wid1                NUMBER(5)           CONSTRAINT cACTDT_PLACT_96 CHECK (wid1 BETWEEN -32768 AND +32767),
	wid2                NUMBER(5)           CONSTRAINT cACTDT_PLACT_97 CHECK (wid2 BETWEEN -32768 AND +32767),
	wid3                NUMBER(5)           CONSTRAINT cACTDT_PLACT_98 CHECK (wid3 BETWEEN -32768 AND +32767),
	trm_use             NUMBER(5)           CONSTRAINT cACTDT_PLACT_99 CHECK (trm_use BETWEEN -32768 AND +32767),
	tno1                NUMBER(5)           CONSTRAINT cACTDT_PLACT_100 CHECK (tno1 BETWEEN -32768 AND +32767),
	tno2                NUMBER(5)           CONSTRAINT cACTDT_PLACT_101 CHECK (tno2 BETWEEN -32768 AND +32767),
	tgap1               NUMBER(5)           CONSTRAINT cACTDT_PLACT_102 CHECK (tgap1 BETWEEN -32768 AND +32767),
	tgap2               NUMBER(5)           CONSTRAINT cACTDT_PLACT_103 CHECK (tgap2 BETWEEN -32768 AND +32767),
	tgap3               NUMBER(5)           CONSTRAINT cACTDT_PLACT_104 CHECK (tgap3 BETWEEN -32768 AND +32767),
	tgap4               NUMBER(5)           CONSTRAINT cACTDT_PLACT_105 CHECK (tgap4 BETWEEN -32768 AND +32767),
	tlap1               NUMBER(5)           CONSTRAINT cACTDT_PLACT_106 CHECK (tlap1 BETWEEN -32768 AND +32767),
	tlap2               NUMBER(5)           CONSTRAINT cACTDT_PLACT_107 CHECK (tlap2 BETWEEN -32768 AND +32767),
	tlap3               NUMBER(5)           CONSTRAINT cACTDT_PLACT_108 CHECK (tlap3 BETWEEN -32768 AND +32767),
	tlap4               NUMBER(5)           CONSTRAINT cACTDT_PLACT_109 CHECK (tlap4 BETWEEN -32768 AND +32767),
	plmaster            NUMBER(5)           CONSTRAINT cACTDT_PLACT_110 CHECK (plmaster BETWEEN -32768 AND +32767),
	linsts              NUMBER(5)           CONSTRAINT cACTDT_PLACT_111 CHECK (linsts BETWEEN -32768 AND +32767),
	awpd1               NUMBER(5)           CONSTRAINT cACTDT_PLACT_112 CHECK (awpd1 BETWEEN -32768 AND +32767),
	awpd2               NUMBER(5)           CONSTRAINT cACTDT_PLACT_113 CHECK (awpd2 BETWEEN -32768 AND +32767),
	awpd3               NUMBER(5)           CONSTRAINT cACTDT_PLACT_114 CHECK (awpd3 BETWEEN -32768 AND +32767),
	awpd4               NUMBER(5)           CONSTRAINT cACTDT_PLACT_115 CHECK (awpd4 BETWEEN -32768 AND +32767),
	awpd5               NUMBER(5)           CONSTRAINT cACTDT_PLACT_116 CHECK (awpd5 BETWEEN -32768 AND +32767),
	awpd6               NUMBER(5)           CONSTRAINT cACTDT_PLACT_117 CHECK (awpd6 BETWEEN -32768 AND +32767),
	arele1              NUMBER(5)           CONSTRAINT cACTDT_PLACT_118 CHECK (arele1 BETWEEN -32768 AND +32767),
	arele2              NUMBER(5)           CONSTRAINT cACTDT_PLACT_119 CHECK (arele2 BETWEEN -32768 AND +32767),
	arele3              NUMBER(5)           CONSTRAINT cACTDT_PLACT_120 CHECK (arele3 BETWEEN -32768 AND +32767),
	arele4              NUMBER(5)           CONSTRAINT cACTDT_PLACT_121 CHECK (arele4 BETWEEN -32768 AND +32767),
	arele5              NUMBER(5)           CONSTRAINT cACTDT_PLACT_122 CHECK (arele5 BETWEEN -32768 AND +32767),
	arele6              NUMBER(5)           CONSTRAINT cACTDT_PLACT_123 CHECK (arele6 BETWEEN -32768 AND +32767),
	tktemp              NUMBER(5)           CONSTRAINT cACTDT_PLACT_124 CHECK (tktemp BETWEEN -32768 AND +32767),
	tkcond              NUMBER(5)           CONSTRAINT cACTDT_PLACT_125 CHECK (tkcond BETWEEN -32768 AND +32767),
	rinspv              NUMBER(5)           CONSTRAINT cACTDT_PLACT_126 CHECK (rinspv BETWEEN -32768 AND +32767),
	eshct_hcoilno       VARCHAR2(16)        ,
	std1_hcoilno        VARCHAR2(16)        ,
	std2_hcoilno        VARCHAR2(16)        ,
	std3_hcoilno        VARCHAR2(16)        ,
	std4_hcoilno        VARCHAR2(16)        ,
	std5_hcoilno        VARCHAR2(16)        ,
	dshct_hcoilno       VARCHAR2(16)        ,
	tr_hcoilno          VARCHAR2(16)        ,
	flatsp_1            NUMBER(5)           CONSTRAINT cACTDT_PLACT_135 CHECK (flatsp_1 BETWEEN -32768 AND +32767),
	flatsp_2            NUMBER(5)           CONSTRAINT cACTDT_PLACT_136 CHECK (flatsp_2 BETWEEN -32768 AND +32767),
	flatsp_3            NUMBER(5)           CONSTRAINT cACTDT_PLACT_137 CHECK (flatsp_3 BETWEEN -32768 AND +32767),
	flatsp_4            NUMBER(5)           CONSTRAINT cACTDT_PLACT_138 CHECK (flatsp_4 BETWEEN -32768 AND +32767),
	std1_len            NUMBER(10)          CONSTRAINT cACTDT_PLACT_139 CHECK (std1_len BETWEEN -2147483648 AND +2147483647),
	std2_len            NUMBER(10)          CONSTRAINT cACTDT_PLACT_140 CHECK (std2_len BETWEEN -2147483648 AND +2147483647),
	std3_len            NUMBER(10)          CONSTRAINT cACTDT_PLACT_141 CHECK (std3_len BETWEEN -2147483648 AND +2147483647),
	std4_len            NUMBER(10)          CONSTRAINT cACTDT_PLACT_142 CHECK (std4_len BETWEEN -2147483648 AND +2147483647),
	std5_len            NUMBER(10)          CONSTRAINT cACTDT_PLACT_143 CHECK (std5_len BETWEEN -2147483648 AND +2147483647),
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_ACTDT_PLACT PRIMARY KEY (samp_no)
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

COMMENT ON Table ACTDT_PLACT IS ' PL section actual data ';
COMMENT ON COLUMN ACTDT_PLACT.datee IS ' Unit[-]:Date.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.timee IS ' Unit[-]:Time.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.samp_no IS ' Unit[-]:Sampling no..Limit:[-,500000] ';
COMMENT ON COLUMN ACTDT_PLACT.eshct_idx IS ' Unit[-]:Tracking index WPDX24-E.shear.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std1_idx IS ' Unit[-]:Tracking index E.shear-std1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std2_idx IS ' Unit[-]:Tracking index std1-std2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std3_idx IS ' Unit[-]:Tracking index std2-std3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std4_idx IS ' Unit[-]:Tracking index std3-std4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std5_idx IS ' Unit[-]:Tracking index std4-std5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dshct_idx IS ' Unit[-]:Tracking index std5-D.shear.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tr_idx IS ' Unit[-]:Tracking index D.shear-TR.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.por_no IS ' Unit[-]:Paying off POR no.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.por_dia IS ' Unit[mm]:POR outer diameter.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.por_width IS ' Unit[mm]:Coil width.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.por_thick IS ' Unit[10-3mm]:Coil thickness.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.por_kind IS ' Unit[-]:Coil kind.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.por_tens IS ' Unit[10N]:POR tension.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.ent_maxsp IS ' Unit[mpm]:Entry Max. Speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.por_rest IS ' Unit[m]:Paying off Reel length.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist1 IS ' Unit[mm]:Distance between WPDX1 and WPDX2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist2 IS ' Unit[mm]:Distance between WPDX2 and WPDX3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist3 IS ' Unit[mm]:Distance between WPDX3 and WPDX4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist4 IS ' Unit[mm]:Distance between WPDX4 and WPDX5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist5 IS ' Unit[mm]:Distance between WPDX5 and WPDX6.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist6 IS ' Unit[mm]:Distance between WPDX6 and WPDX7.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist7 IS ' Unit[mm]:Distance between WPDX7 and WPDX8.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist8 IS ' Unit[mm]:Distance between WPDX8 and WPDX9.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist9 IS ' Unit[mm]:Distance between WPDX9 and WPDX10.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist10 IS ' Unit[mm]:Distance between WPDX10 and WPDX11.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist11 IS ' Unit[mm]:Distance between WPDX11 and WPDX12.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist12 IS ' Unit[mm]:Distance between WPDX12 and WPDX13.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist13 IS ' Unit[mm]:Distance between WPDX13 and WPDX14.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist14 IS ' Unit[mm]:Distance between WPDX14 and WPDX15.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist15 IS ' Unit[mm]:Distance between WPDX15 and WPDX16.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist16 IS ' Unit[mm]:Distance between WPDX16 and WPDX17.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist17 IS ' Unit[mm]:Distance between WPDX17 and WPDX18.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist18 IS ' Unit[mm]:Distance between WPDX18 and WPDX19.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist19 IS ' Unit[mm]:Distance between WPDX19 and WPDX20.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist20 IS ' Unit[mm]:Distance between WPDX20 and WPDX21.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist21 IS ' Unit[mm]:Distance between WPDX21 and WPDX22.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist22 IS ' Unit[mm]:Distance between WPDX22 and WPDX23.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist23 IS ' Unit[mm]:Distance between WPDX23 and WPDX24.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist24 IS ' Unit[mm]:Distance between WPDX24 and entry shear.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist25 IS ' Unit[mm]:Distance between WPDX24 and STD 1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist26 IS ' Unit[mm]:Distance between WPDX24 and Del. Shear.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist27 IS ' Unit[mm]:Distance between ASD preset point and STD1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist28 IS ' Unit[mm]:Distance between WPDX18 and S/T position.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist29 IS ' Unit[mm]:Distance between STD1 and STD2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist30 IS ' Unit[mm]:Distance between STD2 and STD3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist31 IS ' Unit[mm]:Distance between STD3 and STD4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist32 IS ' Unit[mm]:Distance between STD4 and STD5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist33 IS ' Unit[mm]:Distance between STD5 and Del. Shear.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dist34 IS ' Unit[mm]:Distance between WPDX10 and T/L.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.csmode IS ' Unit[-]:Coil shifting car mode.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.porno IS ' Unit[KN]:Current POR No.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.ttens IS ' Unit[mm]:POR total tension.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dia1 IS ' Unit[mm]:No1 POR diameter.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dia2 IS ' Unit[KN]:No2 POR diameter.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.ten1 IS ' Unit[KN]:POR1 delivery tension.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.ten2 IS ' Unit[]:POR2 delivery tension.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.prrl1 IS ' Unit[10-1mm]:POR1 processer roll intermesh 1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.prrl2 IS ' Unit[10-1mm]:POR1 processer roll intermesh 2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.prrl3 IS ' Unit[10-1mm]:POR1 processer roll intermesh 3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.prrl4 IS ' Unit[10-1mm]:POR2 processer roll intermesh 1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.prrl5 IS ' Unit[10-1mm]:POR2 processer roll intermesh 2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.prrl6 IS ' Unit[10-1mm]:POR2 processer roll intermesh 3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.sspd IS ' Unit[10-1mpm]:Strip speed under the welder.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.slop1_len IS ' Unit[mm]:Looper1 length.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.slop1_pos IS ' Unit[%]:Looper1 car position.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.slop1_tens IS ' Unit[KN]:Looper1 tension.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.slop2_len IS ' Unit[mm]:Looper2 length.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.slop2_pos IS ' Unit[%]:Looper2 car position.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.slop2_tens IS ' Unit[KN]:Looper2 tension.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.slop3_len IS ' Unit[mm]:Looper3 length.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.slop3_pos IS ' Unit[%]:Looper3 car position.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.slop3_tens IS ' Unit[KN]:Looper3 tension.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.espd IS ' Unit[10-1mpm]:PL entry speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.cspd IS ' Unit[10-1mpm]:Speed of center PL section.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tens IS ' Unit[KN]:Pickling tank tension.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.plbth1_1 IS ' Unit[¡æ]:Temperature of pickling bath -1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.plbth1_2 IS ' Unit[10-1%]:Concentration of HCl -1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.plbth1_3 IS ' Unit[10-1%]:Concentration of FeCl2 -1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.plbth2_1 IS ' Unit[¡æ]:Temperature of pickling bath -2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.plbth2_2 IS ' Unit[10-1%]:Concentration of HCl -2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.plbth2_3 IS ' Unit[10-1%]:Concentration of FeCl2 -2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.plbth3_1 IS ' Unit[¡æ]:Temperature of pickling bath -3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.plbth3_2 IS ' Unit[10-1%]:Concentration of HCl -3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.plbth3_3 IS ' Unit[10-1%]:Concentration of FeCl2 -3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tvl_use IS ' Unit[-]:Tension leveler use/no use.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tens1 IS ' Unit[KN]:Tension leveler tension 1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.rims1 IS ' Unit[KN]:Tension leveler tension 2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.rims2 IS ' Unit[10¦Ì]:Tension leveler No.1 roll intermesh.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.rims3 IS ' Unit[11¦Ì]:Tension leveler No.2 roll intermesh.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.elg IS ' Unit[12¦Ì]:Tension leveler elongation.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tvl_espd IS ' Unit[10-1%]:Tension leveler entry speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.spd IS ' Unit[10-1mpm]:Speed of trimmer section.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.wid1 IS ' Unit[10-1mpm]:Trimmer set width data.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.wid2 IS ' Unit[mm]:Actual width at trimmer position.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.wid3 IS ' Unit[mm]:Actual width before trimmer position.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.trm_use IS ' Unit[mm]:Trimmer use/no use.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tno1 IS ' Unit[-]:Trimmer number(OP).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tno2 IS ' Unit[-]:Trimmer number(DR).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tgap1 IS ' Unit[-]:Trimmer gap1 (OP).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tgap2 IS ' Unit[10¦Ì]:Trimmer gap2 (OP).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tgap3 IS ' Unit[10¦Ì]:Trimmer gap1 (DR).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tgap4 IS ' Unit[10¦Ì]:Trimmer gap2 (DR).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tlap1 IS ' Unit[10¦Ì]:Trimmer lap1 (OP).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tlap2 IS ' Unit[10¦Ì]:Trimmer lap2 (OP).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tlap3 IS ' Unit[10¦Ì]:Trimmer lap1 (DR).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tlap4 IS ' Unit[10¦Ì]:Trimmer lap2 (DR).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.plmaster IS ' Unit[10¦Ì]:PL master ON/OFF.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.linsts IS ' Unit[-]:PL line start/stop.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.awpd1 IS ' Unit[-]:WPD status           1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.awpd2 IS ' Unit[-]:WPD status           2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.awpd3 IS ' Unit[-]:WPD status           3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.awpd4 IS ' Unit[-]:WPD status           4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.awpd5 IS ' Unit[-]:WPD status           5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.awpd6 IS ' Unit[-]:WPD status           6.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.arele1 IS ' Unit[-]:Acceleration Rate for entry speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.arele2 IS ' Unit[-]:Dcceleration Rate for entry speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.arele3 IS ' Unit[-]:Acceleration Rate for PL speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.arele4 IS ' Unit[-]:Dcceleration Rate for PL speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.arele5 IS ' Unit[-]:Acceleration Rate for trimmer speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.arele6 IS ' Unit[-]:Dcceleration Rate for trimmer speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tktemp IS ' Unit[-]:Temperature of Rinse tank.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tkcond IS ' Unit[-]:Conductance of Rinse tank.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.rinspv IS ' Unit[-]:HOT RINSE SUB TANK PV.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.eshct_hcoilno IS ' Unit[-]:Entry shear coil Id.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std1_hcoilno IS ' Unit[-]:stand 1 coil Id.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std2_hcoilno IS ' Unit[-]:stand 2 coil Id.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std3_hcoilno IS ' Unit[-]:stand 3 coil Id.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std4_hcoilno IS ' Unit[-]:stand 4 coil Id.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std5_hcoilno IS ' Unit[-]:stand 5 coil Id.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.dshct_hcoilno IS ' Unit[-]:Delivery shear coil Id.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tr_hcoilno IS ' Unit[-]:TR coil Id.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.flatsp_1 IS ' Unit[-]:set points for flatness 1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.flatsp_2 IS ' Unit[-]:set points for flatness 2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.flatsp_3 IS ' Unit[-]:set points for flatness 3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.flatsp_4 IS ' Unit[-]:set points for flatness 4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std1_len IS ' Unit[-]:length of stand 1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std2_len IS ' Unit[-]:length of stand 2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std3_len IS ' Unit[-]:length of stand 3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std4_len IS ' Unit[-]:length of stand 4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.std5_len IS ' Unit[-]:length of stand 5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.toc IS ' Unit[-]:create time.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.tom IS ' Unit[-]:modify time.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_PLACT.mop IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	ACTDT_PLACT
REM*************************************

DROP TRIGGER ins_b_ACTDT_PLACT;
CREATE OR REPLACE TRIGGER ins_b_ACTDT_PLACT
BEFORE INSERT ON ACTDT_PLACT FOR EACH ROW
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
REM	ACTDT_PLACT
REM*************************************

DROP TRIGGER upd_b_ACTDT_PLACT;
CREATE OR REPLACE TRIGGER upd_b_ACTDT_PLACT
BEFORE UPDATE ON ACTDT_PLACT FOR EACH ROW
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
