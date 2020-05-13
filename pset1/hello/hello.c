#include <stdio.h>
#include <cs50.h>


int main(void)
{
    string name = get_string("What is your name?\n");
    // string age = get_string("How old are you?\n");
    printf("hello, %s\n", name);
}