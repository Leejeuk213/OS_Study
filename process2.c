#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>


int main()
{ 

    int i;
    pid_t pid;

    for(i = 0; i < 4; i++) 
    {
       pid = fork();
       printf("hello, fork %d\n", pid);
    }
    return 0;
}