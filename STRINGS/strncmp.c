#include <stdio.h>
#include <string.h>
#define LISTSIZE 5
int main()
{
const char * list[LISTSIZE] =//array of 5 strings
{
"astronomy", "astounding",
"astrophysics", "ostracize",
"asterism"
};
int count = 0;
int i;
for (i = 0; i < LISTSIZE; i++)
if (strncmp(list[i],"astro", 5) == 0)//compares upto 5 characters
{
printf("Found: %s\n", list[i]);
count++;
}
printf("The list contained %d words beginning from astro\n",count);
return 0;
}

