#include <stdio.h>

int main() {
    int n,i=1,sum=0;
   printf("enter a number:");
   scanf("%d",&n);
   while(i<=n){
       sum=sum+i;

       i++;
   }
   printf("the sum of %d natural number:%d\n",n,sum);
   
   
return 0;
}