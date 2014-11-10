#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//header file for pipe
#include<string.h>
int main()
{
int fd[2];
int num2,num1=4,ret;
ret=pipe(fd);//reading pipe fd is fd[0] and writing pipe fd is fd[1]
printf("returned by pipe %d\n",ret);//if return value is 0 i.e pipe created successfully otherwise negative number represents that pipe is not created.
if(ret==0)
{
write(fd[1],&num1,4);
printf("number sent through pipe is %d\n",num1);
read(fd[0],&num2,4);
printf("number read from pipe is %d",num2);
exit(EXIT_SUCCESS);
}
else 
{
perror("pipe is not created successfully\n");
exit(EXIT_FAILURE);
}
return 0;
}
