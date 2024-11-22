#include <stdio.h>
float calculateBMI(float weight, float height)
{
    return weight / (height * height);
}
int main() {
    float weight, height, bmi;
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    printf("Enter your height (m): ");
    scanf("%f", &height);
    bmi = calculateBMI(weight, height);
    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.5 && bmi < 24.9)
        printf("Category: Normal weight\n");
    else if (bmi >= 25 && bmi < 29.9)
        printf("Category: Overweight\n");
    else
        printf("Category: Obese\n");
    return 0;
}
