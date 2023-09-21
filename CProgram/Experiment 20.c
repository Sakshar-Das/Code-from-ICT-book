#include <stdio.h>

long calculateFactorial(int);

int main() {
    int i, numRows, spaces, j;

    printf("Enter the number of rows of Pascal's triangle: ");
    scanf("%d", &numRows);

    printf("Pascal's triangle for %d rows is shown below:\n", numRows);

    for (i = 0; i < numRows; i++) {
        for (spaces = 0; spaces <= (numRows - i - 2); spaces++) {
            printf("   "); 
        }

        for (j = 0; j <= i; j++) {
            printf("%ld", calculateFactorial(i) / (calculateFactorial(j) * calculateFactorial(i - j)));
            if (j < i) {
                printf("   "); 
            }
        }

        printf("\n");
    }

    return 0;
}

long calculateFactorial(int n) {
    int i;
    long result = 1;
    for (i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}