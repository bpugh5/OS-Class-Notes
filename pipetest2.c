#include <stdio.h>
#include <unistd.h>

int main(void) {
	int pfd[2];

	pipe(pfd);

	printf("input: %d, output: %d\n", pfd[0], pfd[1]);

	write(pfd[1], "Hello!", 7);

	char buf[1024];

	read(pfd[0], buf, 1024);

	printf("Read from pipe: '%s'\n", buf);
}
