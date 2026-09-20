#include <stdio.h>

int main() {
    int num,i,remainder,prime=1;
    printf("Enter  Your Number to check if it is prime or not: ");
    scanf("%d",&num);


    for ( i = 2; i <= num; i++)
    {
        remainder = num%i;

        if (remainder==0 && num!=2)
        {
            prime = 0;
            break;
        }
    }
    if(prime==1)
    {
        printf("Your entered number was prime");
    }else{
        printf("Your entered number was NOT prime");
    }
    
    return 0;
}