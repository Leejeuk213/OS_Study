#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>

int main()
{ 
    pid_t pid;
    pid = fork();
    if(pid < 0) {
        fprintf(stderr, "Fork Failed");
        return 1;
    }
    else if(pid == 0){
        execlp("/bin/ls", "ls", NULL);
    }
    else{
        wait(NULL); 
        printf("child complete");
    }
    return 0;
}