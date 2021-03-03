#include<stdio.h>
int main()
{
  char ch;
  int cou = 0;
  int f = 0;
  while((ch = getchar()) != EOF && ch != '\n')
  {
    if (ch == '}' && f == 0)
    {
      f = 1;
    }else if (ch == '}' && f == 1)
    {
      cou --;
    }else
    {
      cou++;
      f = 1;
    }   
  }
  if (cou == 0)
    {
     printf("true!!\n");
    }else
    {
      printf("flase!!\n");
    }
}

