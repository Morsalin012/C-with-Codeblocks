#include<stdio.h>
#include<conio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num%2==0 && num!=1){
        printf("It's a Prime number");
    }else{
        printf("Not a Prime number");
    }
    getch();
    return 0;
}