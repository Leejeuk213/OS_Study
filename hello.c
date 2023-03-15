#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
    pid_t pid;
    
    pid = fork();
    if(pid > 0) //parent process child == 0 parent wait queue 에서 대기
        wait(NULL);
    printf("hello process! %d \n",pid);
    return 0;
}