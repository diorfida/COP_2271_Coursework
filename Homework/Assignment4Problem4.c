#include <stdio.h>

int main(void) {

  // define and initialize variables
  int favNum = 0;
  int favCount = 0;
  int hateNum = 0;
  int hateCount = 0;
  int userInput = 0;

  // loop while the user hasn't requested to quit
  while(userInput != 4){
    //prompt the user input
    puts("Please choose from one of the following:");
    puts("1-Print smiley \n2-Enter favorite number \n3-Enter hated number \n4-Quit");
    scanf("%d", &userInput);

    // check user input and perform actions as necessary
    if(userInput == 1){
      puts(":D\n");
    }
    else if(userInput == 2){
      printf("Enter your favorite number: ");
      scanf("%d", &favNum);
      favCount++;
      //check if a hated number has been entered
      if(hateCount > 0){
        printf("The sum of your favorite and hated numbes is: %d\n\n", favNum + hateNum);
      }
      else{
        puts("");
      }
    }
    else if(userInput == 3){
      printf("Enter your least favorite number: ");
      scanf("%d", &hateNum);
      hateCount++;
      // check if a favorite number has been entered
      if(favCount > 0){
        printf("The sum of your favorite and hated numbes is: %d\n\n", favNum + hateNum);
      }
      else{
        puts("");
      }
    }
    else if(userInput != 4){
      puts("You entered an invalid option! Please enter 1-4\n");
    }
    else{
      puts("Bye bye!");
    }
  }
  
  return 0;
}