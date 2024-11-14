#include <stdio.h>
int main(){
    int r;
    printf("Enter no. of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter no. of columns : ");
    scanf("%d",&c);
    int arr[r][c];  // r*c total element
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // 1 2 3
    // 4 5 6

    // 1 4
    // 2 5
    // 3 6
    int brr[c][r];
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j] = arr[j][i];
        }
        printf("\n");
    }

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}