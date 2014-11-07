// page 321
#include <stdio.h>
#define SIZE 4
int main(void)
{
short dates [SIZE];
short * pti;
short index;
int date[5]={6,21,30,4,15};
//C Primer Plus 5th Edition
double bills[SIZE];
double * ptf;
pti = dates;
// assign address of array to pointer
 ptf = bills;
 printf("%23s %10s\n", "short", "double");
 for (index = 0; index < SIZE; index ++)
 printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
///////another example ////////
printf("*(date +2) = %d\n",*(date + 4));//increment address by 4 elements.Now it points to 4th element.
printf("*date +2 = %d\n",*date + 4);//it points to first element and add 4 to first element.
 return 0;
 }

