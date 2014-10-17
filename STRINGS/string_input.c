//page 367
#include<stdio.h>
#include<string.h>
int main()
{
char  name[10];
char  name1[150];
char name2[10];
char name3[10];
gets(name);//it get spaces and return address of pointer which is passed to it i.e name
fgets(name1,150,stdin);//it get spaces and reads upto maximum size
printf("string =%s \n",name);
printf("string =%s \n",name1);
scanf("%5s",name2);
scanf("%6s",name3);
printf("string =%s \n",name2);
printf("string =%s \n",name3);
return 0;
}
