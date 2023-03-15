#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<wait.h>

int value = 5;
int main()
{ 
    pid_t pid;
    pid = fork();
    if(pid == 0){ //chiid
        value += 10;
        return 0;
    }
    else if(pid > 0){ //parent
        wait(NULL); 
        printf("Parent: value = %d\n",value);
    }

    // child pcb에서 더해졋을지도 그 것이 parent 값에는 영향을 못미친다 
    return 0;
}