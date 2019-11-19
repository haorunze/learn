#include "my.h"
int main()
{
	int status,r;
	pid_t pid;
	pid=fork();
	if(pid<0){
		perror("failed fork!");
		return -1;
	}else if(pid == 0){
		printf("child %d is running\n",getpid());
		printf("child wait exit\n");
		exit(120);
	}else{
		printf("parent waiting child %d to exit\n",pid);
		while(r=wait(&status) != -1){
			if(WIFEXITED(status))			
				printf("child %d is finfshed with code=%d\n",r,WEXITSTATUS(status));
			else if(WIFSIGNALED(status))
				printf("child %d is finished with ignal code=%d\n",r,WTERMSIG(status));
			else
				printf("unknow mode\n");
return 0;
}

}
