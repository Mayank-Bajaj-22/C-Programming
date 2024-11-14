#include <stdio.h>
#include<stdbool.h> 
int main(){
    int arr[7] = {12,21,21,42,21,6,7};
    int x = 21;
    bool flag = false;  // false meams not present
    for(int i=0;i<=6;i++){  
        if(arr[i] == x){
            flag = true;  // true means present
            break;
        }
    }
    if(flag==false){
        printf("%d is not  present in array",x);
    }
    else{
        printf("%d is present in array",x);
    }
    return 0;
}