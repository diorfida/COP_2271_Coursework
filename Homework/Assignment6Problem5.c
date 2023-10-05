#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
int randomTable(int min, int max, int num);
void menu();

int main(void) {
  // define the variables
  int min = 0;
  int max = 0;
  int num = 0;
  int sum = 0;
  char input = 0;

  // a loop for user input to ensure that the user enters reasonable minimim and maximum values
  int firstTimeCheck = 0;
  do {
    if(firstTimeCheck++) {
      puts("The maximum must be greater than the mimimum.");
    }
    
    puts("Enter the minimum random number to be generated:");
    scanf("%d", &min);
    puts("Enter the maximum random number to be generated:");
    scanf("%d", &max);
    
  } while(min >= max);

  // a loop for user input to ensure that the user enters reasonable number values
  firstTimeCheck = 0;
  do {
    if(firstTimeCheck++) {
      puts("The number of numbers must be positive and nonzero.");
    }
    
    puts("Enter the number of random numbers");
    scanf("%d", &num);
    
  } while(num <= 0);

  // generate the table
  sum = randomTable(min, max, num);

  // get user input and decide accordingly
  do {
    menu();
    scanf(" %c", &input);
    switch(input){
      case 'a':
        printf("%.3f\n", (float) sum / num);
        break;
      case 'b':
        printf("%d\n", sum);
        break;
      case 'c':
        puts("Thank you!");
        break;
      default:
        puts("No such option");
    }
  } while(input != 'c');
  
  return 0;
}

// prints a table of random numbers and returns the sum of the random numbers
int randomTable(int min, int max, int num) {
  srand(time(0));
  int summation = 0;
  puts("-------------");
  for(int i = 1; i <= num; i++){
    int rando = rand() % (max - min + 1) + min;
    summation += rando;
    printf("|%-5.3d|%5d|\n", i, rando);
  }
  puts("-------------");
  return summation;
}

// function to print user selection menu
void menu() {
  puts("Select an option:");
  puts("a - mean of all random integers");
  puts("b - sum of all random integers");
  puts("c - exit");
}