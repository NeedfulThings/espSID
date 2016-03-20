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
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {1U, 0U};



static void Always_9_0(char *t0)
{
    char t14[8];
    char t15[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 2960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 3280);
    *((int *)t2) = 1;
    t3 = (t0 + 2992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(9, ng0);

LAB5:    xsi_set_current_line(10, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(12, ng0);

LAB10:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t11 = *((char **)t5);
    t5 = ((char*)((ng2)));
    t12 = (t0 + 608);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t5, 32, t13, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_divide(t15, 32, t11, 32, t14, 32);
    t12 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t15, 32, t12, 32);
    memset(t17, 0, 8);
    t18 = (t4 + 4);
    t19 = (t16 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t16);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t18);
    t10 = *((unsigned int *)t19);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB14;

LAB11:    if (t24 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t17) = 1;

LAB14:    t28 = (t17 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t17);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 4, t4, 4, t5, 4);
    t11 = (t0 + 2040);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 4, 0LL);

LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(10, ng0);

LAB9:    xsi_set_current_line(11, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB13:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(13, ng0);

LAB18:    xsi_set_current_line(14, ng0);
    t34 = ((char*)((ng4)));
    t35 = (t0 + 2040);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 4, 0LL);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t5) == 0)
        goto LAB19;

LAB21:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;

LAB22:    t12 = (t14 + 4);
    t13 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t14) = t21;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB24;

LAB23:    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 1U);
    t29 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t29 & 1U);
    t18 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t18, t14, 0, 0, 1, 0LL);
    goto LAB17;

LAB19:    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB24:    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t14) = (t22 | t23);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t24 | t25);
    goto LAB23;

}


extern void work_m_00000000003476265375_4217414517_init()
{
	static char *pe[] = {(void *)Always_9_0};
	xsi_register_didat("work_m_00000000003476265375_4217414517", "isim/newtest_isim_beh.exe.sim/work/m_00000000003476265375_4217414517.didat");
	xsi_register_executes(pe);
}
