#include <stdio.h>
#include <limits.h> // Include the limits.h header for INT_MIN

int main(void) {
    int n, i;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if the entered size is valid
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1; // Exit the program with an error code
    }

    int arr[n]; // Declare an array of size n

    // Prompt the user to enter the elements of the array
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Read each element into the array
    }

    // Initialize largest and second largest to the minimum possible integer value
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    // Loop through the array to find the largest and second largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            // Update second largest before updating the largest
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            // Update second largest if the current element is less than the largest but greater than the current second largest
            second_largest = arr[i];
        }
    }

    // Check if a valid second largest element was found
    if (second_largest == INT_MIN) {
        printf("No second largest element found.\n"); // No second largest element exists
    } else {
        printf("The second largest element is: %d\n", second_largest); // Print the second largest element
    }

    return 0; // Exit the program successfully
}
