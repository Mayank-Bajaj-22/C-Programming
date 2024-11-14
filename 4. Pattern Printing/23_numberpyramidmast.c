#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    // * * * 1
    // * * 1 2 1
    // * 1 2 3 2 1 
    // 1 2 3 4 3 2 1 
    int nsp = n-1;
    for(int i=1;i<=n;i++){ 
        int a = i-1;
        for(int j=1;j<=nsp;j++){ // spaces ke liye loop
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){  // number triangle
            printf("%d",j);
        }
        for(int k=1;k<=i-1;k++){
            printf("%d",a);
            a--;
        }
        
        printf("\n");
    }
    
    return 0;
}