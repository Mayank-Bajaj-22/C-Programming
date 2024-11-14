// // memory free
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//   int* ptr = (int*) calloc(10,4);
//   int* p = ptr;   // starting pe set kr di
//   p++;
//   free(p);
//   return 0;
// }


// memory reallocation
#include <stdio.h>
#include <stdlib.h>
int main(){
  int* ptr = malloc(10*4);  // 00BD1598
  printf("%p\n",ptr);
  ptr = realloc(ptr,2000*4);   // 00BD3638
  printf("%p\n",ptr);
  return 0;
}