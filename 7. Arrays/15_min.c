// #include <stdio.h>
// int main(){
//     int arr[7] = {1, 4, 20, 80, 19, 5, 12};
//     int min = arr[0];  // Initialize with the first element of the array
//     for(int i=1;i<7;i++){  // Start the loop from the second element
//         if(min>arr[i]){  // Compare for the minimum value
//             min = arr[i];
//         }
//     }
//     printf("Minimum number is: %d\n", min);
//     return 0;
// }

#include <stdio.h>
#include <limits.h>
int main(){
    int arr[7] = {1, 4, 20, 80, 19, 5, 12};
    int min = INT_MAX;  // Initialize with the first element of the array
    for(int i=0;i<7;i++){  // Start the loop from the second element
        if(min>arr[i]){  // Compare for the minimum value
            min = arr[i];
        }
    }
    printf("Minimum number is: %d\n", min);
    return 0;
}