#include <stdio.h>

int starpattern(int lines);

int main() {
    int n;
    printf("How many lines pattern do you need?: ");
    scanf("%d",&n);
    for (int i = 0; i<=n; i++)
    {
        starpattern(i);
    }
    
    
    return 0;
}

int starpattern(int lines){
    if(lines<=0){
        printf("\n");
    }else{
        printf("*");
        starpattern(lines-1);

    }
}