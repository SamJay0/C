#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
    int fd_open,fd_close;
    fd_open=open("jay.txt",O_RDONLY|O_CREAT,0644);
    if(fd_open==-1)
    printf("failed to open file");
    else{
        fd_close=close(fd_open);
        if(fd_close==-1)
        printf("failed to close file\n");
        else
        printf("file closed successfully\n");
    }
    return 0;
}