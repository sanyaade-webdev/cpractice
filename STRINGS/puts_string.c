//page 369
#include <stdio.h>
#include <string.h>
#define DEF "hello we are in emblogic"
int main(void)
{
//puts automatically appends newline '\n' to a string unlike printf which keep printing from end of previous string
char str1[80] = "An array was initialized to me.";
const char * str2 = "A pointer was initialized to me.";
puts("I'm an argument to puts().");
puts(DEF);//prints string "hello we are in emblogic"
puts(str1);
puts(str2);
puts(&str1[5]);//starts printing from 5th character "ray was initialized to me"
puts(str2+4);//starts printing from 4th character "inter was initialized to me"
////////puts find null character in string to stop printing but if there is no NULL then it continue printing from next memor location
char side_a[] = "Side A";
char dont[] = {'W', 'O', 'W', '!' };
char side_b[] = "Side B";
puts(dont);
/* dont is not a string */
return 0;
}

