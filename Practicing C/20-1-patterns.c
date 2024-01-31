#include<stdio.h>
int main(){
    int i,j,n,m; //n=row, m=collum
    printf("Enter the row and collum you wanna print: ");
    scanf("%d %d", &n, &m);
    for(i=1; i<=n; i++){
        for(j=1; j<=m; j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}