#include<stdio.h>
struct book{
int no;
float price;
char name[10];
};
int main()
{
struct book item1;
item1.no=5;
item1.price=100.56;
item1.name[0]='h';
printf("book no.= %d\n,book price=%f\n,book name=%s\n",item1.no,item1.price,item1.name);
printf("size of structure is %d\n",sizeof(item1));

return 0;
}
