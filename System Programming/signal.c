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
    printf("\n sleep call #2\n");
    sleep(1);
    printf("\n sleep call #3\n");
    sleep(1);
    exit(0);  
}
void cathInt(int signo){
    printf("\n cathInt=%d\n",signo);
    printf("cathInt Returning \n");

}

