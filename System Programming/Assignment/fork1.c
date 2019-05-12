#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main(int argc,char * argv []){
    int istack=111;
    int iprint=222;
    pid_t value;
    switch(value=fork()){
        case -1:
         printf("fork failed");
         break;
        case 0:
         istack *=3;
         iprint *=3;
         break;
        default:
         istack *=4;
         iprint *=4;
         sleep(3);
         break;
        
    }
    printf("pid = %ld %s \n istack =%d\n iprint =%d\n",(long)getpid(),(value==0)? "child" :"parent",istack,iprint);
    return 0;
}