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
static const char *ng0 = "F:/school files/computerarchitecture/sbise/cpu_rij/controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {8U, 0U};
static unsigned int ng3[] = {3U, 3U};
static unsigned int ng4[] = {1U, 1U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {32U, 0U};
static unsigned int ng8[] = {34U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {36U, 0U};
static unsigned int ng11[] = {37U, 0U};
static unsigned int ng12[] = {38U, 0U};
static unsigned int ng13[] = {2U, 0U};
static unsigned int ng14[] = {39U, 0U};
static unsigned int ng15[] = {3U, 0U};
static unsigned int ng16[] = {43U, 0U};
static unsigned int ng17[] = {6U, 0U};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {12U, 0U};
static unsigned int ng20[] = {14U, 0U};
static unsigned int ng21[] = {11U, 0U};
static unsigned int ng22[] = {35U, 0U};
static unsigned int ng23[] = {7U, 7U};
static unsigned int ng24[] = {3U, 1U};



static void Always_38_0(char *t0)
{
    char t9[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
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
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 6528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6848);
    *((int *)t2) = 1;
    t3 = (t0 + 6560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 3768U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);

LAB30:    xsi_set_current_line(41, ng0);
    t7 = (t0 + 3928U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t10 = (t8 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB34;

LAB31:    if (t21 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t9) = 1;

LAB34:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(50, ng0);

LAB39:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);

LAB40:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB55;

LAB56:
LAB57:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);

LAB37:    goto LAB29;

LAB9:    xsi_set_current_line(70, ng0);

LAB58:    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng6)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 2);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB29;

LAB11:    xsi_set_current_line(80, ng0);

LAB59:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng6)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 2);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB29;

LAB13:    xsi_set_current_line(90, ng0);

LAB60:    xsi_set_current_line(91, ng0);
    t4 = ((char*)((ng6)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 2);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng13)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB29;

LAB15:    xsi_set_current_line(100, ng0);

LAB61:    xsi_set_current_line(101, ng0);
    t4 = ((char*)((ng6)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 2);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng17)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB29;

LAB17:    xsi_set_current_line(110, ng0);

LAB62:    xsi_set_current_line(111, ng0);
    t4 = ((char*)((ng6)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 2);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB29;

LAB19:    xsi_set_current_line(120, ng0);

LAB63:    xsi_set_current_line(121, ng0);
    t4 = ((char*)((ng3)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 2);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB29;

LAB21:    xsi_set_current_line(130, ng0);

LAB64:    xsi_set_current_line(131, ng0);
    t4 = ((char*)((ng3)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 2);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4088U);
    t4 = *((char **)t2);
    memset(t33, 0, 8);
    t2 = (t4 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t2) != 0)
        goto LAB67;

LAB68:    t8 = (t33 + 4);
    t17 = *((unsigned int *)t33);
    t18 = *((unsigned int *)t8);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB69;

LAB70:    t20 = *((unsigned int *)t33);
    t21 = (~(t20));
    t22 = *((unsigned int *)t8);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t8) > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t33) > 0)
        goto LAB75;

LAB76:    memcpy(t9, t11, 8);

LAB77:    t24 = (t0 + 5608);
    xsi_vlogvar_assign_value(t24, t9, 0, 0, 2);
    goto LAB29;

LAB23:    xsi_set_current_line(140, ng0);

LAB78:    xsi_set_current_line(141, ng0);
    t4 = ((char*)((ng3)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 2);
    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 4088U);
    t4 = *((char **)t2);
    memset(t33, 0, 8);
    t2 = (t4 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t2) != 0)
        goto LAB81;

LAB82:    t8 = (t33 + 4);
    t17 = *((unsigned int *)t33);
    t18 = *((unsigned int *)t8);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB83;

LAB84:    t20 = *((unsigned int *)t33);
    t21 = (~(t20));
    t22 = *((unsigned int *)t8);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t8) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t33) > 0)
        goto LAB89;

LAB90:    memcpy(t9, t11, 8);

LAB91:    t24 = (t0 + 5608);
    xsi_vlogvar_assign_value(t24, t9, 0, 0, 2);
    goto LAB29;

LAB25:    xsi_set_current_line(150, ng0);

LAB92:    xsi_set_current_line(151, ng0);
    t4 = ((char*)((ng3)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 2);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng23)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng15)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB29;

LAB27:    xsi_set_current_line(160, ng0);

LAB93:    xsi_set_current_line(161, ng0);
    t4 = ((char*)((ng24)));
    t7 = (t0 + 4488);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 2);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4648);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 4808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng24)));
    t4 = (t0 + 4968);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng23)));
    t4 = (t0 + 5128);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 5288);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 5448);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng15)));
    t4 = (t0 + 5608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    goto LAB29;

LAB33:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(41, ng0);

LAB38:    xsi_set_current_line(42, ng0);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 4488);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 2);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB37;

LAB41:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng5)));
    t7 = (t0 + 5128);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 3);
    goto LAB57;

LAB43:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng9)));
    t7 = (t0 + 5128);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 3);
    goto LAB57;

LAB45:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng1)));
    t7 = (t0 + 5128);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 3);
    goto LAB57;

LAB47:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng6)));
    t7 = (t0 + 5128);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 3);
    goto LAB57;

LAB49:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng13)));
    t7 = (t0 + 5128);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 3);
    goto LAB57;

LAB51:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng15)));
    t7 = (t0 + 5128);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 3);
    goto LAB57;

LAB53:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng17)));
    t7 = (t0 + 5128);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 3);
    goto LAB57;

LAB55:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng18)));
    t7 = (t0 + 5128);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 3);
    goto LAB57;

LAB65:    *((unsigned int *)t33) = 1;
    goto LAB68;

LAB67:    t7 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB68;

LAB69:    t10 = ((char*)((ng13)));
    goto LAB70;

LAB71:    t11 = ((char*)((ng1)));
    goto LAB72;

LAB73:    xsi_vlog_unsigned_bit_combine(t9, 2, t10, 2, t11, 2);
    goto LAB77;

LAB75:    memcpy(t9, t10, 8);
    goto LAB77;

LAB79:    *((unsigned int *)t33) = 1;
    goto LAB82;

LAB81:    t7 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB82;

LAB83:    t10 = ((char*)((ng1)));
    goto LAB84;

LAB85:    t11 = ((char*)((ng13)));
    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t9, 2, t10, 2, t11, 2);
    goto LAB91;

LAB89:    memcpy(t9, t10, 8);
    goto LAB91;

}


extern void work_m_00000000001370833542_4144471541_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000001370833542_4144471541", "isim/cpu_tb_isim_beh.exe.sim/work/m_00000000001370833542_4144471541.didat");
	xsi_register_executes(pe);
}
