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
  // Form two numbers from the sorted digits
  int num1 = 0, num2 = 0;
    for(int i=0;i<n;i++){
      if(i%2 == 0) {
        num1 = num1 * 10 + arr[i];  // Add digit to num1
      } 
      else{
        num2 = num2 * 10 + arr[i];  // Add digit to num2
      }
    }
  printf("\nMinimum sum: %d + %d = %d\n", num1, num2, num1 + num2);
  
  return 0;
}