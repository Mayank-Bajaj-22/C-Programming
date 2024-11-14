#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter a number : ");
    scanf("%d",&b);

    int power = pow(a,b);
    printf("The power is : %d",power);
    return 0;
}
