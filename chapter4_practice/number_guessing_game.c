#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num,attempts=0,guess;
    srand(time(NULL));
    num = ( rand() % 100)+1;
    // printf("%d",num);
    printf("This is a number guessing game for the nuber between 1 to 100 !\n");
    printf("Guess the number: ");
    scanf("%d",&guess);
    while(num!=guess){
        if (num>guess)
        {
             printf("Wrong! Guess Higer: ");
        }else if(num<guess){
             printf("Wrong! Guess Lower: ");
        }
        
        scanf("%d",&guess);
        attempts++;
    }
    printf("You guessed it wright in %d attempts!",attempts);

    return 0;
}