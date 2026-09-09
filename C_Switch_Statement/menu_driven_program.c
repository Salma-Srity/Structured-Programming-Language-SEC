#include<stdio.h>
int main()
{
    int choice;

    printf("1. Add\n");
    printf("2. Substraction\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1 :
            printf("You selected Addition");
            break;
       case 2 :
            printf("You selected Subtraction");
            break;
        case 3 :
            printf("You selected Multiplication");
            break;
        case 4 :
            printf("You selected Division");
            break;
        default :
            printf("Invalid choice");
    }

    return 0;

}
