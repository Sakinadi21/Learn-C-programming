#include <stdio.h>

int main() {
    // Initialize the array with 7 elements
    int arr[7] = {12, 21, 21, 42, 21, 6, 7};
    // The element to search for
    int x = 21;
    // Variable to keep track of whether the element is found
    int check = 0; // 0 means the element is not present

    // Loop through the array from the end to the beginning
    for (int i = 6; i >= 0; i--) {
        if (arr[i] == x) {
            check = 1; // 1 means the element is present
            break; // Exit the loop as we found the element
        }
    }

    // Check the result and print the appropriate message
    if (check == 0) {
        printf("%d is not present in the array\n", x);
    } else {
        printf("%d is present in the array\n", x);
    }

    return 0; // End of the main function
}
