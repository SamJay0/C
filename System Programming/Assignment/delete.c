#include<stdio.h>
#include<unistd.h>
int main(){
    int fd_delete;
    fd_delete=remove("jay1.txt");
    if(fd_delete==-1)
    printf("unable to delete file\n");
    else
    printf("file deleted successfully\n");
    return 0;
}