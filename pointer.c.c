#include <stdio.h>
void main()
{
  int *a;
  int d = 10;
  a = &d;
  printf("adress of d is %d\n",a);
  printf("value of d is %d\n",*a);
}