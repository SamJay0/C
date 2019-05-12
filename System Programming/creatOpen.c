#include <stdio.h>
#include <fcntl.h>
#include <unistd.h> 
int main()
{
int fdCreate,fdOpen,fdClose; 
fdCreate=creat("jay1.txt",0644);
if(fdCreate==-1)
printf("file not created");
else{
fdOpen=("jay1.txt",O_RDONLY);
if(fdOpen==-1)
printf("file not opened successfully\n");
else
printf("file opened successfully\n");
fdClose=close(fdOpen);
if(fdClose != -1)
printf("file closed\n"); 
}
return 0;
}
