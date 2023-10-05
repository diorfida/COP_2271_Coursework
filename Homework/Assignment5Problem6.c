#include <stdio.h>

int main(void) {

  // define variables
  int celcius = -50;
  float fahrenheit = 0;

  // for loop for the rows
  for(int row = 1; row <= 105; row ++){
    // use a switch statement to decide what to print in each row
    switch(row){
      case 1:
      case 105:
        puts("||==================||");
        break;
      case 2:
        puts("||Celcius|Fahrenheit||");
        break;
      case 3:
        puts("||------------------||");
        break;
      default:
        fahrenheit = (9.0/5.0) * celcius++ + 32;
        printf("||%-+7d|%+10.1f||\n", celcius - 1, fahrenheit);
    }
  }
  
  return 0;
}