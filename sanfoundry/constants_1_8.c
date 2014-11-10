#include <stdio.h>
<<<<<<< HEAD

#include <string.h>

int main()

{

   char *str = "x";

   char c = 'x';

   char ary[1];

   ary[0] = c;

   printf("%d %d", strlen(str), strlen(ary));

   return 0;

=======
#include <string.h>
int main()
{
   char *str = "x";
   char c = 'x';
   char ary[2];
   ary[0] = c;
ary[1]='\0';
   printf("%d %d", strlen(str), strlen(ary));
   return 0;
>>>>>>> 66b379e873a004ff5c838c393212e9622880429f
}
