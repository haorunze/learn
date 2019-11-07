#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
static void __attribute__((constructor)) before_main()
{
	printf("Before test1 main\n");
}
int main(int argc,char *argv[])
{
	int i;
	printf("test1:pid = %d,ppid = %d\n",getpid(),gitppid());
	
}
