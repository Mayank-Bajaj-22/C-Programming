#include <stdio.h>
int main(){
    for(int i = 1; i <= 100; i++){
        if( i % 2 != 0){ // i is a factor of n
            continue;  // skip kro us round ko
        } 
        printf("%d ",i);
    }
    
    return 0;
}