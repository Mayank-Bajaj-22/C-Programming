#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int nsp = n-1;
    for(int i=1;i<=n;i++){ 
        int a = i-1;
        for(int j=1;j<=nsp;j++){ // spaces ke liye loop
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=i;j++){  // number triangle
            char ch = (char)(j+64);
            printf("%c",ch);
        }
        for(int k=1;k<=i-1;k++){
            char ch = (char)(a+64);
            printf("%c",ch);
            a--;
        }
        
        printf("\n");
    }
    
    return 0;
}