#include<stdio.h>
#include<math.h>
int main(){
    float a, area;
    printf("The length of a arm(meter): ");
    scanf("%f", &a);
    area= (pow(a,2)*sqrt(3))/4;
    printf("the area of the equilateral traingle= %.2f sq-meter", area);
    return 0;
}