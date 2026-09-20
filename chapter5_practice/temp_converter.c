#include <stdio.h>
#include <ctype.h>
#include <windows.h> 

float toFahrenheit(int input);
float toCelsius(int input);

int main() {
    SetConsoleOutputCP(65001); 
    char conversion;
    int input;
    printf("Enter 'c' to convert °C to °F or 'f for °F to °C?(c/f): ");
    scanf("%c", &conversion);
    printf("Enter Value of Temprature in °%c: ", toupper(conversion));
    scanf("%d", &input);

    if(conversion=='c'){
        toFahrenheit(input);
    }else if(conversion=='f'){
        toCelsius(input);
    }
    return 0;
}

float toFahrenheit(int input){
        printf("The value of %d°C in Fahrenheit  is %f°F", input , (input*1.8+32));
}
float toCelsius(int input){
        printf("The value of %d°F in Fahrenheit  is %f°C", input , (input-32)/1.8);
}