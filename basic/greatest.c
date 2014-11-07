#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers\n");
scanf("%d""%d""%d",&a,&b,&c);
if(a>b)
{
if(a>c)
   printf("A is greatest \n");
else
   printf("C is greatest\n");
}
else if(b>a)
{
if(b>c)
   printf("B is greatest\n");
else
   printf("c is greatest\n");
}
else if(c>a)
{
if(c>b)
   printf("C is greatest\n");
else
   printf("B is greatest");
   }
return 0;
}
