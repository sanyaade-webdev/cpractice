#include<stdio.h>
struct  ABC
{
   int a;
   float b;
   char c;
};
int main()
{
struct ABC item;
   printf("Size of structure is: %d",sizeof(item));
   return 0;
}

