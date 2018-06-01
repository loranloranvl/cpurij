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
static const char *ng0 = "F:/school files/computerarchitecture/sbise/cpu_rij/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static const char *ng9 = "At time %t, do %b, with %h and %h, output %h";
static int ng10[] = {1, 0};
static int ng11[] = {0, 0};



static void Always_12_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t63[8];
    char t68[16];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t70;

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 4256);
    *((int *)t2) = 1;
    t3 = (t0 + 3472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB19;

LAB16:    if (t18 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;

LAB19:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB29;

LAB26:    if (t18 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;

LAB29:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB39:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB51;

LAB48:    if (t18 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t6) = 1;

LAB51:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB58;

LAB55:    if (t18 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t6) = 1;

LAB58:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB65;

LAB62:    if (t18 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t6) = 1;

LAB65:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB90;

LAB87:    if (t18 != 0)
        goto LAB89;

LAB88:    *((unsigned int *)t6) = 1;

LAB90:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB91;

LAB92:
LAB93:
LAB68:
LAB61:
LAB54:
LAB42:
LAB32:
LAB22:
LAB12:    xsi_set_current_line(29, ng0);
    t2 = xsi_vlog_time(t68, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1320U);
    t4 = *((char **)t3);
    t3 = (t0 + 1480U);
    t5 = *((char **)t3);
    t3 = (t0 + 1640U);
    t7 = *((char **)t3);
    t3 = (t0 + 2360);
    t8 = (t3 + 56U);
    t21 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng9, 6, t0, (char)118, t68, 64, (char)118, t4, 3, (char)118, t5, 32, (char)118, t7, 32, (char)118, t21, 32);
    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(14, ng0);
    t28 = (t0 + 1480U);
    t29 = *((char **)t28);
    t28 = (t0 + 1640U);
    t30 = *((char **)t28);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t28 = (t29 + 4);
    t35 = (t30 + 4);
    t36 = (t31 + 4);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB13;

LAB14:
LAB15:    t62 = (t0 + 2360);
    xsi_vlogvar_assign_value(t62, t31, 0, 0, 32);
    goto LAB12;

LAB13:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t31) = (t42 | t43);
    t44 = (t29 + 4);
    t45 = (t30 + 4);
    t46 = *((unsigned int *)t29);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t30);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t60 & t56);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    goto LAB15;

LAB18:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(16, ng0);
    t21 = (t0 + 1480U);
    t22 = *((char **)t21);
    t21 = (t0 + 1640U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t31 + 4);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    *((unsigned int *)t30) = t39;
    t40 = *((unsigned int *)t30);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB23;

LAB24:
LAB25:    t44 = (t0 + 2360);
    xsi_vlogvar_assign_value(t44, t31, 0, 0, 32);
    goto LAB22;

LAB23:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t31) = (t42 | t43);
    t35 = (t22 + 4);
    t36 = (t28 + 4);
    t46 = *((unsigned int *)t35);
    t47 = (~(t46));
    t48 = *((unsigned int *)t22);
    t54 = (t48 & t47);
    t49 = *((unsigned int *)t36);
    t50 = (~(t49));
    t51 = *((unsigned int *)t28);
    t55 = (t51 & t50);
    t52 = (~(t54));
    t53 = (~(t55));
    t56 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t56 & t52);
    t57 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t57 & t53);
    goto LAB25;

LAB28:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(18, ng0);
    t21 = (t0 + 1480U);
    t22 = *((char **)t21);
    t21 = (t0 + 1640U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    *((unsigned int *)t31) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t31 + 4);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    *((unsigned int *)t30) = t39;
    t40 = *((unsigned int *)t30);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB33;

LAB34:
LAB35:    t35 = (t0 + 2360);
    xsi_vlogvar_assign_value(t35, t31, 0, 0, 32);
    goto LAB32;

LAB33:    t42 = *((unsigned int *)t31);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t31) = (t42 | t43);
    goto LAB35;

LAB38:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(20, ng0);
    t21 = (t0 + 1480U);
    t22 = *((char **)t21);
    t21 = (t0 + 1640U);
    t28 = *((char **)t21);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t28);
    t34 = (t32 | t33);
    *((unsigned int *)t63) = t34;
    t21 = (t22 + 4);
    t29 = (t28 + 4);
    t30 = (t63 + 4);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    *((unsigned int *)t30) = t39;
    t40 = *((unsigned int *)t30);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB43;

