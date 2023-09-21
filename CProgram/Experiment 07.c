#include <stdio.h>

int main() {
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
        printf("You entered an even number.\n");
    else
        printf("You entered an odd number.\n");

    return 0;
}