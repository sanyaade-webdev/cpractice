#include<stdio.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<arpa/inet.h>

int main()
{
int my_socket,bind_check,client_fd,num;
socklen_t client_len;
size_t len;
struct sockaddr_in server_addr ;
struct sockaddr_in client_addr;
my_socket=socket(AF_INET,SOCK_STREAM,0);
//created socket in INET domain and type SOCK_STREAM
printf("socket fd = %d\n",socket);
server_addr.sin_family=AF_INET;//describe here socket family type: AF_INET and AF_UNIX
server_addr.sin_addr.s_addr=inet_addr("127.0.01");//inet_addr converts string into understandable ip address.Here 127.0.0.1 is loopback address.
server_addr.sin_port=htons(5000);//port number is generally taken more than 1024 because lower port numbers are used by system services.
len=sizeof(server_addr);
printf("size of server_address =%d\n ",len);
bind_check=bind(my_socket,(const struct sockaddr *)&server_addr,len);
if(bind_check<0)//if bind function return 0 means SUCCESS and -1 means FAILURE
perror("socket is not binded\n");
listen(my_socket,5);
client_len=sizeof(client_addr);
client_fd=accept(my_socket,(struct sockaddr *)&client_addr,&client_len);
read(client_fd,&num,4);
printf("number read from client = %d\n",num);
return 0;
}
