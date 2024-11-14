#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){ // outer loop -> no of lines
        for(int j=1;j<=m;j++){ // inner loop -> no of stars in each line
            if(i==1 || j==1 || i==n || j==m){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}