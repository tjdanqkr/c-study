#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	pid_t pid;
	
	pid = fork();
 	if(pid>0){
		printf("%d",pid);
		printf("P = %ld\n",(long)getpid());
		printf("%ld\n",(long)getppid());
		sleep(30);
		exit(1);
	}
	else if(pid==0){
		printf("%d",pid);
		printf("C = %ld\n",(long)getpid());
		printf("%ld\n",(long)getppid());
		sleep(100);
		exit(1);
	}else{
		printf("error");
	}
}
 
