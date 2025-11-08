#include <stdio.h>

int main() {
    float p,r,t,interest ;
    printf("enter the principle amount:");
    scanf("%f",&p);
     printf("enter the rate :");
    scanf("%f",&r);
     printf("enter the time duration:");
    scanf("%f",&t);
    interest=p*r*t/100;
    
    printf("simple interest is :%f\n ",interest);

    return 0;
}