#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main()
{

  /* Zero out the array */
  int letter_frequency[26] = {0};
  int len, i;
  char buf[MAX_BUF];

  len = strlen(buf);

  do
  {
    fgets(buf, MAX_BUF, stdin);

    for (int i = 0; i < len; ++i)
    {
      if (buf[i] >= 'A' && buf[i] <= 'Z')
      {
        letter_frequency[buf[i] - 32]++;
      }
      else if (buf[i] >= 'a' && buf[i] <= 'z')
      {
        letter_frequency[buf[i] - 32]++;
      }
    }
  } while (len > 1);

  printf("Distribution of letters in corpus:\n");
  for (i = 0; i < 26; i++)
  {
    // 'A' is ASCII code 65
    printf("%c: %d\n", 65 + i, letter_frequency[i]);
  }
}
