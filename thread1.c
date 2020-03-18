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


    while(1)
    {
        printf("%c : %d\n", id, i);
        i++;
        sleep(1);
    }
}
void *t_function(void *data)
{
    char id;
    int i = 0;
    id = *((char *)data);
    i = *((int *)data+1);


    
    
   
    while(1)
    {
        printf("%c : %d\n", id, i);
        i++;
        sleep(1);
    }
}


int main()
{
    pthread_t p_thread[2];
    int thr_id;
    int status;
    int a[2];
    a[0]='a';
    a[1]=1;
    int b[2];
    b[0]='b';
    b[1]=2;
 
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
