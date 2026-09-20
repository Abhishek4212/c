#include <stdio.h>

int main() {
    int num,i=1;
    printf("Enter the number to gets it multipication Table: ");
    scanf("%d",&num);
    while (i<11)
    {
        printf("%d \n",i*num);
        i++;
    }
    
    return 0;
}