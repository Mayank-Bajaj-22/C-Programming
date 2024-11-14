#include <stdio.h>
// Function to calculate the sum of the rectangle
int sumRectangle(int a[100][100], int l1, int r1, int l2, int r2) {
    int sum = 0;
    for (int i=l1;i<=l2;i++) {
        for (int j=r1;j<=r2;j++) {
            sum += a[i][j];
        }
    }
    return sum; // Return the sum of the rectangle
}

int main() {
    int n, m;
    printf("Enter no. of rows: ");
    scanf("%d", &n);
    printf("Enter no. of columns: ");
    scanf("%d", &m);

    int arr[100][100]; // Declare the matrix

    // Input matrix elements
    printf("Enter all the elements:\n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int l1, r1, l2, r2;
    printf("Enter the coordinates (l1, r1): ");
    scanf("%d %d", &l1, &r1);
    printf("Enter the coordinates (l2, r2): ");
    scanf("%d %d", &l2, &r2);

    // Display the matrix
    printf("The matrix is:\n");
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Call the function to calculate the sum
    int result = sumRectangle(arr, l1, r1, l2, r2);
    printf("The sum of the rectangle is: %d\n", result);

    return 0;
}
