#include <stdio.h>
int main(){
  struct pokemon{ // user defined data type
    int hp;
    int speed;
    int attack;
    char tier;  // S,A,B,C,D
  } pickachu, charizard, mewtwo; // define like this also

  return 0;
}

// access -> dot operator, example -> pickachu,attack