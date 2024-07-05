#include <stdio.h>

// Function to reverse an array of size 7
void reverse(int arr[]){
    // Define starting index i and ending index j
    int i = 0;
    int j = 6;

    // Correct the while loop condition to run until i is less than j
    while(i < j){
        // Swap the elements at index i and j
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        // Move i forward and j backward
        i++;
        j--;
    }
    return; // End of the function
}

int main(){
    // Define and initialize the array
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    // Call the reverse function to reverse the array
    reverse(arr);

    // The size method is incorrect. Correct it using sizeof.
    // sizeof(arr) gives total bytes and sizeof(arr[0]) gives bytes of one element
    int size = sizeof(arr) / sizeof(arr[0]);

    // Loop to print the reversed array
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]); // Add a space for better readability
    }

    return 0; // End of the main function
}
