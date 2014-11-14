#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//header file for pipe
#include<string.h>
int main()
{
int pid,fd[2];
char buffer[4];
memset((void *)buffer,'\0',4);
int num2,num1=4,ret;
ret=pipe(fd);//reading pipe fd is fd[0] and writing pipe fd is fd[1]
printf("returned by pipe %d\n",ret);
if(ret==-1)//it will return either 0 or -1 0=SUCCESS -1=FAILURE
{
perror("fork failure\n");
exit(EXIT_FAILURE);//exit status to parent process
}
else
{
pid=fork();//fork call  return 0 or -1
if(pid==-1)
{
perror("fork failure\n");
exit(EXIT_FAILURE);
}
if(pid==0)//CHILD PROCESS
{
printf("process is child\n");//fork call returns 0 to child process.It is implemented so that we can differentiate between child and parent process.
sprintf(buffer,"%d",fd[0]);
execl("./pipe4","pipe4",buffer,NULL);
}
else //parent process 
{
printf("process is parent\n");
printf("id of child process is %d\n",pid);//fork call return pid of child to parent process
write(fd[1],&num1,4);
close(fd[1]);
printf("number sent through pipe to child is %d\n",num1);
printf("pid of parent is %d\n",getpid());
sleep(1);//it is used because when child process terminates after parent process then parent process keep waiting for the child process.So execution of parent process doesn't complete and terminal keep waiting for child process
}
exit(EXIT_SUCCESS);
}
return 0;
}
