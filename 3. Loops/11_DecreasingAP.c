#include <stdio.h>
int main(){
    // int n;//itni baar loop chalega
    // printf("Enter a number : ");
    // scanf("%d",&n);
    int a = 100;
    for(int i=1;a>0;i++){ //i<=n
        printf("%d ",a);
        a = a - 3;
    }
    return 0;
}