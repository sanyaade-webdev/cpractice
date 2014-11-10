#include<stdio.h>
int main()
{
int arr[] = {12,14,15,23,45};
printf("%u %u\n",arr , &arr );
printf("%u %u",arr + 1, &arr + 1);
return 0;
}




