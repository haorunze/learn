#include "my.h"
int main()
{
	int fd[2];
	pid_t pid;
	if(pid<0)
	{
		fprintf(stderr,"create child error.reason:[%s]",strerror(error));
		return -1;
	}
	pid = fork();

}
