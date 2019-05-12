#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
    pid_t value1,value2;
    value1=fork();
    if(value1>0){
       value2=fork();
       if(value2==0){
           printf("%ld\n",(long)getpid());
       }
    }
      if(value1==0){
       value2=fork();
       if(value2==0){
           printf("%ld\n",(long)getpid());
       }
    }
}