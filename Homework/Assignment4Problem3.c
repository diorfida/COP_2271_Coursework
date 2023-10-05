#include <stdio.h>

int main(void) {

  // define and initialize variables
  char firstCh = 0;
  char secondCh = 0;

  // prompt user input
  printf("Enter a character: ");
  scanf(" %c", &firstCh);
  printf("Enter another character: ");
  scanf(" %c", &secondCh);

  // decide which letter comes first in the alphabet
  if(firstCh <= secondCh){
    printf("\nCycling all characters between %c and %c\n\n", firstCh,   secondCh);
    // cycle through all letters between the bounds
    int counter = firstCh;
    while(counter <= secondCh){
      printf("Currently on: %c\n", counter);
      counter++;
    }
  }
  else{
    printf("\nCycling all characters between %c and %c\n\n", secondCh,   firstCh);
    // cycle through all letters between the bounds
    int counter = secondCh;
    while(counter <= firstCh){
      printf("Currently on: %c\n", counter);
      counter++;
    }
  }
  
  return 0;
}