LAB44:
LAB45:    memset(t31, 0, 8);
    t44 = (t31 + 4);
    t45 = (t63 + 4);
    t58 = *((unsigned int *)t63);
    t59 = (~(t58));
    *((unsigned int *)t31) = t59;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB47;

LAB46:    t66 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t66 & 4294967295U);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & 4294967295U);
    t62 = (t0 + 2360);
    xsi_vlogvar_assign_value(t62, t31, 0, 0, 32);
    goto LAB42;

LAB43:    t42 = *((unsigned int *)t63);
    t43 = *((unsigned int *)t30);
    *((unsigned int *)t63) = (t42 | t43);
    t35 = (t22 + 4);
    t36 = (t28 + 4);
    t46 = *((unsigned int *)t35);
    t47 = (~(t46));
    t48 = *((unsigned int *)t22);
    t54 = (t48 & t47);
    t49 = *((unsigned int *)t36);
    t50 = (~(t49));
    t51 = *((unsigned int *)t28);
    t55 = (t51 & t50);
    t52 = (~(t54));
    t53 = (~(t55));
    t56 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t56 & t52);
    t57 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t57 & t53);
    goto LAB45;

LAB47:    t60 = *((unsigned int *)t31);
    t61 = *((unsigned int *)t45);
    *((unsigned int *)t31) = (t60 | t61);
    t64 = *((unsigned int *)t44);
    t65 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t64 | t65);
    goto LAB46;

LAB50:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(22, ng0);
    t21 = (t0 + 1480U);
    t22 = *((char **)t21);
    t21 = (t0 + 1640U);
    t28 = *((char **)t21);
    xsi_vlog_unsigned_add(t68, 33, t22, 32, t28, 32);
    t21 = (t0 + 2360);
    xsi_vlogvar_assign_value(t21, t68, 0, 0, 32);
    t29 = (t0 + 2520);
    xsi_vlogvar_assign_value(t29, t68, 32, 0, 1);
    goto LAB54;

LAB57:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(24, ng0);
    t21 = (t0 + 1480U);
    t22 = *((char **)t21);
    t21 = (t0 + 1640U);
    t28 = *((char **)t21);
    xsi_vlog_unsigned_minus(t68, 33, t22, 32, t28, 32);
    t21 = (t0 + 2360);
    xsi_vlogvar_assign_value(t21, t68, 0, 0, 32);
    t29 = (t0 + 2520);
    xsi_vlogvar_assign_value(t29, t68, 32, 0, 1);
    goto LAB61;

LAB64:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(26, ng0);
    t21 = (t0 + 1480U);
    t22 = *((char **)t21);
    t21 = (t0 + 1640U);
    t28 = *((char **)t21);
    memset(t69, 0, 8);
    t21 = (t22 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB70;

LAB69:    t29 = (t28 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t22) < *((unsigned int *)t28))
        goto LAB71;

LAB72:    memset(t63, 0, 8);
    t35 = (t69 + 4);
    t32 = *((unsigned int *)t35);
    t33 = (~(t32));
    t34 = *((unsigned int *)t69);
    t37 = (t34 & t33);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t35) != 0)
        goto LAB76;

LAB77:    t44 = (t63 + 4);
    t39 = *((unsigned int *)t63);
    t40 = *((unsigned int *)t44);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB78;

LAB79:    t42 = *((unsigned int *)t63);
    t43 = (~(t42));
    t46 = *((unsigned int *)t44);
    t47 = (t43 || t46);
    if (t47 > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t44) > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t63) > 0)
        goto LAB84;

LAB85:    memcpy(t31, t62, 8);

LAB86:    t70 = (t0 + 2360);
    xsi_vlogvar_assign_value(t70, t31, 0, 0, 32);
    goto LAB68;

LAB70:    t30 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB72;

LAB71:    *((unsigned int *)t69) = 1;
    goto LAB72;

LAB74:    *((unsigned int *)t63) = 1;
    goto LAB77;

LAB76:    t36 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB77;

LAB78:    t45 = ((char*)((ng2)));
    goto LAB79;

LAB80:    t62 = ((char*)((ng1)));
    goto LAB81;

LAB82:    xsi_vlog_unsigned_bit_combine(t31, 32, t45, 32, t62, 32);
    goto LAB86;

LAB84:    memcpy(t31, t45, 8);
    goto LAB86;

LAB89:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB90;

