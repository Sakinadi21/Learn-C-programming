#include <stdio.h>     // Includes the standard input-output library for printf and scanf functions
#include <string.h>    // Includes the string library for string operations like strcpy
#include <stdbool.h>   // Includes the boolean library for using bool type

int main() {
    typedef struct pokemon {   // Defines a structure named 'pokemon'
        int hp;                // Integer member to store health points
        int speed;             // Integer member to store speed
        int attack;            // Integer member to store attack power
        char tier;             // Character member to store tier
        char name[15];         // Character array to store the name of the Pokemon
    } pokemon;                 // Name 'pokemon' assigned to the structure for easy use

    typedef struct legendarypokemon {  // Defines a structure named 'legendarypokemon'
        pokemon normal;                // Member 'normal' of type 'pokemon' structure
        char ability[10];              // Character array to store the ability of the legendary Pokemon
    } legendarypokemon;                // Name 'legendarypokemon' assigned to the structure for easy use

    typedef struct godpokemon {       // Defines a structure named 'godpokemon'
        legendarypokemon legend;      // Member 'legend' of type 'legendarypokemon' structure
        int specialattack;            // Integer member to store special attack power
    } godpokemon;                     // Name 'godpokemon' assigned to the structure for easy use

    legendarypokemon mewtwo;          // Declares a variable 'mewtwo' of type 'legendarypokemon'

    // Initialize the 'ability' of 'mewtwo'
    strcpy(mewtwo.ability, "Pressure"); // Copies the string "Pressure" into the 'ability' member of 'mewtwo'

    // Initialize the 'normal' member of 'mewtwo'
    mewtwo.normal.hp = 150;            // Sets the 'hp' member of 'normal' to 150
    mewtwo.normal.attack = 180;        // Sets the 'attack' member of 'normal' to 180
    strcpy(mewtwo.normal.name, "Mewtwo"); // Copies the string "Mewtwo" into the 'name' member of 'normal'

    // Print the HP of 'mewtwo'
    printf("Mewtwo HP: %d\n", mewtwo.normal.hp); // Prints the 'hp' member of 'normal'

    return 0; // Returns 0 to indicate successful execution
}
