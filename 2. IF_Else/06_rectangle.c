#include <stdio.h>
int main(){
    int l;
    printf("Enter Length of Rectangle : ");
    scanf("%d",&l);
    int b;
    printf("Enter Breadth of Rectangle : ");
    scanf("%d",&b);
    int a = l * b;
    printf("Area of Rectangle is : %d",a);
    printf("\n");
    int p = 2 * (l + b);
    printf("Perimeter of Rectangle is : %d",p);
    printf("\n");
    if(a>p){
        printf("Area of Rectangle is more than Perimeter of Rectangle");
    }
    if(p>a){
        printf("Area of Rectangle is less than Perimeter of Rectangle");
    }
    
    return 0;
}