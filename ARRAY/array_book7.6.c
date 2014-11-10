#include<stdio.h>
#define size 10
int main()
{
   int i,j,arr[10];
	 printf("Enter a decimal number\n");
	    scanf("%d",&j);
		do
		{
		arr[i]=	j%2;
		i++;
		if(j%2==0)
		{
		j=j/2;
		arr[i]=j%2;
		i++;
		}
	if(j%2!=0)	
		{
		   j=j-1;
		j=j/2;
		i++;
		}
		}while(j!=1);
		for(i=3;i>=0;i--)
	 printf("array = %d\n",arr[i]);
   return 0;
}
