#include<stdio.h>
int main()
{
  long a = 829341696;
  printf("%ld\n",a);
  short b = a;
  printf("%d",b);
}



// 把long型赋值给short型，就把long的低字节赋值给short型，如果是double赋值给float，
// 当double型的范围没有超出float所表示的范围时，就减小double型数据的精度，然后赋值
// 给float，如果double数据范围超出了float型，是未定义的。