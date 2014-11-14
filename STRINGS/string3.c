#include<stdio.h>
#include<string.h>
int main()
{
   int i=0;
   char *ptr="ANU BALA";
   printf("enter the value");
   while(*(ptr)!='\0')
   {
	  scanf("%c",&ptr);//After Single character null will not come itself & make it string,u sould give atleast two characters to compare with null
	  ptr++;
   }
   puts(ptr);
   return 0;
}
