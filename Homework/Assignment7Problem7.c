#include <stdio.h>

//function prototypes
int sumOfRange(int start, int end);

int main(void) {
  // define variables
  int startValue = 0;
  int endValue = 0;
  int inputCount = 0;

  // get the user input, and make sure start is less than end
  do {
    if(inputCount++ > 0) {
      puts("The start value must be less than end value\n");
    }
    puts("Enter the start of the range:");
    scanf("%d", &startValue);
  
    puts("Enter the end of the range:");
    scanf("%d", &endValue);
  } while (startValue > endValue);

  // call the recursive function and print its output
  printf("The sum of the numbers in the range is %d", sumOfRange(startValue, endValue));
}

// recursive function to add up all the integers from the start value to the end value
int sumOfRange(int start, int end) {
  if(start == end){
    return end;
  }
  int sum = sumOfRange(start + 1, end);
  return start + sum;
}