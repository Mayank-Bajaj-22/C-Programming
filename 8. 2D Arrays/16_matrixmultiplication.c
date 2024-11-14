#include <stdio.h>
int main(){
    // 1 2
    // 3 4
    // 5 6
    // 7 8
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    // 1 2 3 4
    // 5 6 7 8
    int brr[2][4] = {{1,2,3,4},{5,6,7,8}};
    int res[3][4];
    // multiplying
    int cr = 2;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            // i row of arr[][] and j cloumn of brr[][]
            // (arr[i][0], arr[i][1], arr[i][2]..) * (brr[0][j], brr[1][j], brr[2][j]...)
            res[i][j] = 0;
            for(int k=0;k<cr;k++){
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    // res 
    // 11 14 17 20
    // 23 30 37 44
    // 35 46 57 68
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}