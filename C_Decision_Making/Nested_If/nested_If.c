#include<stdio.h>

int main()
{
    int n;

    printf("Enter a number:");
    scanf("%d",&n);

    if (n>=0)
    {
        if(n==0)
            printf("The number is Zero");
        else
            printf("The number is positive");
    }
    else
        printf("The number is Negative");

    return 0;
}