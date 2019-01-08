/***
* This code is a part of ApproxLib library (ehw.fit.vutbr.cz/approxlib) distributed under a XXXX public license.
* When used, please cite the following article: tbd 
* This file is pareto optimal sub-set in the pdk45_pwr and mae% parameters
***/
#include <stdint.h>
#include <stdlib.h>

uint32_t mul12s_pwr_0_425_mae_00_0686(uint16_t A, uint16_t B)
{
 uint32_t O;
 uint8_t n449,O21,O14,O4,n85,n84,n87,n86,n81,n80,n83,n82,n402,n403,n400,n401,n406,n404,n405,n392,n393,n390,n391,n396,n397,n394,n395,n398,n399,n240,n241,n242,n243,n244,n245,n246,n247,n248,n249,n329,n328,n327,n326,n325,n324,n323,n322,n320,n424,n149,n148,n143,n142,n141,n140,n147,n146,n145,n144,n74,n75,n76,n77,n70,n71,n72,n73,n79,n448,O8,n446,n447,n444,n445,n442,n443,n440,n441,O1,n363,n362,n361,n360,n366,n365,n364,n369,n368,O17,O13,n189,n188,n187,n186,n185,n184,n183,n182,n181,n180,n219,n217,n216,n215,n214,n213,n212,n211,n210,O5,O2,n133,n130,n131,n136,n137,n134,n135,n138,n139,n409,n89,n407,n415,n414,n417,n416,n411,n410,n413,n412,n419,n418,n98,n99,n92,n93,n90,n91,n96,n97,n94,n95,n389,n388,n385,n384,n387,n386,n381,n380,n383,n382,n173,n253,n252,n251,n250,n257,n256,n255,n254,n259,n258,n318,n319,n312,n313,n310,n311,n316,n317,n314,n315,O9,O22,n176,n177,n174,n175,n172,O6,n170,n178,n179,O19,n459,n458,n451,n450,n453,n452,n455,n454,n457,n456,O12,n428,n429,n358,n359,n356,n425,n354,n355,n352,n353,n350,n351,O11,n228,n229,n222,n223,n220,n221,n226,n227,n224,n225,n370,n371,n271,n129,n128,n270,n125,n124,n127,n126,n121,n120,n123,n122,O16,n460,n461,n462,n464,n465,n466,n467,n468,n469,O3,n341,n340,n435,n342,n345,n344,n347,n430,n305,n304,n307,n306,n301,n300,n303,n302,n266,n267,n264,n265,n309,n308,n260,n261,n284,n285,n286,n287,n280,n281,n282,n283,n288,n289,n161,n160,n163,n162,n165,n164,n167,n166,n169,n168,n427,n58,n59,n56,n54,n55,n52,n53,n88,n421,n114,n115,n116,n117,n110,n111,n112,n113,n118,n119,O23,O7,n349,n348,n439,n437,n436,n343,n434,n433,n432,n431,n346,n235,n234,n237,n236,n231,n230,n233,n232,n239,n238,n482,n483,n480,n481,n338,n339,n334,n335,n336,n337,n330,n331,n332,n333,O20,O18,O0,n158,n159,n150,n151,n152,n153,n154,n155,n156,n157,n67,n66,n64,n63,n62,n61,n60,n69,n68,n268,O15,O10,n262,n263,n473,n472,n471,n470,n476,n475,n474,n479,n478,n279,n278,n372,n373,n374,n375,n376,n377,n378,n379,n273,n272,n275,n274,n277,n276,n357,n426,n297,n296,n295,n294,n293,n292,n291,n290,n420,n299,n298,n422,n423,n198,n199,n194,n195,n196,n197,n190,n191,n192,n193,n208,n209,n204,n205,n206,n207,n200,n201,n202,n203,n107,n106,n105,n104,n103,n102,n100,n109,n108;
 O0=0;
 O1=0;
 O2=0;
 O3=0;
 O4=0;
 O5=0;
 O6=0;
 O7=0;
 O8=((B >> 4)&1)&((A >> 4)&1);
 n100=((B >> 4)&1)&((A >> 8)&1);
 n125=((B >> 7)&1)&((A >> 6)&1);
 n127=((B >> 9)&1)&((A >> 4)&1);
 n128=((B >> 8)&1)&((A >> 5)&1);
 n129=((B >> 6)&1)&((A >> 7)&1);
 n130=((B >> 5)&1)&((A >> 8)&1);
 n131=((B >> 4)&1)&((A >> 9)&1);
 n163=((B >> 8)&1)&((A >> 6)&1);
 n165=((B >> 10)&1)&((A >> 4)&1);
 n166=((B >> 9)&1)&((A >> 5)&1);
 n167=((B >> 7)&1)&((A >> 7)&1);
 n168=((B >> 6)&1)&((A >> 8)&1);
 n169=((B >> 5)&1)&((A >> 9)&1);
 n170=((B >> 4)&1)&((A >> 10)&1);
 n178=((B >> 4)&1)&((A >> 11)&1);
 n210=((B >> 9)&1)&((A >> 6)&1);
 n212=((B >> 11)&1)&((A >> 4)&1);
 n213=((B >> 10)&1)&((A >> 5)&1);
 n214=((B >> 8)&1)&((A >> 7)&1);
 n215=((B >> 7)&1)&((A >> 8)&1);
 n216=((B >> 6)&1)&((A >> 9)&1);
 n217=((B >> 5)&1)&((A >> 10)&1);
 n231=((B >> 5)&1)&((A >> 11)&1);
 n263=((B >> 10)&1)&((A >> 6)&1);
 n264=((B >> 11)&1)&((A >> 5)&1);
 n265=((B >> 9)&1)&((A >> 7)&1);
 n266=((B >> 8)&1)&((A >> 8)&1);
 n267=((B >> 7)&1)&((A >> 9)&1);
 n268=((B >> 6)&1)&((A >> 10)&1);
 n284=((B >> 6)&1)&((A >> 11)&1);
 n306=((B >> 9)&1)&((A >> 8)&1);
 n314=((B >> 10)&1)&((A >> 7)&1);
 n317=~(((A >> 6)&1)|((A >> 5)&1));
 n319=((B >> 8)&1)&((A >> 9)&1);
 n320=((B >> 7)&1)&((A >> 10)&1);
 n340=((B >> 7)&1)&((A >> 11)&1);
 n363=((B >> 11)&1)&((A >> 7)&1);
 n364=((B >> 10)&1)&((A >> 8)&1);
 n365=((B >> 9)&1)&((A >> 9)&1);
 n366=((B >> 8)&1)&((A >> 10)&1);
 n386=((B >> 8)&1)&((A >> 11)&1);
 n394=((B >> 9)&1)&((A >> 10)&1);
 n402=((B >> 10)&1)&((A >> 9)&1);
 n406=((B >> 11)&1)&((A >> 8)&1);
 n427=((B >> 9)&1)&((A >> 11)&1);
 n436=((B >> 11)&1)&((A >> 9)&1);
 n437=((B >> 10)&1)&((A >> 10)&1);
 n457=((B >> 10)&1)&((A >> 11)&1);
 n461=((B >> 11)&1)&((A >> 10)&1);
 n476=((B >> 11)&1)&((A >> 11)&1);
 n53=((B >> 5)&1)&((A >> 5)&1);
 n55=((B >> 5)&1)&((A >> 4)&1);
 n56=((B >> 4)&1)&((A >> 5)&1);
 n60=((B >> 6)&1)&((A >> 5)&1);
 n62=((B >> 6)&1)&((A >> 4)&1);
 n64=((B >> 4)&1)&((A >> 6)&1);
 n74=((B >> 5)&1)&((A >> 6)&1);
 n76=((B >> 7)&1)&((A >> 4)&1);
 n77=((B >> 4)&1)&((A >> 7)&1);
 n95=((B >> 6)&1)&((A >> 6)&1);
 n97=((B >> 8)&1)&((A >> 4)&1);
 n98=((B >> 7)&1)&((A >> 5)&1);
 n99=((B >> 5)&1)&((A >> 7)&1);
 n124=n98&n97;
 n126=n128^n127;
 n162=n128&n127;
 n164=n166^n165;
 n209=n166&n165;
 n211=~(n213^n212);
 n262=n213&~n212;
 n312=n263&n264;
 n316=((B >> 11)&1)&~n317;
 n318=((A >> 6)&1)&n264;
 n52=n53&O8;
 n54=~(n56|n55);
 n59=n60&n55;
 n61=~(n62|n53);
 n75=n76^n60;
 n94=n76&n60;
 n96=n98^n97;
 O9=~(n54|n52);
 n119=n95&n94;
 n120=n95&n96;
 n121=n96&n94;
 n123=~(n125^n124);
 n157=n125&n124;
 n158=n125&n126;
 n159=n126&n124;
 n161=~(n163^n162);
 n204=n163&n162;
 n205=n163&n164;
 n206=n164&n162;
 n208=~(n210^n209);
 n257=n210&n209;
 n258=n210&n211;
 n259=n211&n209;
 n261=~(n263^n262);
 n311=n263&n262;
 n313=n264&n262;
 n315=~n318&n316;
 n362=n363^n316;
 n405=~(n363|n316);
 n58=~(n61|n59);
 n63=~(n64^n52);
 n70=n64&n52;
 n73=~(n74^n59);
 n89=n74&n59;
 n90=n74&n75;
 n91=n75&n59;
 n93=~(n95^n94);
 O10=~(n63^n58);
 n118=~(n120|n119);
 n122=n126^n123;
 n156=~(n158|n157);
 n160=n164^n161;
 n203=~(n205|n204);
 n207=n211^n208;
 n256=~(n258|n257);
 n260=n264^n261;
 n310=~(n312|n311);
 n360=n314&n315;
 n400=n364&n362;
 n404=~n406&n405;
 n407=((A >> 8)&1)&~n405;
 n69=n64&n58;
 n71=n52&n58;
 n72=n75^n73;
 n88=~(n90|n89);
 n92=n96^n93;
 n113=n99&~n92;
 n117=~n121&n118;
 n151=n129&~n122;
 n155=~n159&n156;
 n198=n167&~n160;
 n202=~n206&n203;
 n251=n214&~n207;
 n255=~n259&n256;
 n304=n265&~n260;
 n309=~n313&n310;
 n403=~(n407|n404);
 n435=~(n436^n404);
 n460=~n436&n404;
 n68=~(n70|n69);
 n83=n77&~n72;
 n87=~n91&n88;
 n112=~(n92|n87);
 n114=n99&~n87;
 n116=~(n122^n117);
 n150=~(n122|n117);
 n152=n129&~n117;
 n154=~(n160^n155);
 n197=~(n160|n155);
 n199=n167&~n155;
 n201=~(n207^n202);
 n250=~(n207|n202);
 n252=n214&~n202;
 n254=~(n260^n255);
 n303=~(n260|n255);
 n305=n265&~n255;
 n308=n314^n309;
 n359=n314&~n309;
 n361=n315&~n309;
 n433=n402&n403;
 n455=n437&n435;
 n459=~n461&n460;
 n462=((A >> 10)&1)&~n460;
 n67=~n71&n68;
 n86=~(n92^n87);
 n111=~(n113|n112);
 n115=n129^n116;
 n149=~(n151|n150);
 n153=n167^n154;
 n196=~(n198|n197);
 n200=n214^n201;
 n249=~(n251|n250);
 n253=n265^n254;
 n302=~(n304|n303);
 n307=n315^n308;
 n358=~(n360|n359);
 n458=~(n462|n459);
 n475=~(n476^n459);
 n482=n476&n459;
 n66=~(n72^n67);
 n82=~(n72|n67);
 n84=n77&~n67;
 n85=n99^n86;
 O11=~(n77^n66);
 n107=n100&~n85;
 n110=~n114&n111;
 n145=n130&~n115;
 n148=~n152&n149;
 n192=n168&~n153;
 n195=~n199&n196;
 n245=n215&~n200;
 n248=~n252&n249;
 n298=n266&~n253;
 n301=~n305&n302;
 n353=n306&~n307;
 n357=~n361&n358;
 n473=~n457&n458;
 n81=~(n83|n82);
 n109=~(n115^n110);
 n143=~(n115|n110);
 n144=n130&~n110;
 n147=~(n153^n148);
 n190=~(n153|n148);
 n191=n168&~n148;
 n194=~(n200^n195);
 n243=~(n200|n195);
 n244=n215&~n195;
 n247=~(n253^n248);
 n296=~(n253|n248);
 n297=n266&~n248;
 n300=n306^n301;
 n352=n306&~n301;
 n354=~(n307|n301);
 n356=n362^n357;
 n399=n362&~n357;
 n401=n364&~n357;
 n80=~n84&n81;
 n105=~(n85|n80);
 n106=n100&~n80;
 n108=n130^n109;
 n142=~(n144|n143);
 n146=n168^n147;
 n189=~(n191|n190);
 n193=n215^n194;
 n242=~(n244|n243);
 n246=n266^n247;
 n295=~(n297|n296);
 n299=~(n307^n300);
 n351=~(n353|n352);
 n355=n364^n356;
 n398=~(n400|n399);
 n79=~(n85^n80);
 O12=~(n100^n79);
 n104=~(n106|n105);
 n138=n131&~n108;
 n141=~n145&n142;
 n185=n169&~n146;
 n188=~n192&n189;
 n238=n216&~n193;
 n241=~n245&n242;
 n291=n267&~n246;
 n294=~n298&n295;
 n346=n319&~n299;
 n350=~n354&n351;
 n392=n365&~n355;
 n397=~n401&n398;
 n103=~n107&n104;
 n140=~(n146^n141);
 n183=~(n146|n141);
 n184=n169&~n141;
 n187=~(n193^n188);
 n236=~(n193|n188);
 n237=n216&~n188;
 n240=~(n246^n241);
 n289=~(n246|n241);
 n290=n267&~n241;
 n293=~(n299^n294);
 n345=~(n299|n294);
 n347=n319&~n294;
 n349=~(n355^n350);
 n391=~(n355|n350);
 n393=n365&~n350;
 n396=n402^n397;
 n432=n402&~n397;
 n434=n403&~n397;
 n102=~(n108^n103);
 n136=~(n108|n103);
 n137=n131&~n103;
 n139=n169^n140;
 n182=~(n184|n183);
 n186=n216^n187;
 n235=~(n237|n236);
 n239=n267^n240;
 n288=~(n290|n289);
 n292=n319^n293;
 n344=~(n346|n345);
 n348=n365^n349;
 n390=~(n392|n391);
 n395=n403^n396;
 n431=~(n433|n432);
 O13=~(n131^n102);
 n135=~(n137|n136);
 n177=n170&~n139;
 n181=~n185&n182;
 n230=n217&~n186;
 n234=~n238&n235;
 n283=n268&~n239;
 n287=~n291&n288;
 n338=n320&~n292;
 n343=~n347&n344;
 n384=n366&~n348;
 n389=~n393&n390;
 n425=n394&~n395;
 n430=~n434&n431;
 n134=~n138&n135;
 n180=~(n186^n181);
 n228=~(n186|n181);
 n229=n217&~n181;
 n233=~(n239^n234);
 n281=~(n239|n234);
 n282=n268&~n234;
 n286=~(n292^n287);
 n337=~(n292|n287);
 n339=n320&~n287;
 n342=~(n348^n343);
 n383=~(n348|n343);
 n385=n366&~n343;
 n388=n394^n389;
 n424=n394&~n389;
 n426=~(n395|n389);
 n429=n435^n430;
 n454=n435&~n430;
 n456=n437&~n430;
 n133=~(n139^n134);
 n175=~(n139|n134);
 n176=n170&~n134;
 n179=n217^n180;
 n227=~(n229|n228);
 n232=n268^n233;
 n280=~(n282|n281);
 n285=n320^n286;
 n336=~(n338|n337);
 n341=n366^n342;
 n382=~(n384|n383);
 n387=~(n395^n388);
 n423=~(n425|n424);
 n428=n437^n429;
 n453=~(n455|n454);
 O14=~(n170^n133);
 n174=~(n176|n175);
 n222=~(n178|n179);
 n226=~n230&n227;
 n275=~(n231|n232);
 n279=~n283&n280;
 n331=~(n284|n285);
 n335=~n339&n336;
 n377=~(n340|n341);
 n381=~n385&n382;
 n418=~(n386|n387);
 n422=~n426&n423;
 n448=~(n427|n428);
 n452=~n456&n453;
 n173=~n177&n174;
 n225=~(n231^n226);
 n274=~(n231|n226);
 n276=~(n232|n226);
 n278=~(n284^n279);
 n330=~(n284|n279);
 n332=~(n285|n279);
 n334=~(n340^n335);
 n376=~(n340|n335);
 n378=~(n341|n335);
 n380=~(n386^n381);
 n417=~(n386|n381);
 n419=~(n387|n381);
 n421=~(n427^n422);
 n447=~(n427|n422);
 n449=~(n428|n422);
 n451=~(n457^n452);
 n472=~(n457|n452);
 n474=n458&~n452;
 n172=~(n178^n173);
 n221=~(n178|n173);
 n223=~(n179|n173);
 n224=~(n232^n225);
 n273=~(n275|n274);
 n277=~(n285^n278);
 n329=~(n331|n330);
 n333=~(n341^n334);
 n375=~(n377|n376);
 n379=~(n387^n380);
 n416=~(n418|n417);
 n420=~(n428^n421);
 n446=~(n448|n447);
 n450=n458^n451;
 n471=~(n473|n472);
 O15=n179^n172;
 n220=~(n222|n221);
 n272=~n276&n273;
 n328=~n332&n329;
 n374=~n378&n375;
 n415=~n419&n416;
 n445=~n449&n446;
 n470=~n474&n471;
 n219=~n223&n220;
 n271=~(n277^n272);
 n326=~(n277|n272);
 n372=~(n333|n328);
 n413=~(n379|n374);
 n443=~(n420|n415);
 n468=~(n450|n445);
 n481=~(n475|n470);
 O16=n224^n219;
 n270=~(n224|n219);
 n480=~(n482|n481);
 O17=~(n271^n270);
 n325=~n277&n270;
 n327=~n272&n270;
 n324=~(n326|n325);
 n323=~n327&n324;
 n322=~(n328^n323);
 n371=~(n328|n323);
 n373=~(n333|n323);
 O18=n333^n322;
 n370=~(n372|n371);
 n369=~n373&n370;
 n368=~(n374^n369);
 n412=~(n374|n369);
 n414=~(n379|n369);
 O19=n379^n368;
 n411=~(n413|n412);
 n410=~n414&n411;
 n409=~(n415^n410);
 n442=~(n415|n410);
 n444=~(n420|n410);
 O20=n420^n409;
 n441=~(n443|n442);
 n440=~n444&n441;
 n439=~(n445^n440);
 n467=~(n445|n440);
 n469=~(n450|n440);
 O21=n450^n439;
 n466=~(n468|n467);
 n465=~n469&n466;
 n464=~(n470^n465);
 n479=~(n470|n465);
 n483=~(n475|n465);
 O22=n475^n464;
 n478=n480&~n479;
 O23=~n483&n478;
 O = (O0 << 0)|(O1 << 1)|(O2 << 2)|(O3 << 3)|(O4 << 4)|(O5 << 5)|(O6 << 6)|(O7 << 7)|(O8 << 8)|(O9 << 9)|(O10 << 10)|(O11 << 11)|(O12 << 12)|(O13 << 13)|(O14 << 14)|(O15 << 15)|(O16 << 16)|(O17 << 17)|(O18 << 18)|(O19 << 19)|(O20 << 20)|(O21 << 21)|(O22 << 22)|(O23 << 23);
 return O;
}

// internal reference: truncation-tm.12.trun12_tams04a
