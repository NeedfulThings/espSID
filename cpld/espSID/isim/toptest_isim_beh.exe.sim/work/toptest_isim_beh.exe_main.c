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
    work_m_00000000001945955744_4217414517_init();
    work_m_00000000000359799213_0450250084_init();
    work_m_00000000000251407495_3892401115_init();
    work_m_00000000000020563093_1319007292_init();
    work_m_00000000001394008287_2692595286_init();
    work_m_00000000000224382036_0617297638_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000224382036_0617297638");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
