#include<signal.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    static struct sigaction act;
    void cathInt (int);
    act.sa_handler=cathInt;
    sigfillset(&(act.sa_mask));
    sigaction(SIGINT,&act,NULL);
    int x=1;
    while(1){
     printf("\n %d\n",x++);
     sleep(1);
    } 
}
void cathInt(int signo){
    printf("\nIam exiting the loop\n");
    exit(0);
}

