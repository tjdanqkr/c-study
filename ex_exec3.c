#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *env[]={"MYHOME=bit39", "MYTEST=1234", (char *)0};

    execle("/bin/sh", "sh", NULL, env);
    perror();
}
