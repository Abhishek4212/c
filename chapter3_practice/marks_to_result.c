#include <stdio.h>

int main() {
    int phy,chem,maths;
    printf("Enter Physics Marks: ");
    scanf("%d",&phy);
    printf("Enter Chemistry Marks: ");
    scanf("%d",&chem);
    printf("Enter Mathmatics Marks: ");
    scanf("%d",&maths);

    int F_percentage = (maths+chem+phy)/3;

    if(F_percentage<100 && F_percentage>=40){
      if (phy>=33 && chem>=33 && maths>=33){
        printf("Pass");
      }else{
        printf("failed in one or more subjects");
      }
      
      
    }else if (F_percentage<40 && F_percentage>=0){
        printf("Failed Overall");
        }else{
         printf("Invalid Marks");
    }

    return 0;
}