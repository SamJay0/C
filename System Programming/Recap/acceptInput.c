#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
    ssize_t k;
    char buffer[40];
    k=read(0,buffer,40);
//    write(1,buffer,k);

}