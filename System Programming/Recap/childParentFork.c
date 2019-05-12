#include<stdio.h>
#include<unistd.h>
int main(){
    int i,j;
    j=0;
    printf("ready to fork...\n");
    i=fork();
    if(i==0){
        printf("the child executes this code\n");
        for(i=0;i<5;i++){
            j=j+5;
            printf("child j=%d\n",j);
        }
    }else{
        sleep(1);
        printf("the parent executes this code\n");
        for(i=0;i<3;i++){
            j=j+i;
            printf("parent j=%d\n",j);
        }
    }
}