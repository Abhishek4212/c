    // ->Make a single function to calculate sum and average \
    // ->use print funtion only in main 
    // ->use pointer to do it ( hint)


#include <stdio.h>
int sumAvg(int a, int b, int *sum , float *avg);
void main() {
    int a,b,sum;
    float avg;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sumAvg(a,b,&sum,&avg);
    printf("sum is %d and avg is %f",sum,avg);
}

int sumAvg(int a, int b, int *sum , float *avg){
    *sum = a+b;
    *avg = *sum/2.0;
}