#include <stdio.h>
#include<string.h>
int main()
{
  
  char str[100],str1[100];
   scanf("%s",str);
  scanf("%s",str1);
   
  strcat(str,str1);
  printf("%s", str);
  
  
  
  }