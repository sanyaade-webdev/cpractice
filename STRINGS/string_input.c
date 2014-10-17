//page 367
#include<stdio.h>
#include<string.h>
int main()
{
char  name[10];
char  name1[10];
gets(name);//it get spaces and return address of pointer which is passed to it i.e name
fgets(name1,10,stdin);//it get spaces and reads upto maximum size
printf("string =%s \n",name);
printf("string =%s \n",name1);
return 0;
}
