#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(int argc,char *argv[])
{
int exit_code,num,fd;
fd=atoi(argv[1]);
read(fd,&num,4);
printf("number read from other process is %d\n",num);
printf("pid of child is %d\n",getpid());
close(fd);
exit_code=34;
return 0;
}
