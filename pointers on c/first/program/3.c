#include<stdio.h>
int main()
{
  signed char checksum = -1;
  int ch;
  while((ch = getchar()) != EOF )
  {
    checksum = checksum + putchar(ch);
    if (ch == '\n')
    {
      printf("%d\n",checksum);
    }
  }

}