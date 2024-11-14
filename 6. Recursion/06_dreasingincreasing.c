#include <stdio.h>
void decreasingincreasing(int n){
    if(n==0) return;   // base case
    printf("%d\n",n);   // code
    decreasingincreasing(n-1);   // call
    printf("%d\n",n);   // code
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    decreasingincreasing(n);
    return 0;
}