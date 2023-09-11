#include <stdio.h>

int main() {
    int num, factorial;
    
    printf("Enter any integer number: ");
    scanf("%d", &num);
    
    factorial = 1;
    
    do {
        factorial *= num--;
    } while (num > 0);
    
    printf("Factorial of %d is %d\n", num + 1, factorial);
    
    return 0;
}