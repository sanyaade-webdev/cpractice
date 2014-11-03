#include<stdio.h>
int main()
{
float me = 1.1;
double you = 1.1;
if(me==you)//not true because precision of float is different from double
printf("I love U");
else
printf("I hate U");
return 0;
}

