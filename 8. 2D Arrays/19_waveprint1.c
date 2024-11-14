#include <stdio.h>
int main() {
    int m, n;
    printf("Enter no. of rows of the matrix : ");
    scanf("%d", &m);
    printf("Enter no. of columns of the matrix : ");
    scanf("%d", &n);

    int a[m][n];
    // Input the matrix
    printf("\nEnter elements of the matrix\n");
    for (int i=0; i<m;i++) {
        for (int j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nWave form of the matrix:\n");
    for (int j=0;j<n;j++) {
        if (j%2 == 0) {
            for (int i=m-1;i>=0;i--) {
                printf("%d ", a[i][j]);
            }
        } else {
            for (int i=0;i<=m-1;i++) {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}