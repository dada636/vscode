#include <stdio.h>
#include <string.h>

int main()
{
  char input[1000];
  char output[1000];
  int temp = 0;
  int len = 0;
  while ((gets(input) != NULL))
  {
    {
      temp = len;
      len = strlen(input);
      printf("%d\n", len);
      if (len >= temp)
      {
        strcpy(output, input);
      }
    }
  }
  puts(output);
  return 0;
}
