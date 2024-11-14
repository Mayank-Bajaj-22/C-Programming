#include <stdio.h>
#include <limits.h>
int main(){
    int arr[3][3] = {1,4,20,80,19,5,12,9,17};
    int max = INT_MIN;  // sabse chota number
    int maxrowindex = -1;// To store the index of the row max element
    for(int i=0;i<3;i++){
        int sumRow = 0;
        for(int j=0;j<3;j++){
            sumRow += arr[i][j];
        }
        if(sumRow>max){
            max = sumRow;
            maxrowindex = i;
        }
    }
    printf("Row with the maximum sum is: Row %d\n", maxrowindex + 1);
    printf("Maximum sum is: %d\n", max);
    return 0;
}