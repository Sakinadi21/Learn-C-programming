#include <stdio.h>    // Including the standard input-output library for printf function
#include <string.h>   // Including the string library for strcpy function

int main() {          // Main function where the execution starts
    typedef struct pokemon {  // Defining a structure named 'pokemon'
        int hp;                                    // Integer member to store health points
        int speed;               // Integer member to store speed
        int attack;             // Integer member to store attack power
        char tier;             // Character member to store tier
        char name[50];        // Character array member to store the name (string) of the Pokemon
    } pokemon;               // Giving a name 'pokemon' to the structure for easy use

    pokemon arr[3];   // Declaring an array of 3 'pokemon' structures

    // Initializing the first Pokemon
    arr[0].attack = 98;            // Setting attack value for the first Pokemon
    arr[0].speed = 89;             // Setting speed value for the first Pokemon
    arr[0].hp = 59;                // Setting HP value for the first Pokemon
    arr[0].tier = 'p';             // Setting tier value for the first Pokemon
    strcpy(arr[0].name, "Mewtwo"); // Copying the name "Mewtwo" to the name member of the first Pokemon

    // Initializing the second Pokemon
    arr[1].attack = 94;            // Setting attack value for the second Pokemon
    arr[1].speed = 87;             // Setting speed value for the second Pokemon
    arr[1].hp = 56;                // Setting HP value for the second Pokemon
    arr[1].tier = 'q';             // Setting tier value for the second Pokemon
    strcpy(arr[1].name, "Pikachu");// Copying the name "Pikachu" to the name member of the second Pokemon

    // Initializing the third Pokemon
    arr[2].attack = 91;            // Setting attack value for the third Pokemon
    arr[2].speed = 88;             // Setting speed value for the third Pokemon
    arr[2].hp = 46;                // Setting HP value for the third Pokemon
    arr[2].tier = 'r';             // Setting tier value for the third Pokemon
    strcpy(arr[2].name, "Charizard"); // Copying the name "Charizard" to the name member of the third Pokemon

    // Printing Pokemon details
    for (int i = 0; i < 3; i++) {               // Looping through each Pokemon in the array
        printf("Name: %s\n", arr[i].name);     // Printing the name of the current Pokemon
        printf("Attack: %d\n", arr[i].attack); // Printing the attack value of the current Pokemon
        printf("HP: %d\n", arr[i].hp);         // Printing the HP value of the current Pokemon
        printf("Speed: %d\n", arr[i].speed);   // Printing the speed value of the current Pokemon
        printf("Tier: %c\n", arr[i].tier);     // Printing the tier of the current Pokemon
    }

    return 0;                   // Returning 0 to indicate successful execution
}
