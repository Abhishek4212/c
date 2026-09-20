#include <stdio.h>

int main() {
    int i=0,x=0;
    while(i<11){
   x=x+i;
   i++;
    }
    printf("Sum of first 10 natural numbers is: %d" , x);
    return 0;
}