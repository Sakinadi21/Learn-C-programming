#include <stdio.h>

int main() {
    int a;
    printf("Enter a: ");  // Fixed the syntax error (replaced } with ))
    scanf("%d", &a);

    int b;
    printf("Enter b: ");  // Fixed the typo (prinf to printf)
    scanf("%d", &b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);  // Added a newline for consistency

    return 0;
}

