#include <stdio.h>

// Function to perform the Tower of Hanoi move
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary, using destination as auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move the n-1 disks from auxiliary to destination, using source as auxiliary
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n; // Number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Perform the Tower of Hanoi operation
    towerOfHanoi(n, 'S', 'A', 'D'); // S is the source, A is the auxiliary, and D is the destination

    return 0;
}

