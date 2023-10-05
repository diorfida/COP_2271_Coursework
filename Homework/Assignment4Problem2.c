#include <stdio.h>

int main(void) {

  // define the character variable
  char input = 0;

  // prompt the user
  printf("Enter a lowercase letter: ");
  scanf(" %c", &input);

  // decide if a vowel was entered
  if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'){
    puts("You entered a vowel!");
  }
    // decide if y was entered
  else if (input == 'y'){
    puts("You may have entered a vowel!");
  }
    // assume consonant for rest
  else{
    puts("You entered a consonant!");
  }
  
  return 0;
}