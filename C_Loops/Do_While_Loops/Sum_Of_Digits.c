#include<stdio.h>

int main()
{
    int n , digit , sum = 0;

    printf("Eter a number :");
    scanf("%d", &n);

    do
    {
       digit = n % 10;
       sum = sum + digit;
       n = n / 10; /* code */
    }
     while ( n != 0);

     printf("Sum of Digits = %d", sum );
    
}