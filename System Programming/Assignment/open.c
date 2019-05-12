#include<stdio.h>
#include<fcntl.h>
int main(){
    int fd;
    fd=open("mcs3.txt",O_RDONLY|O_CREAT,0644);
    if(fd==-1)
    printf("failed to open file\n");
    else
    printf("file opened successfully\n");
    return 0;
}