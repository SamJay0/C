#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
    int fdOpen,fdClose;
    ssize_t k;
    char *buffer[512];
    fdOpen=open("recap.txt",O_RDONLY);
    printf("opening file\n");
    sleep(3);
    if(fdOpen==-1){
        printf("failed to open file\n");
    }else{
        printf("file opened successfully\n");
        sleep(1);
        printf("reading from file\n");
        sleep(3);
        k=read(fdOpen,buffer,512);
        if(k==-1){
            printf("failed to read from file");
        }else{
            printf("%ld characters read from file\n",k);
            fdClose=close(fdOpen);
            printf("closing file\n");
            sleep(2);
            if(fdClose!=-1){
                printf("file closed\n");
            }
        }
    }

}