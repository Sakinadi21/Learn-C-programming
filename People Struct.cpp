//create a structure 'person' having attributes as age and weight. Access its structure variables using pointers.


#include <stdio.h>  // Includes the standard input-output library

// Define the structure 'person'
typedef struct {
    int age;     // Integer member to store age
    float weight; // Float member to store weight
} person;

int main() {
    person john;             // Declare a variable 'john' of type 'person'
    person *ptr = &john;     // Declare a pointer 'ptr' to 'person' and assign it the address of 'john'

    // Access and set the structure members using the pointer
    ptr->age = 25;           // Set the 'age' member of 'john' to 25 using the pointer
    ptr->weight = 72.5;      // Set the 'weight' member of 'john' to 72.5 using the pointer

    // Access and print the structure members using the pointer
    printf("Age: %d\n", ptr->age);      // Print the 'age' member using the pointer
    printf("Weight: %.2f\n", ptr->weight); // Print the 'weight' member using the pointer

    return 0;                // Return 0 to indicate successful execution
}
