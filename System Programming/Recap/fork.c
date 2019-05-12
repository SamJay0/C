#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
    pid_t value;
    value=fork();
    switch(value){
        case -1:{
            printf("fork failed\n");
            break;
        }
        case 0:{
            printf("Iam a child\n");
            break;
        }
        default:{
            sleep(3);
            printf("Iam a parent\n");
            break;
        }
    }

    // printf("%s",(value==0)? "I am a child\n" : "I am a parent\n");
    return 0;
}