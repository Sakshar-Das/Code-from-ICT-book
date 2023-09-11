#include <stdio.h>

int main() {
    int examScore;
    printf("Enter your exam score: "); 
    scanf("%d", &examScore); 
    
    if (examScore >= 80) 
        printf("Your score is %d and Your grade is A+. \n", examScore);
    else if (examScore >= 70) 
        printf("Your score is %d and Your grade is A. \n", examScore);
    else if (examScore >= 60)
        printf("Your score is %d and Your grade is A-. \n", examScore);
    else if (examScore >= 50)
        printf("Your score is %d and Your grade is B. \n", examScore);
    else if (examScore >= 40)
        printf("Your score is %d and Your grade is C. \n", examScore);
    else if (examScore >= 33)
        printf("Your score is %d and Your grade is D. \n", examScore);
    else
        printf("Your score is %d and Your grade is F. \n", examScore);
    
    return 0;
}