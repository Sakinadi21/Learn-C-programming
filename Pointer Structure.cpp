
#include <stdio.h>  // Includes the standard input-output library

typedef struct pokemon {  // Defines a structure named 'pokemon'
    int hp;               // Integer member to store health points
    int speed;            // Corrected: Integer member to store speed (was 'spped')
    int attack;           // Integer member to store attack power
    char tier;            // Character member to store tier
    char name[15];        // Character array to store the name of the Pokemon
} pokemon;                // Name 'pokemon' assigned to the structure for easy use


int main() {              // Main function where the execution starts
    pokemon pikachu;      // Declares a variable 'pikachu' of type 'pokemon'
    //int* x-> adrees of integer value
    pokemon* x=&pikachu;
    printf("%p",x);
    return 0;             // Returns 0 to indicate successful execution
}
