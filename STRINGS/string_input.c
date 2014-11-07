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
scanf("%5s",name2);//it only scans upto 5
scanf("%s",name3);//scanf terminate on 2 conditions : enter and space. if we enter hhhhh gggggg then it takes hhhhh and it points at starting of gggggg.next scanf starts scanning from position which it lefts.so it reads from gggggg wothout executing next scanf
printf("string =%s \n",name2);//outputs hhhhh
printf("string =%s \n",name3);//outputs gggggg
return 0;
}
