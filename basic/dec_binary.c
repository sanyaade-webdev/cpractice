#include<stdio.h>
#include<string.h>
void calculate_binary(int);
int main()
{
int decimal;
printf("Enter the decimal number\n");
scanf("%d",&decimal);
calculate_binary(decimal);
   return 0;
}
void calculate_binary(int decimal)
{
       int binary[8]={0,0,0,0,0,0,0,0};
       int i=7;
while(1)
{
if(decimal==1)
{
binary[i]=1;
break;
}
binary[i]=decimal%2;
decimal=decimal/2;
--i;
}
printf("binary number: ");
for(i=0;i<=7;i++)
printf("%d",binary[i]);
printf("\n ");
}

