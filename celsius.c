#include <stdio.h>

int main() {
    int Celsius,Fahrenheit ;
    printf("enter the temperatuer in celsius:");
    scanf("%d",&Celsius);
    Fahrenheit=Celsius*9/5+32;
    
    printf("temperatuer is :%d\n ",Fahrenheit);

    return 0;
}