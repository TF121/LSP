#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	pid_t pid;

	printf("before fork(): %d\n", getpid());

	if((pid = fork()) < 0)
	{
		perror("error from fork()\n");
	}

	else if(pid == 0)
	{
		printf("hi from child: %d\n", getpid());
	}

	else
	{
		printf("hi from parent: %d\n", getpid());
	}

	printf("bye: %d\n", getpid());

	return 0;
}
