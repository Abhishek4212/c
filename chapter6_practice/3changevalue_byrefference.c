    // ->initialize a value to a variable
    // ->multiply the value to 10 in a function
    // ->print new value

    
#include <stdio.h>
int changeValue(int *a);

int main() {
    int x=65,*j;
    j = &x;
    printf("Value of a is %d initially\n",x);
    changeValue(j);
    printf("Value of a is %d initially After changing\n",x);
    return 0;
}

int changeValue(int *a){
    printf("Value of a is %d in funtion\n",*a);

    *a = *a*10;
}