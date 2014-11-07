/**
 *	server.c
 *
 *	server implementation, for the TCP protocol under AF_INET domain.
 *	
 *	see udp first
 * **/

#include "inet_header.h"

int main()
{
	int server_sockfd, client_sockfd;
	int server_len, client_len;
	struct sockaddr_in server_address;
	struct sockaddr_in client_address;
	int len;
	char *msg = "hello from server";
	char *resp;
	
	resp = malloc(0);
	server_sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(server_sockfd == -1)
	{
		perror("socket:");
		exit(EXIT_FAILURE);
	}
	
	printf("server sock fd = %d\n", server_sockfd);
	server_address.sin_family = AF_INET;
	server_address.sin_addr.s_addr = INADDR_ANY;
	server_address.sin_port = htons(9734);
	server_len = sizeof(server_address);

	bind(server_sockfd, (struct sockaddr *)&server_address, server_len);
	
	
	/* In case of the stream socket, the listen call is used to create a listening queue, in which all the incoming requests
	 * ( number less than 5(backlog--can be increased/decreased )) are queued up while the server is busy serving a request */	
	listen(server_sockfd, 5);	
	while(1)
	{
		char ch;
		printf("server waiting\n");
		client_len = sizeof(client_address);
		
		/* accpet call is used to duplicate the server socket, so that a separate socket serves every client, otherwise
		 * serving all the clients on a single socket would only tend to increase the load and programming effort for 
		 * server */
		client_sockfd = accept(server_sockfd, (struct sockaddr *)&client_address, &client_len);
		read(client_sockfd, resp, 100);
		printf("data read in server = %s\n", resp);
		++ch;
		write(client_sockfd, msg, strlen(msg) + 1);
		close(client_sockfd);
	}
	return 0;
}






