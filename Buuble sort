//technique,explanation,optimization
/*bubble sort
n elements in the array -> (n-1) passes
after every pass,we need to apply bubble sort on the unsorted elements only & we do not need to check the 'largest'
-----------------------------
nested loop
outer loop will stand for no of passes
inner loop will do swapping*/
#include <stdio.h>

int main() {
    int arr[5] = {5, 4, 3, 2, 1}; // Initialize an array with 5 elements
    int n = 5; // Size of the array

    // Print the original array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) { // Outer loop runs n-1 times
        for (int j = 0; j < n - 1 - i; j++) { // Inner loop runs decreasingly by i
            if (arr[j] > arr[j + 1]) { // Compare adjacent elements
                // Swap the elements
                int temp = arr[j]; // Corrected the swap indices
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n");

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*Time complexity
Outer loop-> 0<i<n-2 ->n-1
Inner loop
i=0 -> n-1 baar
i=1 -> n-2 baar
i=2 -> n-3 baar
no ops = n-1+n-2+n-3+n-4..............2+1
=(n-1)*n/2
=0(n^2/2 - n/2)
=0(n^2/2)
=0(n^2)

best case  T= 0(n)  S=0(1)
avg case   T=0(n^2) S=0(1)
worst case T=0(n^2) S=0(1)

Maximum no of swaps in worst case , If size of array is 'n' -> n-1+n-2+......+2+1 = n(n-1)/2
Bubble sort is stable sort



