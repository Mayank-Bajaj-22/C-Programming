#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("Given no. is divisible by 3 and 5");
    }
    else{
        printf("Given no. is not divisible by 3 and 5");
    }
    return 0;
}