#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main(){
 int fd1,fd2,fd3;
 char * buffer[11];
 ssize_t k;
 fd1=open("mcs3.txt",O_RDONLY);
 if(fd1==-1)
  printf("failed\n");
 else{
   k=read(fd1,buffer,11);
     if(k==-1)
       printf("failed to read file\n");
     else
       fd2=open("jay1.txt",O_RDWR);
         fd3=write(fd2,buffer,11);
           if(fd3 !=-1)
             printf("file written successfully\n");
          close(fd1);
          close(fd2);
  }
  
return 0;
}
