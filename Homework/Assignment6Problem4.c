#include <stdio.h>
#include <math.h>

// function prototype
double f(double x);

int main(void) {
  // define variables
  double x1 = 0.3;
  double x2 = 0.5;
  double x3 = 0.8;

  // combined output and calculation statements
  printf("f(%.1f) = %f\n", x1, f(x1));
  printf("f(%.1f) = %f\n", x2, f(x2));
  printf("f(%.1f) = %f\n", x3, f(x3));
  
  return 0;
}

// f(x) function
double f(double x) {
  double sum = 0;
  for(int n = 1; n <= 20; n++) {
    sum += pow(-1, n + 1) * (pow(x, n) / n);
  }
  return sum;
}