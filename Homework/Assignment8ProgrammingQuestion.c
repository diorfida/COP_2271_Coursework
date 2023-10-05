#include <stdio.h>
#define SIZE 2 //variable for the size of the array

int main(void) {
  // define all needed variables
  int evenOrOdd[SIZE] = {0};
  int userNumber = 0;
  int evenIndex = 0;
  int oddIndex = 1;

  do {
    // get user input
    printf("Enter a number: ");
    scanf("%d", &userNumber);

    // check if it is even and then increment the appropriate index
    if(userNumber % 2 == 0){
      evenOrOdd[evenIndex] ++;
    }
    else{
      evenOrOdd[oddIndex] ++;
    }
  } while(evenOrOdd[evenIndex] <= 5 && evenOrOdd[oddIndex] <= 5); // condition will terminate when either index is greater than 5

  // display results
  puts("");
  printf("Number of evens: %d\n", evenOrOdd[evenIndex]);
  printf("Number of odds: %d\n", evenOrOdd[oddIndex]);
  
  return 0;
}