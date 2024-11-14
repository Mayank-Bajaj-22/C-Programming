// #include <stdio.h>
// int main(){
//   int* x = 5, y = 7;
//   int* x, y;  // int* x and int y 
//   printf("%p",&x);
//   return 0;
// }

#include <stdio.h>
typedef int* pointer;
int main(){
  int x = 5, y = 7;
  pointer a = &x, b = &y;
  printf("%p\n",a);
  printf("%p\n",b);

  return 0;
}