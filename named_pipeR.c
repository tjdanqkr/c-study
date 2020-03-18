#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define MSG_SIZE 80
#define PIPENAME "./named_pipe_file"
int main(void) {
char msg[MSG_SIZE];int fd;
int nread, i;
/* named pipe 열기, Write 전용으로 열기 */
if ((fd = open(PIPENAME, O_WRONLY)) < 0) {
printf("fail to open named pipe\n");
return 0;
}
/* Data를 보낸다. */
for (i = 0; i < 3; i++) {
snprintf(msg, sizeof(msg), "Send Message[%d]", i);
if ((nread = write(fd, msg, sizeof(msg))) < 0 ) {
printf("fail to call write()\n");
return 0;
}
}
close(fd);
return 0;
//””내용을 msg크기만큼 msg에 넣고
// fd가 참조하는 파일에 쓰겠다
}
