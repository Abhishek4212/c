#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 0, y = 0, x, w;

    printf("Enter The number to check");
    scanf("%d", &n);
    w = n;
    while (w >= 1)
    {
        w = w / 10;
        i++;
    }
    w = n;
    while (w >= 1){
        x = w % 10;
        y = y + (int)round(pow(x, i));
        w = w / 10;
    }
    if (y == n)
    {
        printf("ArmstronNumber %d", y);
    }
    else
    {
        printf("Not  %d", y);
    }

    return 0;
}