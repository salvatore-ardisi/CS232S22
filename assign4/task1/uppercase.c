#include <stdio.h>

int main(int argc, char *argv[])
{
   /* example:
    *  char str[10090];
      int ch, n = 0;

      while ((ch = getchar()) != EOF && n < 1000) {
         str[n] = ch;
         ++n;
      }

      for (int i = 0; i < n; ++i)
         putchar(str[i]);


      return 0;

    */

   char ch;
   ch = getchar();
   while (ch && ch != EOF)
   {
      if (ch >= 97 && ch <= 122)
      {
         putchar(ch - 32);
      }
      else
      {
         putchar(ch);
      }
      ch = getchar();
   }

   return 0;
}
