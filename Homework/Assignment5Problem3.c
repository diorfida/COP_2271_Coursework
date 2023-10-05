#include <stdio.h>

int main(void) {
  // initialize variables
  int n = 0;
  int sum = 0;

  // get the user input
  puts("Enter the number");
  scanf("%d", &n);

  // do-while loop to cycle through all numbers 0 = n
  int i = 0;
  do {
    //check if the number is divisible by 5
    if(i % 5 == 0){
      // if it is, add it to the sum
      sum += i;
    }
    i++;
  } while (i <= n);

  //print the result
  printf("The sum is: %d", sum);
  
  return 0;
}