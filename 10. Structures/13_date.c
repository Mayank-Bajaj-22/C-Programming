#include <stdio.h>
#include <string.h>
int main(){
  typedef struct date{
    int day;
    int month;
    int year;
  } date;

  date a, b;

  a.day = 5;
  a.month = 12;
  a.year = 1999;

  b.day = 22;
  b.month = 3;
  b.year = 2005;

  if(a.day==b.day) printf("The dates are equal");
  else printf("The dates are different");

  return 0;
}