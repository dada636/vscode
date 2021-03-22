#include<stdio.h>

int a()
{
  extern int x;
  x = 3;  
}

int main()
{
  printf("%d",x);
}