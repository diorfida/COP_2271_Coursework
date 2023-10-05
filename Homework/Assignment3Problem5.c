#include <stdio.h>

int main(void){
  // define the user input variables
  int kgWeight1 = 0;
  int kgWeight2 = 0;
  int lbWeight1 = 0;
  int lbWeight2 = 0;

  //Prompt the user to enter the weights
  puts("Enter two weights in kilograms:");
  scanf("%d", &kgWeight1);
  scanf("%d", &kgWeight2);

  puts("Enter two weights in pounds:");
  scanf("%d", &lbWeight1);
  scanf("%d", &lbWeight2);

  // convert the weights
  float kgToLb1 = kgWeight1 * 2.2;
  float kgToLb2 = kgWeight2 * 2.2;
  float lbToKg1 = lbWeight1 / 2.2;
  float lbToKg2 = lbWeight2 / 2.2;

  //print the output in a nice table
  puts("---------------------------------------------------");
  printf("%-9d|%13.1f  |  %-9d|%13.2f\n", kgWeight1, kgToLb1, lbWeight1, lbToKg1);
  printf("%9d|%13.2f  |  %-9d|%13.3f\n", kgWeight2, kgToLb2, lbWeight2, lbToKg2);
  puts("---------------------------------------------------");
  
  return 0;
}