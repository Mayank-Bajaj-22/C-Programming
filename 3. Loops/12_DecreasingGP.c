#include <stdio.h>
int main(){
    int n;//itni baar loop chalega
    printf("Enter a number : ");
    scanf("%d",&n);
    float a = 100;
    for(int i=1;i<=n;i++){ //i<=n
        printf("%f ",a);
        a = a / 2;
    }
    return 0;
}