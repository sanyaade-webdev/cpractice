#include<stdio.h>
int main()
{
int i;
 char name[]="emblogic";
const char * pointer = "Klingon";
name=pointer;//invalid because address of array is constant.so address of string "Klingon" is not copied to name.
pointer=name;//valid because pointer is variable which can hold address of anything.
//if char 8 const pointer then we can't change address of pointer as it is constant.
for(i=0;i<5;i++)
{
 printf(": Beware the %c\n",*(pointer++));
 printf(": Beware the %c\n",*(name++));//as address of array is constant so we can't increment it
}
return 0;
}
