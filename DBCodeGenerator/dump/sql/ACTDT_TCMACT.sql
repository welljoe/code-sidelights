REM*******************************************************************
REM    File               :    ACTDT_TCMACT.sql
REM    Short Description  :    Create Data Table SQL Scripts
REM    Author             :    DBCode Generator
REM    Created Date       :    13.06.2013
REM    Tech.Support       :    LiuWeiZhao. email:welljoe@hotmail.com 
REM*******************************************************************

REM DROP TABLE ...
Drop Table ACTDT_TCMACT;
REM CREATE TABLE ...

              
             
Create Table ACTDT_TCMACT(
	datee               VARCHAR2(8)         NOT NULL ,
	timee               VARCHAR2(6)         NOT NULL ,
	samp_no             NUMBER(5)           NOT NULL CONSTRAINT cACTDT_TCMACT_2 CHECK (samp_no BETWEEN -32768 AND +32767),
	linsts              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_3 CHECK (linsts BETWEEN -32768 AND +32767),
	rmd                 NUMBER(5)           CONSTRAINT cACTDT_TCMACT_4 CHECK (rmd BETWEEN -32768 AND +32767),
	trno                NUMBER(5)           CONSTRAINT cACTDT_TCMACT_5 CHECK (trno BETWEEN -32768 AND +32767),
	dia                 NUMBER(5)           CONSTRAINT cACTDT_TCMACT_6 CHECK (dia BETWEEN -32768 AND +32767),
	acd                 NUMBER(5)           CONSTRAINT cACTDT_TCMACT_7 CHECK (acd BETWEEN -32768 AND +32767),
	mrh                 NUMBER(5)           CONSTRAINT cACTDT_TCMACT_8 CHECK (mrh BETWEEN -32768 AND +32767),
	dstd                NUMBER(5)           CONSTRAINT cACTDT_TCMACT_9 CHECK (dstd BETWEEN -32768 AND +32767),
	xrys1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_10 CHECK (xrys1 BETWEEN -32768 AND +32767),
	xrys2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_11 CHECK (xrys2 BETWEEN -32768 AND +32767),
	xrys3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_12 CHECK (xrys3 BETWEEN -32768 AND +32767),
	xrys4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_13 CHECK (xrys4 BETWEEN -32768 AND +32767),
	xrys5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_14 CHECK (xrys5 BETWEEN -32768 AND +32767),
	xrys6               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_15 CHECK (xrys6 BETWEEN -32768 AND +32767),
	xrya1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_16 CHECK (xrya1 BETWEEN -32768 AND +32767),
	xrya2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_17 CHECK (xrya2 BETWEEN -32768 AND +32767),
	xrya3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_18 CHECK (xrya3 BETWEEN -32768 AND +32767),
	xrya4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_19 CHECK (xrya4 BETWEEN -32768 AND +32767),
	xrya5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_20 CHECK (xrya5 BETWEEN -32768 AND +32767),
	xrya6               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_21 CHECK (xrya6 BETWEEN -32768 AND +32767),
	sspd1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_22 CHECK (sspd1 BETWEEN -32768 AND +32767),
	sspd2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_23 CHECK (sspd2 BETWEEN -32768 AND +32767),
	sspd3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_24 CHECK (sspd3 BETWEEN -32768 AND +32767),
	sspd4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_25 CHECK (sspd4 BETWEEN -32768 AND +32767),
	sspd5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_26 CHECK (sspd5 BETWEEN -32768 AND +32767),
	sspd6               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_27 CHECK (sspd6 BETWEEN -32768 AND +32767),
	rspd1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_28 CHECK (rspd1 BETWEEN -32768 AND +32767),
	rspd2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_29 CHECK (rspd2 BETWEEN -32768 AND +32767),
	rspd3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_30 CHECK (rspd3 BETWEEN -32768 AND +32767),
	rspd4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_31 CHECK (rspd4 BETWEEN -32768 AND +32767),
	rspd5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_32 CHECK (rspd5 BETWEEN -32768 AND +32767),
	wrben1              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_33 CHECK (wrben1 BETWEEN -32768 AND +32767),
	wrben2              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_34 CHECK (wrben2 BETWEEN -32768 AND +32767),
	wrben3              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_35 CHECK (wrben3 BETWEEN -32768 AND +32767),
	wrben4              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_36 CHECK (wrben4 BETWEEN -32768 AND +32767),
	wrben5              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_37 CHECK (wrben5 BETWEEN -32768 AND +32767),
	imrben1             NUMBER(5)           CONSTRAINT cACTDT_TCMACT_38 CHECK (imrben1 BETWEEN -32768 AND +32767),
	imrben2             NUMBER(5)           CONSTRAINT cACTDT_TCMACT_39 CHECK (imrben2 BETWEEN -32768 AND +32767),
	imrben3             NUMBER(5)           CONSTRAINT cACTDT_TCMACT_40 CHECK (imrben3 BETWEEN -32768 AND +32767),
	imrben4             NUMBER(5)           CONSTRAINT cACTDT_TCMACT_41 CHECK (imrben4 BETWEEN -32768 AND +32767),
	imrben5             NUMBER(5)           CONSTRAINT cACTDT_TCMACT_42 CHECK (imrben5 BETWEEN -32768 AND +32767),
	wrst1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_43 CHECK (wrst1 BETWEEN -32768 AND +32767),
	wrsb1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_44 CHECK (wrsb1 BETWEEN -32768 AND +32767),
	wrst2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_45 CHECK (wrst2 BETWEEN -32768 AND +32767),
	wrsb2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_46 CHECK (wrsb2 BETWEEN -32768 AND +32767),
	wrst3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_47 CHECK (wrst3 BETWEEN -32768 AND +32767),
	wrsb3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_48 CHECK (wrsb3 BETWEEN -32768 AND +32767),
	wrst4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_49 CHECK (wrst4 BETWEEN -32768 AND +32767),
	wrsb4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_50 CHECK (wrsb4 BETWEEN -32768 AND +32767),
	wrst5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_51 CHECK (wrst5 BETWEEN -32768 AND +32767),
	wrsb5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_52 CHECK (wrsb5 BETWEEN -32768 AND +32767),
	imsht1              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_53 CHECK (imsht1 BETWEEN -32768 AND +32767),
	imshb1              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_54 CHECK (imshb1 BETWEEN -32768 AND +32767),
	imsht2              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_55 CHECK (imsht2 BETWEEN -32768 AND +32767),
	imshb2              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_56 CHECK (imshb2 BETWEEN -32768 AND +32767),
	imsht3              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_57 CHECK (imsht3 BETWEEN -32768 AND +32767),
	imshb3              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_58 CHECK (imshb3 BETWEEN -32768 AND +32767),
	imsht4              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_59 CHECK (imsht4 BETWEEN -32768 AND +32767),
	imshb4              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_60 CHECK (imshb4 BETWEEN -32768 AND +32767),
	imsht5              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_61 CHECK (imsht5 BETWEEN -32768 AND +32767),
	imshb5              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_62 CHECK (imshb5 BETWEEN -32768 AND +32767),
	wgws1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_63 CHECK (wgws1 BETWEEN -32768 AND +32767),
	wgws2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_64 CHECK (wgws2 BETWEEN -32768 AND +32767),
	wgws3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_65 CHECK (wgws3 BETWEEN -32768 AND +32767),
	wgws4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_66 CHECK (wgws4 BETWEEN -32768 AND +32767),
	wgws5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_67 CHECK (wgws5 BETWEEN -32768 AND +32767),
	wgds1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_68 CHECK (wgds1 BETWEEN -32768 AND +32767),
	wgds2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_69 CHECK (wgds2 BETWEEN -32768 AND +32767),
	wgds3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_70 CHECK (wgds3 BETWEEN -32768 AND +32767),
	wgds4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_71 CHECK (wgds4 BETWEEN -32768 AND +32767),
	wgds5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_72 CHECK (wgds5 BETWEEN -32768 AND +32767),
	rttl1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_73 CHECK (rttl1 BETWEEN -32768 AND +32767),
	rttl2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_74 CHECK (rttl2 BETWEEN -32768 AND +32767),
	rttl3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_75 CHECK (rttl3 BETWEEN -32768 AND +32767),
	rttl4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_76 CHECK (rttl4 BETWEEN -32768 AND +32767),
	rttl5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_77 CHECK (rttl5 BETWEEN -32768 AND +32767),
	rdf1                NUMBER(5)           CONSTRAINT cACTDT_TCMACT_78 CHECK (rdf1 BETWEEN -32768 AND +32767),
	rdf2                NUMBER(5)           CONSTRAINT cACTDT_TCMACT_79 CHECK (rdf2 BETWEEN -32768 AND +32767),
	rdf3                NUMBER(5)           CONSTRAINT cACTDT_TCMACT_80 CHECK (rdf3 BETWEEN -32768 AND +32767),
	rdf4                NUMBER(5)           CONSTRAINT cACTDT_TCMACT_81 CHECK (rdf4 BETWEEN -32768 AND +32767),
	rdf5                NUMBER(5)           CONSTRAINT cACTDT_TCMACT_82 CHECK (rdf5 BETWEEN -32768 AND +32767),
	tens1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_83 CHECK (tens1 BETWEEN -32768 AND +32767),
	tens2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_84 CHECK (tens2 BETWEEN -32768 AND +32767),
	tens3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_85 CHECK (tens3 BETWEEN -32768 AND +32767),
	tens4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_86 CHECK (tens4 BETWEEN -32768 AND +32767),
	tens5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_87 CHECK (tens5 BETWEEN -32768 AND +32767),
	tens6               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_88 CHECK (tens6 BETWEEN -32768 AND +32767),
	tendf1              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_89 CHECK (tendf1 BETWEEN -32768 AND +32767),
	tendf2              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_90 CHECK (tendf2 BETWEEN -32768 AND +32767),
	tendf3              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_91 CHECK (tendf3 BETWEEN -32768 AND +32767),
	tendf4              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_92 CHECK (tendf4 BETWEEN -32768 AND +32767),
	tendf5              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_93 CHECK (tendf5 BETWEEN -32768 AND +32767),
	tendf6              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_94 CHECK (tendf6 BETWEEN -32768 AND +32767),
	mcnb1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_95 CHECK (mcnb1 BETWEEN -32768 AND +32767),
	mcnb2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_96 CHECK (mcnb2 BETWEEN -32768 AND +32767),
	mcnb3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_97 CHECK (mcnb3 BETWEEN -32768 AND +32767),
	mcnb4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_98 CHECK (mcnb4 BETWEEN -32768 AND +32767),
	mcst1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_99 CHECK (mcst1 BETWEEN -32768 AND +32767),
	mcst2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_100 CHECK (mcst2 BETWEEN -32768 AND +32767),
	mcst3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_101 CHECK (mcst3 BETWEEN -32768 AND +32767),
	mcst4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_102 CHECK (mcst4 BETWEEN -32768 AND +32767),
	mcst5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_103 CHECK (mcst5 BETWEEN -32768 AND +32767),
	fslip1              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_104 CHECK (fslip1 BETWEEN -32768 AND +32767),
	fslip2              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_105 CHECK (fslip2 BETWEEN -32768 AND +32767),
	fslip3              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_106 CHECK (fslip3 BETWEEN -32768 AND +32767),
	fslip4              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_107 CHECK (fslip4 BETWEEN -32768 AND +32767),
	fslip5              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_108 CHECK (fslip5 BETWEEN -32768 AND +32767),
	mvst1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_109 CHECK (mvst1 BETWEEN -32768 AND +32767),
	mvst2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_110 CHECK (mvst2 BETWEEN -32768 AND +32767),
	mvst3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_111 CHECK (mvst3 BETWEEN -32768 AND +32767),
	mvst4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_112 CHECK (mvst4 BETWEEN -32768 AND +32767),
	mvst5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_113 CHECK (mvst5 BETWEEN -32768 AND +32767),
	drop1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_114 CHECK (drop1 BETWEEN -32768 AND +32767),
	drop2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_115 CHECK (drop2 BETWEEN -32768 AND +32767),
	drop3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_116 CHECK (drop3 BETWEEN -32768 AND +32767),
	drop4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_117 CHECK (drop4 BETWEEN -32768 AND +32767),
	drop5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_118 CHECK (drop5 BETWEEN -32768 AND +32767),
	drspd               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_119 CHECK (drspd BETWEEN -32768 AND +32767),
	smspd               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_120 CHECK (smspd BETWEEN -32768 AND +32767),
	mctr1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_121 CHECK (mctr1 BETWEEN -32768 AND +32767),
	mctr2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_122 CHECK (mctr2 BETWEEN -32768 AND +32767),
	mvtr1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_123 CHECK (mvtr1 BETWEEN -32768 AND +32767),
	mvtr2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_124 CHECK (mvtr2 BETWEEN -32768 AND +32767),
	trlen               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_125 CHECK (trlen BETWEEN -32768 AND +32767),
	msts                NUMBER(5)           CONSTRAINT cACTDT_TCMACT_126 CHECK (msts BETWEEN -32768 AND +32767),
	accrat              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_127 CHECK (accrat BETWEEN -32768 AND +32767),
	decrat              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_128 CHECK (decrat BETWEEN -32768 AND +32767),
	mast                NUMBER(5)           CONSTRAINT cACTDT_TCMACT_129 CHECK (mast BETWEEN -32768 AND +32767),
	xsts1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_130 CHECK (xsts1 BETWEEN -32768 AND +32767),
	xsts2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_131 CHECK (xsts2 BETWEEN -32768 AND +32767),
	xsts3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_132 CHECK (xsts3 BETWEEN -32768 AND +32767),
	xsts4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_133 CHECK (xsts4 BETWEEN -32768 AND +32767),
	xsts5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_134 CHECK (xsts5 BETWEEN -32768 AND +32767),
	xsts6               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_135 CHECK (xsts6 BETWEEN -32768 AND +32767),
	edsts               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_136 CHECK (edsts BETWEEN -32768 AND +32767),
	agmd1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_137 CHECK (agmd1 BETWEEN -32768 AND +32767),
	agmd2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_138 CHECK (agmd2 BETWEEN -32768 AND +32767),
	agmd3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_139 CHECK (agmd3 BETWEEN -32768 AND +32767),
	agmd4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_140 CHECK (agmd4 BETWEEN -32768 AND +32767),
	agmd5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_141 CHECK (agmd5 BETWEEN -32768 AND +32767),
	agmd6               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_142 CHECK (agmd6 BETWEEN -32768 AND +32767),
	agmd7               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_143 CHECK (agmd7 BETWEEN -32768 AND +32767),
	agmd8               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_144 CHECK (agmd8 BETWEEN -32768 AND +32767),
	agmd9               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_145 CHECK (agmd9 BETWEEN -32768 AND +32767),
	agmd10              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_146 CHECK (agmd10 BETWEEN -32768 AND +32767),
	agmd11              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_147 CHECK (agmd11 BETWEEN -32768 AND +32767),
	agmd12              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_148 CHECK (agmd12 BETWEEN -32768 AND +32767),
	asmd1               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_149 CHECK (asmd1 BETWEEN -32768 AND +32767),
	asmd2               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_150 CHECK (asmd2 BETWEEN -32768 AND +32767),
	asmd3               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_151 CHECK (asmd3 BETWEEN -32768 AND +32767),
	asmd4               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_152 CHECK (asmd4 BETWEEN -32768 AND +32767),
	asmd5               NUMBER(5)           CONSTRAINT cACTDT_TCMACT_153 CHECK (asmd5 BETWEEN -32768 AND +32767),
	cltptn              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_154 CHECK (cltptn BETWEEN -32768 AND +32767),
	ph_sp1              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_155 CHECK (ph_sp1 BETWEEN -32768 AND +32767),
	ph_sp2              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_156 CHECK (ph_sp2 BETWEEN -32768 AND +32767),
	conc_sp1            NUMBER(5)           CONSTRAINT cACTDT_TCMACT_157 CHECK (conc_sp1 BETWEEN -32768 AND +32767),
	conc_sp2            NUMBER(5)           CONSTRAINT cACTDT_TCMACT_158 CHECK (conc_sp2 BETWEEN -32768 AND +32767),
	temp_sp1            NUMBER(5)           CONSTRAINT cACTDT_TCMACT_159 CHECK (temp_sp1 BETWEEN -32768 AND +32767),
	temp_sp2            NUMBER(5)           CONSTRAINT cACTDT_TCMACT_160 CHECK (temp_sp2 BETWEEN -32768 AND +32767),
	ccposi              NUMBER(5)           CONSTRAINT cACTDT_TCMACT_161 CHECK (ccposi BETWEEN -32768 AND +32767),
	toc                 DATE                ,
	tom                 DATE                ,
	mop                 VARCHAR2(120)       ,
	CONSTRAINT pk_ACTDT_TCMACT PRIMARY KEY (samp_no)
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

COMMENT ON Table ACTDT_TCMACT IS ' TCM section actual data ';
COMMENT ON COLUMN ACTDT_TCMACT.datee IS ' Unit[-]:Date.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.timee IS ' Unit[-]:Time.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.samp_no IS ' Unit[-]:Sampling no..Limit:[-,500000] ';
COMMENT ON COLUMN ACTDT_TCMACT.linsts IS ' Unit[-]:TCM line start/stop.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rmd IS ' Unit[-]:Roll changing mode.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.trno IS ' Unit[-]:Upper position TR number.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.dia IS ' Unit[10-1mm]:TR coil outer diameter.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.acd IS ' Unit[-]:Accel pattern code(1:H,2:M, 3:L).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mrh IS ' Unit[%]:RHEOSTAT PRESENT(MRH).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.dstd IS ' Unit[-]:Dummy stand selection.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrys1 IS ' Unit[10-3mm]:No.1 std entry X-RAY (Setting data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrys2 IS ' Unit[10-3mm]:No.1 std delivery X-RAY (Setting data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrys3 IS ' Unit[10-3mm]:No.2 std delivery X-RAY (Setting data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrys4 IS ' Unit[10-3mm]:No.3 std delivery X-RAY (Setting data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrys5 IS ' Unit[10-3mm]:No.4 std delivery X-RAY (Setting data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrys6 IS ' Unit[10-3mm]:No.5 std delivery X-RAY (Setting data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrya1 IS ' Unit[10-3mm]:No.1 std entry X-RAY (Actual data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrya2 IS ' Unit[10-3mm]:No.1 std delivery X-RAY (Actual data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrya3 IS ' Unit[10-3mm]:No.2 std delivery X-RAY (Actual data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrya4 IS ' Unit[10-3mm]:No.3 std delivery X-RAY (Actual data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrya5 IS ' Unit[10-3mm]:No.4 std delivery X-RAY (Actual data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xrya6 IS ' Unit[10-3mm]:No.5 std delivery X-RAY (Actual data).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.sspd1 IS ' Unit[10-1mpm]:Mill entry strip speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.sspd2 IS ' Unit[10-1mpm]:No.1 std delivery strip speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.sspd3 IS ' Unit[10-1mpm]:No.2 std delivery strip speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.sspd4 IS ' Unit[10-1mpm]:No.3 std delivery strip speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.sspd5 IS ' Unit[10-1mpm]:No.4 std delivery strip speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.sspd6 IS ' Unit[10-1mpm]:No.5 std delivery strip speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rspd1 IS ' Unit[10-1mpm]:No.1 std delivery roll speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rspd2 IS ' Unit[10-1mpm]:No.2 std delivery roll speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rspd3 IS ' Unit[10-1mpm]:No.3 std delivery roll speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rspd4 IS ' Unit[10-1mpm]:No.4 std delivery roll speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rspd5 IS ' Unit[10-1mpm]:No.5 std delivery roll speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrben1 IS ' Unit[KN/ch]:WR bender 1std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrben2 IS ' Unit[KN/ch]:WR bender 2std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrben3 IS ' Unit[KN/ch]:WR bender 3std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrben4 IS ' Unit[KN/ch]:WR bender 4std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrben5 IS ' Unit[KN/ch]:WR bender 5std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imrben1 IS ' Unit[KN/ch]:IMR bender 1std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imrben2 IS ' Unit[KN/ch]:IMR bender 2std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imrben3 IS ' Unit[KN/ch]:IMR bender 3std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imrben4 IS ' Unit[KN/ch]:IMR bender 4std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imrben5 IS ' Unit[KN/ch]:IMR bender 5std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrst1 IS ' Unit[mm]:WRS 1 std TOP   F.U..Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrsb1 IS ' Unit[mm]:WRS 1 std BOT.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrst2 IS ' Unit[mm]:WRS 2 std TOP.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrsb2 IS ' Unit[mm]:WRS 2 std BOT.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrst3 IS ' Unit[mm]:WRS 3 std TOP.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrsb3 IS ' Unit[mm]:WRS 3 std BOT.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrst4 IS ' Unit[mm]:WRS 4 std TOP.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrsb4 IS ' Unit[-]:WRS 4 std BOT.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrst5 IS ' Unit[-]:WRS 5 std TOP.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wrsb5 IS ' Unit[-]:WRS 5 std BOT.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imsht1 IS ' Unit[mm]:IMR shift 1 std TOP.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imshb1 IS ' Unit[mm]:IMR shift 1 std BOT.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imsht2 IS ' Unit[mm]:IMR shift 2 std TOP.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imshb2 IS ' Unit[mm]:IMR shift 2 std BOT.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imsht3 IS ' Unit[mm]:IMR shift 3 std TOP.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imshb3 IS ' Unit[mm]:IMR shift 3 std BOT.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imsht4 IS ' Unit[mm]:IMR shift 4 std TOP.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imshb4 IS ' Unit[-]:IMR shift 4 std BOT.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imsht5 IS ' Unit[-]:IMR shift 5 std TOP.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.imshb5 IS ' Unit[-]:IMR shift 5 std BOT.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wgws1 IS ' Unit[-]:Roll gap 1 std (WS).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wgws2 IS ' Unit[KN]:Roll gap 2 std (WS).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wgws3 IS ' Unit[mm]:Roll gap 3 std (WS).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wgws4 IS ' Unit[mm]:Roll gap 4 std (WS).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wgws5 IS ' Unit[KN]:Roll gap 5 std (WS).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wgds1 IS ' Unit[-]:Roll gap 1 std (DS).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wgds2 IS ' Unit[-]:Roll gap 2 std (DS).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wgds3 IS ' Unit[10-1mm]:Roll gap 3 std (DS).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wgds4 IS ' Unit[10-1mm]:Roll gap 4 std (DS).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.wgds5 IS ' Unit[10-1mm]:Roll gap 5 std (DS).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rttl1 IS ' Unit[10-1mm]:Roll force 1 std total.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rttl2 IS ' Unit[10-1mm]:Roll force 2 std total.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rttl3 IS ' Unit[-]:Roll force 3 std total.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rttl4 IS ' Unit[10-1mpm]:Roll force 4 std total.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rttl5 IS ' Unit[-]:Roll force 5 std total.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rdf1 IS ' Unit[%]:Roll force 1 std differential.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rdf2 IS ' Unit[KN]:Roll force 2 std differential.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rdf3 IS ' Unit[-]:Roll force 3 std differential.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rdf4 IS ' Unit[mm]:Roll force 4 std differential.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.rdf5 IS ' Unit[%]:Roll force 5 std differential.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tens1 IS ' Unit[-]:Tension before 1 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tens2 IS ' Unit[mm]:Tension after 1 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tens3 IS ' Unit[%]:Tension after 2 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tens4 IS ' Unit[KN]:Tension after 3 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tens5 IS ' Unit[-]:Tension after 4 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tens6 IS ' Unit[10-1mpm]:Tension after 5 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tendf1 IS ' Unit[-]:Tension differential  before 1 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tendf2 IS ' Unit[-]:Tension differential after 1 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tendf3 IS ' Unit[-]:Tension differential after 2 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tendf4 IS ' Unit[-]:Tensiondifferential after 3 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tendf5 IS ' Unit[-]:Tension differential after 4 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tendf6 IS ' Unit[-]:Tension differential after 5 std (total).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mcnb1 IS ' Unit[KN]:Motor current mill BR 1 roll.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mcnb2 IS ' Unit[¡æ]:Motor current mill BR 2 roll.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mcnb3 IS ' Unit[10-1%]:Motor current mill BR 3 roll.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mcnb4 IS ' Unit[10-1%]:Motor current mill BR 4 roll.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mcst1 IS ' Unit[¡æ]:Motor current 1 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mcst2 IS ' Unit[KN]:Motor current 2 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mcst3 IS ' Unit[¡æ]:Motor current 3 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mcst4 IS ' Unit[10-1%]:Motor current 4 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mcst5 IS ' Unit[10-1%]:Motor current 5 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.fslip1 IS ' Unit[¡æ]:Forward Slip 1std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.fslip2 IS ' Unit[10-1%]:Forward Slip 2std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.fslip3 IS ' Unit[10-1%]:Forward Slip 3std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.fslip4 IS ' Unit[¡æ]:Forward Slip 4std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.fslip5 IS ' Unit[10-1%]:Forward Slip 5std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mvst1 IS ' Unit[10-1%]:Motor voltage 1 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mvst2 IS ' Unit[-]:Motor voltage 2 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mvst3 IS ' Unit[KN]:Motor voltage 3 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mvst4 IS ' Unit[KN]:Motor voltage 4 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mvst5 IS ' Unit[10¦Ì]:Motor voltage 5 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.drop1 IS ' Unit[11¦Ì]:Drooping 1 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.drop2 IS ' Unit[10-1%]:Drooping 2 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.drop3 IS ' Unit[10-1mpm]:Drooping 3 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.drop4 IS ' Unit[-]:Drooping 4 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.drop5 IS ' Unit[10-1mpm]:Drooping 5 std.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.drspd IS ' Unit[mm]:Def. Roll speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.smspd IS ' Unit[mm]:Shape meter speed.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mctr1 IS ' Unit[-]:Motor current TR-1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mctr2 IS ' Unit[-]:Motor current TR-2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mvtr1 IS ' Unit[-]:Motor voltage TR-1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mvtr2 IS ' Unit[10¦Ì]:Motor voltage TR-2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.trlen IS ' Unit[10¦Ì]:TR coiling length.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.msts IS ' Unit[10¦Ì]:Mill speed status.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.accrat IS ' Unit[-]:Acceleration Rate of mill entry.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.decrat IS ' Unit[-]:Deceleration Rate of mill entry.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mast IS ' Unit[-]:Master on/off.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xsts1 IS ' Unit[-]:X-RAY 1 status (No. 1E X-RAY).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xsts2 IS ' Unit[-]:X-RAY 2 status (No. 1D X-RAY).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xsts3 IS ' Unit[-]:X-RAY 3 status (No. 2D X-RAY).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xsts4 IS ' Unit[-]:X-RAY 4 status (No. 3D X-RAY).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xsts5 IS ' Unit[-]:X-RAY 5 status (No. 4D X-RAY).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.xsts6 IS ' Unit[-]:X-RAY 6 status (No. 5D X-RAY).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.edsts IS ' Unit[-]:Edge Drop meter status.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd1 IS ' Unit[-]:AGC mode agc master.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd2 IS ' Unit[-]:AGC mode bisra.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd3 IS ' Unit[-]:AGC mode FF1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd4 IS ' Unit[-]:AGC mode GMS1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd5 IS ' Unit[-]:AGC mode REC.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd6 IS ' Unit[-]:AGC mode MF2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd7 IS ' Unit[-]:AGC mode MF3.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd8 IS ' Unit[-]:AGC mode MF4.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd9 IS ' Unit[-]:AGC mode MF5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd10 IS ' Unit[-]:AGC mode ACC/DEC.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd11 IS ' Unit[-]:AGC mode FF2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.agmd12 IS ' Unit[-]:AGC mode FB5.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.asmd1 IS ' Unit[-]:ASC mode ASC master.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.asmd2 IS ' Unit[-]:ASC mode wr-b.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.asmd3 IS ' Unit[-]:ASC mode imr-b.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.asmd4 IS ' Unit[-]:ASC mode levelling.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.asmd5 IS ' Unit[-]:ASC mode coolant.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.cltptn IS ' Unit[-]:Collant pattern.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.ph_sp1 IS ' Unit[-]:PH (Spray line #1 [1STD-4STD]).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.ph_sp2 IS ' Unit[-]:PH (Spray line #2 [5STD]).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.conc_sp1 IS ' Unit[-]:Concentration (Spray line #1).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.conc_sp2 IS ' Unit[-]:Concentration (Spray line #2).Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.temp_sp1 IS ' Unit[-]:Temperature spray line #1.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.temp_sp2 IS ' Unit[-]:Temperature spray line #2.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.ccposi IS ' Unit[-]:Coil Car position.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.toc IS ' Unit[-]:create time.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.tom IS ' Unit[-]:modify time.Limit:[-,-] ';
COMMENT ON COLUMN ACTDT_TCMACT.mop IS ' Unit[-]:creator or modifyer.Limit:[-,-] ';
/

REM*************************************
REM INSERT TRIGGER FOR TABLE
REM	ACTDT_TCMACT
REM*************************************

DROP TRIGGER ins_b_ACTDT_TCMACT;
CREATE OR REPLACE TRIGGER ins_b_ACTDT_TCMACT
BEFORE INSERT ON ACTDT_TCMACT FOR EACH ROW
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
REM	ACTDT_TCMACT
REM*************************************

DROP TRIGGER upd_b_ACTDT_TCMACT;
CREATE OR REPLACE TRIGGER upd_b_ACTDT_TCMACT
BEFORE UPDATE ON ACTDT_TCMACT FOR EACH ROW
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
