#include "header.h"

int main()
{
	struct sockaddr_in6 server_address, client_address;
	int sfd, j;
	ssize_t numBytes;
	socklen_t len;
	char buf[BUF_SIZE];
	char client_address_string[INET6_ADDRSTRLEN];

	sfd = socket(AF_INET6, SOCK_DGRAM, 0);
	perror("socket");
	printf("sfd = %d\n", sfd);

	server_address.sin6_family = AF_INET6;
	server_address.sin6_addr = in6addr_any;
	server_address.sin6_port = htons(PORT_NUM);
	

	bind(sfd, (struct sockaddr *)&server_address, sizeof(struct sockaddr_in6));
	perror("bind");
	
	
	len = sizeof(struct sockaddr_in6);
	printf("len = %u\n", len);

	for(;;)
	{
		printf("server waiting \n");
		numBytes = recvfrom(sfd, buf, BUF_SIZE, 0, (struct sockaddr *)&client_address, &len);
		printf("%ld bytes of data read in server = %s\n",(long)numBytes, buf);
		
		inet_ntop(AF_INET6, &client_address.sin6_addr, client_address_string, INET6_ADDRSTRLEN);
		
		strcpy(buf, "hello cl");
		sendto(sfd, buf, strlen("hello cl") + 1, 0, (struct sockaddr* )&client_address, len);	
		perror("sendto");

		
	}
	return 0;
}











