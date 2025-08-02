// New feature is added
// Bubble Sort Implementation in C and drop down

#include<stdio.h>
int main(){
    int arr[100], n, i, j, temp;
    printf("Enter the number of elements in the array: "); 
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Bubble Sort Algorithm
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array:\n"); 
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0; 
}
// This code implements the Bubble Sort algorithm in C.
// It sorts an array of integers in ascending order.
// The user is prompted to enter the number of elements and the elements themselves.
// The sorted array is then printed to the console.
