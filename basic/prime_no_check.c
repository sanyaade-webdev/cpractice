#include<stdio.h>
int main()
{
   int num,temp=2,flag=0;
   printf("enter the number\n");
   scanf("%d",&num);
   while(temp<num)
   {
	//  if(num%1==0 && num%num==0)
	 // {
		 if(num==2 || (num%temp)!=0)
		 {
			flag=1;
		 }
		 else
		 {
			flag=0;
			break;
		 }
	  //}
	  temp++;
   }
if(flag==0)
printf("given number is not prime\n");
else 
printf("given number is prime");
   return 0;
}
