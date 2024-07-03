#include <stdio.h>

int power(int a, int b) {
    if (b == 0)
        return 1;
    int recAns = a * power(a, b - 1);
    return recAns;
}

int main() {
    int a, b;

    printf("Enter base: ");
    scanf("%d", &a); // Removed \n

    printf("Enter power: ");
    scanf("%d", &b); // Removed \n

    int p = power(a, b);
    printf("%d raised to the power %d is %d\n", a, b, p); // Corrected the printf statement

    return 0;
}
