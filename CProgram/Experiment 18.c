#include <stdio.h>

int main() {
    int row, col, i, j;
    int multiplicationTable[10][10];

    printf("\t\t ================\n");
    printf("\t\t Multiplication Table\n");
    printf("\t\t ================\n");

    printf("            ");
    for (j = 1; j <= 10; j++)
        printf("%4d", j);
    printf("\n ================");
    printf(" ================\n");

    for (i = 0; i < 10; i++) {
        row = i + 1;
        printf("%2d| ", row);

        for (j = 1; j <= 10; j++) {
            col = j;
            multiplicationTable[i][j] = row * col;
            printf("%4d", multiplicationTable[i][j]);
        }
        printf("\n");
    }

    return 0;
}