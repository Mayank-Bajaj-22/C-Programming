#include <stdio.h>
int main() {
    struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier;
    };

    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 60;
    pikachu.speed = 60;
    pikachu.tier = 'A';

    struct legendaryPokemon {
        int specialattack;
        struct pokemon basePokemon; 
    };

    struct legendaryPokemon legendaryPikachu;
    legendaryPikachu.specialattack = 500;

    printf("%d", legendaryPikachu.specialattack);

    return 0;
}
