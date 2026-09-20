#include <stdio.h>

int main() {
    int num,i=10;
    printf("Enter the number to get reverse multiplication table: ");
    scanf("%d",&num);
    while (i>0)
    {
        printf("%d\n",i*num);
        i--;
    }
    
    return 0;
}