#include "inet_header.h"

int main()
{
	int sockfd, len, result;
	struct sockaddr_in address;
	char ch = 'A';
	char *msg = "hello from client";
	char *resp;
	resp = malloc(0);
	
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd!=-1)
	{
		perror("socket :");
		printf("sockfd = %d\n", sockfd);
	}
	else
	{
		perror("socket");
		exit(EXIT_FAILURE);
	}
	
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = inet_addr("127.0.0.1");
	address.sin_port = htons(9734);
	len = sizeof(struct sockaddr_in);

	result = connect(sockfd, (struct sockaddr *)&address, len);
	if(result == -1)
	{
		perror("connet:");
		exit(EXIT_FAILURE);
	}

	write(sockfd, msg, strlen(msg) + 1);
	read(sockfd, resp, 100);
	printf("data read in client = %s\n", resp);
	close(sockfd);
	return 0;
}













