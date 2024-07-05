#include <stdio.h>
#define N 5

int main() {
    int a[N], i;

    printf("Enter %d integer numbers: \n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    printf("Elements of array in reverse order are: \n");
    for(i = N-1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
