#include <stdio.h>
void fibonacci(int n, int num2, int num1);
int main()
{
    int n, num, num2 = 1, num1 = -1;
    printf("Enter how many sequence of numbers of Fibonacci Series you need: ");
    scanf("%d", &n);
    fibonacci(n, num2, num1);

    return 0;
}

void fibonacci(int n, int num2, int num1)
{
    if (n > 0)
    {
        printf("%d\n", num1 + num2);
        fibonacci(n - 1, num1 + num2, num2);
    }
    else
    {
        printf("end");
    }
}