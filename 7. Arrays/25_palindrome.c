#include <stdio.h>

int isPalindrome(int arr[], int n) {
    int i=0;
    int j=n-1;
    while(i<j) {
        if (arr[i] != arr[j]) {
            return 0;  // Not a palindrome
        }
        i++;
        j--;
    }
    return 1;  // Palindrome
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
    if(isPalindrome(arr, n)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
    return 0;
}