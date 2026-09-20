#include <stdio.h>

int main(){
    int radius;
    float area,pi;
    pi = 3.14;

    printf("Input radius of circle to get its area:");
    scanf("%d", &radius);
    area = pi*radius*radius;

    printf("Area of Circle is : %f", area);
    return 0;


}