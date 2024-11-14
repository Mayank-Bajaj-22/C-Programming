#include <stdio.h>
void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        // arr[i] and arr[j];
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter no. of rotation : ");
    scanf("%d",&k);
    k = k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}