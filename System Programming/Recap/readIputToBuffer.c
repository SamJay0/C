#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
    int fdCreat,fdOpen;
    char *buffer[50];
    fdCreat=creat("brother_assignment.txt",0644);
    fdOpen=open("brother_assignment.txt",O_RDWR);
    write(fdOpen,"Iam still young but I ",22);
    lseek(fdOpen,22,0);
    write(fdOpen,"BUT I LOVE PROGRAMMING SO MUCH",30);
    return 0;
}