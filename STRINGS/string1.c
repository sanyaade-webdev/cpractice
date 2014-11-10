#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char *ptr;
   ptr=(char *)malloc(9);
   char name[]="it is raining";
   printf("enter into string");
   scanf("%s",ptr);//using %s & giving space b/w collection of characters in a string
   //name[14]="it is raining";
   printf("name=%s",ptr);
  return 0;
}

