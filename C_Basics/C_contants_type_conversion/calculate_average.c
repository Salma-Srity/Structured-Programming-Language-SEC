#include<stdio.h>

int main(){
    int a,b,c;
    a = 10;
    b = 20;
    c = 29;
    float average;

    average = (float)(a+b+c) / 3;

    printf("Average = %.2f",average);

    return 0;
}