/*
Copyright (C) 1994-1995 Apogee Software, Ltd.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
#ifndef _rt_table_public
#define _rt_table_public

#include "states.h"

statetype * statetable[MAXSTATES]=
{
    &s_lowgrdstand	,
    &s_lowgrdpath4 	,
    &s_lowgrdpath3 	,
    &s_lowgrdpath2 	,
    &s_lowgrdpath1 	,
    &s_lowgrdcollide,
    &s_lowgrdcollide2,
    &s_lowgrdshoot4 	,
    &s_lowgrdshoot3 	,
    &s_lowgrdshoot2 	,
    &s_lowgrdshoot1 	,
    &s_lowgrdchase4 	,
    &s_lowgrdchase3 	,
    &s_lowgrdchase2 	,
    &s_lowgrdchase1 	,
    &s_lowgrddead		,
    &s_lowgrddie4		,
    &s_lowgrddie3		,
    &s_lowgrddie2		,
    &s_lowgrddie1		,
    &s_lowgrddie1rev,
    &s_lowgrddie2rev,
    &s_lowgrddie3rev,
    &s_lowgrddie4rev,
    &s_lowgrdcrushed2		,
    &s_lowgrdcrushed1		,
    &s_sneakydown,
    &s_sneakyrise4,
    &s_sneakyrise3,
    &s_sneakyrise2,
    &s_sneakyrise1,
    &s_highgrdstand	,
    &s_highgrdpath4 	,
    &s_highgrdpath3 	,
    &s_highgrdpath2 	,
    &s_highgrdpath1 	,
    &s_highgrdcollide,
    &s_highgrdcollide2,
    &s_highgrdshoot4,
    &s_highgrdshoot3,
    &s_highgrdshoot2 	,
    &s_highgrdshoot1 	,
    &s_highgrdchase4 	,
    &s_highgrdchase3 	,
    &s_highgrdchase2 	,
    &s_highgrdchase1 	,
    &s_highgrddead		,
    &s_highgrddie5		,
    &s_highgrddie4		,
    &s_highgrddie3		,
    &s_highgrddie2		,
    &s_highgrddie1		,
    &s_highgrddie1rev		,
    &s_highgrddie2rev		,
    &s_highgrddie3rev,
    &s_highgrddie4rev,
    &s_highgrddie5rev,
    &s_highgrdcrushed2		,
    &s_highgrdcrushed1		,
    &s_strikestand	,
    &s_strikepath4 	,
    &s_strikepath3 	,
    &s_strikepath2 	,
    &s_strikepath1 	,
    &s_strikecollide,
    &s_strikecollide2,
    &s_strikeshoot4 	,
    &s_strikeshoot3 	,
    &s_strikeshoot2 	,
    &s_strikeshoot1 	,
    &s_strikewait,
    &s_strikerollright6,
    &s_strikerollright5,
    &s_strikerollright4,
    &s_strikerollright3,
    &s_strikerollright2,
    &s_strikerollright1,
    &s_strikerollleft6,
    &s_strikerollleft5,
    &s_strikerollleft4,
    &s_strikerollleft3,
    &s_strikerollleft2,
    &s_strikerollleft1,
    &s_strikechase4 	,
    &s_strikechase3 	,
    &s_strikechase2 	,
    &s_strikechase1 	,
    &s_strikedead3		,
    &s_strikedead2		,
    &s_strikedead		,
    &s_strikedie4		,
    &s_strikedie3		,
    &s_strikedie2		,
    &s_strikedie1		,
    &s_strikedie1rev		,
    &s_strikedie2rev		,
    &s_strikedie3rev		,
    &s_strikedie4rev		,
    &s_strikecrushed2		,
    &s_strikecrushed1		,
    &s_blitzstand,
    &s_blitzpath4,
    &s_blitzpath3,
    &s_blitzpath2,
    &s_blitzpath1,
    &s_blitzcollide,
    &s_blitzcollide2,
    &s_blitzshoot4,
    &s_blitzshoot3,
    &s_blitzshoot2,
    &s_blitzshoot1,
    &s_blitzrise4,
    &s_blitzrise3,
    &s_blitzrise2,
    &s_blitzrise1,
    &s_blitzuse,
    &s_blitzsteal2,
    &s_blitzsteal1,
    &s_blitzchase4 	,
    &s_blitzchase3 	,
    &s_blitzchase2 	,
    &s_blitzchase1 	,
    &s_blitzdead2		,
    &s_blitzdead		,
    &s_blitzdie4		,
    &s_blitzdie3		,
    &s_blitzdie2		,
    &s_blitzdie1		,
    &s_blitzdie1rev,
    &s_blitzdie2rev,
    &s_blitzdie3rev,
    &s_blitzdie4rev,
    &s_blitzcrushed2		,
    &s_blitzcrushed1		,
    &s_blitzplead1,
    &s_blitzplead2,
    &s_blitzplead3,
    &s_blitzplead4,
    &s_blitzplead5,
    &s_blitzplead6,
    &s_blitzplead7,
    &s_blitzplead8,
    &s_blitzplead9,
    &s_blitzplead10,
    &s_blitzplead11,
    &s_blitzaplead5,
    &s_blitzaplead4,
    &s_blitzfakedead,
    &s_blitzfakedie3,
    &s_blitzfakedie2,
    &s_blitzfakedie1,
    &s_blitzstruggledie1,
    &s_blitzstruggledead,
    &s_enforcerstand,
    &s_enforcerpath4 	,
    &s_enforcerpath3 	,
    &s_enforcerpath2 	,
    &s_enforcerpath1 	,
    &s_enforcerchase4 	,
    &s_enforcerchase3 	,
    &s_enforcerchase2 	,
    &s_enforcerchase1 	,
    &s_enforcercollide,
    &s_enforcercollide2,
    &s_enforcershoot4,
    &s_enforcershoot3,
    &s_enforcershoot2,
    &s_enforcershoot1,
    &s_enforcerthrow8,
    &s_enforcerthrow7,
    &s_enforcerthrow6,
    &s_enforcerthrow5,
    &s_enforcerthrow4,
    &s_enforcerthrow3,
    &s_enforcerthrow2,
    &s_enforcerthrow1,
    &s_grenade10,
    &s_grenade9,
    &s_grenade8,
    &s_grenade7,
    &s_grenade6,
    &s_grenade5,
    &s_grenade4,
    &s_grenade3,
    &s_grenade2,
    &s_grenade1,
    &s_grenade_fall6,
    &s_grenade_fall5,
    &s_grenade_fall4,
    &s_grenade_fall3,
    &s_grenade_fall2,
    &s_grenade_fall1,
    &s_grenadehit3,
    &s_grenadehit2,
    &s_grenadehit1,
    &s_enforcerdead		,
    &s_enforcerdie4		,
    &s_enforcerdie3		,
    &s_enforcerdie2		,
    &s_enforcerdie1		,
    &s_enforcerdie1rev,
    &s_enforcerdie2rev,
    &s_enforcerdie3rev,
    &s_enforcerdie4rev,
    &s_enforcercrushed2		,
    &s_enforcercrushed1		,


    &s_robogrdstand	,
    &s_robogrdpath1 	,
    &s_robogrdshoot1 	,
    &s_robogrdshuriken4 	,
    &s_robogrdshuriken3 	,
    &s_robogrdshuriken2 	,
    &s_robogrdshuriken1 	,
    &s_shurikenhit3,
    &s_shurikenhit2,
    &s_shurikenhit1,
    &s_robogrdcollide,
    &s_robogrdcollide2,
    &s_robogrddead		,
    &s_robogrddie9	,
    &s_robogrddie8	,
    &s_robogrddie7	,
    &s_robogrddie6	,
    &s_robogrddie5	,
    &s_robogrddie4	,
    &s_robogrddie3	,
    &s_robogrddie2	,
    &s_robogrddie1	,
    &s_roboalign,
    &s_roborealign,
    &s_robowait,

    &s_altexplosion10,
    &s_altexplosion9,
    &s_altexplosion8,
    &s_altexplosion7,
    &s_altexplosion6,
    &s_altexplosion5,
    &s_altexplosion4,
    &s_altexplosion3,
    &s_altexplosion2,
    &s_altexplosion1,


    &s_explosion20,
    &s_explosion19,
    &s_explosion18,
    &s_explosion17,
    &s_explosion16,
    &s_explosion15,
    &s_explosion14,
    &s_explosion13,
    &s_explosion12,
    &s_explosion11,
    &s_explosion10,
    &s_explosion9,
    &s_explosion8,
    &s_explosion7,
    &s_explosion6,
    &s_explosion5,
    &s_explosion4,
    &s_explosion3,
    &s_explosion2,
    &s_explosion1,
    &s_grexplosion20,
    &s_grexplosion19,
    &s_grexplosion18,
    &s_grexplosion17,
    &s_grexplosion16,
    &s_grexplosion15,
    &s_grexplosion14,
    &s_grexplosion13,
    &s_grexplosion12,
    &s_grexplosion11,
    &s_grexplosion10,
    &s_grexplosion9,
    &s_grexplosion8,
    &s_grexplosion7,
    &s_grexplosion6,
    &s_grexplosion5,
    &s_grexplosion4,
    &s_grexplosion3,
    &s_grexplosion2,
    &s_grexplosion1,

    &s_staticexplosion25,
    &s_staticexplosion24,
    &s_staticexplosion23,
    &s_staticexplosion22,
    &s_staticexplosion21,
    &s_staticexplosion20,
    &s_staticexplosion19,
    &s_staticexplosion18,
    &s_staticexplosion17,
    &s_staticexplosion16,
    &s_staticexplosion15,
    &s_staticexplosion14,
    &s_staticexplosion13,
    &s_staticexplosion12,
    &s_staticexplosion11,
    &s_staticexplosion10,
    &s_staticexplosion9,
    &s_staticexplosion8,
    &s_staticexplosion7,
    &s_staticexplosion6,
    &s_staticexplosion5,
    &s_staticexplosion4,
    &s_staticexplosion3,
    &s_staticexplosion2,
    &s_staticexplosion1,


    &s_upblade16,
    &s_upblade15,
    &s_upblade14,
    &s_upblade13,
    &s_upblade12,
    &s_upblade11,
    &s_upblade10,
    &s_upblade9,
    &s_upblade8,
    &s_upblade7,
    &s_upblade6,
    &s_upblade5,
    &s_upblade4,
    &s_upblade3,
    &s_upblade2,
    &s_upblade1,


    &s_firejetup23,
    &s_firejetup22,
    &s_firejetup21,
    &s_firejetup20,
    &s_firejetup19,
    &s_firejetup18,
    &s_firejetup17,
    &s_firejetup16,
    &s_firejetup15,
    &s_firejetup14,
    &s_firejetup13,
    &s_firejetup12,
    &s_firejetup11,
    &s_firejetup10,
    &s_firejetup9,
    &s_firejetup8,
    &s_firejetup7,
    &s_firejetup6,
    &s_firejetup5,
    &s_firejetup4,
    &s_firejetup3,
    &s_firejetup2,
    &s_firejetup1,


    &s_columndownup6,
    &s_columndownup5,
    &s_columndownup4,
    &s_columndownup3,
    &s_columndownup2,
    &s_columndownup1,
    &s_columndowndown8,
    &s_columndowndown7,
    &s_columndowndown6,
    &s_columndowndown5,
    &s_columndowndown4,
    &s_columndowndown3,
    &s_columndowndown2,
    &s_columndowndown1,


    &s_spearup16,
    &s_spearup15,
    &s_spearup14,
    &s_spearup13,
    &s_spearup12,
    &s_spearup11,
    &s_spearup10,
    &s_spearup9,
    &s_spearup8,
    &s_spearup7,
    &s_spearup6,
    &s_spearup5,
    &s_spearup4,
    &s_spearup3,
    &s_spearup2,
    &s_spearup1,

    &s_pushcolumn1,
    &s_pushcolumn2,
    &s_pushcolumn3,
    &s_wallfireball,
    &s_crossfire2,
    &s_crossfire1,
    &s_crossdone5,
    &s_crossdone4,
    &s_crossdone3,
    &s_crossdone2,
    &s_crossdone1,
    &s_dust,
    &s_gas2,
    &s_gas1,
    &s_p_bazooka1,
    &s_p_grenade,
    &s_gunsmoke8,
    &s_gunsmoke7,
    &s_gunsmoke6,
    &s_gunsmoke5,
    &s_gunsmoke4,
    &s_gunsmoke3,
    &s_gunsmoke2,
    &s_gunsmoke1,
    &s_bloodspurt8,
    &s_bloodspurt7,
    &s_bloodspurt6,
    &s_bloodspurt5,
    &s_bloodspurt4,
    &s_bloodspurt3,
    &s_bloodspurt2,
    &s_bloodspurt1,
    &s_hitmetalwall4,
    &s_hitmetalwall3,
    &s_hitmetalwall2,
    &s_hitmetalwall1,
    &s_hitmetalactor4,
    &s_hitmetalactor3,
    &s_hitmetalactor2,
    &s_hitmetalactor1,
    &s_fireunit15,
    &s_fireunit14,
    &s_fireunit13,
    &s_fireunit12,
    &s_fireunit11,
    &s_fireunit10,
    &s_fireunit9,
    &s_fireunit8,
    &s_fireunit7,
    &s_fireunit6,
    &s_fireunit5,
    &s_fireunit4,
    &s_fireunit3,
    &s_fireunit2,
    &s_fireunit1,
    &s_skeleton48,
    &s_skeleton47,
    &s_skeleton46,
    &s_skeleton45,
    &s_skeleton44,
    &s_skeleton43,
    &s_skeleton42,
    &s_skeleton41,
    &s_skeleton40,
    &s_skeleton39,
    &s_skeleton38,
    &s_skeleton37,
    &s_skeleton36,
    &s_skeleton35,
    &s_skeleton34,
    &s_skeleton33,
    &s_skeleton32,
    &s_skeleton31,
    &s_skeleton30,
    &s_skeleton29,
    &s_skeleton28,
    &s_skeleton27,
    &s_skeleton26,
    &s_skeleton25,
    &s_skeleton24,
    &s_skeleton23,
    &s_skeleton22,
    &s_skeleton21,
    &s_skeleton20,
    &s_skeleton19,
    &s_skeleton18,
    &s_skeleton17,
    &s_skeleton16,
    &s_skeleton15,
    &s_skeleton14,
    &s_skeleton13,
    &s_skeleton12,
    &s_skeleton11,
    &s_skeleton10,
    &s_skeleton9,
    &s_skeleton8,
    &s_skeleton7,
    &s_skeleton6,
    &s_skeleton5,
    &s_skeleton4,
    &s_skeleton3,
    &s_skeleton2,
    &s_skeleton1,
    &s_spring9,
    &s_spring8,
    &s_spring7,
    &s_spring6,
    &s_spring5,
    &s_spring4,
    &s_spring3,
    &s_spring2,
    &s_spring1,
    &s_pgunattack1,
    &s_pmissattack1,
    &s_pgunattack2,
    &s_pmissattack2,
    &s_pbatblast,
    &s_remotemove4,
    &s_remotemove3,
    &s_remotemove2,
    &s_remotemove1,
    &s_remoteinelev,
    &s_remotedead,
    &s_remotedie5,
    &s_remotedie4,
    &s_remotedie3,
    &s_remotedie2,
    &s_remotedie1,
    &s_godfire4,
    &s_godfire3,
    &s_godfire2,
    &s_godfire1,
    &s_guts12,
    &s_guts11,
    &s_guts10,
    &s_guts9,
    &s_guts8,
    &s_guts7,
    &s_guts6,
    &s_guts5,
    &s_guts4,
    &s_guts3,
    &s_guts2,
    &s_guts1,
    &s_player,
    &s_free,
    &s_megaexplosions,
    &s_bossdeath,
    &s_superparticles,
    &s_littlesoul,
    &s_bigsoul,
    &s_vaporized8,
    &s_vaporized7,
    &s_vaporized6,
    &s_vaporized5,
    &s_vaporized4,
    &s_vaporized3,
    &s_vaporized2,
    &s_vaporized1,

    &s_autospring1,
    &s_autospring2,
    &s_autospring3,
    &s_autospring4,
    &s_autospring5,
    &s_autospring6,
    &s_autospring7,
    &s_autospring8,
    &s_autospring9,


    &s_gibsdone8,
    &s_gibsdone7,
    &s_gibsdone6,
    &s_gibsdone5,
    &s_gibsdone4,
    &s_gibsdone3,
    &s_gibsdone2,
    &s_gibsdone1,
    &s_gibs4,
    &s_gibs3,
    &s_gibs2,
    &s_gibs1,



    &s_collectorwander8,
    &s_collectorwander7,
    &s_collectorwander6,
    &s_collectorwander5,
    &s_collectorwander4,
    &s_collectorwander3,
    &s_collectorwander2,
    &s_collectorwander1,
    &s_collectorfdoor8,
    &s_collectorfdoor7,
    &s_collectorfdoor6,
    &s_collectorfdoor5,
    &s_collectorfdoor4,
    &s_collectorfdoor3,
    &s_collectorfdoor2,
    &s_collectorfdoor1,
    &s_tag,
    &s_wind,
    &s_timekeeper,
    &s_remoteguts1,
    &s_remoteguts2,
    &s_remoteguts3,
    &s_remoteguts4,
    &s_remoteguts5,
    &s_remoteguts6,
    &s_remoteguts7,
    &s_remoteguts8,
    &s_remoteguts9,
    &s_remoteguts10,
    &s_remoteguts11,
    &s_remoteguts12,
    &s_voidwait,
    &s_ashwait,
    &s_deadwait,
    &s_gutwait,
    &s_eye1,
    &s_eye2,
    &s_eye3,
    &s_itemspawn1,
    &s_itemspawn2,
    &s_itemspawn3,
    &s_itemspawn4,
    &s_itemspawn5,
    &s_itemspawn6,
    &s_itemspawn7,
    &s_itemspawn8,
    &s_deadblood1,
    &s_deadblood2,
    &s_deadblood3,
    &s_deadblood4,
    &s_deadblood5,
    &s_deadblood6,
    &s_deadblood7,
    &s_deadblood8,
    &s_flash1,
    &s_flash2,
    &s_flash3,
    &s_flash4,
    &s_flash5,
    &s_flash6,
    &s_flash7,
    &s_flash8,
    &s_basemarker1,
    &s_basemarker2,
    &s_basemarker3,
    &s_basemarker4,
    &s_basemarker5,
    &s_basemarker6,
    &s_basemarker7,
    &s_basemarker8,
    &s_pathdisk,
    &s_elevdisk,
    &s_megaremove,
    /*&s_rain7,
    &s_rain6,
    &s_rain5,
    &s_rain4,
    &s_rain3,
    &s_rain2,
    &s_rain1,
    &s_rainmaster,*/
    &s_respawn8,
    &s_respawn7,
    &s_respawn6,
    &s_respawn5,
    &s_respawn4,
    &s_respawn3,
    &s_respawn2,
    &s_respawn1,
    &s_blooddrip1,
    &s_blooddrip2,
    &s_blooddrip3,
    &s_blooddrip4,
    &s_diskmaster,
    &s_bstar4,
    &s_bstar3,
    &s_bstar2,
    &s_bstar1,



