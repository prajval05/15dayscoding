#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Prompt user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // Store the original number for output

    // Reverse the number using a loop
    while (num != 0) {
        remainder = num % 10;            // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to reversed
        num /= 10;                       // Remove the last digit
    }

    printf("The reverse of %d is: %d\n", original, reversed);

    return 0;
}
