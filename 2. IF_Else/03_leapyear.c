#include <stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    if(n%4==0){
        printf("Given year is leap year");
    }
    else{
        printf("Given year is not a leap year");
    }
    
    return 0;
}