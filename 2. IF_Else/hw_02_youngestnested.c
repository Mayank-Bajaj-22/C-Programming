#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter 1st person age : ");
    scanf("%d",&a);
    printf("Enter 2nd person age : ");
    scanf("%d",&b);
    printf("Enter 3rd person age: ");
    scanf("%d",&c);
    if(a<b){
        if(a<c){  
            printf("%d is younget",a);
        }
        else{
            printf("%d is youngest",c);
        }
    }
    else{
        if(b<c){
            printf("%d is youngest",b);
        }
        else{
            printf("%d is youngest",c);
        } 
    }
    return 0;
}