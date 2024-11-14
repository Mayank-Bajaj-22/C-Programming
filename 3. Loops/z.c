#include <stdio.h>

int main() {
    int number, reversed = 0, remainder, original, sum;

    // Input from the user
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1; // Exit with error code
    }

    original = number; // Store the original number

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;           // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        number /= 10;                      // Remove the last digit
    }

    // Calculate the sum of the original number and the reversed number
    sum = original + reversed;

    // Display the results
    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", reversed);
    printf("Sum: %d\n", sum);

    return 0; // Successful termination
}