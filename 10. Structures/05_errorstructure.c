#include <stdio.h>
int main(){
  struct emp{
    int ecode;
    struct emp e;
  };

  // struct ke andar struct not possible

  return 0;
}

// elements are stored in a continous memory location