#include <signal.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void interruptHandler(int sig){
        printf("this program will be exited in 3 seconds..\n");
        sleep(3);
        exit(0);
}
int main(){
        signal(SIGTSTP, interruptHandler);
        printf("input Ctrl+C\n");
        while(1);
}
