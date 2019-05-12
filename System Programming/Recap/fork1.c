#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
    pid_t value;
    value=fork();
    if(value==0){
        printf("Iam a child\n");
    }
    else if(value>0){
        sleep(3);
        printf("Iam a parent\n");
    }
    else{
        printf("fork failed");
    }
   
    // printf("%s",(value==0)? "I am a child\n" : "I am a parent\n");
    return 0;
}