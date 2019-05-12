#include<stdio.h>
int marks []={90,30,40,30,40};
int count [5];
void display(){
    for(int i=0;i<((sizeof marks)/sizeof(int));i++){
        printf("%d \t\t %d\n",i,marks[i]);
    }
}
double mean(){
    int sum=0;
    int average=0;
    for(int i=0;i<((sizeof marks)/sizeof(int));i++){
        sum+=marks[i];
    }
    average=sum/((sizeof marks)/sizeof(int));
    return average;
}
int main(){
    display();
    printf("mean=%f\n",mean());
}
