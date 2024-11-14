#include <stdio.h>
int main(){ 
    // 1st matrix order
    int m, n;
    printf("Enter no. of rows of 1st matrix : ");
    scanf("%d", &m);
    printf("Enter no. of columns of 1st matrix : ");
    scanf("%d", &n);

    int a[m][n];
    // input the first matrix
    printf("\nEnter elements of 1st matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }

    // 2nd matrix order
    int p, q;
    printf("\nEnter no. of rows of 2nd matrix : ");
    scanf("%d", &p);
    printf("Enter no. of columns of 2nd matrix : ");
    scanf("%d", &q);

    // Check 
    if(n != p){
        printf("The matrix can not be multiplied.\n");
        return 0;
    }

    int b[p][q];
    // input the second matrix
    printf("\nEnter elements of 2nd matrix\n");  
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d", &b[i][j]);  
        }
    }

    // multiplication
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j] = 0;
            for(int k=0;k<n;k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // print the result
    printf("\nThe resultant matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0; j<q;j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}