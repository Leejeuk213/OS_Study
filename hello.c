#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
    pid_t pid;
    
    pid = fork();
    printf("hello process! %d \n",pid);
    return 0;
}