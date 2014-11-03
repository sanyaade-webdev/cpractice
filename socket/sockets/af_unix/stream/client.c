#include "sock_header.h"

int main()
{
	int sock_fd, count;
	struct sockaddr_un address;
	int len, result;
	char ch = 'A';

	sock_fd = socket(AF_UNIX, SOCK_STREAM, 0);
	if(sock_fd == -1)
	{
		perror("socket");
		exit(EXIT_FAILURE);
	}
	else
		printf("client socket created successfully with fd = %d\n", sock_fd);
	
	address.sun_family = AF_UNIX;
	strcpy(address.sun_path, "abhishek_server_socket");
	len = sizeof(address);

	result = connect(sock_fd, (struct sockaddr *)&address, len);
	if(result == -1)
	{
		perror("connection_failed : ");
		exit(EXIT_FAILURE);
	}
	else
		printf("client successfully connected to server\n");
	
	/* NOW WE CAN READ AND WRITE TO THE SOCKET, JUST LIKE A NORMAL FILE */

	count = write(sock_fd, &ch, 1);	
	(count == -1)? printf("write failed\n"): printf("client successfully wrote %c into the socket\n", ch);
	
	count = read(sock_fd, &ch, 1);	
	(count == -1)? printf("read failed\n"): printf("client successfully read %c from the socket\n", ch);
	
	close(sock_fd);

	return 0;
}















