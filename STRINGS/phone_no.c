#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   int i;
char *no;
char *token1,*token2,*token3,*token4;
no=malloc(sizeof(char)*10);
token1=malloc(sizeof(char)*5);
token2=malloc(sizeof(char)*4);
token3=malloc(sizeof(char)*4);
token4=malloc(sizeof(char)*13);
scanf("%s",no);
printf("phone no=%s\n",no);
strncpy(token1,no,3);
for(i=3;i<10;i++)
{
   if(i<6)
*(token2+(i-3))=*(no+i);
   else
*(token3+(i-6))=*(no+i);
}
sprintf(token4,"(""%s"")""%s""-""%s",token1,token2,token3);
printf("token1=%s\n",token4);


return 0;
}
