#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int x) {
    int fact = 1;
    for (int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate the combination (nCr)
int combination(int n, int r) {
    if (r > n) {
        return 0; // Not a valid combination
    }
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int main() {
    int n;

    // Input n
    printf("Enter n: ");
    scanf("%d", &n);

    // Generate Pascal's Triangle up to row n
    for (int i = 0; i <= n; i++) {  // Initialize i to 0
        for (int j = 0; j <= i; j++) {
            int icj = combination(i, j);
            printf("%d ", icj);  // Add a space for better readability
        }
        printf("\n");
    }

    return 0;
}
