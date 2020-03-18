#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


void *my_function(void *data)
{
    char id;
    int i = 0;
     
    id = *((char *)data);
    i = *((int *)data+1);
    long sum = 0;

    for(long j=1; j<=i;i++){
        sum = sum+i;
	printf("%ld\n",sum);
	sleep(1);
    }
    printf("%c sum is %ld\n ", id, sum);
}
void *t_function(void *data)
{
    char id;
    int i = 0;
    id = *((char *)data);
    i = *((int *)data+1);
    long sum =0;

    
    
   
    for(long j=1; j<=i;i++){
        sum = sum+i;
	printf("%ld\n",sum);
	sleep(1);
    }
    printf("%c sum is %ld \n", id, sum);

}


int main()
{
    pthread_t p_thread[2];
    int thr_id;
    int status;
    int a[2];
    a[0]='a';
    a[1]=500000;
    int b[2];
    b[0]='b';
    b[1]=1000000;
    struct timeb startTime,endTime;
    ftime(&startTime);
    thr_id = pthread_create(&p_thread[0], NULL, my_function, (void *)a);
    if (thr_id < 0)
    {
        perror("thread create error : ");
        exit(0);
    }


    thr_id = pthread_create(&p_thread[1], NULL, t_function, (void *)b);
    if (thr_id < 0)
    {
        perror("thread create error : ");
        exit(0);
    }

 
    pthread_join(p_thread[0], (void **)&status);
    pthread_join(p_thread[1], (void **)&status);

    return 0;
}
