#include <stdio.h>  // Includes the standard input-output library

typedef struct pokemon {  // Defines a structure named 'pokemon'
    int hp;               // Integer member to store health points
    int speed;            // Corrected: Integer member to store speed (was 'spped')
    int attack;           // Integer member to store attack power
    char tier;            // Character member to store tier
    char name[15];        // Character array to store the name of the Pokemon
} pokemon;                // Name 'pokemon' assigned to the structure for easy use

// Function that takes a pokemon structure and prints its hp
void fun(pokemon p) {     // Defines a function 'fun' that takes a 'pokemon' structure as an argument
    printf("%d\n", p.hp); // Prints the 'hp' member of the pokemon structure
    return;               // Returns from the function (not necessary, as the function type is void)
}

int main() {              // Main function where the execution starts
    pokemon pikachu;      // Declares a variable 'pikachu' of type 'pokemon'
    pikachu.hp = 45;      // Sets the 'hp' member of 'pikachu' to 45
    fun(pikachu);         // Calls the function 'fun' with 'pikachu' as an argument
    return 0;             // Returns 0 to indicate successful execution
}
