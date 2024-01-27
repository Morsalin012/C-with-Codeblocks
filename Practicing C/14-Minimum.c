#include <stdio.h>

int main() {
    int i, n, x[100], minimum;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);  // Read the number of elements in the array

    printf("Enter the elements of the array: \n");
    for (i = 0; i<n; i++) {
        scanf("%d", &x[i]);  // Read the elements of the array
    }
    
    minimum = x[0];  // Assume the first element as the minimum
    
    for (i = 1; i < n; i++) {
        if (x[i]<minimum) {  // Check if the current element is less than the current minimum
            minimum = x[i];  // If yes, update the minimum
        }
    }
    
    printf("The minimum element in the array is: %d", minimum);  // Print the minimum element
    return 0;
}
