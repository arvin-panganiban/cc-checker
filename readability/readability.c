#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Initialize variables
    int count_letters = 0, count_words = 0, count_sentences = 0;
    double grade_level, L, S;
    //Input user text
    string s = get_string("Text: ");

    //Loops thru text
    for (int i = 0; s[i] != '\0'; i++)
    {
        //Counts how many upper or lower case letters are in the text
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            count_letters++;
        }
        //Counts how many words are in the text
        else if (s[i] == ' ')
        {
            count_words++;
        }
        //Counts how many sentences are in a text
        else if (s[i + 1] == '\0')
        {
            count_words++;
            if (s[i] == '.' || s[i] == '!' || s[i] == '?')
            {
                count_sentences++;
            }
        }
        else if (s[i] == '.' || s[i] == '!' || s[i] == '?')
        {
            count_sentences++;
        }
    }

    //Calculate the grade level
    L = (double) count_letters * (100 / (double) count_words);
    S = (double) count_sentences * (100 / (double) count_words);
    grade_level = (0.0588 * L) - (0.296 * S) - 15.8;

    //Outputs the grade level of the text to user
    if (grade_level < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade_level > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(grade_level));
    }
}