#include <stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int combination(int n, int r){
    int npr = factorial(n)/factorial(n-r);
    return npr;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int m=1;m<=n-i;m++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            int icj = combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    return 0;
}