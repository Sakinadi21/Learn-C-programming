#include <stdio.h>

int factorial(int n) {
    if (n <= 1) // Base case: factorial of 0 or 1 is 1
        return 1;
    else
        return n * factorial(n - 1); // Recursive call
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fact = factorial(n);
    printf("The factorial of %d is %d\n", n, fact);

    return 0;
}
