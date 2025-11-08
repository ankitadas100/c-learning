#include <stdio.h>


int main() {
     int a,b,c,d,greatest;
    printf("enter a greatest number:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    greatest=b;
    if(a>greatest){
        greatest=a;
    }
    if(c>greatest){
        greatest=c;
    }
    if(d>greatest){
        greatest=d;
    }
        
    
   printf("%d is greatest number",greatest);

    return 0;
}