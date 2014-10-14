#include<stdio.h>
struct data
{
    short i;
    int a;
    char b,c,d,e,h;
    long long int g;
}item1;
struct data1
{
    short i;
    int a;
    char b,c,d,e,h;
    long long int g;
}__attribute__((packed)) item2;

int main()
{
printf("size of structure with padding is = %d\n",sizeof(item1));
printf("size of structure without padding is = %d\n",sizeof(item2));


return 0;
}
