#include <stdio.h>

int main() {
    // Declare variables for Principal, Rate, Time, and Simple Interest
    float principal, rate, time, simple_interest;

    // Take user input for Principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Take user input for Rate of interest
    printf("Enter the annual interest rate (in %%): ");
    scanf("%f", &rate);

    // Take user input for Time period
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Apply the Simple Interest formula: (P * R * T) / 100
    simple_interest = (principal * rate * time) / 100;

    // Display the calculated Simple Interest formatted to 2 decimal places
    printf("\n--- Calculation Summary ---\n");
    printf("Principal Amount : $%.2f\n", principal);
    printf("Interest Rate    : %.2f%%\n", rate);
    printf("Time Period      : %.2f years\n", time);
    printf("Simple Interest  : $%.2f\n", simple_interest);

    return 0;
}
