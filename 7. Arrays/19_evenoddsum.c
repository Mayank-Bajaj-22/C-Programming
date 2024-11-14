#include <stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int sumEven = 0;
    int sumOdd = 0;
    for(int i=0;i<7;i++){
        if(i%2==0){
            sumEven = sumEven + arr[i];
        }
        if(i%2!=0){
            sumOdd = sumOdd + arr[i];
        }
    }
    int result = sumEven - sumOdd;
    printf("%d ",result);
    return 0;
}