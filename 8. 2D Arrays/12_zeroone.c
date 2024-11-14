#include <stdio.h>
int main(){
    int arr[3][4] = {{1,0,1,1},{0,1,0,1},{1,1,1,1}};
    // 1 0 1 1  -> total 1 = 3
    // 0 1 0 1  -> total 1 = 2
    // 1 1 1 1  -> total 1 = 4
    int maxCount = 0;
    int maxIndex = -1;
    for(int i=0;i<3;i++){
        int count = 0;
        for(int j=0;j<4;j++){
            if(arr[i][j] == 1) count++;
        }
        if(maxCount<count){
            maxCount = count;
            maxIndex = i;
        }
        // printf("\n");
    }
    printf("%d",maxIndex);
    return 0;
}