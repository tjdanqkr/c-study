#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	pid_t pid;
	pid_t pid1;
	printf("-1\n a-1");
	fork();
 	printf("1\n a+1");
	fork();
	printf("2\n a+2");
}
 
