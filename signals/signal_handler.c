#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void handler(int sig)
{
printf("\nI got signal %d\n",sig);
//(void) signal(SIGINT,SIG_DFL);
system("baahar_nikl");
}
int main()
{
//2 for ctrl+c
//20 for ctrl+z
(void) signal(2,handler);//1st argument is signal name and 2nd argument is signal handler function
while(1)
{
printf("hellworld of linux\n");
sleep(1);
}
return 0;
}
