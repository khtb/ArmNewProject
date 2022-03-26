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
	File Path	    : DefaultComponent/DefaultConfig/bsw/_03_mcal/systick/api/SYSTICK.h
***********************************************************************************************************************
          

***********************************************************************************************************************/

#ifndef bsw__03_mcal_systick_api_SYSTICK_H
#define bsw__03_mcal_systick_api_SYSTICK_H

//#include "OS_CFG.h"
#include "Std_Types.h"
/*## package bsw::_03_mcal::systick::api */

/*## class TopLevel::SYSTICK */
/*#[ ignore */
 
/*#]*/
//#define SYST_RVR_VALUE ((SYSTEM_CORE_CLOCK * OS_BASE_TICK_TIMER)/(1000000ULL))
/***    User explicit entries    ***/


/* Operations */

/**************************************************************************************************
* FullName: 		  bsw::_03_mcal::systick::api::SYSTICK.SYSTick_GetCounterValue
* Description:   
*
* Requirements:     
*
* Arguments:    
*  
*
* Return:       uint32
**************************************************************************************************/
/*## operation SYSTick_GetCounterValue() */
extern uint32 SYSTick_GetCounterValue(void);

/**************************************************************************************************
* FullName: 		  bsw::_03_mcal::systick::api::SYSTICK.SYSTick_init
* Description:   
*
* Requirements:     
*
* Arguments:    
*  
*
* Return:       void
**************************************************************************************************/
/*## operation SYSTick_init() */
extern void SYSTick_init(void);

#endif
/*********************************************************************
	File Name	: SYSTICK
*********************************************************************/
