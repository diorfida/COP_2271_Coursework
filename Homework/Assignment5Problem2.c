#include <stdio.h>

int main(void) {
  // initialize variables
  int n = 0;
  int sum = 0;

  // get the user input
  puts("Enter the number");
  scanf("%d", &n);

  // for loop to cycle through all the numbers 0 through n
  for(int i = 0; i <= n; i++){
    // check if the number is divisible by 5
    if(i % 5 == 0){
      // if it is, add it to the sum
      sum += i;
    }
  }

  //print the result
  printf("The sum is: %d", sum);
  
  return 0;
}