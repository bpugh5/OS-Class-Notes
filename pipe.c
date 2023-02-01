#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void) {
	int fd = open("foo.out", O_WRONLY|O_CREAT|0644);
	
	if (fd == -1) {
		perror("open");
		return 1;
	}
	
	dup2(fd, 1);

	write(1, "Hello!\n", 7);
	
	close(fd);
}