LAB91:    xsi_set_current_line(28, ng0);
    t21 = (t0 + 1640U);
    t22 = *((char **)t21);
    t21 = (t0 + 1480U);
    t28 = *((char **)t21);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_lshift(t31, 32, t22, 32, t28, 32);
    t21 = (t0 + 2360);
    xsi_vlogvar_assign_value(t21, t31, 0, 0, 32);
    goto LAB93;

}

static void Cont_32_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2360);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 4368);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 4272);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng10)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng11)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Cont_33_2(char *t0)
{
    char t4[8];
    char t20[8];
    char t35[8];
    char t51[8];
    char t59[8];
    char t87[8];
    char t101[8];
    char t111[8];
    char t119[8];
    char t136[8];
    char t145[8];
    char t162[8];
    char t176[8];
    char t184[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
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
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    char *t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    char *t160;
    char *t161;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    int t208;
    int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    char *t218;
    char *t219;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    unsigned int t224;
    unsigned int t225;
    char *t226;
    unsigned int t227;
    unsigned int t228;
    char *t229;

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t21) != 0)
        goto LAB10;

LAB11:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (!(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    memcpy(t59, t20, 8);

LAB14:    memset(t87, 0, 8);
    t88 = (t59 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t59);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t88) != 0)
        goto LAB28;

LAB29:    t95 = (t87 + 4);
    t96 = *((unsigned int *)t87);
    t97 = *((unsigned int *)t95);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB30;

LAB31:    memcpy(t184, t87, 8);

LAB32:    t216 = (t0 + 4432);
    t217 = (t216 + 56U);
    t218 = *((char **)t217);
    t219 = (t218 + 56U);
    t220 = *((char **)t219);
    memset(t220, 0, 8);
    t221 = 1U;
    t222 = t221;
    t223 = (t184 + 4);
    t224 = *((unsigned int *)t184);
    t221 = (t221 & t224);
    t225 = *((unsigned int *)t223);
    t222 = (t222 & t225);
    t226 = (t220 + 4);
    t227 = *((unsigned int *)t220);
    *((unsigned int *)t220) = (t227 | t221);
    t228 = *((unsigned int *)t226);
    *((unsigned int *)t226) = (t228 | t222);
    xsi_driver_vfirst_trans(t216, 0, 0);
    t229 = (t0 + 4288);
    *((int *)t229) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB10:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1320U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng6)));
    memset(t35, 0, 8);
    t36 = (t34 + 4);
    t37 = (t33 + 4);
    t38 = *((unsigned int *)t34);
    t39 = *((unsigned int *)t33);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB18;

LAB15:    if (t47 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t35) = 1;

LAB18:    memset(t51, 0, 8);
    t52 = (t35 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t35);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t52) != 0)
        goto LAB21;

LAB22:    t60 = *((unsigned int *)t20);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t20 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t51) = 1;
    goto LAB22;

LAB21:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB22;

LAB23:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t20 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t20);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB25;

LAB26:    *((unsigned int *)t87) = 1;
    goto LAB29;

LAB28:    t94 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB29;

LAB30:    t99 = (t0 + 1480U);
    t100 = *((char **)t99);
    memset(t101, 0, 8);
    t99 = (t101 + 4);
    t102 = (t100 + 4);
    t103 = *((unsigned int *)t100);
    t104 = (t103 >> 31);
    t105 = (t104 & 1);
    *((unsigned int *)t101) = t105;
    t106 = *((unsigned int *)t102);
    t107 = (t106 >> 31);
    t108 = (t107 & 1);
    *((unsigned int *)t99) = t108;
    t109 = (t0 + 1640U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t109 = (t111 + 4);
    t112 = (t110 + 4);
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 31);
    t115 = (t114 & 1);
    *((unsigned int *)t111) = t115;
    t116 = *((unsigned int *)t112);
    t117 = (t116 >> 31);
    t118 = (t117 & 1);
    *((unsigned int *)t109) = t118;
    t120 = *((unsigned int *)t101);
    t121 = *((unsigned int *)t111);
    t122 = (t120 ^ t121);
    *((unsigned int *)t119) = t122;
    t123 = (t101 + 4);
    t124 = (t111 + 4);
    t125 = (t119 + 4);
    t126 = *((unsigned int *)t123);
    t127 = *((unsigned int *)t124);
    t128 = (t126 | t127);
    *((unsigned int *)t125) = t128;
    t129 = *((unsigned int *)t125);
    t130 = (t129 != 0);
    if (t130 == 1)
        goto LAB33;

