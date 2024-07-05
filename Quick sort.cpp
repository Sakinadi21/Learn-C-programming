#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Partition function to place pivot element at correct position
int partition(int A[], int low, int high) {
    int pivot = A[low]; // Pivot element
    int i = low;
    int j = high;

    while (i < j) {
        // Increment i while elements are less than pivot
        while (A[i] <= pivot && i < high) {
            i++;
        }
        // Decrement j while elements are greater than pivot
        while (A[j] > pivot) {
            j--;
        }
        // Swap elements if i is less than j
        if (i < j) {
            swap(&A[i], &A[j]);
        }
    }
    // Swap the pivot element with the element at index j
    swap(&A[low], &A[j]);
    // Return the partition index
    return j;
}

// The main function that implements QuickSort
void quickSort(int A[], int low, int high) {
    if (low < high) {
        // Get the partition index
        int j = partition(A, low, high);
        // Recursively sort elements before and after partition
        quickSort(A, low, j - 1);
        quickSort(A, j + 1, high);
    }
}

// Function to print an array
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int A[] = {10, 7, 8, 9, 1, 5}; // Example array
    int n = sizeof(A) / sizeof(A[0]); // Calculate the number of elements in the array
    printf("Unsorted array: \n");
    printArray(A, n);

    quickSort(A, 0, n - 1);
    printf("Sorted array: \n");
    printArray(A, n);

    return 0;
}

