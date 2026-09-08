#include<stdio.h>

int main(){
    int obtained = 425;
    int total = 500;
    float percentage;

    percentage = (float)obtained / total* 100 ;

    printf("percentage = %.2f%%",percentage);
    return 0;
}