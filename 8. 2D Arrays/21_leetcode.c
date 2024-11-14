#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the matrix (n for n*n): ");
    scanf("%d", &n);

    int a[n][n];
    int minr = 0, minc = 0;
    int maxr = n-1, maxc = n-1;
    int count = 1;
    int tne = n*n;  

    while(count <= tne){
        for (int j=minc;j<=maxc && count<=tne;j++) {
            a[minr][j] = count++;
        }
        minr++;
        for (int i=minr;i<=maxr && count<=tne;i++) {
            a[i][maxc] = count++;
        }
        maxc--;
        for (int j=maxc;j>=minc && count<=tne;j--) {
            a[maxr][j] = count++;
        }
        maxr--;
        for (int i=maxr;i>=minr && count<=tne;i--) {
            a[i][minc] = count++;
        }
        minc++;
    }

    // Print the spiral filled matrix
    printf("Spiral Matrix:\n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}