#include <stdio.h>

// Function to reverse a portion of an array
void reverse(int arr[], int si, int ei) {
    // Loop from the start index 'si' to the end index 'ei'
    for (int i = si, j = ei; i < j; i++, j--) {
        // Swap the elements at indices i and j
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return; // End of the function
}

int main() {
    // Initialize the array with 7 elements
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    // Variable 'n' for the size of the array
    int n = 7;
    // Variable 'k' for the number of positions to rotate
    int k = 50;

    // Ensure 'k' is within the bounds of the array size
    k = k % n; // This ensures that k is less than n (handling cases where k > n)

    // Step 1: Reverse the entire array
    reverse(arr, 0, n - 1);

    // Step 2: Reverse the first k elements
    reverse(arr, 0, k - 1);

    // Step 3: Reverse the remaining elements from k to n-1
    reverse(arr, k, n - 1);

    // Print the array after rotation
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print each element followed by a space
    }

    return 0; // End of the main function
}
