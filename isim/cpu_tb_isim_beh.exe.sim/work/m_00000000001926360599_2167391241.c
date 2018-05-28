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
static const char *ng0 = "F:/school files/computerarchitecture/sbise/cpu_rij/registerstack.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};
static int ng10[] = {9, 0};
static int ng11[] = {10, 0};
static int ng12[] = {11, 0};
static int ng13[] = {12, 0};
static int ng14[] = {13, 0};
static int ng15[] = {14, 0};
static int ng16[] = {15, 0};
static int ng17[] = {16, 0};
static int ng18[] = {17, 0};
static int ng19[] = {18, 0};
static int ng20[] = {19, 0};
static int ng21[] = {20, 0};
static int ng22[] = {21, 0};
static int ng23[] = {22, 0};
static int ng24[] = {23, 0};
static int ng25[] = {24, 0};
static int ng26[] = {25, 0};
static int ng27[] = {26, 0};
static int ng28[] = {27, 0};
static int ng29[] = {28, 0};
static int ng30[] = {29, 0};
static int ng31[] = {30, 0};
static int ng32[] = {31, 0};
static const char *ng33 = "At time %t, reset";
static unsigned int ng34[] = {0U, 0U};
static const char *ng35 = "At time %t, write %h with %h";



static int sp_clear(char *t1, char *t2)
{
    char t7[8];
    char t8[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    int t26;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 3160);
    t9 = (t1 + 3160);
    t10 = (t9 + 72U);
    t11 = *((char **)t10);
    t12 = (t1 + 3160);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t11, t14, 2, 1, t15, 32, 1);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t8 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(18, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(19, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(20, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(21, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(22, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(23, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(24, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(25, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(26, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(28, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng23)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng25)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng26)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(43, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng27)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng28)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(45, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng29)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng30)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng31)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB66;

LAB67:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3160);
    t6 = (t1 + 3160);
    t9 = (t6 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 3160);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng32)));
    xsi_vlog_generic_convert_array_indices(t7, t8, t10, t13, 2, 1, t14, 32, 1);
    t15 = (t7 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (!(t17));
    t16 = (t8 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB68;

LAB69:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB7;

LAB8:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB9;

LAB10:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB11;

LAB12:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB13;

LAB14:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB15;

LAB16:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB17;

LAB18:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB19;

LAB20:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB21;

LAB22:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB23;

LAB24:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB25;

LAB26:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB27;

LAB28:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB29;

LAB30:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB31;

LAB32:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB33;

LAB34:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB35;

LAB36:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB37;

LAB38:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB39;

LAB40:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB41;

LAB42:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB43;

LAB44:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB45;

LAB46:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB47;

LAB48:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB49;

LAB50:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB51;

LAB52:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB53;

LAB54:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB55;

LAB56:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB57;

LAB58:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB59;

LAB60:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB61;

LAB62:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB63;

LAB64:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB65;

LAB66:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB67;

LAB68:    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t8);
    t25 = (t23 - t24);
    t26 = (t25 + 1);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t8), t26, 0LL);
    goto LAB69;

}

static void Initial_52_0(char *t0)
{
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
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 4080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3888);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB6:    t5 = (t0 + 3984);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB8:    if (t13 != 0)
        goto LAB9;

LAB4:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB5:    t14 = (t0 + 3984);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 3888);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);

LAB1:    return;
LAB7:;
LAB9:    t5 = (t0 + 4080U);
    *((char **)t5) = &&LAB6;
    goto LAB1;

}

static void Always_54_1(char *t0)
{
    char t11[16];
    char t24[8];
    char t28[8];
    char t41[8];
    char t47[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    int t84;
    int t85;
    int t86;

LAB0:    t1 = (t0 + 4328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5144);
    *((int *)t2) = 1;
    t3 = (t0 + 4360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 2440U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    memset(t24, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t2) != 0)
        goto LAB18;

LAB19:    t5 = (t24 + 4);
    t25 = *((unsigned int *)t24);
    t26 = *((unsigned int *)t5);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB20;

LAB21:    memcpy(t47, t24, 8);

LAB22:    t74 = (t47 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t47);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(62, ng0);

LAB40:
LAB36:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t12 = xsi_vlog_time(t11, 1000.0000000000000, 1000.0000000000000);
    xsi_vlogfile_write(1, 0, 0, ng33, 2, t0, (char)118, t11, 64);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4136);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB12:    t5 = (t0 + 4232);
    t12 = *((char **)t5);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB14:    if (t19 != 0)
        goto LAB15;

LAB10:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB11:    t20 = (t0 + 4232);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 4136);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    goto LAB8;

