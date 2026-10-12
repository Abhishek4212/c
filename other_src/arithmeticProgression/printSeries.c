#include <stdio.h>

int main() {
    int a,d,n;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter d: ");
    scanf("%d",&d);
    printf("Enter n:");
    scanf("%d",&n);

    for (int i=0; i < n; i++){
        printf("%d,", a+(i+1)*d);
    }
    
    return 0;
}