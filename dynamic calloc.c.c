#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
  char *name;
  name = calloc(10,4);
  name = realloc(name,20);
  strcpy(name,"helloo");
 printf("%s\n",name);
  free(name);
  return 0;
}