#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int main(){
int pid[3];
for(int i=0;i<3;i++){
pid[i]=fork();
if(pid[i]==0){
printf("CHILD %d pid=%d\n", i+1, getpid());
sleep(i+1);
exit(0);
}
}
wait(NULL);
printf("Parent: any one child completes with wait()\n");
waitpid(pid[2], NULL,0);
printf("Parent:child 3 completes with waitpid()\n");
wait(NULL);
printf("Parent: ALL the childs completed");

}
