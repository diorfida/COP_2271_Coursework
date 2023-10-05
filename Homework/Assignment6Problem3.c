#include <stdio.h>
#include <math.h>

// function prototypes
double calcDiscriminant(double a, double b, double c);
void quadratic(double a, double b, double c);

int main(void) {
  // define variables
  double a = 0;
  double b = 0;
  double c = 0;

  // prompt the user input
  puts("Enter Quadratic Coefficients:");
  scanf("%lf %lf %lf", &a, &b, &c);

  // run the function
  quadratic(a, b, c);
}

// basic function to calculate the discriminant
double calcDiscriminant(double a, double b, double c) {
  return pow(b, 2) - 4 * a * c;
}

// calculates the roots of a quadratic
void quadratic(double a, double b, double c) {
  double discrim = calcDiscriminant(a, b, c);

  //make decisions based on the discriminant
  if(discrim < 0){
    puts("There are no real roots.");
  }
  else if(discrim == 0){
    printf("The root is %f\n", -b / (2 * a));
  }
  else {
    double root1 = (-b + sqrt(discrim) / (2 * a));
    double root2 = (-b - sqrt(discrim) / (2 * a));
    printf("The roots are %f and %f\n", root1, root2);
  }
}