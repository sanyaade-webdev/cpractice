#include <stdio.h>
void trystat();//static variable can't be passed as argument to a function
int main(void)
{
static int b=2; 
int count;
for (count = 1; count <= 3; count++)
{
 b=0;
printf("Here comes iteration %d:\n", count);
trystat();
/*
printf("stay= %d\n", stay);//static variable scope is limited only to function so we can't access it here
*/
b++;
}
printf("b= %d:\n",b);
return 0;
}
void trystat()
{
int fade = 1;
static int stay = 1;//stay retains its value and its value is not initialized 
printf("fade = %d and stay = %d\n", fade++, stay++);
}
