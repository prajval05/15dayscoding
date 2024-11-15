#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1; // Use unsigned long long for large numbers

    // Prompt user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Handle special cases
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i; // Multiply i to calculate factorial
        }
        printf("The factorial of %d is: %llu\n", num, factorial);
    }

    return 0;
}
