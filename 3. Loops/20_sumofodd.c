#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum = 0;
    int lastdigit = 0;
    while(n!=0){
        lastdigit = n%10;
        if((n%10)%2!=0)
        sum = sum + lastdigit;
        n = n/10;
    }
    printf("The sum no given no. are %d",sum);
    return 0;
}