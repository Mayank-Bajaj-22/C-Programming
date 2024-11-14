#include <stdio.h>
int main(){
    int j;
    printf("\n%d",j);
    while(j<=10){ // gives garbage value becoz no value of j
        printf("\n%d",j);
        j = j + 1;
    }

    return 0;
}