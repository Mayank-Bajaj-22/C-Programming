#include <stdio.h>
int main(){
  int arr[6] = {12, 3, 5, 7, 19, 1};
  int n = 6;
  int k = 3;

  // Bubble Sort to sort the array
  for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
        if(arr[j] > arr[j+1]){
          // Swap arr[j] and arr[j+1]
          int temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
      }
    }
  }
  // The k-th smallest element is at index k-1
  printf("K-th smallest element is %d\n", arr[k-1]);
  return 0;
}
