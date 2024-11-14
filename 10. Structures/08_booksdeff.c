#include <stdio.h>
#include <string.h>
int main(){
  typedef struct Book{
    char name[50];
    int noOfPages;
    float price;
  } PW;

  PW a;
  PW b;
  PW c;

  a.noOfPages = 100;
  a.price = 411.5;
  strcpy(a.name,"The Psychology of Money");

  printf("%s",a.name);
  return 0;
}