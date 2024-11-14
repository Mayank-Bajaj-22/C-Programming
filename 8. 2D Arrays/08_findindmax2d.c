#include <stdio.h>
#include <limits.h>
int main(){
    int arr[3][3] = {1,4,20,80,19,5,12,9,17};
    int max = INT_MIN;  // sabse chota number
    int maxrowindex = -1, maxcolumnindex = -1;  // To store the index of the max element
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(max<arr[i][j]){
                max = arr[i][j];
                maxrowindex = i;  // for index of row
                maxcolumnindex = j;  // for index of column
            }
        }
    }
    printf("%d ",max);
    printf("Index of maximum elemnt : [%d][%d]\n",maxrowindex,maxcolumnindex);
    return 0;
}