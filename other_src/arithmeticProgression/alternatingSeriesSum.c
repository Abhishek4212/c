#include <stdio.h>
#include <math.h>

int main() {
    int n,positive=0,sum=0;
    printf("Enter n for series: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        sum = sum + (pow(-1,i)*i);
    }
    printf("Sum of Alternating Series is %d.",sum);
    return 0;
}