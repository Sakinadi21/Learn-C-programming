#include <stdio.h>
#include <string.h>

// Function to reverse the given string
void reverseString(char* str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char temp;

    // Swap characters from start to end until the middle is reached
    while (start < end) {
        // Swap characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers towards the middle
        start++;
        end--;
    }
}

int main() {
    char str[] = "Sakiba Belal";

    printf("Original string: %s\n", str);

    // Call the function to reverse the string
    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

