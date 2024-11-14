// static -> memory is allocated during complie time
// dynamic -> memory is allocated during run time
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
  int n;
  printf("Enter no. of integers you want : ");
  scanf("%d",&n);
  // int a = sizeof(long);
  // printf("%d",a);
  // int a = sizeof(bool);
  // printf("%d",a);

  // int x = 6;
  // int* p = &x;
  // *p = 7;   // x = 7;
  // int* ptr = (int*) malloc(10*4);
  // printf("%d ",*ptr);    // gives garbage value 

  int* ptr = (int*) malloc(n*sizeof(int));
  int* p = ptr;
  for(int i=1;i<=n;i++){
    scanf("%d",&(*ptr));
    ptr++;
  } 
  for(int i=1;i<=n;i++){
    printf("%d ",(*p));
    p++;
  }
  return 0;
}