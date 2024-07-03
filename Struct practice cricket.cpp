#include <stdio.h>    // Includes the standard input-output library for printf and scanf functions
#include <string.h>   // Includes the string library for string operations like strcpy

int main() {          // Main function where the execution starts
    typedef struct cricketer {  // Defining a structure named 'cricketer'
        char name[25];          // Character array member to store the name (string) of the cricketer
        int age;                // Integer member to store age
        int noOfMatches;        // Integer member to store the number of test matches played
        float average;          // Float member to store the average runs scored in each test match
    } cricketer;                // Giving a name 'cricketer' to the structure for easy use

    cricketer arr[3];          // Declaring an array of 20 'cricketer' structures

    // Reading records of 3 cricketers
    for (int i = 0; i < 3; i++) {
        printf("Enter name of cricketer %d: ", i + 1);
        scanf(" %[^\n]%*c", arr[i].name); // Read name with spaces, consume newline character

        printf("Enter age of cricketer %d: ", i + 1);
        scanf("%d", &arr[i].age); // Read age
        getchar(); // Consume the newline character left by scanf

        printf("Enter number of matches played by cricketer %d: ", i + 1);
        scanf("%d", &arr[i].noOfMatches); // Read number of matches
        getchar(); // Consume the newline character left by scanf

        printf("Enter average runs scored by cricketer %d: ", i + 1);
        scanf("%f", &arr[i].average); // Read average runs
        getchar(); // Consume the newline character left by scanf
    }

    // Printing cricketer details
    for (int i = 0; i < 3; i++) {
        printf("\nCricketer %d Details:\n", i + 1);
        printf("Name: %s\n", arr[i].name); // Print the name of the current cricketer
        printf("Age: %d\n", arr[i].age); // Print the age of the current cricketer
        printf("No of matches played: %d\n", arr[i].noOfMatches); // Print the number of matches played by the current cricketer
        printf("Average: %.2f\n", arr[i].average); // Print the average runs scored by the current cricketer, formatted to 2 decimal places
    }

    return 0; // Return 0 to indicate successful execution
}
