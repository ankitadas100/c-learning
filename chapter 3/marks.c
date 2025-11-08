#include <stdio.h>

int main() {
   int marks1,marks2,marks3;
   printf("enter marks1:");
   scanf("%d",&marks1);
   printf("enter marks2:");
   scanf("%d",&marks2);
    printf("enter marks3:");
   scanf("%d",&marks3);
   printf("marks1 is %d,marks2 is %d,marks3 is %d \n",marks1,marks2,marks3);
   if(marks1<33 || marks2<33 || marks3<33){
       printf("you are fail\n");
   }
   else
   printf("you are pass\n");
   
   
    return 0;
}