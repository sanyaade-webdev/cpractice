#include<stdio.h>
struct book{
int no;
float price;
double name;
int v;
double s;
char l;
long g;
double z;
}a;
int main()
{
struct book item1;
item1.no=5;
item1.price=100.56;
printf("size of structure is %d\n",sizeof(item1));
printf("size of long int is %d\n",sizeof(a));

return 0;
}
