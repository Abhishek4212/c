#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter Your Char: ");
    scanf("%c",&ch);
    if (isupper(ch)) {
        printf("Upper Character");
    }else{
         printf("Lower Character");
    }
    
    
    return 0;
}