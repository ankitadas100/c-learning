#include <stdio.h>

int main() {
    float length,width,area;
    printf("enter a length of area:");
    scanf("%f",&length);
    printf("enter a width of area:");
    scanf("%f",&width);
    area=length*width;
    printf("the area of a reactangle is:%f\n ",area);

    return 0;
}