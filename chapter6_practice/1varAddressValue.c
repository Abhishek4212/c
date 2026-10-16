#include <stdio.h>

//Printing address of a variable "i" and accessing its value using its address variable "j"
void main() {
    int i,*j;
    i = 10;
    j = &i;
    printf("address of i is %u and its value is %d",j,*j);
}