#include<stdio.h>
#include<string.h>
int main()
{
char str[]="nagpur";
char s[]="kanpur";
/*
str="nagp8r";
//this is not valid because address assigned to str is constant 
*/
printf("%s\n",str);
strcpy(str,s);
printf("%s\n",str);
return 0;
}

