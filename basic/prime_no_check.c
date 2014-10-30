#include<stdio.h>
int main()
{
int num,temp=2,flag=0;
printf("enter the max number\n");
scanf("%d",&num);
while(temp<=9)
{
if(num%1==0 && num%num==0)
{
if(num==2 || (num%temp)!=0)
{
printf(" number is prime\n");
goto out;
}
else
{
printf(" number is not prime\n");
break;
}
}
temp++;
}
out:
return 0;
}
