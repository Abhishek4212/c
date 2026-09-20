#include <stdio.h>

int main() {
    int i=6, *j = &i;
    printf("value of i is %d \n", i);
    printf("value of j is %p \n", j);
    printf("value of i is %d \n", *&i);
    printf("value of i is %d \n", *j);
    printf("address of i is %p \n", j);
    printf("address of i is %p \n", &i);
    printf("address of j is %p \n", &j);
 
    return 0;
}