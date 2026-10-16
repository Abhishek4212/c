    // ->print adress of a variable using pointer to a pointer

#include <stdio.h>

void main() {
    int a,*ptr, **ptrptr;
    a = 5;
    ptr = &a;
    ptrptr = &ptr;

    printf("value of a is %d", **ptrptr);
}