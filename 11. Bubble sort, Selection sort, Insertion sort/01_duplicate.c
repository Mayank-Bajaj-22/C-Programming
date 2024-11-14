#include <stdio.h>
int main(){
  int arr[11] = {6,1,7,3,2,5,4,8,9,9,10};
  // finding duplicate number in array
  int sum = 0;
  int n = 10;
  for(int i=0;i<11;i++){
    sum = sum + arr[i];
    // printf("%d ",sum);
  }
  // printf("\n");
  int sn = n*(n+1)/2;
  // printf("%d",sn);
  int duplicate = sum - sn;
  printf("Duplicate number in given array is %d",duplicate);
  return 0;
}


// sorting -> arranging in ascending order {if not given anything}
// sorting in decreasing order means decreasing me arrange kro