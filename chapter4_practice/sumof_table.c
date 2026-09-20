#include <stdio.h>

int main() {
    int num,i=1,sum;
    printf("Enter the number to gets it multipication Table: ");
    scanf("%d",&num);
    while (i<11)
    {
        sum += num*i;
        i++;
    }
    printf("%d", sum);
    
    return 0;
}