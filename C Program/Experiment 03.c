#include <stdio.h>

int main() {
    float centigrade, fahrenheit;

    printf("Enter the Fahrenheit value: ");
    scanf("%f", &fahrenheit);

    centigrade = (5 * (fahrenheit - 32)) / 9;

    printf("The Centigrade value is: %.2f\n", centigrade);

    return 0;
}