#include<stdio.h>
int main(){
    int i,j; //i=row, j=collum
    for(i=1; i<=5; i++){
        for(j=i; j<=5; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}