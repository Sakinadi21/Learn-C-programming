//Rotate the given array by k steps ,where k is non-negative


#include <stdio.h>

// Function to reverse a portion of an array
void reverse(int arr[], int a, int b) {
    // Loop from the start index 'a' to the end index 'b'
    for (int i = a, j = b; i < j; i++, j--) {
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

    // Call the reverse function to reverse elements from index 2 to 5
    reverse(arr, 2, 5);

    // Print the entire array to see the result of the reversal
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]); // Print each element followed by a space
    }

    return 0; // End of the main function
}
