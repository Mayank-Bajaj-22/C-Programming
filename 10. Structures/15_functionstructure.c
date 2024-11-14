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
void change(pokemon p){
  printf("%d",p.hp);
  return;
}              // structure are pass by value
int main(){
  pokemon pickachu;
  pickachu.hp = 60;
  pickachu.attack = 50;
  pickachu.speed = 100;
  change(pickachu);
  printf("%d\n",pickachu.hp);
  printf("%d\n",pickachu.attack);
  printf("%d\n",pickachu.speed);
  return 0;
}