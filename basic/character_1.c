#include<stdio.h>
int main()
{
char data='A';
char data1='data12345';
/*data is stored as a 32 bit value but only last 1 byte is used*/
char beep=10;//it introduces a new line because 10 is ascii value for new line character \n
printf("data = %c\n",data);
printf("data1 = %c\n",data1);
printf("beep = %c\n",beep);

return 0;
}
