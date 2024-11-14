#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter the elements of the array: \n");
    for(int i=0; i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int j=0; j<n-1;j++){
        sum = sum + arr[j];
    }
    int sum2 = (n*(n+1))/2;
    int missing = sum2 - sum;
    printf("%d the missing element in array",missing);

    return 0;
}