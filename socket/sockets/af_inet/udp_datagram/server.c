/** 

	server.c
	
	This program is an implementation of the server for communication, using UDP protocol under AF_INET domain.
	
	See client.c first.

**/


#include "inet_header.h"

int main()
{	/**
		to understand variable usage, see client.c
	**/
	int sockfd, len;
	struct sockaddr_in server_address, client_address;
	char msg[50] = "hello from server";
	char resp[50];

	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	perror("sockfd");

	server_address.sin_family = AF_INET;
	
	/* INADDR_ANY is used here, so that the server can server the requests of any random client, a specific client ip address can
	 * also be given, but then the server will reject requests from all other clients */
	server_address.sin_addr.s_addr = INADDR_ANY;
	
	server_address.sin_port = htons(5000);
	len = sizeof(struct sockaddr_in);
	
	/* bind the server_address with its socket file descriptor and make it visible to all the clients */
	bind(sockfd, (struct sockaddr *)&server_address, len);
	perror("bind");


	while(1)
	{	
		/* see client.c for desciption of the code below */
		printf("server waiting\n");
		recvfrom(sockfd, resp, 40, 0, (struct sockaddr *)&client_address, &len);
		perror("recvfrom");
		printf("message from client : %s\n", resp);
		sendto(sockfd, msg, strlen(msg) + 1, 0, (struct sockaddr *)&client_address, len);
		perror("\n");
	}
	return 0;
}
