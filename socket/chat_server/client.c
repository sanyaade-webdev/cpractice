/**
 *
 *	This program is an implementation of the client.
 *	
 *	DOMAIN   : AF_INET 
 *	PROTOCOL : UDP
 *	
 *	The program uses IP4 addresses for communication.
 *
 **/

#include "inet_header.h"

int main(int argc, char *argv[])
{
	/**
	 *	VARIABLE USAGE :
	 *
	 *	1. sockfd : used to hold the socket file descriptor of the client side socket.
	 *	2. len    : holds the calculated length of the addresses (server / client).
	 *	3. msg    : message to be sent to the server, by the client.
	 *	4. buf    : buffer array used to store the server's response.
	 *
	 **/

	int sockfd, len, result, ret_bind;
	struct sockaddr_in server_address, client_address;


/*	char msg[50] = "hello from client !";
	char resp[50];
*/ // working



	/* create an inet ( datagram ) socket on the client side */
	sockfd = socket(AF_INET, SOCK_DGRAM, 0);
	if(sockfd ==-1)
	{
		perror("socket");
		exit(EXIT_FAILURE);
	}
	else
		printf("client socket created with fd = %d\n", sockfd);
	
	/* initialise the server domain */
	server_address.sin_family = AF_INET;

	/* convert the server's ip address in binary form ( in network byte order ), it should be avoided, instead inet_aton() 
	 * should be used ( for details see "man inet_addr" )*/
	server_address.sin_addr.s_addr = inet_addr("192.168.1.16");
	
	/* specify the port number of the server on which client request is to be sent */
	server_address.sin_port = htons(5000); 
	len = sizeof(server_address);

	printf("connecting the server\n");
	
	/* connect the client socket to the server's. 
	 * see man pages ( man connect ) , second paragraph under DESCRIPTION, to know what role connect plays in UDP, since UDP is
	 * a connectionless protocol */
	result = connect(sockfd, (struct sockaddr *)&server_address, len);
	if(result == -1)
	{
		perror("connect");
		exit(EXIT_FAILURE);
	}
	else
		printf("connected to server\n");
	
	/* send the message to server */
	
//  < new code >
	
	char name[10];	
	printf("Enter your name\n");
	fgets(name, 10, stdin);

// < /new code >

	sendto(sockfd,name, strlen(name), 0, (struct sockaddr *)&server_address, len);
	perror("sendto");

	/* receive response from the server, and print it */
//	recvfrom(sockfd, resp, 40, 0, (struct sockaddr *)&server_address, &len);
//	perror("recvfrom");
//	printf("message read by client : %s\n", resp);
	return 0;
}









