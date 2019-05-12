#include<stdio.h>
#include<unistd.h>
void display(char* s,char* p){
        printf("%s %s ",s,p);
    }
int main(){
    display("juma","sam");
}