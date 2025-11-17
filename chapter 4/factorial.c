#include <stdio.h>

int main() {
   int n,i;
  int  factorial=1;
   printf("enter of number:");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       factorial=factorial*i;
   }
   printf("result is: %d\n",factorial);
    return 0;
}