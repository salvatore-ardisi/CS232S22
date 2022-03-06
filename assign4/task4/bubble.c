/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <stdlib.h>

#define NUM 30   /* number of strings */
#define LEN 1200 /* max length of each string */

void myswap(char *a, char *b)
{
   char temp;
   temp = *a;
   *a = *b;
   *b = temp;
}

int main()
{
   char *Strings[NUM];

   printf("Please enter %d strings, one per line:\n", NUM);

   for (int i = 0; i < NUM; i++)
   {
      Strings[i] = malloc(sizeof(char) * LEN);
      fgets(Strings[i], LEN, stdin);
   }

   /* Write a for loop here to read NUM strings.

      Use fgets(), with LEN as an argument to ensure that an input line that is too
      long does not exceed the bounds imposed by the string's length. However, each
     string stored in array Strings must not waste space. That is, only the buffer
     used by fgets() to temporary store the string read from input stream needs to
     be LEN bytes long.
     Note that the newline and NULL characters will be included in LEN.
   */

   puts("\nHere are the strings in the order you entered:");

   for (int j = 0; j < NUM; j++)
   {
      for (int k = 0; k < NUM - j - 1; k++)
      {
         // can't figure out why the string lenght isn't comparing correctly
         if (strlen(Strings[k]) > strlen(Strings[k + 1]))
         {
            myswap(Strings[k + 1], Strings[k]);
         }
         if (Strings[k + 1] < Strings[k])
         {
            // not sure why the swap isn't working correctly
            myswap(Strings[k], Strings[k + 1]);
            break;
         }
         else
         {
            break;
         }
      }
   }

   /* Write a for loop here to print all the strings. */

   /* Bubble sort */
   /* Write code here to bubble sort the strings in ascending alphabetical order

      Your code must meet the following requirements:
         (i) The comparison of two strings must be done by checking them one
             character at a time, without using any C string library functions.
             That is, write your own while/for loop to do this.
        (ii) Implement a swap function to swap two strings by swapping pointers
        without copying any chars.You are not allowed to use any C library
        functions in swap.
       (iii) You are allowed to use strlen() to calculate string lengths.
   */
   /* Output sorted list */

   puts("\nIn alphabetical order, the strings are:");

   for (int l = 0; l < NUM; l++)
   {
      printf("%s", Strings[l]);
      free(Strings[l]);
   }
   /* Write a for loop here to print all the strings. Feel free to use puts/printf
      etc. for printing each string.
   */
}
