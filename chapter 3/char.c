#include <stdio.h>
#include<ctype.h>

int main() {
     char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    if(islower(ch)){
        printf("%c is a lowercase:",ch);
        
    }
    else{
        printf("%c is a uppercase:",ch);
    }

    return 0;
}