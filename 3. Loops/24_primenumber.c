#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){ // i is a factor of n
            a = 1;
            break;
        }
    }
    if(n==1) printf("1 is neither prime or composite\n");
    else if(a==0) printf("The Given number is prime\n");
    else printf("The Given number is composite");
    return 0;
}


// rounds = interations