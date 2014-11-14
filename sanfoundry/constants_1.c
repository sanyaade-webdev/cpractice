
#include <stdio.h>
#define a 10
int main()
{
   char *str = "Sanfoundry\0.com" "training classes";
   //////// question 1 //////////////
   enum {ORANGE = 5, MANGO, BANANA = 4, PEACH};
   printf("PEACH = %d\n", PEACH);//this will print PEACH=5 because in enum assignment is from left to right 
   printf("ORANGE = %d\n", ORANGE);
   printf("MANGO = %d\n", MANGO);
   /////////// question 2 /////////////
   printf("C programming " "Class by  Sanfoundry" "WOW""\n");//this will print the whole string
   printf("C programming %s ", "Class by  Sanfoundry", "WOW");//this will next two strings and print them one by one
   ////////// question 3 /////////////
   printf("\nstring is %s\n",str);
   ///////// question 4 //////////
   //const int a = 5;//it will generate error because a is defined above
   const int b=10;
   // b=b+1;it will generate error
   printf("a = %d\n", a);
   printf("b = %d\n", b+1);
   //	b=11;//it will print 11 as it is not  assign new value to  variable 
   ////////// question 5 ///////////
   int var = 010;
   printf("%d\n", var);
   return 0;
}
