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
	Module	        : SYSTICK
    Generated Date	: Thu, 12, Jul 2018  
	File Path	    : DefaultComponent/DefaultConfig/bsw/_03_mcal/systick/src/SYSTICK.c               
***********************************************************************************************************************
 
***********************************************************************************************************************/


#include "SYSTICK.h"
#include "cmsis.h"
/*## package bsw::_03_mcal::systick::src */

/*## class TopLevel::SYSTICK */
/*
* Array which holds the addresses of the ISR for Timer0 and Timer1
* 
*/
//TODO: @Khattab dummy values for compile now clock and os time base should be configured
#define SYSTEM_CORE_CLOCK 12000000LL
#define OS_BASE_TICK_TIMER 1LL
#define SYST_RVR_VALUE ((SYSTEM_CORE_CLOCK * OS_BASE_TICK_TIMER)/(1000000ULL))

/*## attribute ISR_TimerNFctPtr_apfct */
/*#[ ignore */
/**************************************************************************************************
* FullName: 		  bsw::_03_mcal::systick::src::SYSTICK.SYSTick_GetCounterValue
* Description:   
*
* Requirements:     
*
* Arguments:    
*  
*
* Return:       uint32
**************************************************************************************************/
/*#]*/
uint32 SYSTick_GetCounterValue(void)
{
    /* Start #GUID ba346627-58f3-4968-89a9-9663993b2c80#*/
    return SysTick->VAL;
    /* End #GUID ba346627-58f3-4968-89a9-9663993b2c80#*/
}

/*#[ ignore */
/**************************************************************************************************
* FullName: 		  bsw::_03_mcal::systick::src::SYSTICK.SYSTick_init
* Description:   
*
* Requirements:     
*
* Arguments:    
*  
*
* Return:       void
**************************************************************************************************/
/*#]*/
void SYSTick_init(void)
{
    /* Start #GUID 6ad8434d-6774-48ef-a5d8-1f0c98415c7f#*/
    SysTick->CTRL  =  0 ; /*disable SysTick*/
    SysTick->LOAD  = SYST_RVR_VALUE;   /*set comapre register for SysTick*/
    SysTick->VAL   =  0 ; /*reset current value*/
    SysTick->CTRL  = (SysTick_CTRL_CLKSOURCE_Msk |
                     SysTick_CTRL_TICKINT_Msk   |
                     SysTick_CTRL_ENABLE_Msk );                         /* Enable SysTick IRQ and SysTick Timer */
    /* End #GUID 6ad8434d-6774-48ef-a5d8-1f0c98415c7f#*/
}

/*********************************************************************
	File Name : SYSTICK
*********************************************************************/
