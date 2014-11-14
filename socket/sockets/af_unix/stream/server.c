#include "sock_header.h"

int main()
{
/*
 *
 *
 *
 *
 * */

	int server_sockfd, client_sockfd;
	struct sockaddr_un server_address;
	struct sockaddr_un client_address;
	int server_len, client_len;
	int ret_ul;

	/* REMOVE EXISTING SOCKETS IF ANY, AND THEN CREATE NEW */

	ret_ul = unlink("server_socket");
	server_sockfd = socket(AF_UNIX, SOCK_STREAM, 0); //--------------1. domain 2. type of connection 3. protocol (arguments of socket())
	if(server_sockfd == -1)  
	{
		perror("server_socket:");
		exit(EXIT_FAILURE);
	}
	else
		printf("server socket created successfully !!\n");
	
	/* DEFINE THE FAMILY AS AF_UNIX, AND COPY THE NAME OF THE SOCKET INTO THE 'sun_path' VARIABLE TO MAKE THE SERVER SOCKET VISIBLE
	 * TO CLIENTS */

	server_address.sun_family = AF_UNIX;
	strcpy(server_address.sun_path, "abhishek_server_socket");
	server_len = sizeof(server_address);
	/* should put a check on the return value of bind */
	bind(server_sockfd, (struct sockaddr *)&server_address, server_len);

	/* generate a listening queue, where incoming messages are queued up for the server */
	listen(server_sockfd, 5); 


	while(1)
	{
		char ch;
		printf("server waiting \n");
		client_len = sizeof(client_address);

		client_sockfd = accept(server_sockfd, (struct sockaddr *)&client_address, &client_len);

		read(client_sockfd, &ch, 1);
		printf("char read from server = %c\n", ch);
		++ch;
		write(client_sockfd, &ch, 1);
		close(client_sockfd);
		
	}
	

	return 0;
}












