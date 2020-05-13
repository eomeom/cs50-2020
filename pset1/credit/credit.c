#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{

    long creditNum;
    long evenCreditDigit, oddCreditDigit;
    long creditDigit;

    do
    {

         creditNum = get_long("Number: ");

    }
    while (creditNum < 1 || creditNum > pow(10,16));

    for (long evenRem = 100; evenRem <= pow(10,16); evenRem *= 100)
    {
        for (long evenDivs = 10; evenDivs <= evenRem - 1; evenDivs *= 100)
        {

            evenCreditDigit = (creditNum % evenRem) / evenDivs;
            evenCreditDigit *= 2;

        }

        int evenCreditDigitFirst, evenCreditDigitSecond, totalEvenCreditDigit;
        totalEvenCreditDigit = 0;

        evenCreditDigitFirst = evenCreditDigit % 10;
        evenCreditDigitSecond = evenCreditDigit / 10;

        totalEvenCreditDigit = evenCreditDigitFirst + evenCreditDigitSecond;

        // printf("%i\n", totalEvenCreditDigit);

    }

    for (long oddRem = 10; oddRem <= pow(10,16); oddRem *= 100)
    {
        for (long oddDivs = 1; oddDivs <= oddRem - 1; oddDivs *= 100)
        {

            oddCreditDigit = (creditNum % oddRem) / oddDivs;

        }



        printf("%li", oddCreditDigit);
        // totalCreditDigit = totalEvenCreditDigit

    }



    printf("\n");

}
