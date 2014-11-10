#include "sock_header.h"
#define BUF_SIZE 100
int main()
{

	int server_sockfd, client_sockfd;
	struct sockaddr_un server_address;
	struct sockaddr_un client_address;
	int server_len, client_len;
	int ret_ul;
	char buf[BUF_SIZE];


	ret_ul = unlink("abhishek_server_socket");
	server_sockfd = socket(AF_UNIX, SOCK_DGRAM, 0); //--------------1. domain 2. type of connection 3. protocol (arguments of socket())
	if(server_sockfd == -1)  
	{
		perror("server_socket:");
		exit(EXIT_FAILURE);
	}
	else
		printf("server socket created successfully with fd = %d!!\n", server_sockfd);
	

	server_address.sun_family = AF_UNIX;
	strcpy(server_address.sun_path, "abhishek_server_socket");
	server_len = sizeof(server_address);
	/* should put a check on the return value of bind */
	bind(server_sockfd, (struct sockaddr *)&server_address, server_len);

	
//	listen(server_sockfd, 5);
	while(1)
	{
		char ch;
		printf("server waiting \n");
		client_len = sizeof(client_address);

//		client_sockfd = accept(server_sockfd, (struct sockaddr *)&client_address, &client_len);
		
		recvfrom(server_sockfd, buf, BUF_SIZE, 0, (struct sockaddr *)&client_address, &client_len);	
		printf("data read by server = %s\n", buf);
		strcpy(buf, "hello from server");
		sendto(server_sockfd, buf, BUF_SIZE, 0, (struct sockaddr *)&client_address, client_len);	
		printf("server has sent data\n");
		perror("sendto");
		printf("server fd = %d\n", server_sockfd);
		close(client_sockfd);
		
	}
	

	return 0;
}












