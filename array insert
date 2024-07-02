#include <stdio.h>

int main() {
    int a[50], size, i, num, pos;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the data you want to insert: ");
    scanf("%d", &num);

    printf("Enter the position where you want to insert the data: ");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size + 1) {
        printf("Invalid position\n");
    } else {
        for (i = size - 1; i >= pos - 1; i--) {
            a[i + 1] = a[i];
        }
        a[pos - 1] = num;
        size++;

        printf("Array after insertion: ");
        for (i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
