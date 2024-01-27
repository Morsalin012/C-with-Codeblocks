#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    printf("Enter any integer number: ");
    scanf("%d",&i);
    if(i%2==0){
        printf("It's an Even number");
    }else{
        printf("It's a Odd number");
    }
    return 0;
}