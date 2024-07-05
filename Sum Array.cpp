#include <stdio.h>

int main() {
    int marks[6] = {95, 90, 31, 25, 100, 30};
    int sum = 0;

    for (int i = 0; i < 6; i++) {
        sum = sum + marks[i]; // Accumulate the sum of marks
    }

    printf("Sum of marks: %d\n", sum); // Print the total sum after the loop

    return 0;
}
