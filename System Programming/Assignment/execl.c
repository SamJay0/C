#include<stdio.h>
#include<unistd.h>
int main(){
printf("executing is \n");
execl("/bin/ls","ls","-l",(char*)0);
return 0;
}