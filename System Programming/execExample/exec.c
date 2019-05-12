#include<stdio.h>
#include<unistd.h>
int main(){
    int sum,x,y;
    execl("display.c","jay","sam",(char*)0);
    x=4;
    y=9;
    sum=x+y;
    printf("%d\n",sum);
    return 0;
}