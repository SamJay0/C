#include <stdio.h>
#include <fcntl.h>
int main(){
int fd;
fd=open("jay.txt",O_RDONLY);
if(fd==-1)
printf("file not opened\n");
else
printf("file opened successfully \n");
return 0;
} 
