#include<stdio.h>
int main()
{

int i = 32,j = 0x20,k,l,m;
k = j | j;
l = i & j;
m = k ^ l;
printf("%d %d %d %d %d",i,j,k,l,m);


return 0;
}
