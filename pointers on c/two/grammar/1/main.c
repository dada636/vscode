#include <stdio.h>
 #include"negate.h"
 #include"increment.h"
int main()
{
   printf("%d\n",increment(10)); 
   printf("%d\n",increment(-10));
   printf("%d\n",increment(0));
   printf("%d\n",negate(0));
   printf("%d\n",negate(10));
   printf("%d\n",negate(-10));
}