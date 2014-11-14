// page 379
#include <stdio.h>
#include <string.h>
int main(void)
{
printf("strcmp(\"A\", \"A\") is ");//if both ascii values are equal returns 0
printf("%d\n", strcmp("A", "A"));
printf("strcmp(\"A\", \"B\") is ");//if ascii of first is smaller than second one ,returns -1
printf("%d\n", strcmp("A", "B"));
printf("strcmp(\"B\", \"A\") is ");//if ascii of first is larger than second one returns 1 or difference between ascii values
printf("%d\n", strcmp("B", "A"));
printf("strcmp(\"C\", \"A\") is ");
printf("%d\n", strcmp("C", "A"));
printf("strcmp(\"Z\", \"a\") is ");
printf("%d\n", strcmp("Z", "a"));
printf("strcmp(\"apples\", \"apple\") is ");
printf("%d\n", strcmp("apples", "apple"));
return 0;
}

