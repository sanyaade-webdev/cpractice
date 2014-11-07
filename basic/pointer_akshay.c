#include<stdio.h>
int main()
{
int a=5;
int *ptr;
ptr=&a;
printf("the address of ptr is %p\n",ptr);
printf("the address of ptr is %p\n",&ptr);
printf("the address of ptr is %d\n",*ptr);
printf("the address of a is %p\n",a);
printf("the address of a is %p\n",&a);





return 0;
}
