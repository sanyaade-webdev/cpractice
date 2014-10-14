#include<stdio.h>
#include<stdbool.h>//header file for bool type
int main()
{
bool a=false,b=false;//size of bool type is 1 bit
printf("size of booltype is %d\n",sizeof(a));
if(a==true)
printf("A is 1\n");
else if (b==false)
printf("B is False\n");
else 
printf("Program is wrong\n");
return 0;
}
