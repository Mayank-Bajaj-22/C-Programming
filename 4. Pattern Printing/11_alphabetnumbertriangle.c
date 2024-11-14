#include <stdio.h>
int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
// 1
// A B
// 1 2 3 
// A B C D 

    for(int i=1; i<=n;i++) {
        if (i%2!=0) { // Odd row: print numbers
            for (int j=1; j<=i;j++) {
                printf("%d ", j);
            }
        }
        else { // Even row: print letters
            char ch = 'A';
            for(int j=1;j<=i;j++) {
                printf("%c ",ch);
                letter++;
            }
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}