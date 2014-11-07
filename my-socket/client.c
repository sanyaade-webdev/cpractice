#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
int main()
{
struct sockaddr_in my_address;
int len,my_socket,num=4,result;
my_socket=socket(AF_INET,SOCK_STREAM,0);
if(my_socket<0)
perror("socket\n");
my_address.sin_family=AF_INET;
my_address.sin_addr.s_addr=inet_addr("127.0.0.1");
my_address.sin_port=htons(5000);
len=sizeof(my_address);
result=connect(my_socket,(struct sockaddr *)&my_address,len);
if(result<0)
perror("connect error\n");
write(my_socket,&num,4);






return 0;
}
