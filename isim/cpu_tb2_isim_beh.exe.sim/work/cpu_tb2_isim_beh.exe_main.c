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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001370833542_4144471541_init();
    xilinxcorelib_ver_m_00000000001358910285_1420689212_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_2026876644_init();
    xilinxcorelib_ver_m_00000000001603977570_3204623426_init();
    work_m_00000000002489990758_0675113605_init();
    work_m_00000000000913498922_0471409371_init();
    work_m_00000000001926360599_2167391241_init();
    work_m_00000000002674859348_2587490486_init();
    xilinxcorelib_ver_m_00000000002621774987_2873523197_init();
    xilinxcorelib_ver_m_00000000001603977570_4158639433_init();
    work_m_00000000000403262735_2356217838_init();
    work_m_00000000000750190403_3785057798_init();
    work_m_00000000002331221512_0442731861_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002331221512_0442731861");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
