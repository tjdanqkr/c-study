#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	pid_t pid;
	char a;
	printf("start");
	pid=fork();
	if(pid>0){
		printf("Child pid : %ld, ppid : %ld\n ", (long)getpid(),(long)getppid());
		printf("종료함\n");
		
		kill(getpid(), 9);
		sleep(40);
	}else{
		//printf("parent pid: %ld",(long)getpid());
	}
}
