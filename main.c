/* ********************************************************************************************
/* @name     : MAIN.C
/* @brief    : TEST PROGRAM OF THE SINGLE linked LIST
/* @author   : TAREK ALLAM
/***********************************************************************************************/
/*************************************** START INCLUDES ****************************************/
#include "app.h"
/*************************************** END INCLUDES ****************************************/
/*************************************** START MAIN ********************************************/
int main()
{
    uint32 mony_or_salary = 0;
    float32 usd_now = USD_NOW;
    float32 usd_befor = USD_BEFOR;
    uint32 bonus = THE_BONUS;
    uint8 chose1 = 0;
    uint8 chose3 = 0;
    uint8 chose2 = 0;
    while (1)
    {
        printf("for salary      -> Enter 1 \nfor saved money -> Enter 2  \n->");
        fflush(stdin);
        scanf("%d", &chose1);
        chose3 = chose1;
        fflush(stdin);
        printf("want change USD BREOR AND AFTER ?\nYES-> Enter 1 \nNO -> Enter 2  \n->");

        scanf("%d", &chose2);
        fflush(stdin);

        if (chose2 == 1)
        {
            fflush(stdin);
            printf("USD BEFOR :");
            scanf("%f", &usd_befor);
            fflush(stdin);
            printf("USD NOW   :");
            scanf("%f", &usd_now);
            fflush(stdin);
        }
        else
        {
            usd_now = USD_NOW;
            usd_befor = USD_BEFOR;
        }
        if (chose3 == 2)
        {
            printf("enter your saving money in EGP :  ");
            scanf("%d", &mony_or_salary);
            change_in_value(mony_or_salary, usd_befor, usd_now, 0);
        }
        else
        {
            printf("enter your Salary in EGP :  ");
            scanf("%d", &mony_or_salary);
            change_in_value(mony_or_salary, usd_befor, usd_now, bonus);
        }
        printf("\n---------------------------------------\n");

        fflush(stdin);

        printf("\n---------------------------------------\n");
    }

    return 0;
}
/*************************************** END MAIN **********************************************/

/************************************************************************************************
 * AUTHOR              DATE                    BRIEF
 ************************************************************************************************
 * TAREK ALLAM         2 NOV 2022             TEST program
 *
 */