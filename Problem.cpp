#include <stdio.h>

int main() {
    int marks[6] = {95, 90, 31, 25, 100, 30};

    for (int i = 0; i < 6; i++);//ekane last e ; tai output 0 hbe
    {

            marks[i]=i;
        printf("%d\n", marks[i]); // Print the marks
    }

    return 0;
}
