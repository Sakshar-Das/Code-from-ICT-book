#include <stdio.h>

int main() {
    int num, reversed = 0, originalNum;
    
    printf("Enter a number to check if it is a palindrome: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    while (originalNum != 0) {
        reversed = reversed * 10;
        reversed = reversed + originalNum % 10;
        originalNum = originalNum / 10;
    }
    
    if (num == reversed)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);
    
    return 0;
}