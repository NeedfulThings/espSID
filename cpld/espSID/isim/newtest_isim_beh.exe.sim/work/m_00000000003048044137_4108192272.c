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
static const char *ng0 = "C:/Users/blark/Desktop/ESP8266_SID_Server/cpld/espSID/newtest.v";
static const char *ng1 = "";
static const char *ng2 = ": sid_ram %b, addr %b, data_in %b, ram_out %b, en %b";
static const char *ng3 = ": tmp %b, bit_cnt %d, write_en %b, addr %b, data %b, ss %b, data_rdy %b";
static const char *ng4 = ": running %b, reg_cnt %b, data_ready %b, sid_clk %b%b, posedge %b";
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};
static int ng7[] = {200, 0};
static int ng8[] = {25, 0};
static int ng9[] = {8, 0};



static void Always_41_0(char *t0)
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

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4256);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2568);
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
    t24 = (t0 + 2568);
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

static void Always_43_1(char *t0)
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
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5264);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t0, (char)118, t4, 64);
    t6 = (t0 + 7092);
    t7 = *((char **)t6);
    t8 = ((((char*)(t7))) + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 7124);
    t11 = *((char **)t10);
    t12 = ((((char*)(t11))) + 40U);
    t13 = *((char **)t12);
    t12 = (t0 + 7148);
    t14 = *((char **)t12);
    t15 = ((((char*)(t14))) + 40U);
    t16 = *((char **)t15);
    t15 = (t0 + 7172);
    t17 = *((char **)t15);
    t18 = ((((char*)(t17))) + 40U);
    t19 = *((char **)t18);
    t18 = (t0 + 7204);
    t20 = *((char **)t18);
    t21 = ((((char*)(t20))) + 40U);
    t22 = *((char **)t21);
    xsi_vlogfile_write(1, 0, 0, ng2, 6, t0, (char)118, t9, 256, (char)118, t13, 5, (char)118, t16, 8, (char)118, t19, 8, (char)118, t22, 1);
    xsi_set_current_line(46, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t0, (char)118, t4, 64);
    t3 = (t0 + 7228);
    t5 = *((char **)t3);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 7252);
    t9 = *((char **)t8);
    t10 = ((((char*)(t9))) + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 7284);
    t13 = *((char **)t12);
    t14 = ((((char*)(t13))) + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 7308);
    t17 = *((char **)t16);
    t18 = ((((char*)(t17))) + 56U);
    t19 = *((char **)t18);
    t20 = (t0 + 7332);
    t21 = *((char **)t20);
    t22 = ((((char*)(t21))) + 56U);
    t23 = *((char **)t22);
    t24 = (t0 + 7356);
    t25 = *((char **)t24);
    t26 = ((((char*)(t25))) + 40U);
    t27 = *((char **)t26);
    t26 = (t0 + 7380);
    t28 = *((char **)t26);
    t29 = ((((char*)(t28))) + 40U);
    t30 = *((char **)t29);
    xsi_vlogfile_write(1, 0, 0, ng3, 8, t0, (char)118, t7, 7, (char)118, t11, 8, (char)118, t15, 1, (char)118, t19, 5, (char)118, t23, 8, (char)118, t27, 1, (char)118, t30, 1);
    xsi_set_current_line(48, ng0);
    t2 = xsi_vlog_time(t4, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(0, 0, 0, ng1, 2, t0, (char)118, t4, 64);
    t3 = (t0 + 7412);
    t5 = *((char **)t3);
    t6 = ((((char*)(t5))) + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 7444);
    t9 = *((char **)t8);
    t10 = ((((char*)(t9))) + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 7476);
    t13 = *((char **)t12);
    t14 = ((((char*)(t13))) + 40U);
    t15 = *((char **)t14);
    t14 = (t0 + 7508);
    t16 = *((char **)t14);
    t17 = ((((char*)(t16))) + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 7540);
    t20 = *((char **)t19);
    t21 = ((((char*)(t20))) + 40U);
    t22 = *((char **)t21);
    t21 = (t0 + 7572);
    t23 = *((char **)t21);
    t24 = ((((char*)(t23))) + 40U);
    t25 = *((char **)t24);
    xsi_vlogfile_write(1, 0, 0, ng4, 7, t0, (char)118, t7, 1, (char)118, t11, 5, (char)118, t15, 1, (char)118, t18, 1, (char)118, t22, 1, (char)118, t25, 1);
    xsi_set_current_line(51, ng0);
    xsi_vlogfile_write(1, 0, 0, ng1, 1, t0);
    goto LAB2;

}

static void Initial_54_2(char *t0)
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

LAB0:    t1 = (t0 + 4944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 4752);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4752);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB7:    t2 = (t0 + 3368);
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
        goto LAB8;

LAB9:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4752);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB8:    xsi_set_current_line(69, ng0);

LAB10:    xsi_set_current_line(70, ng0);
    t13 = (t0 + 4752);
    xsi_process_wait(t13, 25000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(71, ng0);
    t14 = ((char*)((ng6)));
    t15 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 4752);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3208);
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
        goto LAB16;

LAB14:    if (*((unsigned int *)t5) == 0)
        goto LAB13;

LAB15:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB16:    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB18;

LAB17:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 1U);
    t15 = (t0 + 3208);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB7;

LAB13:    *((unsigned int *)t6) = 1;
    goto LAB16;

LAB18:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t20 | t21);
    goto LAB17;

LAB19:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 4752);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB21:    t2 = (t0 + 3528);
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
        goto LAB22;

LAB23:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4752);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB22:    xsi_set_current_line(85, ng0);

LAB24:    xsi_set_current_line(86, ng0);
    t13 = (t0 + 3208);
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
        goto LAB28;

LAB26:    if (*((unsigned int *)t25) == 0)
        goto LAB25;

LAB27:    t26 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t26) = 1;

LAB28:    t27 = (t24 + 4);
    t28 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (~(t21));
    *((unsigned int *)t24) = t22;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB30;

LAB29:    t32 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t32 & 1U);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t33 & 1U);
    t34 = (t0 + 3208);
    xsi_vlogvar_assign_value(t34, t24, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB31:    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB21;

LAB25:    *((unsigned int *)t24) = 1;
    goto LAB28;

LAB30:    t23 = *((unsigned int *)t24);
    t29 = *((unsigned int *)t28);
    *((unsigned int *)t24) = (t23 | t29);
    t30 = *((unsigned int *)t27);
    t31 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t30 | t31);
    goto LAB29;

LAB32:    xsi_set_current_line(87, ng0);

LAB34:    xsi_set_current_line(88, ng0);
    t13 = (t0 + 4752);
    xsi_process_wait(t13, 25000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(89, ng0);
    t14 = ((char*)((ng6)));
    t15 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4752);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB31;

LAB37:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB1;

}


extern void work_m_00000000003048044137_4108192272_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_43_1,(void *)Initial_54_2};
	xsi_register_didat("work_m_00000000003048044137_4108192272", "isim/newtest_isim_beh.exe.sim/work/m_00000000003048044137_4108192272.didat");
	xsi_register_executes(pe);
}
