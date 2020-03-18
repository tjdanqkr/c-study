#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void signalHandler(int sig){
        if(sig==SIGINT){
                printf("this program will stop in 3 seconds..\n");
                sleep(3);
		system("/usr/bin/firefox www.naver.com");
        }
        if(sig==SIGQUIT){
                printf("signal SIGQUIT\n");
		exit(0);
        }
	if(sig== SIGSTOP){
		printf("sigstop\n");
		execl("/bin/ls","bin/ls",NULL);
	}
}
int main(){
        signal(SIGINT, signalHandler);
        signal(SIGQUIT, signalHandler);
        printf("input Ctrl+C or Ctrl+\\ \n");
        while(1);
}

