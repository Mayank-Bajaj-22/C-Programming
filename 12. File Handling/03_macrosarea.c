#include <stdio.h>
#define PI 3.14159265359
float area(float r){
  return PI*r*r;
}
int main(){
  printf("%f",area(5));    // int and float print upto 6 decimals
}