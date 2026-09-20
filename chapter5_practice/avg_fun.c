#include <stdio.h>

float avg(int a, int b, int c);

int main() {
float   average = avg(10,20,30);
   printf("%.2f",average);
    return 0;
}

float avg(int a, int b, int c){ 
 return (a+b+c)/3;;
}
