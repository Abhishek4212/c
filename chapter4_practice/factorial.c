#include <stdio.h>

int main() {
    int num,i,factorial=1;
    printf("Enter the number to gets it factorial: ");
    scanf("%d",&num);
    for ( i=1 ; i <= num; i++)
    {
        factorial*=i;
    }
    printf("%d", factorial);
    
    // return 0;
}