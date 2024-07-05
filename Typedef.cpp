#include <stdio.h>

typedef int Integer;
typedef float number;

int main() {
    Integer x = 7;
    number y = 34.5;

    printf("%d\n", x);   // Correct format specifier for int
    printf("%f\n", y);   // Correct format specifier for float

    return 0;
}
