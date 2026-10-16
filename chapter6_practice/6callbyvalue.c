    // ->verifying that call by value in a function fails to swap or change 

#include <stdio.h>

void swap(int a, int b);

void main() {
    int a=2,b=3;
    swap(a,b);
    printf("a is %d and b is %d", a, b); // still a is 2 and b is 3 becouse call by value dont work like this
}
void swap(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}