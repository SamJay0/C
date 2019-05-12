#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
int main(){
 int fd1,fd2,fd3;
 char* buffer [100];
 fd1=open("mcs3.txt",O_RDONLY);
  if(fd1==-1){
      printf("failed\n");
  }else{
      lseek(fd1,7,10);
      read(fd1,buffer,10);
      fd2=open("mcs32.txt",O_RDWR);
      fd3=write(fd2,buffer,8);
      if(fd3==-1){
          printf("failed to write");
      }else{
          printf("file written successfully\n");
          
      }
  }
 
}
