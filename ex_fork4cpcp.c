#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	pid_t pid;
	pid_t pid1;
	
	pid=fork();
 	printf("1\n");
	if(pid==0){
		printf("2\n");
		pid=fork();
		printf("3\n");
	}
	
}
 
