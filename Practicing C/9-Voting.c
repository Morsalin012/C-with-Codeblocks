#include<stdio.h>
#include<stdlib.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>=18){
        printf("You're eligible for voting");
    }else{
        printf("You're not eligible for voting");
    }
    return 0;
}
