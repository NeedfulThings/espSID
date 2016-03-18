/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/blark/Desktop/ESP8266_SID_Server/cpld/espSID/toptest.v";
static const char *ng1 = "";
static const char *ng2 = ": sid_ram %b, addr %b, data_in %b, ram_out %b, en %b";
static const char *ng3 = ": tmp %b, bit_cnt %d, write_en %b, addr %b, data %b, ss %b";
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};
static int ng6[] = {200, 0};
static int ng7[] = {25, 0};
static int ng8[] = {8, 0};



static void Always_31_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3456);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1768);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_33_1(char *t0)
{
    char t4[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t0, (char)118, t4, 64);
    t6 = (t0 + 6176);
    t7 = *((char **)t6);
    t8 = ((((char*)(t7))) + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 6208);
    t11 = *((char **)t10);
    t12 = ((((char*)(t11))) + 40U);
    t13 = *((char **)t12);
    t12 = (t0 + 6232);
    t14 = *((char **)t12);
    t15 = ((((char*)(t14))) + 40U);
    t16 = *((char **)t15);
    t15 = (t0 + 6256);
    t17 = *((char **)t15);
    t18 = ((((char*)(t17))) + 40U);
    t19 = *((char **)t18);
    t18 = (t0 + 6288);
    t20 = *((char **)t18);
    t21 = ((((char*)(t20))) + 40U);
    t22 = *((char **)t21);
    xsi_vlogfile_write(1, 0, 0, ng2, 6, t0, (char)118, t9, 256, (char)118, t13, 5, (char)118, t16, 8, (char)118, t19, 8, (char)118, t22, 1);
    xsi_set_current_line(35, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t0, (char)118, t4, 64);
    t3 = (t0 + 6312);
    t5 = *((char **)t3);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 6336);
    t9 = *((char **)t8);
    t10 = ((((char*)(t9))) + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 6368);
    t13 = *((char **)t12);
    t14 = ((((char*)(t13))) + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 6392);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 6416);
    t21 = *((char **)t20);
    t22 = ((((char*)(t21))) + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 6440);
    t25 = *((char **)t24);
    t26 = ((((char*)(t25))) + 40U);
    t27 = *((char **)t26);
    xsi_vlogfile_write(1, 0, 0, ng3, 7, t0, (char)118, t7, 7, (char)118, t11, 8, (char)118, t15, 1, (char)118, t19, 5, (char)118, t23, 8, (char)118, t27, 1);
    goto LAB2;

}

static void Initial_38_2(char *t0)
{
    char t6[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);

LAB4:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB7:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t13 = (t0 + 3952);
    xsi_process_wait(t13, 25000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(52, ng0);
    t14 = ((char*)((ng5)));
    t15 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t5) == 0)
        goto LAB12;

LAB14:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB15:    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB17;

LAB16:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 1U);
    t15 = (t0 + 2408);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB12:    *((unsigned int *)t6) = 1;
    goto LAB15;

LAB17:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t20 | t21);
    goto LAB16;

LAB18:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB20:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB21:    xsi_set_current_line(63, ng0);

LAB23:    xsi_set_current_line(64, ng0);
    t13 = (t0 + 2408);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t24, 0, 8);
    t25 = (t15 + 4);
    t16 = *((unsigned int *)t25);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t25) == 0)
        goto LAB24;

LAB26:    t26 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t26) = 1;

LAB27:    t27 = (t24 + 4);
    t28 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (~(t21));
    *((unsigned int *)t24) = t22;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB29;

LAB28:    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 1U);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t33 & 1U);
    t34 = (t0 + 2408);
    xsi_vlogvar_assign_value(t34, t24, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB30:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB20;

LAB24:    *((unsigned int *)t24) = 1;
    goto LAB27;

LAB29:    t23 = *((unsigned int *)t24);
    t29 = *((unsigned int *)t28);
    *((unsigned int *)t24) = (t23 | t29);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t30 | t31);
    goto LAB28;

LAB31:    xsi_set_current_line(65, ng0);

LAB33:    xsi_set_current_line(66, ng0);
    t13 = (t0 + 3952);
    xsi_process_wait(t13, 25000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(67, ng0);
    t14 = ((char*)((ng5)));
    t15 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB30;

LAB36:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}


extern void work_m_00000000000224382036_0617297638_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Always_33_1,(void *)Initial_38_2};
	xsi_register_didat("work_m_00000000000224382036_0617297638", "isim/toptest_isim_beh.exe.sim/work/m_00000000000224382036_0617297638.didat");
	xsi_register_executes(pe);
}
