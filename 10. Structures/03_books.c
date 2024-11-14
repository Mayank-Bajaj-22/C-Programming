#include <stdio.h>
#include <string.h>
int main(){
  struct book{ // user defined data type
    char name[50];
    float price;
    int noOfPages;
  } a, b, c;

  a.noOfPages = 100;
  a.price = 411.5;
  strcpy(a.name,"Secret Seven");

  printf("%d\n",a.noOfPages);
  printf("%f\n",a.price);
  printf("%s\n",a.name);

  // char ch[13];
  // strcpy(ch,"Secret Seven");

  // printf("%s\n",ch);

  b.noOfPages = 200;
  b.price = 411.5;
  strcpy(b.name,"Famous Five");

  printf("%d\n",b.noOfPages);
  printf("%f\n",b.price);
  printf("%s",b.name);

  return 0;
}