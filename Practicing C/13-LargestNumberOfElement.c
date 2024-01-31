#include <stdio.h>

int main() {
    int i,n,x[100], largest;
    scanf("%d", &n);
    for (i = 0; i<n; i++) {
        scanf("%d", &x[i]);
    }
    largest = x[0];
    for (i = 1; i<n; i++) {
        if (x[i] > largest) {
            largest = x[i];
        }
    }
    printf("The largest element in the array is: %d", largest);
    return 0;
}