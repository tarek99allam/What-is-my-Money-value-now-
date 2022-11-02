/* ********************************************************************************************
/* @name     : MAIN.C
/* @brief    : TEST PROGRAM OF THE SINGLE linked LIST
/* @author   : TAREK ALLAM
/***********************************************************************************************/
#include "app.h"
/*************************************** START MAIN ********************************************/
ES_t change_in_value(uint32 money_or_salary, float32 dollar_befor, float32 dollar_after, uint32 theBonus)
{
    ES_t errorState = ES_NOK;

    float32 money_inDolar_Befor = (money_or_salary) / dollar_befor ;
    money_or_salary += theBonus;
    float32 salary_inDolar_After = (money_or_salary) / dollar_after;
    if (theBonus)
    {
        printf("your Salary befor = %.2f USD \n", money_inDolar_Befor);
        printf("your Salary now = %d EGP \t %.2f USD \n", money_or_salary, salary_inDolar_After);
        printf("the change of your money_or_salary = -%.2f%% \n",
               ((money_inDolar_Befor - salary_inDolar_After) / money_inDolar_Befor) * 100);
        printf("your lose of your money_or_salary is %.2f EGP\n",
               (money_inDolar_Befor - salary_inDolar_After) * dollar_after);
        printf("your salary should be %.2f EGP to avoid the effect of floating \n", (money_inDolar_Befor)*dollar_after);
    }
    else
    {
        printf("your money befor = %.2f USD \n", money_inDolar_Befor);
        printf("your money now   = %.2f USD \n", money_or_salary / dollar_after);
        printf("the change of your money = -%.2f%% \n",
               ((money_inDolar_Befor - (money_or_salary / dollar_after)) / money_inDolar_Befor) * 100);
        printf("your lose of your money_or_salary is %.2f EGP ",
               ((money_inDolar_Befor - (money_or_salary / dollar_after)) * dollar_after ));
    }

    return errorState;
}

/*************************************** END MAIN **********************************************/

/************************************************************************************************
 * AUTHOR              DATE                    BRIEF
 ************************************************************************************************
 * TAREK ALLAM         2 NOV 2022             TEST program
 *
 */