#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    pid_t value;
    value=fork();
    if(value==0){
        printf("child\n");
        for(int i=1;i<11;i++){
            printf("%d\t",i);
        }
        printf("\n");
    }
    else if(value>0){
        sleep(2);
        printf("parent\n");
        for(int i=1;i<11;i++){
            printf("%d\t",i*i);
        }
        printf("\n");
    }
    else{
        printf("failed");
    }
}