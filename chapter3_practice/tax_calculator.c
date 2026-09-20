#include <stdio.h>

int main() {
    float income,tax;
    printf("Enter Your Income In Lakh: ");
    scanf("%f",&income);

    if (income<2.5 && income>=0)
    {
        printf("No Tax");
    }else if(income<5 && income>=2.5){
        tax = (income*5*100000)/100;
        printf("Tax: %f", tax);
    }else if(income<=10 && income>=5){
        tax = (income*20*100000)/100;
       printf("Tax: %f", tax); 
    }else if(income>10){
         tax = (income*30*100000)/100;
         printf("Tax: %f", tax);
    }else{
        printf("Invalid Input");
    }
    
    
    return 0;
}