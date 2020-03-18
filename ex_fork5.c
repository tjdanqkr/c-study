#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
	int N =5;
	pid_t pid[5];
	int chst;
	int i;
	//pid =fork();
	for(i = 0 ;i<5;i++ ){
		pid[i] =fork();
		if(pid[i]<0){
			return -1;
		}else if(pid[i]==0){
			printf("자식 %ld\n",(long)getpid());
			sleep(30);
			exit(0);
		}else{
			printf("parent %ld, child %ld\n",(long)getpid(),(long)pid[i]);
		}

	}sleep(5000);


}
