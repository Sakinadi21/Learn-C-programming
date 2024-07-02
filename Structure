/*Sakiba Belal
ID:BFH2325008F
Session:2022-2023
NSTU-18th,IIT-6th
*/


#include <stdio.h>
#include <string.h>

// Define the structure for student
typedef struct {
    char name[50];
    int grade;
} Student;

// Function to swap two students
void swap(Student* a, Student* b) {
    Student temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function used in Quick Sort
int partition(Student arr[], int low, int high) {
    int pivot = arr[high].grade; // Pivot chosen as the grade of the high element
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j].grade < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick Sort function
void quickSort(Student arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print the array of students
void printArray(Student arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Grade: %d\n", arr[i].name, arr[i].grade);
    }
}

int main() {
    Student students[] = {
        {"Alice", 85},
        {"Bob", 75},
        {"Charlie", 95},
        {"David", 65},
        {"Eve", 70}
    };
    int n = sizeof(students)/ sizeof(students[0]);

    printf("Unsorted array:\n");
    printArray(students, n);

    quickSort(students, 0, n - 1);

    printf("\nSorted array:\n");
    printArray(students, n);

    return 0;
}
