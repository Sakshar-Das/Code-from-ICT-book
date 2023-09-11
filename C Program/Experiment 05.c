#include<stdio.h>

int main() {
    float radius;
    const float PI = 3.14;
    float circle_area, circumference;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    circle_area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of circle: %0.2f\n", circle_area);
    printf("Circumference of circle: %0.2f\n", circumference);

    return 0;
}