// #include <stdio.h>
// void fun(int arr[]){
//     arr[0] = 10;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     printf("%d\n",arr[0]);
//     fun(arr);
//     printf("%d\n",arr[0]);
//     return 0;
// }  // array pass by reference


#include <stdio.h>
void fun(int x[]){
    int temp = x[0];
    x[0] = x[1];
    x[1] = temp;
}
int main(){
    int arr[2] = {2,9};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}  // array pass by reference