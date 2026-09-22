#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
char msg[100];
mkfifo("fifo1", 0666);
mkfifo("fifo2", 0666);
int fd1 = open("fifo1", O_RDONLY);
read(fd1, msg, sizeof(msg));
printf("Client: %s\n", msg);
close(fd1);
int fd2 = open("fifo2", O_WRONLY);
write(fd2, "Hello Client", 13);
close(fd2);
return 0;
}
