#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){ // outer loop -> no of lines
        for(int i=1;i<=m;i++){ // inner loop -> no of stars in each line
            printf("*");
        }
        printf("\n");  // har linr ke baad ek enter marne ke liye hai
    }
    
    return 0;
}