#include<stdio.h>
int main()
{
 char * p1 ="n";
//*p1 = "F";
printf("p1= %s\n", p1);
printf("addr is %p\n",&(p1[0]));
printf("addr is %p\n",&(p1[1]));
char name[]="gurpartap";
//name="singh";
name[0]='s';
p1=name;
printf("addr is %p\n",&(p1[0]));
printf("p1= %s\n", p1);
printf("string is %s\n",name);
printf("string is %s\n",p1);



return 0;
}
