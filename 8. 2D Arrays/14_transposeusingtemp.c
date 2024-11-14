#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows/columns : ");
    scanf("%d",&n);
    printf("Enter all the elments\n");

    // input
    
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    // Transpose

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){    // break 
            // swap arr[i][j] and arr[j][i];
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // output

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}