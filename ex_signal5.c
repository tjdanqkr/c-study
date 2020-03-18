#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	pid_t pid,pid1;
	printf("start\n");
	pid =fork();
	FILE *fptr;
	char str[100];
	
	if(pid>0){
		execl("./ex_signal4","./ex_signal4",NULL);
	}
	else if(pid==0){
		printf("c\n");
		sleep(5);
		system("pgrep ex_signal4 > a.out");
		if((fptr =fopen("/home/bit39/c/a.out", "r"))==NULL){
			printf("Error\n");
			exit(1);
		}else{
			fptr =fopen("/home/bit39/c/a.out", "r");
			if(fgets(str,100,fptr)!=NULL)
				printf("%s\n",str);
			else
				printf("x\n");
		}kill(atoi(str),10);
		/*pid1=fork();
		if(pid1>0){
			execl("/usr/bin/pgrep","/usr/bin/pgrep","ex_signal4 > 1.out",NULL);
			sleep(25);
		}else if(pid1==0){
			sleep(15);
		
			fptr =fopen("/home/pi/c/1.out", "r");
			if(fgets(str,100,fptr)!=NULL)
				printf("%s\n",str);
			else
				printf("x\n");
			kill(atoi(str),10);
		}*/
	}
	
	//kill(atoi(a),10);
}

