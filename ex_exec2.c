#include <unistd.h>

int main()
{
    execl("/usr/bin/firefox", "/usr/bin/firefox", NULL);
}
