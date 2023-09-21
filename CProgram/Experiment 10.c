#include <stdio.h>

int main() {
    int inputYear;

    printf("Enter a year to check if it is a leap year: ");
    scanf("%d", &inputYear);

    if (inputYear % 400 == 0)
        printf("%d is a leap year.\n", inputYear);
    else if (inputYear % 100 == 0)
        printf("%d is not a leap year.\n", inputYear);
    else if (inputYear % 4 == 0)
        printf("%d is a leap year.\n", inputYear);
    else
        printf("%d is not a leap year.\n", inputYear);

    return 0;
}