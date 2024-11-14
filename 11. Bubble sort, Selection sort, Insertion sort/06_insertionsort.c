// swapping from end till the element finds its position.
// swap happens only when the elemnt is smaller than its left elemnt.
// 'n' -> 'n-1' operations -> O(n)
// Time Complexity -> worst and avg. case {O(n^2)} , best case {O(n)}.
// IS Insertion Sort stable ? Yes! 
#include <stdio.h>
#include <limits.h>
int main(){
  int arr[7] = {7,4,5,9,8,2,1};
  int n = 7;
  printf("Unsorted Array : \n");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  // Insertion Sort
  for(int i=1;i<=n-1;i++){
    int j = i;
    while(j>=1 && arr[j] < arr[j-1]){
      int temp = arr[j];
      arr[j] = arr[j-1];
      arr[j-1] = temp;
      j--;
    }
  }
  printf("\n");
  printf("Sorted Array : \n");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}