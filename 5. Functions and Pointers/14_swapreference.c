#include <stdio.h>
void swap(int *x, int *y){
    int temp;
    temp = *x; // temp = 2
    *x = *y; // a = 9
    *y = temp; // *y = 2 -> b = 2
    return;
}
int main(){
    int a = 2;
    int b = 9;
    // int* x = &a; // METHOD 1
    // int* y = &b;
    // swap(x,y);
    swap(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);

    return 0;
}