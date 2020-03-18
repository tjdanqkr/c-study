#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	pid_t pid;
	pid_t pid1;
	pid = fork();
 	if(pid>0){
		printf("mc %d\n",pid);
		printf("my %ld\n",(long)getpid());
		printf("myp %ld\n",(long)getppid());
		sleep(5);
		exit(0);
	}
	
}
 
