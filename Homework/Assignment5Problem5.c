#include <stdio.h>

int main(void) {
  // initialize the variables that are to be used
  int input = 0;
  float total = 0;

  //prompt the user
  puts("Enter item numbers (Enter -1 for the item number to end input)");
  
  // create a do-while loop for user input
  do {
    
    scanf("%d", &input);

    // decide the product value using a switch statement
    switch(input) {
      case 1:
        total += 2.98;
        break;
      case 2:
        total += 4.50;
        break;
      case 3:
        total += 9.98;
        break;
      case 4:
        total += 4.49;
        break;
      case 5:
        total += 6.87;
        break;
      default:
        if(input != -1){
          printf("Invalid product code: %d\n", input);
        }
    }
  } while(input != -1); // escape key

  // print the final total
  printf("The total retail value was %.2f", total);
  
  return 0;
}