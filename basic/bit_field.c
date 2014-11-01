#include<stdio.h>
struct bit
{
int a:4;//it only uses 4 bits of integer
int b:4;
}data;
int main()
{
data.a=7;//bits 0111 is saved in a
data.b=9;
//int c=data.a*data.b;
//printf("size of A ==%d\n",&(data.a));
//0 indicates sign bit so it is treated as +ve integer
//1 indicates -ve sign so a=10 represented 1111 in binary so it prints -1 .
printf("value of A ==%d\n",data.a);
printf("value of B ==%d\n",data.b);
//printf("value of c ==%d\n",c);
/*value of b is -7 because compiler uses 2's complement method to display integer
  first 9 is converted into binary 1001 it takes first bit i.e 1 as sign bit .
  1 -- -ve
  then it performs two's complement of remaining bits 
  001  ---> (1's complement) 110 then add 1 to LSB --> 111
output is -111 ----> -7   */ 


return 0;
}
