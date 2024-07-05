//Find the unique number in a given array where all the elements are being repeated twice with one value being unique

#include <stdio.h>

int main() {
    // Initialize an array where all elements are repeated twice except one
    int arr[7] = {1, 2, 2, 1, 5, 9, 5};

    // Variable to store the result of XOR operation
    int unique = 0;

    // XOR all elements of the array
    for (int i = 0; i < 7; i++) {
        unique ^= arr[i]; // XORing each element
    }

    // Print the unique element
    printf("The unique element is: %d\n", unique);

    return 0; // End of the main function
}
/* XOR bitwise operation. XORing all the elements of the array will result in the unique element
because x ^ x = 0 and x ^ 0 = x.*/
