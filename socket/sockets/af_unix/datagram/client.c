#include "sock_header.h"
#define BUF_SIZE 100
int main()
{
	int sock_fd, count, cl_sock_fd;
	struct sockaddr_un sv_address;
	struct sockaddr_un cl_address;
	int len, result;
	char ch = 'A';
	char buf[BUF_SIZE], rd[BUF_SIZE];

	unlink("client_socket");
	sock_fd = socket(AF_UNIX, SOCK_DGRAM, 0);
	if(sock_fd == -1)
	{
		perror("socket");
		exit(EXIT_FAILURE);
	}
	else
		printf("client socket created successfully with fd = %d\n", sock_fd);

	/* bind the client socket */
	cl_address.sun_family = AF_UNIX;
	strcpy(cl_address.sun_path, "client_socket");
	bind(sock_fd, (struct sockaddr *)&cl_address, sizeof(struct sockaddr_un) - 1);

	/* now create and bind the server socket */

	sv_address.sun_family = AF_UNIX;
	strcpy(sv_address.sun_path, "abhishek_server_socket");

	/* now read and write data from the socket */
/*	count = write(sock_fd, &ch, 1);
	printf("client writes %c\n", ch);
	count = read(sock_fd, &ch, 1);
	printf("client reads %c\n", ch);

*/

	int len1 = sizeof(struct sockaddr_un);
	strcpy(buf, "hello cfrom client");
	sendto(sock_fd, buf, strlen("hello from client") + 1, 0, (struct sockaddr *)&sv_address, sizeof(struct sockaddr_un));
	recvfrom(sock_fd, rd, BUF_SIZE, 0, (struct sockaddr *)&sv_address, &len1);	
	printf("message in client = %s\n", rd);











//
	/*address.sun_family = AF_UNIX;
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
	
	NOW WE CAN READ AND WRITE TO THE SOCKET, JUST LIKE A NORMAL FILE */

	/*count = write(sock_fd, &ch, 1);	
	(count == -1)? printf("write failed\n"): printf("client successfully wrote %c into the socket\n", ch);
	
	count = read(sock_fd, &ch, 1);	
	(count == -1)? printf("read failed\n"): printf("client successfully read %c from the socket\n", ch);
	
	close(sock_fd);
*/
	return 0;
}















