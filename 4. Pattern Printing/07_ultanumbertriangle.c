#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // no of rows -> i
        for(int j=1;j<=n+1-i;j++){ // no of columns -> j
            printf("%d",j);
        }
        printf("\n");
    }
    // int a = n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=a;j++){ // j -> 1 to a
    //         printf("%d",j);
    //     }
    //     a--;
    //     printf("\n");
    // } 
    return 0;
}