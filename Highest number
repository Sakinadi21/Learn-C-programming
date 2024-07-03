#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int gcd(int a, int b) {
    int hcf = 1; // Initialize hcf to 1
    for (int i = min(a, b); i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break; // Break the loop once the HCF is found
        }
    }
    return hcf;
}

int main() {
    int a, b; // Corrected the typo 'intr' to 'int'
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    int hcf = gcd(a, b);
    printf("The HCF/GCD of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
