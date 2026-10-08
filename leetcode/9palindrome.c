#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int x);

int main() {
    printf("%d",isPalindrome(121));
   return 0;
}

bool isPalindrome(int x) {
    int temp = x, rev = 0;

    int digits = log10(x) + 1;
    for (digits; digits > 0; digits--) {
        rev = rev * 10 + temp % 10;
        temp = temp/10;
    }
    if(x<0 || rev!=x){
        return false;
    }else{
        return true;
    }
}
