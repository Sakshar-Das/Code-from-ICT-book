#include <stdio.h>

int main() {
    int counter = 1, totalSum = 0, number;

    printf("Enter the value of N: ");
    scanf("%d", &number);

    while (counter <= number) {
        totalSum = totalSum + counter;
        counter++;
    }

    printf("The sum of the series is %d\n", totalSum);

    return 0;
}