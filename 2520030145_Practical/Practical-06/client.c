#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
char msg[100];
int fd1 = open("fifo1", O_WRONLY);
write(fd1, "Hello Server", 13);
close(fd1);
int fd2 = open("fifo2", O_RDONLY);
read(fd2, msg, sizeof(msg));
printf("Server: %s\n", msg);
close(fd2);
return 0;
}
