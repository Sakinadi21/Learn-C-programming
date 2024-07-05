#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);

    return 0;
}
