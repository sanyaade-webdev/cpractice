#include "header.h"

int main(int argc, char *argv[])
{
	if(argc!=2)
	{
		printf("invalid args\n");
		return -1;
	}
	struct sockaddr_in6 server_address;	
	int sfd, j;
	size_t msglen;
	ssize_t numBytes;
	char resp[BUF_SIZE];

	sfd = socket(AF_INET6, SOCK_DGRAM, 0);
	perror("socket");
	printf("client fd = %d\n", sfd);

	server_address.sin6_family = AF_INET6;
	server_address.sin6_port = htons(PORT_NUM);
	
	inet_pton(AF_INET6, argv[1], &server_address.sin6_addr);

	sendto(sfd, "hello c", strlen("hello c") + 1, 0, (struct sockaddr *)&server_address, sizeof(struct sockaddr_in6));
	perror("sendto");
	recvfrom(sfd, resp, BUF_SIZE, 0, NULL, NULL);
	perror("recvfrom");

	printf("client reads : %s\n", resp);


	return 0;
}
