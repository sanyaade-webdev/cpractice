#include<stdio.h>
int main()
{
char s[3]="man";
int i=0;
for(i=0;s[ i ];i++)
printf("\n%c%c%c%c",s[ i ],*(s+i),*(i+s),i[s]);// s[i]  and i[s] is same 
printf("%c\n",i[s]);
return 0;
}

