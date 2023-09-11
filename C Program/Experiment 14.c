#include <stdio.h>

int main() {
    int num1, num2, temp1, temp2, remainder, gcd;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    temp1 = num1;
    temp2 = num2;

    while (temp2 != 0) {
        remainder = temp2;
        temp2 = temp1 % temp2;
        temp1 = remainder;
    }

    gcd = temp1;

    printf("Greatest common divisor of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}