LAB34:
LAB35:    t133 = (t0 + 2360);
    t134 = (t133 + 56U);
    t135 = *((char **)t134);
    memset(t136, 0, 8);
    t137 = (t136 + 4);
    t138 = (t135 + 4);
    t139 = *((unsigned int *)t135);
    t140 = (t139 >> 31);
    t141 = (t140 & 1);
    *((unsigned int *)t136) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 >> 31);
    t144 = (t143 & 1);
    *((unsigned int *)t137) = t144;
    t146 = *((unsigned int *)t119);
    t147 = *((unsigned int *)t136);
    t148 = (t146 ^ t147);
    *((unsigned int *)t145) = t148;
    t149 = (t119 + 4);
    t150 = (t136 + 4);
    t151 = (t145 + 4);
    t152 = *((unsigned int *)t149);
    t153 = *((unsigned int *)t150);
    t154 = (t152 | t153);
    *((unsigned int *)t151) = t154;
    t155 = *((unsigned int *)t151);
    t156 = (t155 != 0);
    if (t156 == 1)
        goto LAB36;

LAB37:
LAB38:    t159 = (t0 + 2520);
    t160 = (t159 + 56U);
    t161 = *((char **)t160);
    t163 = *((unsigned int *)t145);
    t164 = *((unsigned int *)t161);
    t165 = (t163 ^ t164);
    *((unsigned int *)t162) = t165;
    t166 = (t145 + 4);
    t167 = (t161 + 4);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t166);
    t170 = *((unsigned int *)t167);
    t171 = (t169 | t170);
    *((unsigned int *)t168) = t171;
    t172 = *((unsigned int *)t168);
    t173 = (t172 != 0);
    if (t173 == 1)
        goto LAB39;

LAB40:
LAB41:    memset(t176, 0, 8);
    t177 = (t162 + 4);
    t178 = *((unsigned int *)t177);
    t179 = (~(t178));
    t180 = *((unsigned int *)t162);
    t181 = (t180 & t179);
    t182 = (t181 & 1U);
    if (t182 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t177) != 0)
        goto LAB44;

LAB45:    t185 = *((unsigned int *)t87);
    t186 = *((unsigned int *)t176);
    t187 = (t185 & t186);
    *((unsigned int *)t184) = t187;
    t188 = (t87 + 4);
    t189 = (t176 + 4);
    t190 = (t184 + 4);
    t191 = *((unsigned int *)t188);
    t192 = *((unsigned int *)t189);
    t193 = (t191 | t192);
    *((unsigned int *)t190) = t193;
    t194 = *((unsigned int *)t190);
    t195 = (t194 != 0);
    if (t195 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB32;

LAB33:    t131 = *((unsigned int *)t119);
    t132 = *((unsigned int *)t125);
    *((unsigned int *)t119) = (t131 | t132);
    goto LAB35;

LAB36:    t157 = *((unsigned int *)t145);
    t158 = *((unsigned int *)t151);
    *((unsigned int *)t145) = (t157 | t158);
    goto LAB38;

LAB39:    t174 = *((unsigned int *)t162);
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t162) = (t174 | t175);
    goto LAB41;

LAB42:    *((unsigned int *)t176) = 1;
    goto LAB45;

LAB44:    t183 = (t176 + 4);
    *((unsigned int *)t176) = 1;
    *((unsigned int *)t183) = 1;
    goto LAB45;

LAB46:    t196 = *((unsigned int *)t184);
    t197 = *((unsigned int *)t190);
    *((unsigned int *)t184) = (t196 | t197);
    t198 = (t87 + 4);
    t199 = (t176 + 4);
    t200 = *((unsigned int *)t87);
    t201 = (~(t200));
    t202 = *((unsigned int *)t198);
    t203 = (~(t202));
    t204 = *((unsigned int *)t176);
    t205 = (~(t204));
    t206 = *((unsigned int *)t199);
    t207 = (~(t206));
    t208 = (t201 & t203);
    t209 = (t205 & t207);
    t210 = (~(t208));
    t211 = (~(t209));
    t212 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t212 & t210);
    t213 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t213 & t211);
    t214 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t214 & t210);
    t215 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t215 & t211);
    goto LAB48;

}


extern void work_m_00000000002674859348_2587490486_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Cont_32_1,(void *)Cont_33_2};
	xsi_register_didat("work_m_00000000002674859348_2587490486", "isim/cpu_tb2_isim_beh.exe.sim/work/m_00000000002674859348_2587490486.didat");
	xsi_register_executes(pe);
}
