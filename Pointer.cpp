#include <stdio.h>

int main() {
    int a = 25;
    int *x = &a;  // x is a pointer to a
    int **y = &x; // y is a pointer to x

    printf("%d\n", a);   // Print the value of a
    printf("%d\n", *x);  // Print the value pointed to by x (which is a)
    printf("%d\n", **y); // Print the value pointed to by y (which is the value of a)

    return 0;
}
/*1.Variable Declaration:

int a = 25;: Declares an integer variable a and initializes it to 25.
int *x = &a;: Declares a pointer x that points to the address of a.
int **y = &x;: Declares a pointer y that points to the address of x.

2. Printing Values:

printf("%d\n", a);: Prints the value of a, which is 25.
printf("%d\n", *x);: Prints the value pointed to by x, which is also 25.
printf("%d\n", **y);: Prints the value pointed to by the pointer y, which ultimately points to a, so it prints 25.*/
