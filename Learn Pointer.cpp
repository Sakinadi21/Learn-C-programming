#include <stdio.h>

// Function to swap the values of two integers
void swap(int *x, int *y) {
    int temp;
    temp = *x; // temp stores the value pointed to by x
    *x = *y;   // x now stores the value pointed to by y
    *y = temp; // y now stores the value in temp
}

int main() {
    int a = 2;
    int b = 9;
    swap(&a, &b); // pass the addresses of a and b to the swap function
    printf("The value of a is %d\n", a); // Output the new value of a
    printf("The value of b is %d\n", b); // Output the new value of b
    return 0;
}
