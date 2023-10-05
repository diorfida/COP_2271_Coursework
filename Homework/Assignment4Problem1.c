#include <stdio.h>

int main(void) {

  // define variables
  int input = 0;
  int mod = 0;

  // prompt user input
  printf("Enter a number between 1 and 100: ");
  scanf("%d", &input);

  // check if the input is valid
  if(input > 0 && input <= 100){
    // calculation
    mod = input % 4;

    //make decisions!
    if(mod == 0){
      puts("You won!");
    }
    else if (mod == 1 || mod == 2){
      puts("It is a tie!");
    }
    else{
      puts("You lose!");
    }
  }
  else{
    puts("INVALID INPUT");
  }
  
  return 0;
}