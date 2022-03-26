

#include "ISR_HDLR.h"
//#include "m0main.h"
/* Place table in separate section */
//#pragma arm section rodata="vectors"
__attribute__ ((used,section("vectors")))
ExecFuncPtr vector_table[] =
{
    &Image$$ARM_LIB_STACKHEAP$$ZI$$Limit, /* Initial Stack Pointer, from linker-generated symbol */
    &__main,                          /* Initial PC, set to entry point    */
    &ISR_M0_APP_NonMaskableInt_IRQn,
    &ISR_M0_APP_HardFault_IRQn,
    0, 0, 0, 0, 0, 0, 0,              /* Reserved */
    &ISR_M0_APP_SVCall_IRQn,                  /* SVCall Handler */
    0, 0,                             /* Reserved */
    &ISR_M0_APP_PendSV_IRQn,                     /* Only available with OS extensions */
    0,              /* Only available with OS extensions */
    /* Configurable interrupts start here...*/
    /* ... */
    &ISR_M0_APP_RTC_IRQn                        ,
    &ISR_M0_APP_M4_IRQn                         ,
    &ISR_M0_APP_DMA_IRQn                        ,
    &ISR_M0_APP_RESERVED1_IRQn                  ,
    &ISR_M0_APP_FLASHEEPROM_ATIMER_IRQn         ,
    &ISR_M0_APP_ETHERNET_IRQn                   ,
    &ISR_M0_APP_SDIO_IRQn                       ,
    &ISR_M0_APP_LCD_IRQn                        ,
    &ISR_M0_APP_USB0_IRQn                       ,
    &ISR_M0_APP_USB1_IRQn                       ,
    &ISR_M0_APP_SCT_IRQn                        ,
    &ISR_M0_APP_RITIMER_WWDT_IRQn               ,
    &ISR_M0_APP_TIMER0_IRQn                     ,
    &ISR_M0_APP_GINT1_IRQn                      ,
    &ISR_M0_APP_PIN_INT4_IRQn                   ,
    &ISR_M0_APP_TIMER3_IRQn                     ,
    &ISR_M0_APP_MCPWM_IRQn                      ,
    &ISR_M0_APP_ADC0_IRQn                       ,
    &ISR_M0_APP_I2C0_IRQn                       ,
    &ISR_M0_APP_SGPIO_INT_IRQn                  ,
    &ISR_M0_APP_SPI_INT_IRQn                    ,
    &ISR_M0_APP_ADC1_IRQn                       ,
    &ISR_M0_APP_SSP0_IRQn                       ,
    &ISR_M0_APP_EVENTROUTER_IRQn                ,
    &ISR_M0_APP_USART0_IRQn                     ,
    &ISR_M0_APP_UART1_IRQn                      ,
    &ISR_M0_APP_C_CAN1_IRQn                     ,
    &ISR_M0_APP_USART3_IRQn                     ,
    &ISR_M0_APP_I2S0_IRQn                       ,
    &ISR_M0_APP_C_CAN0_IRQn                     ,
    &ISR_M0_APP_ADCHS_IRQn                      ,
    &ISR_M0_APP_M0SUB_IRQn
};