LAB13:;
LAB15:    t5 = (t0 + 4328U);
    *((char **)t5) = &&LAB12;
    goto LAB1;

LAB16:    *((unsigned int *)t24) = 1;
    goto LAB19;

LAB18:    t4 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB19;

LAB20:    t12 = (t0 + 1960U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng34)));
    memset(t28, 0, 8);
    t14 = (t13 + 4);
    t15 = (t12 + 4);
    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t12);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t14);
    t37 = *((unsigned int *)t15);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB24;

LAB23:    if (t38 != 0)
        goto LAB25;

LAB26:    memset(t41, 0, 8);
    t17 = (t28 + 4);
    t42 = *((unsigned int *)t17);
    t43 = (~(t42));
    t44 = *((unsigned int *)t28);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t17) != 0)
        goto LAB29;

LAB30:    t48 = *((unsigned int *)t24);
    t49 = *((unsigned int *)t41);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t20 = (t24 + 4);
    t21 = (t41 + 4);
    t22 = (t47 + 4);
    t51 = *((unsigned int *)t20);
    t52 = *((unsigned int *)t21);
    t53 = (t51 | t52);
    *((unsigned int *)t22) = t53;
    t54 = *((unsigned int *)t22);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB22;

LAB24:    *((unsigned int *)t28) = 1;
    goto LAB26;

LAB25:    t16 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t41) = 1;
    goto LAB30;

LAB29:    t18 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB30;

LAB31:    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t22);
    *((unsigned int *)t47) = (t56 | t57);
    t23 = (t24 + 4);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t24);
    t60 = (~(t59));
    t61 = *((unsigned int *)t23);
    t62 = (~(t61));
    t63 = *((unsigned int *)t41);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t19 = (t60 & t62);
    t67 = (t64 & t66);
    t68 = (~(t19));
    t69 = (~(t67));
    t70 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t70 & t68);
    t71 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t68);
    t73 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t73 & t69);
    goto LAB33;

LAB34:    xsi_set_current_line(59, ng0);

LAB37:    xsi_set_current_line(60, ng0);
    t80 = xsi_vlog_time(t11, 1000.0000000000000, 1000.0000000000000);
    t81 = (t0 + 1960U);
    t82 = *((char **)t81);
    t81 = (t0 + 2120U);
    t83 = *((char **)t81);
    xsi_vlogfile_write(1, 0, 0, ng35, 4, t0, (char)118, t11, 64, (char)118, t82, 5, (char)118, t83, 32);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 3160);
    t4 = (t0 + 3160);
    t5 = (t4 + 72U);
    t12 = *((char **)t5);
    t13 = (t0 + 3160);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t0 + 1960U);
    t17 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t24, t28, t12, t15, 2, 1, t17, 5, 2);
    t16 = (t24 + 4);
    t6 = *((unsigned int *)t16);
    t19 = (!(t6));
    t18 = (t28 + 4);
    t7 = *((unsigned int *)t18);
    t67 = (!(t7));
    t84 = (t19 && t67);
    if (t84 == 1)
        goto LAB38;

LAB39:    goto LAB36;

LAB38:    t8 = *((unsigned int *)t24);
    t9 = *((unsigned int *)t28);
    t85 = (t8 - t9);
    t86 = (t85 + 1);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t28), t86, 0LL);
    goto LAB39;

}

static void Cont_66_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 4576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5256);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5160);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_67_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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

LAB0:    t1 = (t0 + 4824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1640U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 5320);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 5176);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001926360599_2167391241_init()
{
	static char *pe[] = {(void *)Initial_52_0,(void *)Always_54_1,(void *)Cont_66_2,(void *)Cont_67_3};
	static char *se[] = {(void *)sp_clear};
	xsi_register_didat("work_m_00000000001926360599_2167391241", "isim/cpu_tb_isim_beh.exe.sim/work/m_00000000001926360599_2167391241.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
