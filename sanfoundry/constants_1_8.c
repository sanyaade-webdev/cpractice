#include <stdio.h>
#include <string.h>
int main()
{
   char *str = "x";
   char c = 'x';
   char ary[2];
   ary[0] = c;
ary[1]='\0';
   printf("%d %d", strlen(str), strlen(ary));
   return 0;
}
