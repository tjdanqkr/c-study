#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main(){
	pid_t pid;
	int j;
	pid =fork():
	if(pid==-1){
		printf("err\n");
		exit();
	}
	if(pid==0){
		execl("/home/data/child_exec", "child_exec1", (char *) 0);
	}else{
		for(j=0; j<5; j++){
			printf("I'm parent pid : %d\n",getpid());
			sleep(1);
		}printf("***i'm parent pid : %d... Parent exiting..***\n", getpid());
		exit(0);
	}


}