#if (SHAREWARE == 0)
    &s_scottwander7,
    &s_scottwander6,
    &s_scottwander5,
    &s_scottwander4,
    &s_scottwander3,
    &s_scottwander2,
    &s_scottwander1,
    &s_scottwanderdoor7,
    &s_scottwanderdoor6,
    &s_scottwanderdoor5,
    &s_scottwanderdoor4,
    &s_scottwanderdoor3,
    &s_scottwanderdoor2,
    &s_scottwanderdoor1,


    &s_opstand,
    &s_oppath4 	,
    &s_oppath3 	,
    &s_oppath2 	,
    &s_oppath1 	,
    &s_opcollide,
    &s_opcollide2,
    &s_opshoot4 	,
    &s_opshoot3 	,
    &s_opshoot2 	,
    &s_opshoot1 	,
    &s_opbolo5,
    &s_opbolo4,
    &s_opbolo3,
    &s_opbolo2,
    &s_opbolo1,
    &s_bolocast4,
    &s_bolocast3,
    &s_bolocast2,
    &s_bolocast1,
    &s_opchase4 	,
    &s_opchase3 	,
    &s_opchase2 	,
    &s_opchase1 	,
    &s_opdead		,
    &s_opdie5		,
    &s_opdie4		,
    &s_opdie3		,
    &s_opdie2		,
    &s_opdie1		,
    &s_opdie1rev,
    &s_opdie2rev,
    &s_opdie3rev,
    &s_opdie4rev,
    &s_opdie5rev,
    &s_opcrushed2		,
    &s_opcrushed1		,



    &s_dmonkstand,
    &s_dmonkpath4 	,
    &s_dmonkpath3 	,
    &s_dmonkpath2 	,
    &s_dmonkpath1 	,
    &s_dmonkcollide,
    &s_dmonkcollide2,
    &s_dmonkshoot6,
    &s_dmonkshoot5,
    &s_dmonkshoot4,
    &s_dmonkshoot3,
    &s_dmonkshoot2,
    &s_dmonkshoot1,
    &s_dmonkchase4 	,
    &s_dmonkchase3 	,
    &s_dmonkchase2 	,
    &s_dmonkchase1 	,
    &s_dmonkdead		,
    &s_dmonkdie4		,
    &s_dmonkdie3		,
    &s_dmonkdie2		,
    &s_dmonkdie1		,
    &s_dmonkdie1rev,
    &s_dmonkdie2rev,
    &s_dmonkdie3rev,
    &s_dmonkdie4rev,
    &s_dmonkcrushed2		,
    &s_dmonkcrushed1		,
    &s_firemonkstand	,
    &s_firemonkpath4 	,
    &s_firemonkpath3 	,
    &s_firemonkpath2 	,
    &s_firemonkpath1 	,
    &s_firemonkcollide,
    &s_firemonkcollide2,
    &s_firemonkcast7,
    &s_firemonkcast6,
    &s_firemonkcast5,
    &s_firemonkcast4,
    &s_firemonkcast3,
    &s_firemonkcast2,
    &s_firemonkcast1,
    &s_monkfire4,
    &s_monkfire3,
    &s_monkfire2,
    &s_monkfire1,
    &s_fireballhit3,
    &s_fireballhit2,
    &s_fireballhit1,
    &s_firemonkchase4 	,
    &s_firemonkchase3 	,
    &s_firemonkchase2 	,
    &s_firemonkchase1 	,
    &s_firemonkdead7		,
    &s_firemonkdead6	,
    &s_firemonkdead5	,
    &s_firemonkdead4	,
    &s_firemonkdead3	,
    &s_firemonkdead2	,
    &s_firemonkdead		,
    &s_firemonkdie4		,
    &s_firemonkdie3		,
    &s_firemonkdie2		,
    &s_firemonkdie1		,
    &s_firemonkdie1rev,
    &s_firemonkdie2rev,
    &s_firemonkdie3rev,
    &s_firemonkdie4rev,
    &s_firemonkcrushed2		,
    &s_firemonkcrushed1		,


    &s_wallstand,
    &s_wallpath,
    &s_wallshoot,
    &s_wallcollide,
    &s_wallalign,
    &s_wallrestore,
    &s_wallwait,




    &s_darianstand,
    &s_darianchase4 	,
    &s_darianchase3 	,
    &s_darianchase2 	,
    &s_darianchase1 	,
    &s_darianrise8,
    &s_darianrise7,
    &s_darianrise6,
    &s_darianrise5,
    &s_darianrise4,
    &s_darianrise3,
    &s_darianrise2,
    &s_darianrise1,
    &s_dariansink9,
    &s_dariansink8,
    &s_dariansink7,
    &s_dariansink6,
    &s_dariansink5,
    &s_dariansink4,
    &s_dariansink3,
    &s_dariansink2,
    &s_dariansink1,
    &s_dariancollide,
    &s_dariancollide2,
    &s_darianshoot4,
    &s_darianshoot3,
    &s_darianshoot2,
    &s_darianshoot1,
    &s_dariandefend3,
    &s_dariandefend2,
    &s_dariandefend1,
    &s_darianuse4,
    &s_darianuse3,
    &s_darianuse2,
    &s_darianuse1,
    &s_darianwait,
    &s_darianspears,
    &s_dspear16,
    &s_dspear15,
    &s_dspear14,
    &s_dspear13,
    &s_dspear12,
    &s_dspear11,
    &s_dspear10,
    &s_dspear9,
    &s_dspear8,
    &s_dspear7,
    &s_dspear6,
    &s_dspear5,
    &s_dspear4,
    &s_dspear3,
    &s_dspear2,
    &s_dspear1,
    &s_dariandead2 	,
    &s_dariandead1 	,
    &s_dariandead 	,
    &s_dariandie10,
    &s_dariandie9 	,
    &s_dariandie8 	,
    &s_dariandie7 	,
    &s_dariandie6 	,
    &s_dariandie5 	,
    &s_dariandie4 	,
    &s_dariandie3 	,
    &s_dariandie2 	,
    &s_dariandie1 	,
    &s_heinrichstand	,
    &s_heinrichchase 	,
    &s_kristleft,
    &s_kristright,
    &s_heinrichshoot11,
    &s_heinrichshoot10,
    &s_heinrichshoot9,
    &s_heinrichshoot8,
    &s_heinrichshoot7,
    &s_heinrichshoot6,
    &s_heinrichshoot5,
    &s_heinrichshoot4,
    &s_heinrichshoot3,
    &s_heinrichshoot2,
    &s_heinrichshoot1,
    &s_missile1,
    &s_missilehit3,
    &s_missilehit2,
    &s_missilehit1,
    &s_mine4,
    &s_mine3,
    &s_mine2,
    &s_mine1,
    &s_heinrichdefend,
    &s_heinrichooc,
    &s_heinrichdead 	,
    &s_heinrichdie2 	,
    &s_heinrichdie1 	,
    &s_heindead2,
    &s_heindead1,
    &s_heinexp13,
    &s_heinexp12,
    &s_heinexp11,
    &s_heinexp10,
    &s_heinexp9,
    &s_heinexp8,
    &s_heinexp7,
    &s_heinexp6,
    &s_heinexp5,
    &s_heinexp4,
    &s_heinexp3,
    &s_heinexp2,
    &s_heinexp1,
    &s_darkmonkstand	,
    &s_darkmonkland	,
    &s_darkmonkchase2	,
    &s_darkmonkchase1	,
    &s_dmlandandfire,
    &s_darkmonkcover3	,
    &s_darkmonkcover2	,
    &s_darkmonkcover1	,
    &s_darkmonkawaken5	,
    &s_darkmonkawaken4	,
    &s_darkmonkawaken3	,
    &s_darkmonkawaken2	,
    &s_darkmonkawaken1 	,
    &s_darkmonklightning11	,
    &s_darkmonklightning10	,
    &s_darkmonklightning9	,
    &s_darkmonklightning8	,
    &s_darkmonklightning7 	,
    &s_darkmonklightning6	,
    &s_darkmonklightning5	,
    &s_darkmonklightning4	,
    &s_darkmonklightning3	,
    &s_darkmonklightning2 	,
    &s_darkmonklightning1 	,
    &s_darkmonkfspark6	,
    &s_darkmonkfspark5	,
    &s_darkmonkfspark4	,
    &s_darkmonkfspark3	,
    &s_darkmonkfspark2 	,
    &s_darkmonkfspark1 	,
    &s_darkmonkbreathe8	,
    &s_darkmonkbreathe7 	,
    &s_darkmonkbreathe6	,
    &s_darkmonkbreathe5	,
    &s_darkmonkbreathe4	,
    &s_darkmonkbreathe3	,
    &s_darkmonkbreathe2 	,
    &s_darkmonkbreathe1 	,
    &s_darkmonksummon3	,
    &s_darkmonksummon2 	,
    &s_darkmonksummon1 	,
    &s_snakepath,
    &s_snakefindpath,
    &s_darkmonkhead	,
    &s_darkmonksnakelink	,
    &s_darkmonkhspawn,
    &s_darkmonkfastspawn,
    &s_darkmonkheaddead	,
    &s_darkmonkheaddie1	,
    &s_darkmonkhball9	,
    &s_darkmonkhball8	,
    &s_darkmonkhball7,
    &s_darkmonkhball6	,
    &s_darkmonkhball5	,
    &s_darkmonkhball4	,
    &s_darkmonkhball3	,
    &s_darkmonkhball2,
    &s_darkmonkhball1,
    &s_darkmonkabsorb9	,
    &s_darkmonkabsorb8	,
    &s_darkmonkabsorb7,
    &s_darkmonkabsorb6	,
    &s_darkmonkabsorb5	,
    &s_darkmonkabsorb4	,
    &s_darkmonkabsorb3	,
    &s_darkmonkabsorb2,
    &s_darkmonkabsorb1,
    &s_darkmonksphere10,
    &s_darkmonksphere9,
    &s_darkmonksphere8,
    &s_darkmonksphere7,
    &s_darkmonksphere6,
    &s_darkmonksphere5,
    &s_darkmonksphere4,
    &s_darkmonksphere3,
    &s_darkmonksphere2,
    &s_darkmonksphere1,
    &s_dmgreenthing10,
    &s_dmgreenthing9,
    &s_dmgreenthing8,
    &s_dmgreenthing7,
    &s_dmgreenthing6,
    &s_dmgreenthing5,
    &s_dmgreenthing4,
    &s_dmgreenthing3,
    &s_dmgreenthing2,
    &s_dmgreenthing1,
    &s_energysphere4,
    &s_energysphere3,
    &s_energysphere2,
    &s_energysphere1,
    &s_lightning,
    &s_handball2,
    &s_handball1,
    &s_faceball2,
    &s_faceball1,
    &s_floorspark4,
    &s_floorspark3,
    &s_floorspark2,
    &s_floorspark1,
    &s_darkmonkreact,
    &s_darkmonkbball9	,
    &s_darkmonkbball8	,
    &s_darkmonkbball7,
    &s_darkmonkbball6	,
    &s_darkmonkbball5	,
    &s_darkmonkbball4	,
    &s_darkmonkbball3	,
    &s_darkmonkbball2,
    &s_darkmonkbball1,
    &s_darkmonkcharge10,
    &s_darkmonkcharge9	,
    &s_darkmonkcharge8	,
    &s_darkmonkcharge7	,
    &s_darkmonkcharge6 	,
    &s_darkmonkcharge5	,
    &s_darkmonkcharge4	,
    &s_darkmonkcharge3	,
    &s_darkmonkcharge2	,
    &s_darkmonkcharge1 	,
    &s_darkmonkscare5	,
    &s_darkmonkscare4	,
    &s_darkmonkscare3	,
    &s_darkmonkscare2,
    &s_darkmonkscare1,
    &s_darkmonkdead,
    &s_darkmonkdie7,
    &s_darkmonkdie6,
    &s_darkmonkdie5,
    &s_darkmonkdie4,
    &s_darkmonkdie3,
    &s_darkmonkdie2,
    &s_darkmonkdie1,
    &s_darkmonkredhead,
    &s_darkmonkredlink,
    &s_redheadhit,
    &s_redlinkhit,
    &s_spithit4,
    &s_spithit3,
    &s_spithit2,
    &s_spithit1,
    &s_spit4,
    &s_spit3,
    &s_spit2,
    &s_spit1,
    &s_snakefire2,
    &s_snakefire1,
    &s_snakefireworks1,
    &s_snakefireworks2,

    &s_dexplosion22,
    &s_dexplosion21,
    &s_dexplosion20,
    &s_dexplosion19,
    &s_dexplosion18,
    &s_dexplosion17,
    &s_dexplosion16,
    &s_dexplosion15,
    &s_dexplosion14,
    &s_dexplosion13,
    &s_dexplosion12,
    &s_dexplosion11,
    &s_dexplosion10,
    &s_dexplosion9,
    &s_dexplosion8,
    &s_dexplosion7,
    &s_dexplosion6,
    &s_dexplosion5,
    &s_dexplosion4,
    &s_dexplosion3,
    &s_dexplosion2,
    &s_dexplosion1,
    &s_NMEhead1,
    &s_NMEhead2,
    &s_NMEchase,
    &s_NMEwheels1,
    &s_NMEwheels2,
    &s_NMEwheels3,
    &s_NMEwheels4,
    &s_NMEwheels5,
    &s_NMEspinattack,
    &s_NMEwheelspin,
    &s_NMEminiball4,
    &s_NMEminiball3,
    &s_NMEminiball2,
    &s_NMEminiball1,
    &s_NMEsaucer4,
    &s_NMEsaucer3,
    &s_NMEsaucer2,
    &s_NMEsaucer1,
    &s_NMEdie,
    &s_NMEattack,
    &s_NMEhead1rl,
    &s_NMEhead2rl,
    &s_NMEwindup,
    &s_NMEwheels120,
    &s_NMEwrotleft3,
    &s_NMEwrotleft2,
    &s_NMEwrotleft1,
    &s_NMEwrotright3,
    &s_NMEwrotright2,
    &s_NMEwrotright1,
    &s_NMEdeathbuildup,
    &s_NMEheadexplosion,
    &s_NMEstand,
    &s_NMEspinfire,
    &s_oshuriken4,
    &s_oshuriken3,
    &s_oshuriken2,
    &s_oshuriken1,
    &s_oshurikenhit3,
    &s_oshurikenhit2,
    &s_oshurikenhit1,
    &s_shootinghead,


    &s_speardown16,
    &s_speardown15,
    &s_speardown14,
    &s_speardown13,
    &s_speardown12,
    &s_speardown11,
    &s_speardown10,
    &s_speardown9,
    &s_speardown8,
    &s_speardown7,
    &s_speardown6,
    &s_speardown5,
    &s_speardown4,
    &s_speardown3,
    &s_speardown2,
    &s_speardown1,


    &s_downblade16,
    &s_downblade15,
    &s_downblade14,
    &s_downblade13,
    &s_downblade12,
    &s_downblade11,
    &s_downblade10,
    &s_downblade9,
    &s_downblade8,
    &s_downblade7,
    &s_downblade6,
    &s_downblade5,
    &s_downblade4,
    &s_downblade3,
    &s_downblade2,
    &s_downblade1,

    &s_firejetdown23,
    &s_firejetdown22,
    &s_firejetdown21,
    &s_firejetdown20,
    &s_firejetdown19,
    &s_firejetdown18,
    &s_firejetdown17,
    &s_firejetdown16,
    &s_firejetdown15,
    &s_firejetdown14,
    &s_firejetdown13,
    &s_firejetdown12,
    &s_firejetdown11,
    &s_firejetdown10,
    &s_firejetdown9,
    &s_firejetdown8,
    &s_firejetdown7,
    &s_firejetdown6,
    &s_firejetdown5,
    &s_firejetdown4,
    &s_firejetdown3,
    &s_firejetdown2,
    &s_firejetdown1,

    &s_columnupdown6,
    &s_columnupdown5,
    &s_columnupdown4,
    &s_columnupdown3,
    &s_columnupdown2,
    &s_columnupdown1,
    &s_columnupup8,
    &s_columnupup7,
    &s_columnupup6,
    &s_columnupup5,
    &s_columnupup4,
    &s_columnupup3,
    &s_columnupup2,
    &s_columnupup1,


    &s_spinupblade16,
    &s_spinupblade15,
    &s_spinupblade14,
    &s_spinupblade13,
    &s_spinupblade12,
    &s_spinupblade11,
    &s_spinupblade10,
    &s_spinupblade9,
    &s_spinupblade8,
    &s_spinupblade7,
    &s_spinupblade6,
    &s_spinupblade5,
    &s_spinupblade4,
    &s_spinupblade3,
    &s_spinupblade2,
    &s_spinupblade1,


    &s_spindownblade16,
    &s_spindownblade15,
    &s_spindownblade14,
    &s_spindownblade13,
    &s_spindownblade12,
    &s_spindownblade11,
    &s_spindownblade10,
    &s_spindownblade9,
    &s_spindownblade8,
    &s_spindownblade7,
    &s_spindownblade6,
    &s_spindownblade5,
    &s_spindownblade4,
    &s_spindownblade3,
    &s_spindownblade2,
    &s_spindownblade1,


    &s_bouldersink9,
    &s_bouldersink8,
    &s_bouldersink7,
    &s_bouldersink6,
    &s_bouldersink5,
    &s_bouldersink4,
    &s_bouldersink3,
    &s_bouldersink2,
    &s_bouldersink1,
    &s_boulderroll8,
    &s_boulderroll7,
    &s_boulderroll6,
    &s_boulderroll5,
    &s_boulderroll4,
    &s_boulderroll3,
    &s_boulderroll2,
    &s_boulderroll1,
    &s_boulderdrop12,
    &s_boulderdrop11,
    &s_boulderdrop10,
    &s_boulderdrop9,
    &s_boulderdrop8,
    &s_boulderdrop7,
    &s_boulderdrop6,
    &s_boulderdrop5,
    &s_boulderdrop4,
    &s_boulderdrop3,
    &s_boulderdrop2,
    &s_boulderdrop1,
    &s_boulderspawn,


    &s_gunfire2,
    &s_gunfire1,
    &s_gunstand,
    &s_gunraise4,
    &s_gunraise3,
    &s_gunraise2,
    &s_gunraise1,
    &s_gunlower3,
    &s_gunlower2,
    &s_gunlower1,
    &s_gundead,
    &s_gundie1,
    &s_4waygunfire1,
    &s_4waygunfire2,
    &s_4waygun,



    &s_kessphere8,
    &s_kessphere7,
    &s_kessphere6,
    &s_kessphere5,
    &s_kessphere4,
    &s_kessphere3,
    &s_kessphere2,
    &s_kessphere1,


    &s_slop1,
    &s_slop2,
    &s_slop3,
    &s_slop4,

    &s_batblast1,
    &s_batblast2,
    &s_batblast3,
    &s_batblast4,

    &s_serialdog4,
    &s_serialdog3,
    &s_serialdog2,
    &s_serialdog,
    &s_serialdogattack,
    &s_doguse,
    &s_doglick,
    &s_dogwait,




#endif //SHAREWARE

};
#endif
