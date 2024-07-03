#include <stdio.h>

// Function prototype
int binary_search(int A[], int n, int x);

// Main function
int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int x = 3;
    int result = binary_search(A, n, x);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}

// Binary search function definition
int binary_search(int A[], int n, int x) {
    int left = 0, right = n - 1, mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (A[mid] == x) {
            return mid;
        }

        if (A[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
