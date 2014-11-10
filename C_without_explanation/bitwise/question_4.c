#include<stdio.h>
int main()
{int a,b,c,d,e,f;
a=b=c=d=e=f=32;
a<<=2;
b>>=2;
c ^= 2;
d |= 2;
e &= 2;
f = ~2;
printf("\n %d %d %d %d %d %x",a,b,c,d,e,f);


return 0;
}
