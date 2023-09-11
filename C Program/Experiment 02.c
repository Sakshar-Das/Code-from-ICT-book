#include <stdio.h>

int main() {
    int num1, num2;
    int addition, subtraction, multiplication;
    float division;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    addition = num1 + num2;
    subtraction = num1 - num2;
    multiplication = num1 * num2;

    if (num2 != 0) {
        division = (float)num1 / num2;
        printf("Summation = %d\n", addition);
        printf("Subtraction = %d\n", subtraction);
        printf("Multiplication = %d\n", multiplication);
        printf("Division = %.2f\n", division);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}