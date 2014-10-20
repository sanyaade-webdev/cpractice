#include<stdio.h>
int main()
{
static int var = 5;//its value is initialized on first time only
printf("%d\n ",var--);
if(var)
main();
return 0;
}

