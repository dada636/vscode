#include <stdio.h>
int temp();
int main()
{
  int n = 0;
  while (1)
  {
    temp();
  }
}

int temp()
{
  int ch;
  int at_beginning = 1;
  int line = 0;
  while ((ch = getchar()) != EOF)
  {
    if (at_beginning == 1)
    {
      at_beginning = 0;
      line += 1;
      printf("%d:", line);
    }
    putchar(ch);
    if (ch == '\n')
    {
      at_beginning = 1;
    }
  }
}