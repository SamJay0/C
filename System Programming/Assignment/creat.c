#include<stdio.h>
#include<fcntl.h>
int main(){
    int fd_creat,fd_open;
    fd_creat=creat("jay.txt",0644);
    if(fd_creat==-1)
    printf("failed to create file");
    else{
        fd_open=open("jay.txt",O_RDONLY);
        if(fd_open==-1)
        printf("failed to open file\n");
        else
        printf("file opened successfully\n");
    }
    return 0;
    
}