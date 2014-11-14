#include<stdio.h>
int main()
{
int x = 30;
/* original x
 * */
printf("x in outer block: %d\n", x);
{
int x = 77; /* new x, hides first x */
printf("x in inner block: %d\n", x);
}
printf("x in outer block: %d\n", x);
while (x++ < 33) /* original x
*/
{
int x = 100; /* new x, hides first x */
x++;
printf("x in while loop: %d\n", x);
}
printf("x in outer block: %d\n", x);
//////////////////////////////////////////////////////////
//if scope///////////////
//forc99.c -- new C99 block rules
int n = 10;
printf("Initially, n = %d\n", n);
for (int n = 1; n < 3; n++)
printf("loop 1: n = %d\n", n);
printf("After loop 1, n = %d\n", n);
for (int n = 1; n < 3; n++)
{
printf("loop 2 index n = %d\n", n);
int n = 30;
printf("loop 2: n = %d\n", n);
n++;
}
printf("After loop 2, n = %d\n", n);
return 0;
}
