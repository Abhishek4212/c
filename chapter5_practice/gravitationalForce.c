#include <stdio.h>

float calcForce(float mass);

int main() {
    float mass,force;
    printf("Enter mass of the body: ");
    scanf("%f",&mass);
    force= calcForce(mass);
    printf("Force exerted by earth on a body of mass %.1fkg is %.2f Newtons",mass,force);
    return 0;
}
float calcForce(float mass){
    return mass*9.8;
}