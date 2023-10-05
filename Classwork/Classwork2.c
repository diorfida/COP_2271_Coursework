#include <stdio.h>
//Headears to generate numbers between 1 and 1000 for user to guess.
#include <stdlib.h>
#include <time.h>

int main(void) {
  int playAgain = 0;
  int numPlays = 0;

  // repeat the game until the user wants to stop
  do{
    srand(time(0)); // seed random number generator
    // generate random number between 1 and 1000
    int answer = 1 + rand() % 1000;
    if(numPlays++ == 0){
      puts("I have a number between 1 and 1000.\n" 
          "Can you guess my number?\n");
    }
  
    // define the user input variable
    int guess = 0;
    
    // prompt user for their guess
    puts("Please type your guess.");

    // repeatedly ask the user for their guess until they get it
    do {
      printf("> ");
      scanf("%d", &guess);
      if(guess > answer){ // if the guess is greater
        puts("Too High. Try Again.");
        puts("> Please type your guess.");
      }else if(guess < answer){ // if the guess is less
        puts("Too Low. Try again");
        puts("> Please type your guess.");
      }
    } while(guess != answer);

    // they got it!
    puts("\nExcellent! You guessed the number!");
    puts("Would you like to play again?");
    printf("Please type (1 = yes, 2 = no)? ");
    scanf("%d", &playAgain);
    
  } while (playAgain == 1);

  // print the number of times the user played and then exit.
  printf("\nYou played %d times.\n", numPlays);
  puts("Goodbye!");
  
  return 0;
} 