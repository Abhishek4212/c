#include <stdio.h>

int displayaddress(int a);

int main() {
    int a;
    printf("Address of a is %u \n", &a);
    displayaddress(a);
    return 0;
}

int displayaddress(int a){
    printf("Address of a is %u in function", &a);
}