#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
    int fd_open,fd_open1,fd_write;
    ssize_t k;
    char* buffer [512];
    fd_open=open("jay.txt",O_RDONLY);
    if(fd_open==-1)
    printf("failed to open file\n");
    else{
        k=read(fd_open,buffer,512);
        if(k==-1)
        printf("failed to read file\n");
        else{
            fd_open1=open("jay1000.txt",O_RDWR|O_CREAT,0644);
            fd_write=write(fd_open1,buffer,512);
            if(fd_write==-1)
            printf("file not written\n");
            else
            printf("file written successfully\n");
        }
       
    }
    return 0;


}