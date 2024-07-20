#include <stdio.h>

// Function to perform linear search
int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return index of the target element if found
        }
    }
    return -1; // Return -1 if target element is not found
}

// Function to print the array elements
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Driver program to test linear search
int main() {
    int arr[] = {12, 31, 25, 8, 32, 17};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 25; // Element to search for
    
    printf("Array elements are: ");
    print_array(arr, n);
    
    int index = linear_search(arr, n, target);
    
    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    
    return 0;
}