#include <stdio.h>

int power(int a, int b) {
    if (b == 0)
        return 1;
    int x = power(a, b / 2);
    if (b % 2 == 0)
        return x * x;
    else
        return x * x * a;
}

int main() {
    int a, b;

    printf("Enter base: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    int p = power(a, b);
    printf("%d raised to the power %d is %d\n", a, b, p);

    return 0;
}
