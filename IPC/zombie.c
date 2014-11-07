#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
pid_t pid,child_pid;
char *message;
int n;
printf("fork program starting\n");
pid = fork();
switch(pid)
{
case -1:
perror("fork failed");
exit(1);
break;
case 0:
message = "This is the child";
child_pid=getpid();
n = 3;
break;
default:
message = "This is the parent";
n = 15;
waitpid(child_pid,(int *)0,WNOHANG);
break;
}
for(; n > 0; n--) 
{
puts(message);
sleep(1);
}
return 0;
}
