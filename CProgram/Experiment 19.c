#include <stdio.h>

int calculateFibonacci(int);
int main() {
    int numberOfTerms, i = 0, currentTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &numberOfTerms);

    printf("Fibonacci series:\n");
    for (currentTerm = 1; currentTerm <= numberOfTerms; currentTerm++) {
        printf("%d\t", calculateFibonacci(i));
        i++;
    }
    printf("\n");

    return 0; 
}

int calculateFibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (calculateFibonacci(n - 1) + calculateFibonacci(n - 2));
}