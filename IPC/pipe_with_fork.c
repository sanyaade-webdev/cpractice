#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//header file for pipe
#include<string.h>
int main()
{
int pid,fd[2];
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
exit(EXIT_SUCCESS);
}
if(pid==0)//CHILD PROCESS
{
printf("process is child\n");
read(fd[0],&num2,4);
printf ("data read from parent process through pipe is %d\n",num2);
exit(EXIT_SUCCESS);
}
else //parent process 
{
printf("process is parent\n");
write(fd[1],&num1,4);
printf("number sent through pipe to child is %d\n",num1);
exit(EXIT_SUCCESS);
}
exit(EXIT_SUCCESS);
}
return 0;
}
