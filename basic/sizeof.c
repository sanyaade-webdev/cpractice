#include<stdio.h>
int main()
{
   printf("\n%-20dSize of short is: ",sizeof(short));
   printf("\n%-20dSize of signed int: ",sizeof(int));
   printf("\n%-20dSize of unsigned int is: ",sizeof(unsigned int ));
   printf("\n%-20dSize of long int  is: ",sizeof(long));
   printf("\n%-20dSize of long long int is: ",sizeof(long long));
   printf("\n%-20dSize of unsigned long int is: ",sizeof(unsigned long));
   printf("\n%-20dSize of float is: ",sizeof(float));
   printf("\n%-20dSize of double is:",sizeof(double));
   printf("\n%-20dSize of long double is:",sizeof(long double));
   return 0;
}

