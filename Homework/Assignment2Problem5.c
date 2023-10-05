// preprocessor directive
#include <stdio.h>

int main(void) { 
  // define the variables
  int length = 0;
  int width = 0;
  int perimeter = 0;
  int area = 0;

  // get the two values from user input
  puts("Enter the length and width of the rectangle, separated by spaces");
  scanf("%d%d", &length, &width);

  // check to make sure no values are negative or zero
  if (length <= 0 || width < 0){
    puts("Must be positve nonzero values.\n");
  }
  // if there are no negative values, proceed with calculations.
  if(length > 0 && width > 0){
    // calculate!
    perimeter = 2 * (length + width);
    area = length * width;

    // print the results
    puts("Rectangle Calculations:\n");
    printf("The length is %d and the width is %d\n", length, width);
    printf("The perimeter is %d\n", perimeter);
    printf("The area is %d\n", area);
  }
  
  return 0;
}
