#include <stdio.h>
#include <limits.h>
int main(){
    int arr[3][3] = {1,4,20,80,19,5,12,9,17};
    int min = INT_MAX;  // Initialize with the first element of the array
    int minrowindex = -1, mincolumnindex = -1;  // To store the index of the min element
    for(int i=0;i<3;i++){  // Start the loop from the second element
        for(int j=0;j<3;j++){
            if(min>arr[i][j]){  // Compare for the minimum value
                min = arr[i][j];
                minrowindex = i;
                mincolumnindex = j;
            }
        }
    }
    printf("Minimum number is: %d\n", min);
    printf("Index of minimum element : [%d][%d]",minrowindex,mincolumnindex);

    return 0;
}