#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    
    printf("Enter an operation (e.g., 3 + 4): ");
    scanf("%f %c %f", &num1, &operator, &num2);

    if (operator == '+') 
        printf("Result: %.2f", num1 + num2);
    else if (operator == '-') 
        printf("Result: %.2f", num1 - num2);
    else if (operator == '*') 
        printf("Result: %.2f", num1 * num2);
    else if (operator == '/') 
        printf("Result: %.2f", num1 / num2);
    else 
        printf("Invalid operation!");

    return 0;
}
