#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
  int quantity,price;
  char department[20];
  scanf("%d%d%s",&quantity,&price,department);
  printf("%d%d%s",quantity,price,department);
  return 0;
}
