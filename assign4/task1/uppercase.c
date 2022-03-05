#include <stdio.h>

int main(int argc, char *argv[])
{
   char str[10090];
   int ch, n = 0;

   while ((ch = getchar()) != EOF && n < 1000)
   {
      str[n] = ch;
      if (ch >= 97 && ch <= 122)
      {
         str[n] = ch - 32;
      }
      ++n;
   }

   for (int i = 0; i < n; ++i)
      putchar(str[i]);

   return 0;
}
