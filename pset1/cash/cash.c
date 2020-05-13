#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // defining variable
    int quarters, dimes, nickels, pennies, totalCoins, cents;
    float changeOwed;

    // totalCoins = quarter + dime + nickel + penny;

    // prompt change owed with float value more than 0
    do
    {
        changeOwed = get_float("Change owed: ");
    }
    while (changeOwed < 0);

    // changing dollars to cent
    cents = round(changeOwed * 100);
    // amount of quarters to give
    quarters = cents / 25;
    // amount of dimes to give
    dimes = (cents % 25) / 10;
    // amount of nickels to give
    nickels = ((cents % 25) % 10) / 5;
    // amount of pennies to give
    pennies = ((cents % 25) % 10) % 5 / 1;

    // total amount of coins to give
    totalCoins = quarters + dimes + nickels + pennies;

    // printing out the total amount of coins
    printf("%i\n", totalCoins);
}

