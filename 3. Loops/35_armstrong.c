#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int originalNumber, remainder, sum = 0;
    
    originalNumber = number;
    
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        sum += pow(remainder, 3); // Calculate the cube of the digit and add it to sum
        originalNumber /= 10;
    }
    
    return (sum == number); // Return 1 if the number is an Armstrong number, otherwise 0
}

int main() {
    int num;

    printf("Armstrong numbers between 1 and 500 are:\n");
    
    for (num = 1; num <= 500; num++) {
        if (isArmstrong(num)) {
            printf("%d\n", num);
        }
    }

    return 0;
}
