/***********************************************************************************************************************
*
* (C) All rights reserved by ROBERT BOSCH GMBH
*
************************************************************************************************************************
*
*    __   __   ___  ___
*   /_ / /  / /__  /    /__/
*  /__/ /__/ __ / /__  /  /
*
************************************************************************************************************************
	Rhapsody in C	: 8.2.1
	Login		    : kht5fe
	Package         : DefaultComponent
	Module	        : ISR_HDLR
    Generated Date	: Tue, 7, Aug 2018
	File Path	    : DefaultComponent/DefaultConfig/bsw/_03_mcal/isr_hdlr/src/ISR_HDLR.c
***********************************************************************************************************************

***********************************************************************************************************************/


#include "ISR_HDLR.h"
//#include "core_cm0.h"
//#include "cmsis_43xx_m0app.h"
#include "cmsis.h"

IRQ ISR_HardFaultException(void)
{
    /* Start #GUID f77242d1-97c9-4d4e-b92a-d184ccb95bb1#*/
    /*for deubuging address of PC for the instruction that causes the fault will be stored in R0/
     *
     */
#if 0
    /* for ARM compiler 5 */
    __asm
    {
        movs r0,#0
        MRS r0, MSP
        ADDS r0,r0,#0x18
        LDR   r0,[r0,#0]
    }
    __asm__("BKPT #0");
#endif
    /*for RTL simulation we will get NMI if Hardfault exceptions appear and no debugger is connected @ BKPT*/
    while(1)
    {

    }
    /* End #GUID f77242d1-97c9-4d4e-b92a-d184ccb95bb1#*/
}
void ISR_M0_APP_Reset_IRQn                        (void){}
void ISR_M0_APP_NonMaskableInt_IRQn               (void){}
void ISR_M0_APP_HardFault_IRQn                    (void){ /* TODO: (aco1fe) reset handling needed! */ NVIC_SystemReset(); }
void ISR_M0_APP_SVCall_IRQn                       (void){}
void ISR_M0_APP_DebugMonitor_IRQn                 (void){}
void ISR_M0_APP_PendSV_IRQn                       (void){}
void ISR_M0_APP_RTC_IRQn                          (void){}
//void ISR_M0_APP_M4_IRQn                           (void){}
void ISR_M0_APP_DMA_IRQn                          (void){}
void ISR_M0_APP_RESERVED1_IRQn                    (void){}
void ISR_M0_APP_FLASHEEPROM_ATIMER_IRQn           (void){}
void ISR_M0_APP_ETHERNET_IRQn                     (void){}
void ISR_M0_APP_SDIO_IRQn                         (void){}
void ISR_M0_APP_LCD_IRQn                          (void){}
void ISR_M0_APP_USB0_IRQn                         (void){}
void ISR_M0_APP_USB1_IRQn                         (void){}
void ISR_M0_APP_SCT_IRQn                          (void){}
//void ISR_M0_APP_RITIMER_WWDT_IRQn                 (void){}
void ISR_M0_APP_TIMER0_IRQn                       (void){}
void ISR_M0_APP_GINT1_IRQn                        (void){}
void ISR_M0_APP_PIN_INT4_IRQn                     (void){}
void ISR_M0_APP_TIMER3_IRQn                       (void){}
void ISR_M0_APP_MCPWM_IRQn                        (void){}
void ISR_M0_APP_ADC0_IRQn                         (void){}
//void ISR_M0_APP_I2C0_IRQn                         (void){}
void ISR_M0_APP_I2C1_IRQn                         (void){}
void ISR_M0_APP_SGPIO_INT_IRQn                    (void){}
void ISR_M0_APP_SPI_INT_IRQn                      (void){}
void ISR_M0_APP_DAC_IRQn                          (void){}
void ISR_M0_APP_ADC1_IRQn                         (void){}
void ISR_M0_APP_SSP0_IRQn                         (void){}
void ISR_M0_APP_SSP1_IRQn                         (void){}
void ISR_M0_APP_EVENTROUTER_IRQn                  (void){}
void ISR_M0_APP_USART0_IRQn                       (void){}
void ISR_M0_APP_UART1_IRQn                        (void){}
void ISR_M0_APP_USART2_IRQn                       (void){}
//void ISR_M0_APP_C_CAN1_IRQn                       (void){}
void ISR_M0_APP_USART3_IRQn                       (void){}
void ISR_M0_APP_I2S0_IRQn                         (void){}
void ISR_M0_APP_I2S1_IRQn                         (void){}
void ISR_M0_APP_QEI_IRQn                          (void){}
//void ISR_M0_APP_C_CAN0_IRQn                       (void){}
void ISR_M0_APP_ADCHS_IRQn                        (void){}
void ISR_M0_APP_M0SUB_IRQn                        (void){}
