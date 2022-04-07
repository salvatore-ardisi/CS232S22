#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main()
{
    // initialize variables
    int n = 0, j = 0, ch;
    // allocate space for the buffers content
    char buf[MAX_BUF];

    // while there is a character and not end of file and n < 1000
    while ((ch = getchar()) != EOF && n < 1000)
    {
        // assign the character to the buffer
        buf[n] = ch;
        // increment n
        ++n;
    }
    // initialize variables to keep count
    int uppercase = 0, lowercase = 0, characters = 0, words = 0, lines = 0, whitespaces = 0, digits = 0;

    // iterate over the buffer
    for (n = 0; buf[n]; n++)
    {
        // if the current character is a special character
        if (buf[j] >= 33 && buf[j] <= 47)
            // increment the characters count
            characters++;

        // if the current character is between A & Z
        if (buf[j] >= 'A' && buf[j] <= 'Z')
        {
            // increment the uppercase count
            uppercase++;
            // increment the characters count
            characters++;
        }
        // otherwise the current character is between a & z
        else if (buf[j] >= 'a' && buf[j] <= 'z')
        {
            // increment the lowercase count
            lowercase++;
            // increment the characters count
            characters++;
        }
        // otherwise the current character is a number between 0 and 9
        else if (buf[j] >= '0' && buf[j] <= '9')
        {
            // increment the digits count
            digits++;
            // increment the characters count
            characters++;
        }
        // otherwise the current character is a space
        else if (buf[j] == 32)
        {
            // increment the whitespaces count
            whitespaces++;
            // increment the words count
            words++;
            // increment the characters count
            characters++;
        }
        // otherwise the current character is a tab
        else if (buf[j] == 10)
        {
            // increment the lines count
            lines++;
            // increment the words count
            words++;
            // increment the characters count
            characters++;
        }
        // increment j until condition is met
        j++;
    }
    // print the results in given format
    printf("%d %d %d %d %d %d %d\n", characters, words, lines, whitespaces, uppercase, lowercase, digits);
}