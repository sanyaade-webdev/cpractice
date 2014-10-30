#include<stdio.h>
int main()
{
int num,r,temp,sum=0;
printf("enter the number for testing whether it is armstrong or not\n");
scanf("%d",&num);
temp=num;
while(num!=0)
	{
	r=num%10;
	num=num/10;
	sum=sum+(r*r*r);
	}
if(sum==temp)
printf("Given number is armstrong number\n");
else 
printf("given number is not an armstrong number");

	return 0;
}
