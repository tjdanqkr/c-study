#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	pid_t pid; //pid_t 선언

	pid = fork(); //fork 발생
	if(pid == -1) { //-1 이면 fork생성 에러
		printf("can't fork, erro\n");
		exit(0);
	}

	if(pid == 0) { //0이면 자식 프로세스
		int j;
		
		printf("child: %d\n", pid);
		sleep(1);
		
		exit(0);
	} else { //부모프로세스
		int i;
		
		printf("parent : %d\n", pid);
		sleep(1);
		
		exit(0);
	}
	return 0;
}

