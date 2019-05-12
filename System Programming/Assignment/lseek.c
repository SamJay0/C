#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
int main(){
int fd1,fd2,fd3;
ssize_t nread;
char *buffer[512];
 fd1=open("mcs3.txt",O_RDONLY|O_CREAT,0644);
 if(fd1==-1)
  printf("failed to open");
 else
  //printf("file opened successfully\n");
  lseek(fd1,27,0);
  nread=read(fd1,buffer,7);
  if(nread==-1)
   printf("failed to read");
  else{
   //printf("file read successfully\n");
   fd2=open("mcs3200.txt",O_RDWR|O_CREAT,0644);
   fd3=write(fd2,buffer,7);
    if(fd3==-1)
      printf("failed to write");
    else
      printf("file written successfully\n");
      }
return 0;
}
