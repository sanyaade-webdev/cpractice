#include<stdio.h>
int main()
{
float number=1.1,a=3.666666f;
double num1=1.1;
printf("number = %f and double = %e\n",number,num1);
if(number==1.1f)
printf("TRUE\n");
else
printf("FALSE\n");
double b=4.555552455;
printf("sum of a+b = %f\n",a+b);
printf("sum of a+b = %e\n",a+b);
////////////////////////////////////////
float max=2.0e4;
float add=2.0e4+1;
max=add-2.0e4;
printf("value of max is %f\n",max);//reason for odd answer when we use 2.0e20 because float only considers 6 decimal places.But in our case these are 20.So,we get undefined answer.
printf("size of %d\n",sizeof(long ));
printf("size of %d\n",sizeof(long long ));
printf("size of %d\n",sizeof( double));
printf("size of %d\n",sizeof(long double));
return 0;
}
