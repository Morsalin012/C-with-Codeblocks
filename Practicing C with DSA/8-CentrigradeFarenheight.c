#include<stdio.h>
#include<conio.h>
int main(){
    float c,f;
    printf("Enter the value of Centrigrade: ");
    scanf("%f",&c);
    f=c*9/5+32;
    printf("The value of Farenheight is: %.2f", f);
    return 0;
}