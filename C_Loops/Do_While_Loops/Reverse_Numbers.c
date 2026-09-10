#include<stdio.h>

int main()
{
    int n , digit , reverse = 0 ;

    printf("Enter a number :");
    scanf("%d", &n);

    do
    {
       digit = n % 10;
       reverse = reverse * 10 + digit;
       n = n / 10; /* code */
    }
     while ( n != 0);

    printf("Reverse number = %d", reverse);

    return 0 ;
    
}