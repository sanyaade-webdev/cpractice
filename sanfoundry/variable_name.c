#include<stdio.h>
int main()
{
int true;
int volatile;//volatile is C keyword so we can't take it as a variable name
true=10;
printf("true is %d",true);
return 0;
}
