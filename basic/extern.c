#include<stdio.h>
int i=10;
int main()
{
int i=30,j;
printf("i = %d\n",i);
for(j=0;j<10;j++)
{
extern int i;// link value of globle i
printf("i inside for loop= %d\n",i);
i++;
}
printf("i inside outside of for loop= %d\n",i);//local i is printed


return 0;
}
