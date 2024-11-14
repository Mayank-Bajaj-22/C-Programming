#include <stdio.h>
int main(){
    int radius;
    printf("Enter radius : ");
    scanf("%d",&radius);
    float v = 4 * 3.14 * radius * radius * radius / 3;
    printf("The Volume is : %f",v);
    return 0;
}