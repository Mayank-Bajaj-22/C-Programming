#include <stdio.h>

int main() {
    int n;  // Number of rows
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--) {
        // Print first half numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Print spaces
        for (int j = 1; j <= 2*(n - i); j++) {
            printf(" ");
        }
        
        // Print second half numbers
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        
        // Move to the next line
        printf("\n");
    }
    
    return 0;
}