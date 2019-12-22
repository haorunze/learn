#include "my.h"
int tickets = 100;
sem_t empty,full;

void *worker0(void *arg)
{
	while(1)
	{
		sem_wait(&empty);
		if(tickets>0)
		{
			//usleep()
		}
	}
}

int main()
{
	pthread_t tid[2];
	int i,ret;
	
	void *(*pt[2])();
		pt[0] = worker0;
		pt[1] = worker1;
	pthread_mutex_init(&mutex,NULL);
	for(i=0;i<2;i++)
	{
		ret=pthread_create(&tid[1],NULL,pt[i],NULL);
		if(ret!=0)
		{
			perror("create thread\n");
			exit(1);
		}
	}
	for(i=0;i<2;i++)
	{
		pthread_join(tid[i],NULL);
	}
	return 0;
}
