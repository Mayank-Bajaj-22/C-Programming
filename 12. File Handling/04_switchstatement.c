// alternate if else
#include <stdio.h>
int main(){
  int n;
  printf("Enter day number (1-7) : ");
  scanf("%d",&n);
  switch(n){
    case 1:
      printf("Monday");
      break;
    case 2:
      printf("Tuesday");
      break;
    case 3:
      printf("Wednesday");
      break;
    case 4:
      printf("Thrusday");
      break;
    case 5:
      printf("Friday");
      break;
    case 6:
      printf("Saaturday");
      break;
    default:
      printf("Invalid Number");
  }
  return 0;
}