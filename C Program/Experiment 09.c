#include <stdio.h>

int main() {
    int x, y, z; 

    printf("Enter the first integer: ");
    scanf("%d", &x); 

    printf("Enter the second integer: ");
    scanf("%d", &y);

    printf("Enter the third integer: ");
    scanf("%d", &z); 

    if (x > y && x > z)
        printf("%d is the largest number.\n", x);
    else if (y > x && y > z)
        printf("%d is the largest number.\n", y);
    else 
        printf("%d is the largest number.\n", z);

    return 0;
}