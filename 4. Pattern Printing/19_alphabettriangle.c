#include <stdio.h>
int main(){
    int n;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    char ch;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        ch = 'A';
        for(int k=1;k<=i;k++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}