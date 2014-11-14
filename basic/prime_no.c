#include<stdio.h>
int main()
{
	int num,flag=0;
	printf("enter the number\n");
	scanf("%d",&num);
	for(int i=2;i<=9;i++)
	{
		if(num!=2 && num==i)
			break;

		if( (num%i)!=0  )
		{
			flag=1;
		}
		else
		{
			if(num==2)
			{
				flag=1;
				break;
			}
			flag=0;
			break;
		}
	}
	if(flag==1)
		printf("given number is prime number\n");
	else
		printf("given number is not prime number\n");
	return 0;
}
