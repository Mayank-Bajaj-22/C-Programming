#include <stdio.h>
int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    //ABCDEFG
    //ABC EFG
    //AB   FG
    //A     G
    int nst = n;
    int nsp = 1;
    for(int i = 1;i<=2*n+1;i++){
        char ch = (char)(i+64);
            printf("%c",ch);
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        int a = 65;
        for(int j=1;j<=nst;j++){ // stars
            char ch = (char)(i+64);
            printf("%c",a);
            a++;
        }
        for(int k=1;k<=nsp;k++){ // spaces
            printf(" ");
            a++;
        }
        for(int j=1;j<=nst;j++){ // stars
            char ch = (char)(j+64);
            printf("%c",a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }

    return 0;
}