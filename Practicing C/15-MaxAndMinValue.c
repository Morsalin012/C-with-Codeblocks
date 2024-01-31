#include<stdio.h>
int main(){
    int min, max, i, n, a[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d\n", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    min=max=a[0];
    for(i=1; i<n; i++){
        if(a[i]>max){
            max= a[i];
        }
        else if(a[i]<min){
            min= a[i];
        }
    }
    printf("Max value= %d, Minimum value= %d", max, min);
    return 0;
}
