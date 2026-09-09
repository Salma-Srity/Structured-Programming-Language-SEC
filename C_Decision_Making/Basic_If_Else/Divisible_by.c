#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0 && n % 3 == 0)
        printf("Divisible by both 5 and 3.");
    else
        printf("Not divisible by both 5 and 3.");

    return 0;
}