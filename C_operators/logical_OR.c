#include <stdio.h>

int main()
{
    int age = 16;
    int permission = 1;

    printf("%d\n", age >= 18 || permission == 1);

    return 0;
}