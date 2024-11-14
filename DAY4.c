#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    bool isPrime = true;

    // Prompt user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle special cases for numbers less than 2
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check if the number is prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
