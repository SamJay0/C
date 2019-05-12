#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
    int fd_open;
    ssize_t k;
    char* buffer [512];
    fd_open=open("mcs3.txt",O_RDONLY);
    if(fd_open==-1)
    printf("failed to open file\n");
    else{
        k=read(fd_open,buffer,512);
        if(k==-1)
        printf("failed to read file\n");
        else
        printf("%ld characters read\n",k);
    }
    return 0;


}