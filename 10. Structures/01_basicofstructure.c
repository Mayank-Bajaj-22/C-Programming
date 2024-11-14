#include <stdio.h>
int main(){
  struct pokemon{ // user defined data type
    int hp;
    int speed;
    int attack;
    char tier;  // S,A,B,C,D
  };
  struct pokemon pickachu;
  printf("Enter attack of pickachu : ");
  scanf("%d",&pickachu.attack);
  // pickachu.attack = 60;
  pickachu.hp = 60;
  pickachu.speed = 60;
  pickachu.tier = 'A';

  printf("%d\n",pickachu.attack);

  struct pokemon charizard;
  charizard.attack = 130;
  charizard.hp = 80;
  charizard.speed = 80;
  charizard.tier = 'S';

  struct pokemon mewtwo;
  mewtwo.attack = 170;
  mewtwo.hp = 150;
  mewtwo.speed = 200;
  mewtwo.tier = 'G';

  printf("%c",mewtwo.tier);

  return 0;
}

// same data type -> array