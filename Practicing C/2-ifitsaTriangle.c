#include<stdio.h>
#include<conio.h>
int main(){
    float a,b,c;
    printf("side1= ");
    scanf("%f", &a);
    printf("side2= ");
    scanf("%f", &b);
    printf("side3= ");
    scanf("%f", &c);
    if ((a||b||c)!=0 && (a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("Its a triangle");
    }
    else{
        printf("Not a triangle");
    }
    getch();
    return 0;

}