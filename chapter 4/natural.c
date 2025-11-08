#include <stdio.h>

int main() {
    int n,i=10;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("the first %d natural numbers are:\n",n);
    do{
        printf("%d\n",i);
        i++;
    }while(i<=n);
    return 0;
}
    