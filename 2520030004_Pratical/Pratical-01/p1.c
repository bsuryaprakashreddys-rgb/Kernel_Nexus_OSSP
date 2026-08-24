#include<unistd.h>
#include<stdio.h>
int main()
{
char cmd[50];
int pid;
scanf("%s", cmd);
pid=fork();
if(pid<0)
{
printf("Fork failed\n");
return 1;
}

if(pid==0)
{
printf("Child pid: %d\n", getpid());
printf("Parent pid: %d\n",getppid());
execlp(cmd,cmd,NULL);
}
else
{
printf("current pid: %d\n", getpid());
printf("parent pid: %d\n", getppid());
}
}
