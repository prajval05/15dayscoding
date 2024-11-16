#include <stdio.h>

int main() {
    int terms;
    unsigned long long first = 0, second = 1, next;

    // Prompt user to enter the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    // Handle invalid input
    if (terms <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Sequence: ");

        // Generate Fibonacci sequence
        for (int i = 1; i <= terms; i++) {
            printf("%llu ", first);
            next = first + second; // Calculate the next term
            first = second;
            second = next;
        }
        printf("\n");
    }

    return 0;
}
