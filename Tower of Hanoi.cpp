#include <stdio.h>

void tower(int n, char s, char a, char d) {
    if (n == 1) {
        printf("%c -> %c\n", s, d);
        return;
    }
    tower(n - 1, s, d, a);
    printf("%c -> %c\n", s, d);
    tower(n - 1, a, s, d);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    tower(n, 'a', 'b', 'c');
    return 0;
}
