#include <stdio.h>

int main()
{
    const float FACTOR = 9.0 / 5.0;
    float celsius = 30;
    float fahrenheit;

    fahrenheit = (celsius * FACTOR) + 32;

    printf("Temperature = %.2f F", fahrenheit);

    return 0;
}