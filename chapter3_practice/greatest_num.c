#include <stdio.h>

int main() {
    int a,b,c,d;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Enter C: ");
    scanf("%d",&c);
    printf("Enter D: ");
    scanf("%d",&d);
    if (a >= b && a >= c && a >= d) {
        printf("Greatest = %d", a);
    }
    else if (b >= a && b >= c && b >= d) {
        printf("Greatest = %d", b);
    }
    else if (c >= a && c >= b && c >= d) {
        printf("Greatest = %d", c);
    }
    else {
        printf("Greatest = %d", d);
    }
    return 0;
}