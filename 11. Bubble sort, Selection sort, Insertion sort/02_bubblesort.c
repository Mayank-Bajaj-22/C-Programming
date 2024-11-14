#include <stdio.h>
int main(){
  int arr[5] = {5,4,3,2,1};
  int n = 5;
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  // bubble sort
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(arr[j]>arr[j+1]){
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  printf("\n");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}

// 'n' elements in array -> 'n-1' passes
// after every pass, we read the apply bubble sort on the unsorted elements only and we do not need to check the 'Largest'
// Nested Loops -> Outer Loop stand foe number of passes 
//                 Inner loop will do the swapping
// Optimizing the bubble sort int he case of nearly sorted arrays -> check if array after every pass is already sorted or not, with the help of checkmark
// Time complexity :- best case {O(n)}  ,  avg. case {O(n^2)}  ,  worst case {O(n^2)}
// Space complexity :- best case {O(1)}  ,  avg. case {O(1)}  ,  worst case {O(1)}
// Is bubble sort stable ? Yes!