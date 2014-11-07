#include <stdio.h>
#include <string.h> /* declares strcpy() */
#define SIZE 40
#define LIM 5
int main(void)
{
char qwords[LIM][SIZE];//five arrays and each array can store upto 40 characters
char temp[SIZE];
int i = 0;
printf("Enter %d words beginning with q:\n", LIM);
while (i < LIM && gets(temp))
{
if (temp[0] != 'q')
printf("%s doesn't begin with q!\n", temp);
else
{
strcpy(qwords[i], temp);//copies string from temp to qwords
i++;
}
}
puts("Here are the words accepted:");
for (i = 0; i < LIM; i++)
puts(qwords[i]);
return 0;
}

