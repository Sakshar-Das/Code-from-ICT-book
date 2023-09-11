#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3;
    float semiPerimeter, triangleArea;

    printf("Enter the values of three sides of a triangle.\n");
    printf("Enter the value of the first side: ");
    scanf("%f", &side1);
    printf("Enter the value of the second side: ");
    scanf("%f", &side2);
    printf("Enter the value of the third side: ");
    scanf("%f", &side3);

    semiPerimeter = (side1 + side2 + side3) / 2;
    triangleArea = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));

    printf("The area of the triangle is %.2f\n", triangleArea);

    return 0;
}