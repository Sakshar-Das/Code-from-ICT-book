#include <stdio.h>

int main() {
    int index, value, maximum, numbers[50], limit;

    printf("Maximum input limit is 50. \n");
    printf("How many numbers do you want to input?: ");
    scanf("%d", &limit);
    printf("Please insert the numbers one-by-one by pressing the ENTER Key each time. \n");

    for (index = 0; index < limit; index++) {
        printf("Number [%d] : ", index);
        scanf("%d", &numbers[index]);
    }

    maximum = numbers[0];

    for (index = 1; index < limit; index++) {
        if (maximum < numbers[index]) {
            maximum = numbers[index];
        }
    }

    printf("The largest Number is %d \n", maximum);

    return 0;
}