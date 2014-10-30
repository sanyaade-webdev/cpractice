#include<stdio.h>
enum birds {SPARROW, PEACOCK, PARROT};
enum animals {TIGER = 8, LION, RABBIT, ZEBRA};
int main()
{
   enum birds m = TIGER;//created object of data type birds
int k;
 k = m;
   printf("%d\n",k);//it prints 8 the value assigned to tiger
   return 0;
}
