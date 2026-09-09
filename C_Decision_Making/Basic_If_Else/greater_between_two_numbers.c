#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);

    if(a>b)
        printf("%d Greater Than %d", a, b);
    else
        printf("%d Greater Than %d",b ,a);

    return 0;
}