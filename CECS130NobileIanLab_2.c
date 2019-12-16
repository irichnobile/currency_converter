//******************************************************************************
//  CECS130NobileIanLab_2.c     Author: Ian Nobile
//  
//  Program_description: this bug-free and well commented program requests the
//  user enter a number representing the amount of foreign currency he/she would
//  like to exchange and outputs a foreign currency conversion table for 
//  at least 6 different currencies, showing how much of each type of foreign 
//  currency can be obtained for the amount the user enters. All exchange rates 
//  are current and have been coded as constants.
//  
//  Lab section: 01
//  Due Date: 7 September 2018
//******************************************************************************

#include <stdio.h>
#include <windows.h>

//------------------------------------------------------------------------------
//  Main Function
//------------------------------------------------------------------------------
main() {

    /*Variables*/
    char cExchangeCurrency[20] = { '\0' };
    float fExchangeAmount = 0.000000;
    char cUserSelection = 'Y';

    /*beware: these exchange rates are out of date!*/
    const float fUSD2EUR = 0.853489;
    const float fUSD2GBP = 0.776121;
    const float fUSD2CHF = 0.975573;
    const float fUSD2CNY = 6.804883;
    const float fUSD2JPY = 111.135576;
    const float fEUR2USD = 1.172325;
    const float fEUR2GBP = 0.909445;
    const float fEUR2CHF = 1.142889;
    const float fEUR2CNY = 7.975549;
    const float fEUR2JPY = 130.162285;
    const float fGBP2USD = 1.289056;
    const float fGBP2EUR = 1.099572;
    const float fGBP2CHF = 1.256689;
    const float fGBP2CNY = 8.769690;
    const float fGBP2JPY = 143.122801;
    const float fCHF2USD = 1.025772;
    const float fCHF2EUR = 0.874973;
    const float fCHF2GBP = 0.795731;
    const float fCHF2CNY = 6.978338;
    const float fCHF2JPY = 113.887204;
    const float fCNY2USD = 0.146994;
    const float fCNY2EUR = 0.125384;
    const float fCNY2GBP = 0.114029;
    const float fCNY2CHF = 0.143301;
    const float fCNY2JPY = 16.320103;
    const float fJPY2USD = 0.009006;
    const float fJPY2EUR = 0.007684;
    const float fJPY2GBP = 0.006987;
    const float fJPY2CHF = 0.008781;
    const float fJPY2CNY = 0.061277;


    /*the program begins with a friendly greeting:*/
    printf("Welcome to the digital currency exchange.\n");
    Sleep(2 * 1000);  // Sleep for 2 seconds

    while (cUserSelection != 'N' && cUserSelection != 'n')
    {
        printf("Please specify the foreign currency you would like to have ");
        printf("exchanged.\n");
        Sleep(2 * 1000);  // Sleep for 2 seconds
        printf("(You can say USD, dollars, yuan, etc.): ");
        scanf("%s", cExchangeCurrency);
        printf("\nThank you. Now please enter the amount of this currency you ");
        printf("would like exchanged.\n");
        scanf("%f", &fExchangeAmount);
        printf("\nOkay! Below is a foreign currency conversion table showing ");
        printf("how much of each type of foreign currency\ncan be obtained ");
        printf("for the amount you entered: \n\n");

            /*Begin foreign currency conversion table*/
            printf("\t%.10s\t\t%.10s\t\t%.10s\t\t%.10s\t\t%.10s\t\t%.10s\n",
                "USD", "EUR", "GBP", "CHF", "CNY", "JPY");
        printf("USD\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",
            fExchangeAmount, fExchangeAmount * fEUR2USD, fExchangeAmount * fGBP2USD,
            fExchangeAmount * fCHF2USD, fExchangeAmount * fCNY2USD,
            fExchangeAmount * fJPY2USD);
        printf("EUR\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",
            fExchangeAmount * fUSD2EUR, fExchangeAmount, fExchangeAmount * fGBP2EUR,
            fExchangeAmount * fCHF2EUR, fExchangeAmount * fCNY2EUR,
            fExchangeAmount * fJPY2EUR);
        printf("GBP\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",
            fExchangeAmount * fUSD2GBP, fExchangeAmount * fEUR2GBP, fExchangeAmount,
            fExchangeAmount * fCHF2GBP, fExchangeAmount * fCNY2GBP,
            fExchangeAmount * fJPY2GBP);
        printf("CHF\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",
            fExchangeAmount * fUSD2CHF, fExchangeAmount * fEUR2CHF,
            fExchangeAmount * fGBP2CHF, fExchangeAmount, fExchangeAmount * fCNY2CHF,
            fExchangeAmount * fJPY2CHF);
        printf("CNY\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",
            fExchangeAmount * fUSD2CNY, fExchangeAmount * fEUR2CNY,
            fExchangeAmount * fGBP2CNY, fExchangeAmount * fCHF2CNY, fExchangeAmount,
            fExchangeAmount * fJPY2CNY);
        printf("JPY\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n\n",
            fExchangeAmount * fUSD2JPY, fExchangeAmount * fEUR2JPY,
            fExchangeAmount * fGBP2JPY, fExchangeAmount * fCHF2JPY,
            fExchangeAmount * fCNY2JPY, fExchangeAmount);
        /*End foreign currency conversion table*/
        system("pause");

        printf("Would you like to exchange more? (Y/N) ");
        //getchar() This will remove the newline in input buffer but--
        scanf(" %c", &cUserSelection); //this space does the same thing!
        system("cls");
    }//end while

    printf("Thank you for converting!\n");
    system("pause");

}

