#include <stdio.h>

int main() {
    int width,height,area;
    printf("Enter Width of the Rectangle: ");
    scanf("%d", &width);
    printf("Enter Height of the Rectangle: ");
    scanf("%d", &height);
    area = width * height;
    printf("Area of the Rectangle is:%d ", area);

    return 0;
}