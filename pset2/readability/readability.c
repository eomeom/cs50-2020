#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

string text;

int count_letters();
int count_words();
int count_sentences();
int coleman_liau();


int main(void)
{

    text = get_string("Text: ");
    int letters = count_letters();
    int words = count_words();
    int sentences = count_sentences();
    int grade = coleman_liau(letters, words, sentences);

    // printf("%i letter(s)\n", letters);
    // printf("%i word(s)\n", words);
    // printf("%i sentence(s)\n", sentences);

}

// letter counting function
int count_letters()
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

// word counting function
int count_words()
{
    // counting from first letter
    int words = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }

    return words;
}

// sentence counting function
int count_sentences()
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }

    return sentences;
}

// coleman liau index function
int coleman_liau(letters, words, sentences)
{
    double index = 0.0588 * (100 * (float) letters / (float) words) - 0.296 * (100 * (float) sentences / (float) words) - 15.8;
    if (index < 16 && index >= 0)
    {
        printf("Grade %.0f\n", index);
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }

    return index;
}

