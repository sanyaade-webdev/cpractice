#include<stdio.h>
int main()
{
printf(" size of short int = %d\n",sizeof(short int));
printf(" size of unsigned int = %d\n",sizeof(unsigned int));
printf(" size of long int = %d\n",sizeof(long int));
printf(" size of long long int = %d\n",sizeof(long long int));
    short end=200;//similar to short int,signed short int,signed short
    unsigned int un=2147483647;//minimum range from 0 to 65535
    long big =65536;
    long long verybig=1345678901234;
printf(" un= %u and not un= %d\n",un,un);
printf(" end=%hd\n and end=%d\n ",end,end);
printf(" big=%ld\n and not big=%hd\n ",big,big);
printf(" verybig=%lld\n and not big=%ld\n ",verybig,verybig);
return 0;
}
