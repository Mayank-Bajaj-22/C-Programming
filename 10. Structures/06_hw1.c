#include <stdio.h>
#include <string.h>
int main(){
  struct person{
    char name[50];
    float salary;
    int age;
  } a, b;

  strcpy(a.name,"Mayank");
  a.salary = 10000000.00;
  a.age = 22;

  printf("%s\n",a.name);
  printf("%f\n",a.salary);
  printf("%d\n",a.age);

  strcpy(b.name,"Rohit");
  b.salary = 1000000.00;
  b.age = 24;

  printf("%s\n",b.name);
  printf("%f\n",b.salary);
  printf("%d\n",b.age);
  return 0;
}