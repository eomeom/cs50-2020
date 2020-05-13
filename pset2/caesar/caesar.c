#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int k;
int cipher_function();

int main(int argc, string argv[])
{


    // Counting Command-Line Arguments
    if (argc != 2 || atoi(argv[1]) <= 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        // Validating the key
        k = atoi(argv[1]);
        return cipher_function();
        return 0;

    }

}

int cipher_function()
{

    string plain = get_string("plaintext: ");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plain); i++)
    {
        if (islower(plain[i]))
        {
            // return (((plain[i] - 'a') + k) % 26) + 'a';
            printf("%c", (((plain[i] - 'a') + k) % 26) + 'a');

        }
        else if (isupper(plain[i]))
        {
            // return (((plain[i] - 'A') + k) % 26) + 'A';
            printf("%c", (((plain[i] - 'A') + k) % 26) + 'A');

        }
        else
        {
            // return plain[i];
            printf("%c", plain[i]);


        }

    }
    printf("\n");
    return 0;

}
