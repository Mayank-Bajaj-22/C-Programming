#include <stdio.h>
#include <string.h>
typedef struct pokemon{
  int hp;
  int speed;
  int attack;
  char tier;
  char name[15];
  } pokemon;
void change(pokemon* p){
  (*p).hp = 70;     // Method - 2      p->hp = 70;     (*x).something   =   x->something 
  (*p).attack = 80;
  (*p).speed = 110;
  (*p).tier = 'S';
  strcpy((*p).name,"Raichu");
  return;
}
int main(){
  pokemon pickachu = {60,70,100,'A',"Pickachu"};
  // pickachu.hp = 60;
  // pickachu.attack = 70;
  // pickachu.speed = 100;
  // pickachu.tier = 'A';
  // strcpy(pickachu.name,"Pickachu");
  // int* x -> address of integer value
  pokemon* x = &pickachu;
  printf("%d\n",pickachu.hp);
  printf("%d\n",pickachu.attack);
  printf("%d\n",pickachu.speed);
  printf("%c\n",pickachu.tier);
  printf("%s\n",pickachu.name);
  
  change(&pickachu);
  printf("%d\n",pickachu.hp);
  printf("%d\n",pickachu.attack);
  printf("%d\n",pickachu.speed);
  printf("%c\n",pickachu.tier);
  printf("%s\n",pickachu.name);
  return 0;
}

// int q = 4;
// int* p = &q;
// *p = 7;  // q = 7