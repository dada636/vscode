#include<stdio.h>
#include"test.h"

//extern int b = 2;

int test(int i){
  printf("222\n");
  extern int x;
}


int a()
{
  x = 2;
  printf("%d",x);

}