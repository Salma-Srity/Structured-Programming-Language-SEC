#include <stdio.h>

int main()
{
    const float PI = 3.1416;
    float radius = 5;
    float area;

    area = PI * radius * radius;

    printf("Area of circle = %.2f", area);

    return 0;
}