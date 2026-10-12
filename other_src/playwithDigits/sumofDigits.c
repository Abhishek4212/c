#include <stdio.h>

void main() {
    int num,sum=0;
    printf("Enter A Number for sum of its digits: ");
    scanf("%d", &num);
    while(num > 1){
        sum = sum + num%10;
        num = num/10;
    }
    printf("Sum of Digits of your number is : %d" , sum);
}