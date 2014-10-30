#include<stdio.h>
int main()
{
unsigned int a=2;
a=~a;
a=a | 0x01;
printf("a= %u\n",a);


return 0;
}
