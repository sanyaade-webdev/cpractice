#include<stdio.h>
int main()
{
int i,even,odd,arr[10];
arr[0]=5;
arr[1]=10;
arr[2]=15;
arr[3]=9;
arr[4]=10;
arr[5]=26;
arr[6]=45;
arr[7]=96;
arr[8]=2;
arr[9]=4;
for(i=0;i<=9;i++)
{
if((arr[i]%2)==0)
   printf("current element %d is even\n",arr[i]);
else
   printf("current element %d is odd\n",arr[i]);

}



return 0;
}
