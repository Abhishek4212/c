#include <stdio.h>

int main(){
    int radius,height;
    float volume,pi;
    pi = 3.14;

    printf("Input radius of base of cylinder:");
    scanf("%d", &radius);
    printf("Input height of cylinder:");
    scanf("%d", &height);

    volume = pi*radius*radius*height;

    printf("volume of Cylinder is : %.2f", volume);
    return 0;


}