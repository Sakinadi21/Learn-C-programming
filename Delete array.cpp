#include <stdio.h>

int main() {
    int a[50], size, i, pos, item;

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the position of the data you want to delete: ");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size) {
        printf("Invalid position\n");
    } else {
        item = a[pos - 1];  // Store the item to be deleted
        for (i = pos - 1; i < size - 1; i++) {
            a[i] = a[i + 1];
        }

        size--;

        printf("Array after deletion: ");
        for (i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }

    return 0;
}
