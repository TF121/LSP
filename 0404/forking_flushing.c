#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char buf[] = "Write to stdout\n";

int main()
{
	pid_t pid;
	if(write(STDOUT_FILENO, buf, strlen(buf)) != strlen(buf))
		perror("write error");
	printf("printf by %d: before fork\n", getpid ());
	if((pid = fork()) < 0)
	{
		perror("fork error");
	}
	else if(pid == 0)
	{
		printf("printf by %d: hi from child!\n", getpid());
	}
	else
	{
		printf("printff by %d: hi from parent!\n", getpid());
	}
	printf("printf by %d: bye\n", getpid());
	exit(EXIT_SUCCESS);
}

