#include<stdio.h>

int main() {
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    // Modify the array based on index parity
    for(int i = 0; i <= 6; i++) {
        if (i % 2 != 0) {
            arr[i] *= 2;  // Multiply odd indexed elements by 2
        } else {
            arr[i] += 10; // Increment even indexed elements by 10
        }
    }

    // Print the modified array
    for(int i = 0; i <= 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
