#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
    pid_t p_id;
    p_id =fork();
    if(p_id==0){
         printf("I am a child\n");   
    }

    else if(p_id>0){
        printf("I am a parent\n");
        sleep(3);
    }
    else{
        printf("something went wrong\n");
    }
    
    return 0;
}