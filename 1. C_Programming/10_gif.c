#include <stdio.h>
int main (){
    float x;
    printf("Enter number for finding fractional Part :");
    scanf("%f",&x);
    int y = x;
    printf("%d\n",y);
    float z = x - y;
    printf("The Fractinal Part of given number is : %f",z);
    return 0;
}