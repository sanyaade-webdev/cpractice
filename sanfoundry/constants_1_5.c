#include<stdio.h>
enum birds {SPARROW, PEACOCK=8, PARROT};
enum animals {TIGER = 8, LION, RABBIT, ZEBRA};
int main()
{
  int  m ;//created object of data type birds
m=ZEBRA;
if(PEACOCK==TIGER)
printf("match found\n");
int k;
 k = m;
   printf("%d\n",k);//it prints 11 the value assigned to tiger
   return 0;
}
