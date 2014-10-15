#include<stdio.h>
struct data
{
    int a:3;
    char b:4,c:4,d:4,e:4,h:4;
    double f;
    long int g:16;
}item1;

int main()
{
    int c=8;
item1.a=4;
printf("hello world\n");
printf("a = %d\n",item1.a);
printf("size of structure is = %d\n",sizeof(item1));


return 0;
}
