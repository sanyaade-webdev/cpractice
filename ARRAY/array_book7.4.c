#include<stdio.h>
int main()
{
   int j,i,max,min,arr[10];

   for(i=0;i<=9;i++)
   {
   scanf("%d",&arr[i]);
   }
   max=min=arr[0];
   for(i=1;i<10;i++)
   {
		 if(arr[i]>max)
	  max=arr[i];
		if(arr[i]<min) 
			min=arr[i];
				  }
	
	  
//		 else
//			min=arr[i];
   
   printf("max value is %d\n",max);
 printf("min value is %d\n",min);
   return 0;
}
