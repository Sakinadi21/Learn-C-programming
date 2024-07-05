#include <stdio.h>

int main() {
    struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier; // s,a,b,c,d
    };

    struct pokemon pikachu;
    pikachu.attack = 90;
    pikachu.hp = 89;
    pikachu.speed = 87;
    pikachu.tier = 'A';

    struct pokemon mewtwo;
    mewtwo.attack = 92;
    mewtwo.hp = 86;
    mewtwo.speed = 83;
    printf("Enter tier of mewtwo: ");
    scanf(" %c", &mewtwo.tier); // Note the space before %c to consume any leftover whitespace


    struct pokemon charizard; // Corrected spelling
    charizard.attack = 90;
    charizard.hp = 85;
    charizard.speed = 81;
    charizard.tier = 'Z';

    printf("Mewtwo's tier: %c\n", mewtwo.tier);

    printf("Charizard's attack: %d\n", charizard.attack);

    return 0;
}
