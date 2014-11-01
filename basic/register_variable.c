#include<stdio.h>

int main()
{
register int *b;
int a=5;
b=&a;
printf("address of b= %p\n",&b);
//address of register variable can't be accessed

return 0;
}
