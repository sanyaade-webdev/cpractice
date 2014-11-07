#include<stdio.h>
#define size 10
int main()
{
   int j,i,temp,arr[10];
   printf("Enter Values into the array\n");
   for(i=0;i<=9;i++)
   scanf("%d",&arr[i]);
for(i=0;i<5;i++)
  {
	 		  temp=arr[i];
	 arr[i]=arr[size-i-1];
	 arr[size-i-1]=temp;

	 		
  }
  for(i=0;i<=9;i++)
	 printf("array = %d\n",arr[i]);
   return 0;
}
