#include <stdio.h>
int main(){
    int a = 5;
    int* x = &a; // int* -> int ka address store karta hai
    // VVIP -> *x = 7; // a is changed
    int** y = &x; // int** -> int* ka address store karta hai
    printf("%p\n",&x); // %p se address print hota hai
    printf("%p\n",y);
    
    return 0;
}

// printf("%p",x);  [print address of a]
// printf("%p",&x);  [print address of x]
// printf("%d",*x);  [print value of a]