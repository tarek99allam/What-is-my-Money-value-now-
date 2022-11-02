/**************************************************************************
 * @name   : APP.H
 * @brief  : enum of any error
 * @author : TAREK ALLAM
 * ************************************************************************
 */

#ifndef _APP_H_
#define _APP_H_
/*************************************** START INCLUDES ****************************************/
#include "errorState.h"
#include "stdTypes.h"
#include <stdio.h>

/*************************************** END INCLUDES ****************************************/
/*************************************** START DEFINES ****************************************/

#define USD_NOW 24.2
#define USD_BEFOR 19.62
#define THE_BONUS 300

/*************************************** END DEFINES ****************************************/

ES_t change_in_value(uint32 money_or_salary, float32 dollar_befor, float32 dollar_after, uint32 theBonus);

#endif
/************************************************************************************************
 * AUTHOR              DATE                    BRIEF
 ************************************************************************************************
 * TAREK ALLAM         2 NOV 2022             enum of my error state
 *
 */