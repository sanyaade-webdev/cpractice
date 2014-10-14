#include<stdio.h>
void add(int a,int b)
{
int c=a+b;
label:
c++;
goto label;
}
int main()
{
int a=1;
int b=10;
add(a,b);
return 0;
}

