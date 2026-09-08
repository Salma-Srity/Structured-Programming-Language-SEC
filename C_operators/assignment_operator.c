#include <stdio.h>

int main()
{
    int x = 10;

    printf("Initial value = %d\n", x);

    x += 5;
    printf("After += 5: %d\n", x);

    x -= 3;
    printf("After -= 3: %d\n", x);

    x *= 2;
    printf("After *= 2: %d\n", x);

    x /= 4;
    printf("After /= 4: %d\n", x);

    x %= 3;
    printf("After %= 3: %d\n", x);

    return 0;
}