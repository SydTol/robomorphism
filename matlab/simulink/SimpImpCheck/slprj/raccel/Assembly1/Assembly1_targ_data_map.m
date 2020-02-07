  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% rtP.GAIN_Gain
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP._Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Damping_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 10;
	
	  ;% rtP.GoalLocation_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 11;
	
	  ;% rtP.I_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 14;
	
	  ;% rtP.Length1_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 23;
	
	  ;% rtP.Length2_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 24;
	
	  ;% rtP.Length3_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 25;
	
	  ;% rtP.Stiffness_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 26;
	
	  ;% rtP.Velocity_Value
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 27;
	
	  ;% rtP.accel_Value
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 30;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 27;
      section.data(27)  = dumData; %prealloc
      
	  ;% rtB.co1k2zqmio
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.ivye1rtk20
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
	  ;% rtB.mfr2tvqlet
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 9;
	
	  ;% rtB.fusvirqcpv
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 13;
	
	  ;% rtB.mp13huktqq
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 22;
	
	  ;% rtB.nmep4bwbvk
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 24;
	
	  ;% rtB.ivpptgv24m
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 25;
	
	  ;% rtB.ki1zyukxvx
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 26;
	
	  ;% rtB.frsgfxkt3q
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 30;
	
	  ;% rtB.k2z5lg5kdn
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 38;
	
	  ;% rtB.njek1qn1tc
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 39;
	
	  ;% rtB.czgg222wvg
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 43;
	
	  ;% rtB.aijj1xqxw3
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 51;
	
	  ;% rtB.f2qb1e2yww
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 52;
	
	  ;% rtB.muuzxzxw4l
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 56;
	
	  ;% rtB.a22n54l2kn
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 60;
	
	  ;% rtB.c2u24du2rp
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 64;
	
	  ;% rtB.mrerd0iytt
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 73;
	
	  ;% rtB.lyliwmyio0
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 82;
	
	  ;% rtB.primmsbaty
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 85;
	
	  ;% rtB.fdofaimx1g
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 86;
	
	  ;% rtB.fbuanqik5o
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 87;
	
	  ;% rtB.korqbvw5sq
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 88;
	
	  ;% rtB.glryjuizod
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 89;
	
	  ;% rtB.bsnpyezm2e
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 90;
	
	  ;% rtB.nyn4bpigfe
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 93;
	
	  ;% rtB.e15gfpfe5w
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 96;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% rtDW.gmwt5nplpe
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.brle23pjg2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtDW.d3og1ajffx
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtDW.f0inrntm42
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% rtDW.nuj1fz0fxi
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% rtDW.cptvkir1vg
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10;
	
	  ;% rtDW.hulwpi0wcl
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 12;
	
	  ;% rtDW.im1pevikpw
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 13;
	
	  ;% rtDW.nrev0sejyt
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 14;
	
	  ;% rtDW.jqz5nrtbv4
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 15;
	
	  ;% rtDW.dc0rgh5eng
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 16;
	
	  ;% rtDW.jd1pi1xhn4
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 17;
	
	  ;% rtDW.onjn0sqovd
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 18;
	
	  ;% rtDW.cyoazv120t
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 19;
	
	  ;% rtDW.ionvv3zokq
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 20;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 47;
      section.data(47)  = dumData; %prealloc
      
	  ;% rtDW.j34f1tmhj5
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.cn1keqm2rr
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.jkiv5jchi2
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.fmeyr3eqdt
	  section.data(4).logicalSrcIdx = 18;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.psc3wznusv
	  section.data(5).logicalSrcIdx = 19;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.ebnkz3vyz1
	  section.data(6).logicalSrcIdx = 20;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.ngwhbyugnx
	  section.data(7).logicalSrcIdx = 21;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.ewwm4tqlno
	  section.data(8).logicalSrcIdx = 22;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.kg5jiwuyn0
	  section.data(9).logicalSrcIdx = 23;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.onzz15ah1p
	  section.data(10).logicalSrcIdx = 24;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.p1ooa01wfg.LoggedData
	  section.data(11).logicalSrcIdx = 25;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.chbtvsma4c.LoggedData
	  section.data(12).logicalSrcIdx = 26;
	  section.data(12).dtTransOffset = 13;
	
	  ;% rtDW.fy3ytfnr0f.LoggedData
	  section.data(13).logicalSrcIdx = 27;
	  section.data(13).dtTransOffset = 14;
	
	  ;% rtDW.lw0140esdt
	  section.data(14).logicalSrcIdx = 28;
	  section.data(14).dtTransOffset = 15;
	
	  ;% rtDW.bh3wkjeszc
	  section.data(15).logicalSrcIdx = 29;
	  section.data(15).dtTransOffset = 16;
	
	  ;% rtDW.culhpxxaih
	  section.data(16).logicalSrcIdx = 30;
	  section.data(16).dtTransOffset = 17;
	
	  ;% rtDW.eiv15bbldc
	  section.data(17).logicalSrcIdx = 31;
	  section.data(17).dtTransOffset = 18;
	
	  ;% rtDW.ijjifvd0g3
	  section.data(18).logicalSrcIdx = 32;
	  section.data(18).dtTransOffset = 19;
	
	  ;% rtDW.fwnqdgglb4
	  section.data(19).logicalSrcIdx = 33;
	  section.data(19).dtTransOffset = 20;
	
	  ;% rtDW.bdjq0ta3fn
	  section.data(20).logicalSrcIdx = 34;
	  section.data(20).dtTransOffset = 21;
	
	  ;% rtDW.eyjaph4uza
	  section.data(21).logicalSrcIdx = 35;
	  section.data(21).dtTransOffset = 22;
	
	  ;% rtDW.bjfczscd1q
	  section.data(22).logicalSrcIdx = 36;
	  section.data(22).dtTransOffset = 23;
	
	  ;% rtDW.nur3sucol0
	  section.data(23).logicalSrcIdx = 37;
	  section.data(23).dtTransOffset = 24;
	
	  ;% rtDW.bhnjxdow4x.LoggedData
	  section.data(24).logicalSrcIdx = 38;
	  section.data(24).dtTransOffset = 25;
	
	  ;% rtDW.eqn5wqgu33.LoggedData
	  section.data(25).logicalSrcIdx = 39;
	  section.data(25).dtTransOffset = 26;
	
	  ;% rtDW.bu2nsr0afw.LoggedData
	  section.data(26).logicalSrcIdx = 40;
	  section.data(26).dtTransOffset = 27;
	
	  ;% rtDW.dnvg3vkfoz.LoggedData
	  section.data(27).logicalSrcIdx = 41;
	  section.data(27).dtTransOffset = 28;
	
	  ;% rtDW.nkwrexavzk
	  section.data(28).logicalSrcIdx = 42;
	  section.data(28).dtTransOffset = 29;
	
	  ;% rtDW.khj0d2a154
	  section.data(29).logicalSrcIdx = 43;
	  section.data(29).dtTransOffset = 30;
	
	  ;% rtDW.cryjuu4ual
	  section.data(30).logicalSrcIdx = 44;
	  section.data(30).dtTransOffset = 31;
	
	  ;% rtDW.dqexmtups0
	  section.data(31).logicalSrcIdx = 45;
	  section.data(31).dtTransOffset = 32;
	
	  ;% rtDW.e3uhjaopgl
	  section.data(32).logicalSrcIdx = 46;
	  section.data(32).dtTransOffset = 33;
	
	  ;% rtDW.l53yhgr44w
	  section.data(33).logicalSrcIdx = 47;
	  section.data(33).dtTransOffset = 34;
	
	  ;% rtDW.mer5fxqibo
	  section.data(34).logicalSrcIdx = 48;
	  section.data(34).dtTransOffset = 35;
	
	  ;% rtDW.lhrjdkocrx
	  section.data(35).logicalSrcIdx = 49;
	  section.data(35).dtTransOffset = 36;
	
	  ;% rtDW.d0zsnonvxo
	  section.data(36).logicalSrcIdx = 50;
	  section.data(36).dtTransOffset = 37;
	
	  ;% rtDW.koox14veuw
	  section.data(37).logicalSrcIdx = 51;
	  section.data(37).dtTransOffset = 38;
	
	  ;% rtDW.pu2bujddd5
	  section.data(38).logicalSrcIdx = 52;
	  section.data(38).dtTransOffset = 39;
	
	  ;% rtDW.h14n5cqflx
	  section.data(39).logicalSrcIdx = 53;
	  section.data(39).dtTransOffset = 40;
	
	  ;% rtDW.enml431ah0
	  section.data(40).logicalSrcIdx = 54;
	  section.data(40).dtTransOffset = 41;
	
	  ;% rtDW.gv3sgij0wm
	  section.data(41).logicalSrcIdx = 55;
	  section.data(41).dtTransOffset = 42;
	
	  ;% rtDW.gdo2ywgcxo
	  section.data(42).logicalSrcIdx = 56;
	  section.data(42).dtTransOffset = 43;
	
	  ;% rtDW.lf2p3a1qfd
	  section.data(43).logicalSrcIdx = 57;
	  section.data(43).dtTransOffset = 44;
	
	  ;% rtDW.atymz31saa
	  section.data(44).logicalSrcIdx = 58;
	  section.data(44).dtTransOffset = 45;
	
	  ;% rtDW.irkatqjv53
	  section.data(45).logicalSrcIdx = 59;
	  section.data(45).dtTransOffset = 46;
	
	  ;% rtDW.gkziowfp4v
	  section.data(46).logicalSrcIdx = 60;
	  section.data(46).dtTransOffset = 47;
	
	  ;% rtDW.ldazzt5nyy
	  section.data(47).logicalSrcIdx = 61;
	  section.data(47).dtTransOffset = 48;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtDW.osr1cl1ae3
	  section.data(1).logicalSrcIdx = 62;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.gug5wv1c3f
	  section.data(2).logicalSrcIdx = 63;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.fulvewb14x
	  section.data(3).logicalSrcIdx = 64;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.n3wkgeymzw
	  section.data(4).logicalSrcIdx = 65;
	  section.data(4).dtTransOffset = 5;
	
	  ;% rtDW.pldt5kkraj
	  section.data(5).logicalSrcIdx = 66;
	  section.data(5).dtTransOffset = 6;
	
	  ;% rtDW.ine0wrogr1
	  section.data(6).logicalSrcIdx = 67;
	  section.data(6).dtTransOffset = 9;
	
	  ;% rtDW.mw4lmbhnkl
	  section.data(7).logicalSrcIdx = 68;
	  section.data(7).dtTransOffset = 10;
	
	  ;% rtDW.a25cheyog3
	  section.data(8).logicalSrcIdx = 69;
	  section.data(8).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.fx1szshdqv
	  section.data(1).logicalSrcIdx = 70;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.czbikmwyj1
	  section.data(2).logicalSrcIdx = 71;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.d3ac2seyd3
	  section.data(3).logicalSrcIdx = 72;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 8;
      section.data(8)  = dumData; %prealloc
      
	  ;% rtDW.mrdlqavfra
	  section.data(1).logicalSrcIdx = 73;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.jphyxtkcij
	  section.data(2).logicalSrcIdx = 74;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.jo2lkovo15
	  section.data(3).logicalSrcIdx = 75;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.nwgvjfx0qr
	  section.data(4).logicalSrcIdx = 76;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.j5qg1md2vq
	  section.data(5).logicalSrcIdx = 77;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.eeyftk0s2j
	  section.data(6).logicalSrcIdx = 78;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.jz13omuq2t
	  section.data(7).logicalSrcIdx = 79;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.metcajx0yb
	  section.data(8).logicalSrcIdx = 80;
	  section.data(8).dtTransOffset = 7;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 1297423731;
  targMap.checksum1 = 135611111;
  targMap.checksum2 = 1216189137;
  targMap.checksum3 = 409340220;

