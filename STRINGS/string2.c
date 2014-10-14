#include<stdio.h>
#include<string.h>
int main()
{
   char name[6];
   printf("enter the string");
   scanf("%[^\n]s",name);//using ^\n space may be created in scanf//name in scanf is also base address
   gets(name);
   puts("HELLO");
   puts(name);//argument of puts is base address of array or pointer always
   return 0;
}
