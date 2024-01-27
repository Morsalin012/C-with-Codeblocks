#include<stdio.h>
#include<math.h>
int main(){
    float a,b,area;
    printf("Enter the length of equal arms(meter): ");
    scanf("%f",&a);
    printf("Enter the length of other arms(meter): ");
    scanf("%f",&b);
    area= (b*sqrt(pow(a,2)-pow(b,2)))/4;
    printf("Area of Isosceles triangle: %.2f", area);
    return 0;
}