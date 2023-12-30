#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    // Input a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Validate that the number is indeed five digits
    if (number < 10000 || number > 99999) {
        printf("Please enter a valid five-digit number.\n");
        return 1; // Exit the program with an error code
    }
    
    // Calculate the sum of digits
    while (number > 0) {
        digit = number % 10;   // Get the last digit
        sum += digit;          // Add the digit to the sum
        number /= 10;          // Remove the last digit
    }

    // Display the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
