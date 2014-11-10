#include<stdio.h>
int main()
{
unsigned int m[] = {0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
unsigned char n,i;
scanf("%c",&n);
for(i = 0; i <= 7; i++)
{
if ( m[i] & n)
printf("\n yes");
}

return 0;
}
