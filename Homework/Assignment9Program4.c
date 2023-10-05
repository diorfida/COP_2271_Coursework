#include <stdio.h>

// symbolic constants for the shopping list array
#define ROWS 10
#define COLUMNS 80

// even though this program doesn't require functions, it would be a good idea to use them for this repetitive scenario
int isQuit(const char test[]);

int main(void) {
  // define the shoping list
  char shoppingList[ROWS][COLUMNS];

  // get the user shopping list items and check if one is quit
  int iteration = 0;
  for(iteration = 0; iteration < ROWS; iteration++){
    char input[100000];
    puts("Enter an item or type quit:");
    scanf(" %s", input);
    if(isQuit(input) != 0){
      for(int i = 0; input[i] != '\0'; i++){
        shoppingList[iteration][i] = input[i];
      }
    }
    else{
      break;
    }
  }

  // print the shopping list!
  for(int i = 0; i < iteration; i++){
    printf("%d. ", i);
    for(int j = 0; shoppingList[i][j] != '\0'; j++){
      printf("%c", shoppingList[i][j]);
    }
    puts("");
  }
  
  return 0;
}

int isQuit(const char test[]){
  // define the comparison array
  char quit[5] = "quit";

  // same code as from program #2
  for(int i = 0; i < 100000; i++){
    // if the characters aren't equal, the appropriate number will be returned
    if(test[i] < quit[i] || ((test[i] == '\0' && quit[i] != '\0'))){
      return -1;
    }
    else if(test[i] > quit[i] || (quit[i] == '\0' && test[i] != '\0')){
      return 1;
    }
    else if(test[i] == '\0' && quit[i] == '\0'){
      break;
    }
  }
  return 0;
}