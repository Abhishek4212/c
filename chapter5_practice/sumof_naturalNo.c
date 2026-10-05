//it was easy but 
// for recursion, it is made complex 

#include <stdio.h>
int naturalSum(int add);
int main() {
    int n;
    printf("Upto Which Natural number should be added?: ");
    scanf("%d",&n);
    printf("%d\n",naturalSum(n));
    return 0;
}

int naturalSum(int add){
    if(add>=0){
     return add + naturalSum(add-1);
    }else {
        return 0;
    }
   

}