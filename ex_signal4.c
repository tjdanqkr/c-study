#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void fire(int sig){
	if(sig == 10){
		execl("/usr/bin/firefox","/usr/bin/firefox",NULL);
	}
}
int main(){
	while(1){
		printf("run\n");
		sleep(5);
		signal(10,fire);
	}
}
