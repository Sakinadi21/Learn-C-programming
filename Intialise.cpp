#include <stdio.h>

int main() {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        printf("\nEnter element number %d: ", i + 1);
        scanf("%d", &arr[i]); // Use %d for the format specifier
    }

    for (int i = 0; i < 4; i++) { // Fix the loop to iterate up to 4 elements
        printf("%d ", arr[i]); // Print all elements of the array
    }

    printf("\n"); // Add a newline at the end for better formatting

    return 0;
}
