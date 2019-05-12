#include<stdio.h>
#include<unistd.h>
int main(){
printf("executing is \n");
char* argv[]={"ls","-l",(char*)0};
execv("/bin/ls",argv);
return 0;
}
