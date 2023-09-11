#include <stdio.h>

int main() {
    int i, total = 0;

    for (i = 1; i < 100; i = i + 2) {
        total = total + i;
    }

    printf("The sum of all even numbers from 1 to 100 is %d\n", total);

    return 0;
}