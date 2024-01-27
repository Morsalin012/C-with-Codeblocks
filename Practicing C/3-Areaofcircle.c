#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define pi 3.1416
int main(){
    float area,radius;
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    area= pi*radius*radius;
    printf("The area of a circle: %.2f", area);
    getch();
}
