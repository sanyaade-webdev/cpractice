#include<stdio.h>
int a=10;
int main()
{
signed char a=255;//range from -128 to 255
unsigned char b=-129;//range from 0 to 255
//page 57 how to display or print 
printf("\"a is a \\ backslash\n");
//page 58 
printf("Hello!\007\n");
printf("Hello!7\n");
//page 60
printf("char value of a = %c\n",a);
printf("char value for b=%c\n",b);

return 0;
}
