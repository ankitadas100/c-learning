#include <stdio.h>

int main() {
    int n,i;
   printf("enter a number:");
   scanf("%d",&n);
   printf("multipication of this number:");
   for (i=0;i<=20;i++){
       printf("%d X %d=%d\n",n,i,n*i);
   }

return 0;
}