#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct pokemon{
  int hp;
  int speed;
  int attack;
  char tier;
  char name[15];
  } pokemon;

int main(){
  pokemon pickachu;
  pickachu.hp = 60;
  pickachu.attack = 70;
  pickachu.speed = 100;
  pickachu.tier = 'A';
  strcpy(pickachu.name,"Pickachu");
  // int* x -> address of integer value
  pokemon* x = &pickachu;
  printf("%p\n",&pickachu.hp);
  printf("%p\n",&pickachu.attack);
  printf("%p\n",&pickachu.speed);
  printf("%p\n",&pickachu.tier);
  printf("%p\n",&pickachu.name);

  printf("%p\n",&x);
  return 0;
}

// pokemon pickachu;
// pickachu* x = &pickachu;