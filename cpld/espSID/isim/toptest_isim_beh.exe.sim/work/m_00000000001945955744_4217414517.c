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
static const char *ng0 = "C:/Users/blark/Desktop/ESP8266_SID_Server/cpld/espSID/clock_divider.v";
static int ng1[] = {2, 0};
static int ng2[] = {1, 0};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};



static void Always_8_0(char *t0)
{
    char t11[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 3120);
    *((int *)t2) = 1;
    t3 = (t0 + 2832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);

LAB5:    xsi_set_current_line(10, ng0);
    t4 = (t0 + 1880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    t9 = (t0 + 608);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_multiply(t11, 32, t7, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_divide(t12, 32, t8, 32, t11, 32);
    t9 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t12, 32, t9, 32);
    memset(t14, 0, 8);
    t15 = (t6 + 4);
    t16 = (t13 + 4);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB9;

LAB6:    if (t26 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t14) = 1;

LAB9:    t30 = (t14 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t14);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 4, t4, 4, t5, 4);
    t6 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t6, t11, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB8:    t29 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(10, ng0);

LAB13:    xsi_set_current_line(11, ng0);
    t36 = ((char*)((ng3)));
    t37 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t37, t36, 0, 0, 4, 0LL);
    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t5) == 0)
        goto LAB14;

LAB16:    t6 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t6) = 1;

LAB17:    t7 = (t11 + 4);
    t8 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    *((unsigned int *)t11) = t23;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t8) != 0)
        goto LAB19;

LAB18:    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t31 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t31 & 1U);
    t9 = (t0 + 1720);
    xsi_vlogvar_wait_assign_value(t9, t11, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    *((unsigned int *)t11) = 1;
    goto LAB17;

LAB19:    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t8);
    *((unsigned int *)t11) = (t24 | t25);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t7) = (t26 | t27);
    goto LAB18;

}


extern void work_m_00000000001945955744_4217414517_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_00000000001945955744_4217414517", "isim/toptest_isim_beh.exe.sim/work/m_00000000001945955744_4217414517.didat");
	xsi_register_executes(pe);
}
