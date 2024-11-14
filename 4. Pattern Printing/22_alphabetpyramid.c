#include <stdio.h>
int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);
    //       A
    //     A B C
    //   A B C D E
    // A B C D E F G
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){ // spaces
            printf(" ");
        }
        int a = 1;
        for(int k=1;k<=i;k++){
            int d = a + 64; // d = 65
            char ch = (char)d; // ch = (char)65 -> ch = 'A'
            printf("%c ",ch);
            a++;
        }
        printf("\n");
    }

    return 0;
}