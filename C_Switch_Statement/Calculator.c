#include<stdio.h>
int main()
{
    float a , b ;
    char operator;

    printf("Enter two number :");
    scanf("%f %f", &a , &b);

    printf("Enter operator (+,-,*,/):\n");
    scanf(" %c ", &operator);

    switch (operator)
    {
        case '+' :
            printf("Result = %.2f" , a + b);
            break;
        case '-' :
            printf("Result = %.2f", a - b);
            break;
        case '*' :
            printf("Result = %.2f", a * b);
            break;
        case '/':
            if (b !=0)
            printf("Result = %.2f", a / b);
           else
            printf("Cannot divide by Zero");
            break;
        default:
            printf("Invalid Operator");
        
    }

    return 0;

}