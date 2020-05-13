#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int n;

    // repeat the question if input is not an integer
    do
    {
        n = get_int("Height: ");
    }
    // that is in between 1 to 8
    while (n < 1 || n > 8);
    // increment # by the amount of n, printing each # in new line (number of column made)
    for (int i = 0; i < n; i++)
    {
        // we want the bricks of # to be right-aligned
        // so add spaces that results in total of n with the spaces included
        for (int k = 0; k < n - i - 1 ; k++)
        {
            printf(" ");
        }
        // printing out bricks of #
        for (int j = 0; j <= i; j++)
        {
            // we wanna print out # by the amount of n entered by the user
            printf("#");
        }
        // prints each # in new line
        printf("\n");
    }
}
