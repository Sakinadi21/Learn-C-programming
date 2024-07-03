#include <stdio.h>
#include <limits.h>

int main() {
    int arr[6] = {95, 90, 31, 25, 100, 30};
    int max = INT_MIN; // Initialize max to smallest possible integer

    // Find maximum value in the array
    for (int i = 0; i < 6; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum value: %d\n", max);

    int min = INT_MAX; // Initialize min to largest possible integer

    // Find minimum value in the array
    for (int i = 5; i >= 0; i--) { // Iterate backwards from the last element to the first
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("Minimum value: %d\n", min);

    return 0;
}
