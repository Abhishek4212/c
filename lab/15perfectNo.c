#include <stdio.h>

int main() {
    int num,i,x=1;
    printf("enter the number: ");
    scanf("%d",&num);
    for(i=2 ; i<=num/2; i++){
        if (num%i==0)
        {
            x = x+i;
          //  x = x + (num/i);  //this is also valid

        }}
        if(x==num){
            printf("perfect");
        }else{
            printf("not perfect"); 
    }
    return 0;
}